/*
 * XREFs of ?CitpGetInteractiveUserLUID@@YA?AU_LUID@@XZ @ 0x1400B5F10
 * Callers:
 *     CitProcessCallout @ 0x1400B5AC4 (CitProcessCallout.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CitpGetInteractiveUserLUID(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *i; // rbx

  for ( i = *(_QWORD **)(W32GetUserSessionState(a1) + 63560); ; i = (_QWORD *)i[1] )
  {
    if ( !i )
      return 0LL;
    if ( i[7] == W32GetUserSessionState(v1) + 68720 )
      break;
  }
  return (struct _LUID)i[23];
}
