/*
 * XREFs of ??1CCursorState@@UEAA@XZ @ 0x1802B19D8
 * Callers:
 *     ??_ECCursorState@@UEAAPEAXI@Z @ 0x1802B1B70 (--_ECCursorState@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800E75B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAVCProjectedSha.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAVCCursorState@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KPEAVCCursorState@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAVCCursorState@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801EDB10 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KPEAVCCursorState@@@std@@@std@@@std@@QE.c)
 *     ??1?$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ @ 0x1802687EC (--1-$shared_ptr@VShapeData@CCursorState@@@std@@QEAA@XZ.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@1@PEAU01@@Z @ 0x1802B0BEC (--$_Freenode@V-$allocator@U-$_List_node@UTrailPoint@CCursorState@@PEAX@std@@@std@@@-$_List_node@.c)
 *     ??1?$vector@V?$shared_ptr@VShapeData@CCursorState@@@std@@V?$allocator@V?$shared_ptr@VShapeData@CCursorState@@@std@@@2@@std@@QEAA@XZ @ 0x1802B1930 (--1-$vector@V-$shared_ptr@VShapeData@CCursorState@@@std@@V-$allocator@V-$shared_ptr@VShapeData@C.c)
 *     ??1?$vector@VMonitorData@CCursorState@@V?$allocator@VMonitorData@CCursorState@@@std@@@std@@QEAA@XZ @ 0x1802B1978 (--1-$vector@VMonitorData@CCursorState@@V-$allocator@VMonitorData@CCursorState@@@std@@@std@@QEAA@.c)
 */

void __fastcall CCursorState::~CCursorState(CCursorState *this)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CCursorState::`vftable';
  v9 = &g_CursorManager;
  EnterCriticalSection(&g_CursorManager);
  v2 = xmmword_1803FAA60;
  v3 = *(_QWORD *)xmmword_1803FAA60;
  v8 = *(_QWORD *)xmmword_1803FAA60;
  while ( v3 != v2 )
  {
    if ( *(CCursorState **)(v3 + 40) == this )
    {
      v4 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,CCursorState *>>>::_Extract(
             &xmmword_1803FAA60,
             v3);
      std::_Deallocate<16,0>(v4, 0x30uLL);
      break;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>>,std::_Iterator_base0>::operator++(&v8);
    v3 = v8;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  operator delete(*((void **)this + 35));
  v5 = *((_QWORD *)this + 32);
  **(_QWORD **)(v5 + 8) = 0LL;
  v6 = *(_QWORD **)v5;
  if ( *(_QWORD *)v5 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      std::_List_node<CCursorState::TrailPoint,void *>::_Freenode<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
        v5,
        v6);
      v6 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(*((_QWORD **)this + 32), 0x50uLL);
  std::vector<std::shared_ptr<CCursorState::ShapeData>>::~vector<std::shared_ptr<CCursorState::ShapeData>>((__int64 *)this + 28);
  std::shared_ptr<CCursorState::ShapeData>::~shared_ptr<CCursorState::ShapeData>((__int64)this + 176);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 15);
  std::vector<CCursorState::MonitorData>::~vector<CCursorState::MonitorData>((__int64 *)this + 11);
  std::shared_ptr<CCursorState::ShapeData>::~shared_ptr<CCursorState::ShapeData>((__int64)this + 40);
}
