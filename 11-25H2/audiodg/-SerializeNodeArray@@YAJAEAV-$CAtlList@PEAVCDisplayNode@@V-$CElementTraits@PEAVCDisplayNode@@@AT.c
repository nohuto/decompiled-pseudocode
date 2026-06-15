/*
 * XREFs of ?SerializeNodeArray@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006B2D0
 * Callers:
 *     ?SerializeDeviceGraphs@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAPEAEPEAI@Z @ 0x14006B178 (-SerializeDeviceGraphs@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEAVCDisplayNode@@AEAPEAU__POSITION@@@Z @ 0x140037264 (-GetNext@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     memcpy_s @ 0x1400439D4 (memcpy_s.c)
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006AF1C (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 */

__int64 __fastcall SerializeNodeArray(__int64 a1, __int64 *a2, unsigned int *a3)
{
  __int64 v3; // rbp
  int v5; // esi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  CDisplayNode **Next; // rax
  _QWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v5 = 0;
  *a3 = v3 + 4;
  LODWORD(v13) = *(_DWORD *)(a1 + 16);
  if ( (unsigned int)(v3 + 4) > 0x1000
    || memcpy_s((void *const)(*a2 + (unsigned int)(v3 + 4)), (unsigned int)(4096 - (v3 + 4)), &v13, 4uLL) )
  {
    return (unsigned int)-2147024774;
  }
  else
  {
    *a3 += 4;
    v9 = *(_QWORD **)a1;
    v13 = *(_QWORD **)a1;
    while ( 1 )
    {
      v10 = *a3;
      if ( !v9 )
        break;
      *a3 = v10 + 4;
      Next = (CDisplayNode **)ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::GetNext(v8, &v13);
      v5 = CDisplayNode::Serialize(*Next, a1, a2, a3);
      if ( v5 < 0 )
        return (unsigned int)v5;
      v8 = *a2;
      v9 = v13;
      *(_DWORD *)(v10 + *a2) = *a3 - v10;
    }
    *(_DWORD *)(v3 + *a2) = v10 - v3;
  }
  return (unsigned int)v5;
}
