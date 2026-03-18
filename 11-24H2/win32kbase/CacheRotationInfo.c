/*
 * XREFs of CacheRotationInfo @ 0x140157C78
 * Callers:
 *     xxxResetDisplayDevice @ 0x1400A2770 (xxxResetDisplayDevice.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall CacheRotationInfo(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 3080LL);
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}
