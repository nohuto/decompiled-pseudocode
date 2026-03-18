/*
 * XREFs of NtAlpcQueryInformationMessage @ 0x1408ABDF0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     AlpcpQueryTokenModifiedIdMessage @ 0x1407357C0 (AlpcpQueryTokenModifiedIdMessage.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1408AAFC0 (AlpcpLookupMessage.c)
 *     AlpcpQueryHandleInformationMessage @ 0x1408AD638 (AlpcpQueryHandleInformationMessage.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     AlpcpQuerySidMessage @ 0x140A0A58C (AlpcpQuerySidMessage.c)
 */

__int64 __fastcall NtAlpcQueryInformationMessage(
        HANDLE Handle,
        __int64 a2,
        int a3,
        _QWORD *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r10
  char v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // esi
  int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  _DWORD *v18; // rdi
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // r9
  ULONG_PTR v22; // rsi
  int v23; // r14d
  int v24; // r14d
  int TokenModifiedIdMessage; // eax
  unsigned int v27; // [rsp+30h] [rbp-28h]
  int v28; // [rsp+34h] [rbp-24h]
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-18h] BYREF
  struct _KTHREAD *v31; // [rsp+48h] [rbp-10h]

  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v31 = KeGetCurrentThread();
  v11 = v31->PreviousMode;
  if ( v11 )
  {
    v12 = a2 & 3;
    if ( (a2 & 3) != 0 )
      goto LABEL_3;
    v19 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v12 = a2 & 3;
    v19 = 0x7FFFFFFF0000LL;
  }
  if ( (*(_WORD *)(a2 + 4) & 0x1000) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 16);
    v27 = v13;
    v14 = *(_DWORD *)(a2 + 20);
  }
  else
  {
    if ( v11 && v12 )
      goto LABEL_3;
    v13 = *(_DWORD *)(a2 + 24);
    v27 = v13;
    v14 = *(_DWORD *)(a2 + 32);
  }
  v28 = v14;
  if ( !PreviousMode )
  {
    v18 = (_DWORD *)a6;
    goto LABEL_27;
  }
  if ( a5 )
  {
    v15 = (unsigned __int64)a4;
    if ( ((unsigned __int8)a4 & 3) == 0 )
    {
      v16 = (unsigned __int64)a4 + a5 - 1;
      if ( v16 >= 0x7FFFFFFF0000LL || (unsigned __int64)a4 > v16 )
        ExRaiseAccessViolation();
      v17 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v15 = *(_BYTE *)v15;
        v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v15 != v17 );
      v13 = v27;
      goto LABEL_13;
    }
LABEL_3:
    ExRaiseDatatypeMisalignment();
  }
LABEL_13:
  v18 = (_DWORD *)a6;
  if ( a6 )
  {
    if ( a6 < 0x7FFFFFFF0000LL )
      v19 = a6;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v13 = v27;
  }
LABEL_27:
  if ( !v13 )
  {
    v20 = -1073741811;
    goto LABEL_39;
  }
  Object = 0LL;
  v20 = ObReferenceObjectByHandle(Handle, 0x20000u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v20 >= 0 )
  {
    v20 = AlpcpLookupMessage((__int64)Object, v13, v28, v21, &BugCheckParameter2);
    if ( v20 < 0 )
    {
LABEL_38:
      ObfDereferenceObject(Object);
      goto LABEL_39;
    }
    v22 = BugCheckParameter2;
    if ( !*(_QWORD *)(BugCheckParameter2 + 24) )
    {
      v20 = -1073740029;
      goto LABEL_37;
    }
    if ( a3 )
    {
      v23 = a3 - 1;
      if ( !v23 )
      {
        TokenModifiedIdMessage = AlpcpQueryTokenModifiedIdMessage((__int64)Object, BugCheckParameter2, a4, a5, v18);
        goto LABEL_36;
      }
      v24 = v23 - 1;
      if ( v24 )
      {
        if ( v24 == 1 )
        {
          TokenModifiedIdMessage = AlpcpQueryHandleInformationMessage(
                                     (_DWORD)Object,
                                     BugCheckParameter2,
                                     (_DWORD)a4,
                                     a5,
                                     (__int64)v18);
LABEL_36:
          v20 = TokenModifiedIdMessage;
LABEL_37:
          AlpcpUnlockMessage(v22);
          goto LABEL_38;
        }
      }
      else if ( !a4 && !a5 && !v18 )
      {
        v20 = (*(_DWORD *)(BugCheckParameter2 + 40) & 7) != 4 ? 0x103 : 0;
        goto LABEL_37;
      }
      v20 = -1073741811;
      goto LABEL_37;
    }
    TokenModifiedIdMessage = AlpcpQuerySidMessage((_DWORD)Object, BugCheckParameter2, (_DWORD)a4, a5, (__int64)v18);
    goto LABEL_36;
  }
LABEL_39:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v20;
}
