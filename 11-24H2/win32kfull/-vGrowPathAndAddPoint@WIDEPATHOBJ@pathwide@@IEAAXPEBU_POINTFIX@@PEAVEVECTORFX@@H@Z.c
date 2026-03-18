/*
 * XREFs of ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1400ED304
 * Callers:
 *     ?vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1400E7C88 (-vAddNice@pathwide@@YAXAEAVWIDEPATHOBJ@1@PEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z @ 0x1400E8C20 (-vAddLeft@WIDENER@pathwide@@IEAAXAEAVEVECTORFX@@H@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z @ 0x1400E8C88 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEBU_POINTFIX@@H@Z.c)
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400E8E9C (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400E9224 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z @ 0x1400E9838 (-bHobbyize@WIDEPENOBJ@pathwide@@AEAAHQEAVEVECTORFX@@@Z.c)
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400EA198 (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400EAEA0 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z @ 0x1400EB1E8 (-vAddRoundEndCap@WIDEPENOBJ@pathwide@@QEAAXAEAVWIDENER@2@AEAVLINEDATA@2@HH@Z.c)
 *     ?vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z @ 0x1400EB420 (-vReverseConcatenate@WIDEPATHOBJ@pathwide@@QEAAXAEAV12@@Z.c)
 *     ?vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x1400ED2A0 (-vAddPoint@WIDEPATHOBJ@pathwide@@QEAAXPEAU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ @ 0x1400EAC3C (-bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ.c)
 *     ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x1400ED3F0 (-bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ.c)
 */

void __fastcall pathwide::WIDEPATHOBJ::vGrowPathAndAddPoint(
        pathwide::WIDEPATHOBJ *this,
        const struct _POINTFIX *a2,
        struct EVECTORFX *a3,
        int a4)
{
  pathwide::WIDEPATHOBJ *v8; // rcx
  _DWORD *v9; // rcx
  int v10; // eax

  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 20LL) = (*((_QWORD *)this + 16)
                                                                 - *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                                 - 24LL) >> 3;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                               + 24LL
                                                               + 8LL
                                                               * *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                             + 40LL)
                                                                                 + 20LL);
  if ( (unsigned int)pathwide::WIDEPATHOBJ::bValid(this) )
  {
    if ( (unsigned int)pathwide::WIDEPATHOBJ::bGrowPath(v8) )
    {
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) = 0;
      **((struct _POINTFIX **)this + 16) = *a2;
      if ( a3 )
      {
        v9 = (_DWORD *)*((_QWORD *)this + 16);
        v10 = *(_DWORD *)a3;
        if ( a4 )
        {
          *v9 -= v10;
          *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) -= *((_DWORD *)a3 + 1);
        }
        else
        {
          *v9 += v10;
          *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) += *((_DWORD *)a3 + 1);
        }
      }
      *((_QWORD *)this + 16) += 8LL;
    }
    else
    {
      *((_DWORD *)this + 30) = 1;
    }
  }
}
