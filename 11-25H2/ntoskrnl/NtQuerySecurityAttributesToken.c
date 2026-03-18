/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x140867840
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14035FF40 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepReferenceTokenByHandle @ 0x140361130 (SepReferenceTokenByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepCaptureUnicodeStringArray @ 0x140867B30 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySecurityAttributesToken(
        void *a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4,
        size_t a5,
        unsigned __int64 a6)
{
  char v9; // r13
  unsigned __int8 PreviousMode; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _DWORD *v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  int SecurityAttributesToken; // edi
  int v19; // r9d
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v21; // rbx
  char v22; // dl
  size_t Size; // [rsp+30h] [rbp-58h]
  _BYTE v25[4]; // [rsp+40h] [rbp-48h] BYREF
  int v26; // [rsp+44h] [rbp-44h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  PVOID P; // [rsp+50h] [rbp-38h] BYREF
  __int64 v29; // [rsp+58h] [rbp-30h] BYREF

  P = 0LL;
  v9 = 0;
  Object = 0LL;
  v29 = 0LL;
  v25[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25[1] = PreviousMode;
  if ( (_DWORD)a5 )
  {
    if ( a4 )
      goto LABEL_3;
LABEL_32:
    SecurityAttributesToken = -1073741811;
    v26 = -1073741811;
LABEL_33:
    v21 = (PERESOURCE *)Object;
    goto LABEL_23;
  }
  if ( a4 )
    goto LABEL_32;
LABEL_3:
  if ( !PreviousMode )
  {
    v14 = (_DWORD *)a6;
    goto LABEL_20;
  }
  if ( (_DWORD)a5 )
  {
    v11 = (unsigned __int64)a4;
    if ( ((unsigned __int8)a4 & 3) != 0 )
      goto LABEL_18;
    v12 = (unsigned __int64)a4 + (unsigned int)a5 - 1;
    if ( (unsigned __int64)a4 > v12 || v12 >= 0x7FFFFFFF0000LL )
LABEL_16:
      ExRaiseAccessViolation();
    v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v11 = *(_BYTE *)v11;
      v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v11 != v13 );
  }
  v14 = (_DWORD *)a6;
  v15 = a6;
  if ( (a6 & 3) != 0 )
LABEL_18:
    ExRaiseDatatypeMisalignment();
  v16 = a6 + 3;
  if ( a6 + 3 >= 0x7FFFFFFF0000LL || a6 > v16 )
    goto LABEL_16;
  v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  do
  {
    *(_BYTE *)v15 = *(_BYTE *)v15;
    v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  }
  while ( v15 != v17 );
LABEL_20:
  SecurityAttributesToken = SepCaptureUnicodeStringArray(a2, a3, PreviousMode, &P);
  v26 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_33;
  SecurityAttributesToken = SepReferenceTokenByHandle(a1, 8u, PreviousMode, v19, &Object, v25, &v29);
  v26 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_33;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v21 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  LODWORD(Size) = a5;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v21,
                              v22,
                              (__int64)P,
                              a3,
                              0,
                              a4,
                              Size,
                              v14);
  v26 = SecurityAttributesToken;
LABEL_23:
  if ( PreviousMode == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v21[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    SecurityAttributesToken = v26;
    v21 = (PERESOURCE *)Object;
  }
  if ( v21 )
    ObfDereferenceObjectWithTag(v21, 0x74726853u);
  return (unsigned int)SecurityAttributesToken;
}
