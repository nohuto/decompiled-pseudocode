/*
 * XREFs of GrepFontSubSystemOnGdiDestroyHandle @ 0x14016E6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrepFontSubSystemOnGdiDestroyHandle(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( (_BYTE)a2 == 5 )
  {
    v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
    if ( *(_QWORD *)(v3 + 13424) == a1 )
    {
      *(_QWORD *)(v3 + 13424) = 0LL;
    }
    else if ( *(_QWORD *)(v3 + 5336) == a1 )
    {
      *(_QWORD *)(v3 + 5336) = 0LL;
    }
  }
}
