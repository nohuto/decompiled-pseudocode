/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140037A38
 * Callers:
 *     ?OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140037920 (-OnLeftSubmixDisconnected@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::RemoveAt(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (__int64)a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (__int64 *)*a1 )
    a1 = (__int64 *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == *(__int64 **)(v2 + 8) )
    *(_QWORD *)(v2 + 8) = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  return ATL::CAtlList<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *,ATL::CElementTraits<ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>> *>>::FreeNode(
           v2,
           a2);
}
