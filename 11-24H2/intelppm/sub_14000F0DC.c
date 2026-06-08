/*
 * XREFs of sub_14000F0DC @ 0x14000F0DC
 * Callers:
 *     sub_14000EEE0 @ 0x14000EEE0 (sub_14000EEE0.c)
 *     sub_14000EF60 @ 0x14000EF60 (sub_14000EF60.c)
 *     sub_14000EFE0 @ 0x14000EFE0 (sub_14000EFE0.c)
 *     sub_14000F060 @ 0x14000F060 (sub_14000F060.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 */

__int64 __fastcall sub_14000F0DC(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  v2 = PoFxProcessorNotification(a1, 10LL, a2);
  if ( v2 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v4 = v2;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 2u, 0x24u, (__int64)&unk_140014CB8, v4);
  }
  return (unsigned int)v2;
}
