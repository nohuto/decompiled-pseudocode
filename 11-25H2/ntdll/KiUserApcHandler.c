/*
 * XREFs of KiUserApcHandler @ 0x180167090
 * Callers:
 *     <none>
 * Callees:
 *     ZwTestAlert @ 0x180166C70 (ZwTestAlert.c)
 */

__int64 __fastcall KiUserApcHandler(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 4) & 0x66) != 0 )
    ZwTestAlert();
  return 1LL;
}
