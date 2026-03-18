/*
 * XREFs of ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x14033E1FC
 * Callers:
 *     ?vIntersectDirtyRectWithMoveData@METAREGION@@AEAAXPEAUtagRECT@@@Z @ 0x1400CDCE8 (-vIntersectDirtyRectWithMoveData@METAREGION@@AEAAXPEAUtagRECT@@@Z.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x14033DFA4 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400D3E30 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1401BD468 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 */

__int64 __fastcall METAREGION::bTrimMoveWithRegion(METAREGION *this, struct REGION *a2, int a3)
{
  unsigned int v5; // ebx
  int v7; // ecx
  _DWORD *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-30h] BYREF
  struct _POINTL v11; // [rsp+28h] [rbp-28h] BYREF
  struct REGION *v12; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v13[6]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+88h] [rbp+38h] BYREF
  __int64 v16; // [rsp+98h] [rbp+48h] BYREF

  v14 = (_DWORD *)*((_QWORD *)this + 4);
  v12 = a2;
  v5 = 1;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
  v11 = 0LL;
  if ( !v14
    || !v10
    || !v16
    || !v15
    || !RGNOBJ::bCopy((RGNOBJ *)&v15, (struct RGNOBJ *)&v14)
    || !RGNOBJ::bOffset((RGNOBJ *)&v15, (const struct _POINTL *)this + 3) )
  {
    goto LABEL_15;
  }
  if ( !(a3
       ? RGNOBJ::bCopy((RGNOBJ *)&v10, (struct RGNOBJ *)&v14)
       : RGNOBJ::iCombine((RGNOBJ *)&v10, (struct RGNOBJ *)&v14, (struct RGNOBJ *)&v12, 4)) )
    goto LABEL_15;
  if ( !RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v15, (struct RGNOBJ *)&v12, 4) )
    goto LABEL_15;
  v11.x = -*((_DWORD *)this + 6);
  v11.y = -*((_DWORD *)this + 7);
  if ( !RGNOBJ::bOffset((RGNOBJ *)&v16, &v11)
    || (v7 = RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v16, 1)) == 0
    || (v8 = v14, *((_QWORD *)this + 4) = v14, v7 == 1)
    || (v13[0] = v8[13], v13[1] = v8[14], v13[2] = v8[15], v13[3] = v8[16], ERECTL::bEmpty((ERECTL *)v13)) )
  {
LABEL_15:
    METAREGION::vClearMoveData(this, 1);
    v5 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v15);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  return v5;
}
