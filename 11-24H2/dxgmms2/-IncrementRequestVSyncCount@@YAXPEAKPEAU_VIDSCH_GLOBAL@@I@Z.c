/*
 * XREFs of ?IncrementRequestVSyncCount@@YAXPEAKPEAU_VIDSCH_GLOBAL@@I@Z @ 0x140041C7C
 * Callers:
 *     VidSchControlVSyncDevice @ 0x1400D4B10 (VidSchControlVSyncDevice.c)
 *     VidSchControlVSyncAdapter @ 0x1400D4F00 (VidSchControlVSyncAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall IncrementRequestVSyncCount(unsigned int *a1, struct _VIDSCH_GLOBAL *a2, int a3)
{
  __int64 v3; // r9

  v3 = 0LL;
  if ( *((_BYTE *)a2 + 2468) )
  {
    if ( a3 == -3 )
    {
      if ( *((_DWORD *)a2 + 10) )
      {
        do
        {
          ++a1[v3];
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (unsigned int)v3 < *((_DWORD *)a2 + 10) );
      }
    }
    else
    {
      ++a1[a3];
    }
  }
  else
  {
    ++*a1;
  }
}
