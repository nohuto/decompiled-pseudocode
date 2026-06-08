/*
 * XREFs of sub_1400077E0 @ 0x1400077E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_1400077E0()
{
  __int64 result; // rax
  int v1; // [rsp+28h] [rbp-10h]

  result = HalPrivateDispatchTable[117]((__int64)sub_140005020);
  if ( (int)result < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v1 = result;
    return sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0xFu, (__int64)&unk_1400138E0, v1);
  }
  return result;
}
