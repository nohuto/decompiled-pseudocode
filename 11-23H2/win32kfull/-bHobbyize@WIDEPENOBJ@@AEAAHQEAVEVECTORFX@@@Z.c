/*
 * XREFs of ?bHobbyize@WIDEPENOBJ@@AEAAHQEAVEVECTORFX@@@Z @ 0x1C015D0BA
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C02F1068 (-bPolygonizePen@WIDEPENOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?bBeginFigure@WIDEPATHOBJ@@QEAAHXZ @ 0x1C015CF9A (-bBeginFigure@WIDEPATHOBJ@@QEAAHXZ.c)
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1C015DA92 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?vEndFigure@WIDEPATHOBJ@@QEAAXXZ @ 0x1C015DD98 (-vEndFigure@WIDEPATHOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall WIDEPENOBJ::bHobbyize(WIDEPENOBJ *this, struct EVECTORFX *const a2)
{
  int v3; // r8d
  const struct _POINTFIX **v4; // rbx
  unsigned int *v5; // rdi
  int v6; // r8d
  const struct _POINTFIX *v7; // rbx
  const struct _POINTFIX *v8; // rdi
  const struct _POINTFIX *v9; // rdx
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 1) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * *(_DWORD *)a2;
  if ( v3 >= 10816 )
    return 0LL;
  if ( v3 >= 576 )
  {
    if ( v3 >= 1600 )
    {
      if ( v3 >= 3136 )
      {
        if ( v3 >= 5184 )
        {
          if ( v3 >= 7744 )
          {
            v4 = (const struct _POINTFIX **)&off_1C030B970;
            v5 = (unsigned int *)&unk_1C030B978;
          }
          else
          {
            v4 = (const struct _POINTFIX **)&off_1C030B960;
            v5 = (unsigned int *)&unk_1C030B968;
          }
        }
        else
        {
          v4 = (const struct _POINTFIX **)&off_1C030B950;
          v5 = (unsigned int *)&unk_1C030B958;
        }
      }
      else
      {
        v4 = (const struct _POINTFIX **)&off_1C030B940;
        v5 = (unsigned int *)&unk_1C030B948;
      }
    }
    else
    {
      v4 = (const struct _POINTFIX **)&off_1C030B930;
      v5 = (unsigned int *)&unk_1C030B938;
    }
  }
  else
  {
    v4 = (const struct _POINTFIX **)&off_1C030B920;
    v5 = (unsigned int *)&unk_1C030B928;
  }
  if ( !(unsigned int)WIDEPATHOBJ::bBeginFigure(this) )
    return 0LL;
  v7 = *v4;
  v8 = &v7[*v5];
  while ( v7 < v8 )
  {
    v9 = v7++;
    WIDEPATHOBJ::vAddPoint(this, v9, v6);
  }
  WIDEPATHOBJ::vEndFigure(this);
  result = 1LL;
  *((_DWORD *)this + 38) = 1;
  return result;
}
