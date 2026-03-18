/*
 * XREFs of MiIsPfnEnclave @ 0x1403A2840
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1403032B0 (MiGetWorkingSetInfoList.c)
 *     MiFreeSmallPageFromMdl @ 0x1403A2098 (MiFreeSmallPageFromMdl.c)
 *     MiFreePagesFromMdl @ 0x1403A2330 (MiFreePagesFromMdl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnEnclave(__int64 a1)
{
  _QWORD *v1; // rax
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rdx

  v1 = (_QWORD *)qword_140E374B8;
  if ( qword_140E374B8 )
  {
    if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 1 )
    {
      v2 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
      if ( qword_140E374B8 )
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
