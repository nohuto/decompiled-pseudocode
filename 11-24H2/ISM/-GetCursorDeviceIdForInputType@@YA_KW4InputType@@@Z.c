/*
 * XREFs of ?GetCursorDeviceIdForInputType@@YA_KW4InputType@@@Z @ 0x1800FA340
 * Callers:
 *     ?CreatePermanentCursors@SystemCursorService2@@AEAAJXZ @ 0x1800F9E3C (-CreatePermanentCursors@SystemCursorService2@@AEAAJXZ.c)
 *     ?EnsureDwmCursorController@DWMCursor@@QEAAJXZ @ 0x1801C83A8 (-EnsureDwmCursorController@DWMCursor@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCursorDeviceIdForInputType(int a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( a1 == 2 )
    return 1LL;
  if ( a1 != 64 )
    return 0LL;
  return result;
}
