/*
 * XREFs of DpiFdoDetermineAffectedSession @ 0x14024A370
 * Callers:
 *     DpiFdoStopAdapter @ 0x140248100 (DpiFdoStopAdapter.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9530 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     DxgkDetermineAffectedSession @ 0x1403FAA50 (DxgkDetermineAffectedSession.c)
 */

__int64 __fastcall DpiFdoDetermineAffectedSession(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // dl
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 )
    return 0x300000000LL;
  v2 = *(_BYTE *)(v1 + 4040);
  v3 = *(_QWORD *)(v1 + 5888);
  LOBYTE(v1) = *(_BYTE *)(v1 + 2847);
  return DxgkDetermineAffectedSession(v1, (v2 & 2) != 0, v2 & 1, 1, v3);
}
