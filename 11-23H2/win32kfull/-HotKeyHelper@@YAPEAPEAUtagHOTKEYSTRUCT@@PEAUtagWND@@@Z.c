/*
 * XREFs of ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0012E00
 * Callers:
 *     DWP_SetHotKey @ 0x1C0012D64 (DWP_SetHotKey.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 * Callees:
 *     <none>
 */

struct tagWND ***__fastcall HotKeyHelper(struct tagWND *a1)
{
  struct tagWND ***result; // rax
  struct tagWND **v3; // rdx

  for ( result = (struct tagWND ***)(SGDGetUserSessionState(a1) + 12720); ; result = (struct tagWND ***)(v3 + 2) )
  {
    v3 = *result;
    if ( !*result || *v3 == a1 )
      break;
  }
  return result;
}
