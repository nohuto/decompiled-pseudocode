/*
 * XREFs of MiInitializePfnEntriesRaw @ 0x1404313E0
 * Callers:
 *     MiCreateInitialLargeLeafPfns @ 0x140431268 (MiCreateInitialLargeLeafPfns.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiInitializePfnEntriesRaw(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r11
  _QWORD *v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r11
  unsigned __int64 result; // rax

  v3 = 3 * a3;
  v5 = a2;
  v6 = 0LL;
  v7 = 2 * v3;
  if ( v7 )
  {
    do
    {
      ++v6;
      *a1 = *v5;
      result = 0xAAAAAAAAAAAAAAABuLL * v6;
      if ( v6 == 6 * (v6 / 6) )
        v5 = a2;
      else
        ++v5;
      ++a1;
    }
    while ( v6 < v7 );
  }
  return result;
}
