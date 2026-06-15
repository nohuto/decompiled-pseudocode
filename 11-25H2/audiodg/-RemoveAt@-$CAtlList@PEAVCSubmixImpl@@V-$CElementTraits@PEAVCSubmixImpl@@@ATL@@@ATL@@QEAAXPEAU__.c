/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14002AA0C
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A78C (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::RemoveAt(__int64 a1, __int64 *a2)
{
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 == (__int64 *)SubmixList )
    SubmixList = *a2;
  else
    *(_QWORD *)a2[1] = *a2;
  if ( a2 == (__int64 *)qword_1400C3C60 )
    qword_1400C3C60 = a2[1];
  else
    *(_QWORD *)(*a2 + 8) = a2[1];
  return ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::FreeNode(&SubmixList);
}
