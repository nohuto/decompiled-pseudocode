/*
 * XREFs of W32GetCurrentThreadDpiHostingBehavior @ 0x140098B00
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 */

__int64 W32GetCurrentThreadDpiHostingBehavior()
{
  unsigned int v0; // edx
  struct tagTHREADINFO *v2; // [rsp+58h] [rbp+10h]
  _DWORD *v3; // [rsp+60h] [rbp+18h]

  v2 = PtiCurrent();
  v0 = 0;
  if ( v2 && *((_QWORD *)v2 + 52) )
  {
    v3 = (_DWORD *)*((_QWORD *)v2 + 52);
    if ( v3[1] )
    {
      if ( *v3 <= 1u )
        *((_DWORD *)v2 + 101) = *v3;
      v3[1] = 0;
    }
    return *((unsigned int *)v2 + 101);
  }
  return v0;
}
