/*
 * XREFs of CmpReplicateKeyToVirtual @ 0x1407DBC0C
 * Callers:
 *     CmKeyBodyReplicateToVirtual @ 0x140978D18 (CmKeyBodyReplicateToVirtual.c)
 *     CmpVEExecuteCreateLogic @ 0x140A203DC (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CmpConvertRegistryShared @ 0x1407D87C4 (CmpConvertRegistryShared.c)
 *     CmpTryConvertRegistryExclusive @ 0x1407D87EC (CmpTryConvertRegistryExclusive.c)
 *     CmpBuildVirtualReplicationStack @ 0x1407DB310 (CmpBuildVirtualReplicationStack.c)
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpGetVirtualStoreRoot @ 0x1407DBA94 (CmpGetVirtualStoreRoot.c)
 *     CmpDereferenceKeyControlBlock @ 0x140845CD0 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     CmRealKCBToVirtualPath @ 0x14090A7C8 (CmRealKCBToVirtualPath.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 */

__int64 __fastcall CmpReplicateKeyToVirtual(ULONG_PTR BugCheckParameter2, __int64 a2, char a3, ULONG_PTR *a4)
{
  int VirtualStoreRoot; // ebx
  UNICODE_STRING *v9; // rcx
  unsigned int v10; // edi
  char *v11; // r14
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // r8
  unsigned int v14; // r15d
  unsigned int v15; // eax
  ULONG_PTR *v16; // r12
  ULONG_PTR v17; // rcx
  UNICODE_STRING *p_DestinationString; // rcx
  char v20; // [rsp+40h] [rbp-39h]
  unsigned int v21; // [rsp+44h] [rbp-35h] BYREF
  int v22; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  PVOID P; // [rsp+60h] [rbp-19h] BYREF
  ULONG_PTR v25; // [rsp+68h] [rbp-11h] BYREF
  ULONG_PTR v26; // [rsp+70h] [rbp-9h] BYREF
  _OWORD v27[2]; // [rsp+78h] [rbp-1h] BYREF

  v22 = 0;
  DestinationString = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v27, 0x20000u);
  v25 = 0LL;
  P = 0LL;
  v21 = 0;
  v20 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v26 = 0LL;
  if ( !a3 )
  {
    v20 = CmpTryConvertRegistryExclusive();
    if ( !v20 )
    {
      VirtualStoreRoot = -1073741739;
LABEL_27:
      if ( CmpTraceRoutine )
      {
        p_DestinationString = &DestinationString;
        LOBYTE(p_DestinationString) = 26;
        guard_dispatch_icall_no_overrides(p_DestinationString, v27, (unsigned int)VirtualStoreRoot, 0LL);
      }
      if ( DestinationString.Buffer )
        RtlFreeAnsiString(&DestinationString);
      return (unsigned int)VirtualStoreRoot;
    }
  }
  CmpUnlockKcb(BugCheckParameter2);
  VirtualStoreRoot = CmRealKCBToVirtualPath(BugCheckParameter2, 0LL, a2, &DestinationString);
  if ( VirtualStoreRoot >= 0 )
  {
    if ( (int)CmpBuildVirtualReplicationStack(BugCheckParameter2, (__int64)&DestinationString, &v21, &P) >= 0 )
    {
      v10 = v21;
      v11 = (char *)P;
      if ( v21 )
      {
        VirtualStoreRoot = CmpGetVirtualStoreRoot(a2, (__int64 *)&v25, &v22, &v26);
        if ( VirtualStoreRoot >= 0 )
        {
          v12 = v26;
          v13 = v25;
          *a4 = v25;
          *((_DWORD *)v11 + 8) = *(_DWORD *)(v12 + 40);
          *((_QWORD *)v11 + 2) = v12;
          VirtualStoreRoot = CmpDoBuildVirtualStack((__int64)v11, v10, v13, BugCheckParameter2, a2);
        }
      }
      else
      {
        VirtualStoreRoot = -1073741811;
      }
      if ( v11 )
      {
        v14 = 0;
        if ( v10 )
        {
          v15 = v10 - 1;
          v16 = (ULONG_PTR *)(v11 + 24);
          do
          {
            v17 = *(v16 - 1);
            if ( v17 )
            {
              CmpDereferenceKeyControlBlock(v17);
              v15 = v10 - 1;
            }
            if ( v14 == v15 && *v16 )
            {
              CmpDereferenceKeyControlBlock(*v16);
              v15 = v10 - 1;
            }
            ++v14;
            v16 += 6;
          }
          while ( v14 < v10 );
        }
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      VirtualStoreRoot = -1073741670;
    }
    CmpLockKcbExclusive(BugCheckParameter2);
    if ( v20 )
      CmpConvertRegistryShared();
    goto LABEL_27;
  }
  if ( CmpTraceRoutine )
  {
    v9 = &DestinationString;
    LOBYTE(v9) = 26;
    guard_dispatch_icall_no_overrides(v9, v27, (unsigned int)VirtualStoreRoot, 0LL);
  }
  return (unsigned int)VirtualStoreRoot;
}
