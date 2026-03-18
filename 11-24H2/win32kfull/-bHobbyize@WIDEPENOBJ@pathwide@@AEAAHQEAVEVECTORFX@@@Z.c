/*
 * XREFs of ?bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z @ 0x1400E9838
 * Callers:
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x1400E9CE8 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     ?bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ @ 0x1400EABEC (-bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ.c)
 *     ?vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x1400EB770 (-vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1400ED304 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 */

__int64 __fastcall pathwide::WIDEPENOBJ::bHobbyize(struct _POINTFIX **this, struct EVECTORFX *const a2)
{
  int v3; // r8d
  const struct _POINTFIX **v4; // rbx
  unsigned int *v5; // rdi
  const struct _POINTFIX *v6; // rbx
  const struct _POINTFIX *v7; // rdi
  struct _POINTFIX *v8; // rcx
  const struct _POINTFIX *v9; // rax
  __int64 result; // rax

  v3 = *((_DWORD *)a2 + 1) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * *(_DWORD *)a2;
  if ( v3 >= 10816 )
    return 0LL;
  if ( v3 >= 576 )
  {
    if ( v3 >= 1600 )
    {
      if ( v3 < 3136 )
      {
        v4 = (const struct _POINTFIX **)&off_140349A90;
        v5 = (unsigned int *)&unk_140349A98;
      }
      else if ( v3 >= 5184 )
      {
        if ( v3 < 7744 )
        {
          v4 = (const struct _POINTFIX **)&off_140349AB0;
          v5 = (unsigned int *)&unk_140349AB8;
        }
        else
        {
          v4 = (const struct _POINTFIX **)&off_140349AC0;
          v5 = (unsigned int *)&unk_140349AC8;
        }
      }
      else
      {
        v4 = (const struct _POINTFIX **)&off_140349AA0;
        v5 = (unsigned int *)&unk_140349AA8;
      }
    }
    else
    {
      v4 = (const struct _POINTFIX **)&off_140349A80;
      v5 = (unsigned int *)&unk_140349A88;
    }
  }
  else
  {
    v4 = (const struct _POINTFIX **)&off_140349A70;
    v5 = (unsigned int *)&unk_140349A78;
  }
  if ( !(unsigned int)pathwide::WIDEPATHOBJ::bBeginFigure((pathwide::WIDEPATHOBJ *)this) )
    return 0LL;
  v6 = *v4;
  v7 = &v6[*v5];
  while ( v6 < v7 )
  {
    v8 = this[16];
    v9 = v6++;
    if ( v8 >= this[17] )
    {
      pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint((pathwide::WIDEPATHOBJ *)this, v9, 0LL, 0);
    }
    else
    {
      *v8 = *v9;
      ++this[16];
    }
  }
  pathwide::WIDEPATHOBJ::vEndFigure((pathwide::WIDEPATHOBJ *)this);
  result = 1LL;
  *((_DWORD *)this + 38) = 1;
  return result;
}
