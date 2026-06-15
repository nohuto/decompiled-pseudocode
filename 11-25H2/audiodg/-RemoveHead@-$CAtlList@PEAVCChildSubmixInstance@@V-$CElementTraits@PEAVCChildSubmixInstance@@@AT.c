/*
 * XREFs of ?RemoveHead@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAPEAVCChildSubmixInstance@@XZ @ 0x14006EADC
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x14002A78C (--1CSubmixImpl@@QEAA@XZ.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x14000E8D8 (-FreeNode@-$CAtlList@PEAV-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionIn.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005626C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveHead(
        __int64 *a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = (__int64 *)*a1;
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = *v1;
  v3 = v1[2];
  *a1 = *v1;
  if ( v2 )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    a1[1] = 0LL;
  ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::FreeNode(
    (__int64)a1,
    v1);
  return v3;
}
