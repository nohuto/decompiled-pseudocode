/*
 * XREFs of PspIumResolveVirtualFault @ 0x1409F03F8
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     PspIumReplenishPartitionPages @ 0x140498624 (PspIumReplenishPartitionPages.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmVirtualAccessFault @ 0x1409F07A0 (MmVirtualAccessFault.c)
 */

unsigned __int64 __fastcall PspIumResolveVirtualFault(__int64 a1)
{
  _KPROCESS *v1; // rdi
  __int64 v3; // rcx
  unsigned __int64 result; // rax
  _KPROCESS *Process; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // esi
  _QWORD v9[2]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_KPROCESS **)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  memset(v10, 0, sizeof(v10));
  if ( v3 && *(_DWORD *)(v3 + 4) < 8u )
    PspIumReplenishPartitionPages(v3, 3u);
  result = *(_QWORD *)(a1 + 16);
  v9[0] = result;
  if ( result > 0x7FFFFFFEFFFFLL )
  {
    v8 = -1073741819;
  }
  else
  {
    v9[1] = (unsigned int)(*(_DWORD *)(a1 + 12) << 12);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v1 )
      KiStackAttachProcess(v1, 0, (__int64)v10);
    do
    {
      memset_0((void *)(a1 + 16), 0, 8LL * *(unsigned int *)(a1 + 12));
      result = MmVirtualAccessFault(v9, a1 + 16, *(unsigned int *)(a1 + 8));
      v8 = result;
    }
    while ( (result & 0x80000000) == 0LL && !_bittest64((const signed __int64 *)(a1 + 16), 0x34u) );
    if ( Process != v1 )
      result = KiUnstackDetachProcess((__int64)v10, 0, v6, v7);
  }
  *(_DWORD *)(a1 + 8) = v8;
  return result;
}
