/*
 * XREFs of MiIsPfnEnclave @ 0x14038D160
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14021CC50 (MiGetWorkingSetInfoList.c)
 *     MiProbeLeafPteAccess @ 0x1402ADF50 (MiProbeLeafPteAccess.c)
 *     MiFreeSmallPageFromMdl @ 0x14038C9A8 (MiFreeSmallPageFromMdl.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnEnclave(__int64 a1)
{
  _QWORD *v1; // rax
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx

  v1 = (_QWORD *)qword_140E37278;
  if ( qword_140E37278 )
  {
    if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 1 )
    {
      v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
      if ( qword_140E37278 )
      {
        do
        {
          v3 = v1[3];
          if ( v2 < v3 )
          {
            v1 = (_QWORD *)*v1;
          }
          else
          {
            if ( v2 - v3 < v1[4] )
              return 1LL;
            v1 = (_QWORD *)v1[1];
          }
        }
        while ( v1 );
      }
    }
  }
  return 0LL;
}
