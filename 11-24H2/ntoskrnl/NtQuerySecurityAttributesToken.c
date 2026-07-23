/*
 * XREFs of NtQuerySecurityAttributesToken @ 0x14088CC70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepReferenceTokenByHandle @ 0x1403E36B0 (SepReferenceTokenByHandle.c)
 *     SepCaptureUnicodeStringArray @ 0x14088CF60 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQuerySecurityAttributesToken(
        HANDLE TokenHandle,
        PUNICODE_STRING Attributes,
        ULONG NumberOfAttributes,
        PVOID Buffer,
        ULONG Length,
        PULONG ReturnLength)
{
  char v9; // r13
  unsigned __int8 PreviousMode; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // rsi
  PULONG v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  NTSTATUS SecurityAttributesToken; // edi
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
  if ( Length )
  {
    if ( Buffer )
      goto LABEL_3;
LABEL_32:
    SecurityAttributesToken = -1073741811;
    v26 = -1073741811;
LABEL_33:
    v21 = (PERESOURCE *)Object;
    goto LABEL_23;
  }
  if ( Buffer )
    goto LABEL_32;
LABEL_3:
  if ( !PreviousMode )
  {
    v14 = ReturnLength;
    goto LABEL_20;
  }
  if ( Length )
  {
    v11 = (unsigned __int64)Buffer;
    if ( ((unsigned __int8)Buffer & 3) != 0 )
      goto LABEL_18;
    v12 = (unsigned __int64)Buffer + Length - 1;
    if ( (unsigned __int64)Buffer > v12 || v12 >= 0x7FFFFFFF0000LL )
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
  v14 = ReturnLength;
  v15 = ReturnLength;
  if ( ((unsigned __int8)ReturnLength & 3) != 0 )
LABEL_18:
    ExRaiseDatatypeMisalignment();
  v16 = (unsigned __int64)ReturnLength + 3;
  if ( ReturnLength >= (PULONG)((char *)ReturnLength + 3) || v16 >= 0x7FFFFFFF0000LL )
    goto LABEL_16;
  v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
  do
  {
    *(_BYTE *)v15 = *(_BYTE *)v15;
    v15 = (PULONG)(((unsigned __int64)v15 & 0xFFFFFFFFFFFFF000uLL) + 4096);
  }
  while ( v15 != (PULONG)v17 );
LABEL_20:
  SecurityAttributesToken = SepCaptureUnicodeStringArray(Attributes, NumberOfAttributes, PreviousMode, &P);
  v26 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_33;
  SecurityAttributesToken = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v19, &Object, v25, &v29);
  v26 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
    goto LABEL_33;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v21 = (PERESOURCE *)Object;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
  v9 = 1;
  LODWORD(Size) = Length;
  SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                              (__int64)v21,
                              v22,
                              (__int64)P,
                              NumberOfAttributes,
                              0,
                              Buffer,
                              Size,
                              v14);
  v26 = SecurityAttributesToken;
LABEL_23:
  if ( PreviousMode == 1 && P )
    ExFreePoolWithTag(P, 0);
  if ( v9 )
  {
    ExReleaseResourceLite(v21[6]);
    KeLeaveCriticalRegionThread();
    SecurityAttributesToken = v26;
    v21 = (PERESOURCE *)Object;
  }
  if ( v21 )
    ObfDereferenceObjectWithTag(v21, 0x74726853u);
  return SecurityAttributesToken;
}
