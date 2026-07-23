/*
 * XREFs of NtCreateKeyTransacted @ 0x140AE53E0
 * Callers:
 *     <none>
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140231040 (KeExpandKernelStackAndCallout.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x14087D58C (CmpTransDereferenceTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtCreateKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        HANDLE TransactionHandle,
        PULONG Disposition)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  KPROCESSOR_MODE v21; // r9
  NTSTATUS v22; // eax
  PVOID Object; // [rsp+38h] [rbp-49h] BYREF
  __int128 v25; // [rsp+40h] [rbp-41h] BYREF
  __int64 v26; // [rsp+50h] [rbp-31h]
  _DWORD Parameter[2]; // [rsp+58h] [rbp-29h] BYREF
  PHANDLE v28; // [rsp+60h] [rbp-21h]
  ACCESS_MASK v29; // [rsp+68h] [rbp-19h]
  int v30; // [rsp+6Ch] [rbp-15h]
  POBJECT_ATTRIBUTES v31; // [rsp+70h] [rbp-11h]
  ULONG v32; // [rsp+78h] [rbp-9h]
  int v33; // [rsp+7Ch] [rbp-5h]
  PUNICODE_STRING v34; // [rsp+80h] [rbp-1h]
  ULONG v35; // [rsp+88h] [rbp+7h]
  int v36; // [rsp+8Ch] [rbp+Bh]
  PULONG v37; // [rsp+90h] [rbp+Fh]
  __int64 v38; // [rsp+98h] [rbp+17h]

  v26 = 0LL;
  Parameter[1] = 0;
  v25 = 0LL;
  memset_0(Parameter, 0, 0x44uLL);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v25);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v13, v12, v14, v15) )
  {
    v16 = -1073741431;
    goto LABEL_13;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(TransactionHandle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v20 = (__int64)Object;
  v16 = v18;
  if ( v18 == -1073741788 )
  {
    v21 = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v22 = ObReferenceObjectByHandle(TransactionHandle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v21, &Object, 0LL);
    v20 = (__int64)Object;
    v16 = v22;
    if ( v22 >= 0 )
    {
LABEL_8:
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v34 = Class;
      v35 = CreateOptions;
      v37 = Disposition;
      v28 = KeyHandle;
      v29 = DesiredAccess;
      v31 = ObjectAttributes;
      v32 = TitleIndex;
      v38 = v20;
      v16 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmCreateKeyCallout, Parameter, 0x4800uLL);
      if ( v16 >= 0 )
        v16 = Parameter[0];
    }
  }
  else if ( v18 >= 0 )
  {
    v20 = (unsigned __int64)Object | 1;
    goto LABEL_8;
  }
  if ( v20 )
    CmpTransDereferenceTransaction(v20);
  CmpReleaseShutdownRundown(v19);
LABEL_13:
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v25);
  return v16;
}
