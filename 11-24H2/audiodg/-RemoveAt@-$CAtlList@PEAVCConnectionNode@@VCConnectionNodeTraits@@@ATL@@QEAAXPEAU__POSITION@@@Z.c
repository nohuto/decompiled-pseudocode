/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140007C94
 * Callers:
 *     ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x140008DB0 (-ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(__int64 **a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 *v3; // r8
  __int64 result; // rax
  bool v5; // zf

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = *a2;
  if ( a2 == *a1 )
    *a1 = (__int64 *)v2;
  else
    *(_QWORD *)a2[1] = v2;
  v3 = (__int64 *)a2[1];
  if ( a2 == a1[1] )
    a1[1] = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  result = (__int64)a1[4];
  *a2 = result;
  a1[4] = a2;
  v5 = a1[2] == (__int64 *)1;
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  if ( v5 )
    return ATL::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAll();
  return result;
}
