/*
 * XREFs of NtCreateKeyTransacted @ 0x140AD2B50
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     KeExpandKernelStackAndCallout @ 0x140489A50 (KeExpandKernelStackAndCallout.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x14065BF30 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmCreateKeyCallout @ 0x1407BFBD0 (CmCreateKeyCallout.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     CmpTransDereferenceTransaction @ 0x140870EB0 (CmpTransDereferenceTransaction.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtCreateKeyTransacted(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        HANDLE Handle,
        __int64 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  KPROCESSOR_MODE v21; // r9
  NTSTATUS v22; // eax
  PVOID Object; // [rsp+38h] [rbp-49h] BYREF
  __int128 v25; // [rsp+40h] [rbp-41h] BYREF
  _QWORD Parameter[2]; // [rsp+58h] [rbp-29h] BYREF
  int v27; // [rsp+68h] [rbp-19h]
  int v28; // [rsp+6Ch] [rbp-15h]
  __int64 v29; // [rsp+70h] [rbp-11h]
  int v30; // [rsp+78h] [rbp-9h]
  int v31; // [rsp+7Ch] [rbp-5h]
  __int64 v32; // [rsp+80h] [rbp-1h]
  int v33; // [rsp+88h] [rbp+7h]
  int v34; // [rsp+8Ch] [rbp+Bh]
  __int64 v35; // [rsp+90h] [rbp+Fh]
  __int64 v36; // [rsp+98h] [rbp+17h]

  HIDWORD(Parameter[0]) = 0;
  v25 = 0LL;
  memset_0(Parameter, 0, 0x44uLL);
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v25);
  if ( !(unsigned __int8)CmpAcquireShutdownRundown(v13, v12, v14, v15) )
  {
    v16 = -1073741431;
    goto LABEL_15;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v18 = ObReferenceObjectByHandle(Handle, 4u, CmRegistryTransactionType, PreviousMode, &Object, 0LL);
  v20 = (__int64)Object;
  v16 = v18;
  if ( v18 == -1073741788 )
  {
    v21 = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v22 = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)TmTransactionObjectType, v21, &Object, 0LL);
    v20 = (__int64)Object;
    v16 = v22;
    if ( v22 < 0 )
      goto LABEL_12;
  }
  else
  {
    if ( v18 < 0 )
      goto LABEL_12;
    v20 = (unsigned __int64)Object | 1;
  }
  v28 = 0;
  v31 = 0;
  v34 = 0;
  v32 = a5;
  v33 = a6;
  v35 = a8;
  Parameter[1] = a1;
  v27 = a2;
  v29 = a3;
  v30 = a4;
  v36 = v20;
  if ( !(unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
  {
    CmCreateKeyCallout(Parameter);
LABEL_11:
    v16 = Parameter[0];
    goto LABEL_12;
  }
  v16 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmCreateKeyCallout, Parameter, 0x4800uLL);
  if ( v16 >= 0 )
    goto LABEL_11;
LABEL_12:
  if ( v20 )
    CmpTransDereferenceTransaction(v20);
  CmpReleaseShutdownRundown(v19);
LABEL_15:
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v25);
  return (unsigned int)v16;
}
