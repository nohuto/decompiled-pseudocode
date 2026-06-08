/*
 * XREFs of sub_140004C60 @ 0x140004C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140004C60(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = *(_DWORD **)(a2 + 184);
  if ( !v2[4] && v2[6] == 1 && (v2[2] & 0xF0000) != 0x10000 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, void *))(qword_140019120 + 1616))(
           qword_140019128,
           a1,
           off_140018040);
    v7 = *(_QWORD *)(v6 + 1120);
    *(_BYTE *)(v6 + 76) = 1;
    if ( v7 )
      PoFxReportDevicePoweredOn();
  }
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(qword_140019120 + 272))(qword_140019128, a1, a2);
}
