/*
 * XREFs of sub_14000EE90 @ 0x14000EE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall sub_14000EE90(unsigned int a1))(void)
{
  __int64 (*result)(void); // rax
  __int64 v2; // r10

  result = (__int64 (*)(void))DeviceObject.Queue.ListEntry.Flink;
  v2 = *((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + a1);
  if ( v2 )
  {
    result = (__int64 (*)(void))qword_140019938[32 * (unsigned __int64)*(unsigned __int8 *)(v2 + 376)];
    if ( result )
      return (__int64 (*)(void))result();
  }
  return result;
}
