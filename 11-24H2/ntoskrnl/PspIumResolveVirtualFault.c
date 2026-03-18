/*
 * XREFs of PspIumResolveVirtualFault @ 0x1409F7A88
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     PspIumReplenishPartitionPages @ 0x14049D824 (PspIumReplenishPartitionPages.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmVirtualAccessFault @ 0x1409F7E30 (MmVirtualAccessFault.c)
 */

unsigned __int64 __fastcall PspIumResolveVirtualFault(__int64 a1)
{
  _KPROCESS *v1; // rdi
  __int64 v3; // rcx
  unsigned __int64 result; // rax
  _KPROCESS *Process; // rbp
  int v6; // esi
  _QWORD v7[2]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v8[3]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_KPROCESS **)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  memset(v8, 0, sizeof(v8));
  if ( v3 && *(_DWORD *)(v3 + 4) < 8u )
    PspIumReplenishPartitionPages(v3, 3u);
  result = *(_QWORD *)(a1 + 16);
  v7[0] = result;
  if ( result > 0x7FFFFFFEFFFFLL )
  {
    v6 = -1073741819;
  }
  else
  {
    v7[1] = (unsigned int)(*(_DWORD *)(a1 + 12) << 12);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v1 )
      KiStackAttachProcess(v1, 0, (__int64)v8);
    do
    {
      memset_0((void *)(a1 + 16), 0, 8LL * *(unsigned int *)(a1 + 12));
      result = MmVirtualAccessFault(v7, a1 + 16, *(unsigned int *)(a1 + 8));
      v6 = result;
    }
    while ( (result & 0x80000000) == 0LL && !_bittest64((const signed __int64 *)(a1 + 16), 0x34u) );
    if ( Process != v1 )
      result = KiUnstackDetachProcess((__int64)v8, 0);
  }
  *(_DWORD *)(a1 + 8) = v6;
  return result;
}
