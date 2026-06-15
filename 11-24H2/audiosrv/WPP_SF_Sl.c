/*
 * XREFs of WPP_SF_Sl @ 0x18010306C
 * Callers:
 *     ?LoadMuteState_old@CMuteSoftware@@AEAAJXZ @ 0x180102400 (-LoadMuteState_old@CMuteSoftware@@AEAAJXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x180102904 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_Sl(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_7f672c8107043d7bc81576871ecf25df_Traceguids, a2, a4, v5, va, 4LL, 0LL);
}
