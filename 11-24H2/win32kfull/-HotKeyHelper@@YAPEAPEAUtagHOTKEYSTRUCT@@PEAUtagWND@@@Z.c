/*
 * XREFs of ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x14019DF5C
 * Callers:
 *     DWP_SetHotKey @ 0x14019DDF4 (DWP_SetHotKey.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

struct tagWND ***__fastcall HotKeyHelper(struct tagWND *a1, __int64 a2)
{
  struct tagWND ***result; // rax
  struct tagWND **v4; // rdx

  for ( result = (struct tagWND ***)(W32GetUserSessionState(a1, a2) + 12936); ; result = (struct tagWND ***)(v4 + 2) )
  {
    v4 = *result;
    if ( !*result || *v4 == a1 )
      break;
  }
  return result;
}
