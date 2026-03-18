/*
 * XREFs of ?vSpZorderMetaSprite@@YAXPEAUHDEV__@@PEAU_METASPRITE@@1@Z @ 0x14032E8DC
 * Callers:
 *     ?GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z @ 0x14016CEDC (-GdiZorderSprite@@YAXPEAUHDEV__@@PEAUHWND__@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpZorderMetaSprite(_QWORD *a1, struct _METASPRITE *a2, struct _METASPRITE *a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rax

  v3 = a1[19];
  if ( a2 && v3 )
  {
    if ( (struct _METASPRITE *)v3 == a2 )
    {
      a1[19] = *(_QWORD *)(v3 + 8);
    }
    else
    {
      v4 = 0LL;
      while ( 1 )
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( (struct _METASPRITE *)v3 == a2 )
          break;
        v4 = v3;
        v3 = *(_QWORD *)(v3 + 8);
        if ( !v5 )
          goto LABEL_11;
      }
      *(_QWORD *)(v4 + 8) = v5;
    }
    *(_QWORD *)(v3 + 8) = 0LL;
LABEL_11:
    if ( !*((_QWORD *)a2 + 1) )
    {
      if ( a3 )
      {
        *((_QWORD *)a2 + 1) = *((_QWORD *)a3 + 1);
        *((_QWORD *)a3 + 1) = a2;
      }
      else
      {
        *((_QWORD *)a2 + 1) = a1[19];
        a1[19] = a2;
      }
    }
  }
}
