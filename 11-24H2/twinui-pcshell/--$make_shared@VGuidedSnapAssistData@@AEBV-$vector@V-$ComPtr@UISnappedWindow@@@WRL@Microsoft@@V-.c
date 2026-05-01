/*
 * XREFs of ??$make_shared@VGuidedSnapAssistData@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@AEAH@std@@YA?AV?$shared_ptr@VGuidedSnapAssistData@@@0@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@0@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@0@AEBUCRect@Geometry@@AEAH@Z @ 0x1802BBDB8
 * Callers:
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A7D70 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 * Callees:
 *     ?Initialize@GuidedSnapAssistData@@AEAAXAEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@3@AEBUCRect@Geometry@@H@Z @ 0x1802BBE7C (-Initialize@GuidedSnapAssistData@@AEAAXAEBV-$vector@V-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<GuidedSnapAssistData,std::vector<Microsoft::WRL::ComPtr<ISnappedWindow>> const &,std::deque<tagRECT> &,Geometry::CRect const &,int &>(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int *a5)
{
  int v9; // ecx
  _DWORD *v11; // [rsp+60h] [rbp+8h]

  v11 = operator new(0x48uLL);
  *(_OWORD *)v11 = 0LL;
  v11[2] = 1;
  v11[3] = 1;
  *(_QWORD *)v11 = &std::_Ref_count_obj2<GuidedSnapAssistData>::`vftable';
  v9 = *a5;
  *((_QWORD *)v11 + 2) = 0LL;
  *((_QWORD *)v11 + 3) = 0LL;
  *((_QWORD *)v11 + 4) = 0LL;
  *((_QWORD *)v11 + 7) = 0LL;
  *((_BYTE *)v11 + 64) = 0;
  GuidedSnapAssistData::Initialize((_DWORD)v11 + 16, a2, a3, a4, v9);
  *a1 = v11 + 4;
  a1[1] = v11;
  return a1;
}
