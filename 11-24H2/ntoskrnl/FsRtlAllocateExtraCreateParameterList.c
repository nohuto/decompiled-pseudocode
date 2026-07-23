/*
 * XREFs of FsRtlAllocateExtraCreateParameterList @ 0x1409AF1A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall FsRtlAllocateExtraCreateParameterList(FSRTL_ALLOCATE_ECPLIST_FLAGS Flags, PECP_LIST *EcpList)
{
  struct _ECP_LIST *Pool2; // rax
  int v4; // edx

  *EcpList = 0LL;
  if ( (Flags & 1) != 0 )
  {
    Pool2 = (struct _ECP_LIST *)ExAllocatePool2(0x103uLL, 0x18uLL, 0x6C655346u);
    v4 = 2;
  }
  else
  {
    Pool2 = (struct _ECP_LIST *)ExAllocateFromPagedLookasideList(&FsRtlEcpListLookaside);
    v4 = 6;
  }
  if ( !Pool2 )
    return -1073741670;
  Pool2->EcpList.Blink = &Pool2->EcpList;
  Pool2->EcpList.Flink = &Pool2->EcpList;
  Pool2->Flags = v4;
  Pool2->Signature = 1282433861;
  *EcpList = Pool2;
  return 0;
}
