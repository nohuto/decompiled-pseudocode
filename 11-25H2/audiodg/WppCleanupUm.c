/*
 * XREFs of WppCleanupUm @ 0x140057E9C
 * Callers:
 *     wWinMain @ 0x14004AF94 (wWinMain.c)
 * Callees:
 *     <none>
 */

__int64 WppCleanupUm()
{
  _QWORD *v0; // rbx
  __int64 v1; // rcx
  __int64 result; // rax

  v0 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    while ( v0 )
    {
      v1 = v0[1];
      if ( v1 )
      {
        result = EtwUnregisterTraceGuids(v1);
        v0[1] = 0LL;
      }
      v0 = (_QWORD *)*v0;
    }
    WPP_GLOBAL_Control = &WPP_GLOBAL_Control;
  }
  return result;
}
