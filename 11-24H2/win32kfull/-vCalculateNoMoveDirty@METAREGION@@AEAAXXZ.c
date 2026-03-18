/*
 * XREFs of ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1400CDE98
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1400CCECC (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401BD468 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 */

void __fastcall METAREGION::vCalculateNoMoveDirty(METAREGION *this)
{
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+50h] [rbp+18h] BYREF
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF
  __int64 v5; // [rsp+60h] [rbp+28h] BYREF
  __int64 v6; // [rsp+68h] [rbp+30h] BYREF

  if ( *((_DWORD *)this + 10) )
  {
    v5 = *(_QWORD *)this;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v3);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v4);
    v2[0] = *((_QWORD *)this + 4);
    if ( !v3 || !v4 )
      goto LABEL_14;
    if ( *((_QWORD *)this + 1) )
    {
      v6 = *((_QWORD *)this + 1);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v6);
      *((_QWORD *)this + 1) = 0LL;
    }
    if ( RGNOBJ::bCopy((RGNOBJ *)&v4, (struct RGNOBJ *)v2)
      && RGNOBJ::bOffset((RGNOBJ *)&v4, (const struct _POINTL *)this + 3) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v3);
      if ( v5 && v4 && v3 && RGNOBJ::iCombine((RGNOBJ *)&v3, (struct RGNOBJ *)&v5, (struct RGNOBJ *)&v4, 4) )
      {
        *((_QWORD *)this + 1) = v3;
      }
      else
      {
        METAREGION::vClearMoveData(this, 1);
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v3);
      }
    }
    else
    {
LABEL_14:
      METAREGION::vClearMoveData(this, 1);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v4);
  }
}
