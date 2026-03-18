/*
 * XREFs of ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18007BFB8
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18007AD60 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1800E42C4 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800E663C (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801E05CC (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801E09AC (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x1801E8D90 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180249178 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ??$_Emplace_front_internal@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802AF22C (--$_Emplace_front_internal@AEBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 */

void __fastcall InteractionSourceManager::UpdateActiveManipulations(InteractionSourceManager *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  unsigned __int64 i; // rdi
  __int64 *v5; // r14
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  unsigned __int64 v8; // r15
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rax
  CInteractionTracker *v12; // rbx
  struct CManipulation *ActiveManipulation; // rax
  int v14; // ecx
  int v15; // eax
  _QWORD v16[3]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v17[24]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp+20h] BYREF

  if ( *((_QWORD *)this + 13) > 1uLL )
  {
    v2 = 0LL;
    v3 = (_QWORD *)((char *)this + 72);
    v18 = 0LL;
    for ( i = 0LL; ; ++i )
    {
      if ( i >= *((_QWORD *)this + 13) )
        goto LABEL_7;
      v5 = (__int64 *)((char *)this + 96);
      v6 = (i + *((_QWORD *)this + 12)) >> 1;
      v7 = ((_DWORD)i + *((_DWORD *)this + 24)) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8 * (v6 & (*((_QWORD *)this + 11) - 1LL)))
                                 + 8 * v7)
                     + 428LL) == 2 )
        break;
    }
    wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
      &v18,
      *(_QWORD *)(*((_QWORD *)this + 10) + 8 * (v6 & (*((_QWORD *)this + 11) - 1LL))) + 8 * v7);
    v2 = v18;
    if ( v18 )
    {
LABEL_13:
      v10 = *v5;
      v11 = *v3;
      v16[1] = 0LL;
      v16[2] = i + v10;
      v16[0] = v11;
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(v3, v17, v16);
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_front_internal<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
        v3,
        &v18);
      goto LABEL_14;
    }
LABEL_7:
    v5 = v3 + 3;
    for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
    {
      v8 = (i + v3[3]) >> 1;
      v9 = ((_DWORD)i + *((_DWORD *)v3 + 6)) & 1;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3[1] + 8 * (v8 & (v3[2] - 1LL))) + 8 * v9) + 428LL) - 2) <= 2 )
      {
        wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
          &v18,
          *(_QWORD *)(v3[1] + 8 * (v8 & (v3[2] - 1LL))) + 8 * v9);
        v2 = v18;
        break;
      }
    }
    if ( v2 )
      goto LABEL_13;
LABEL_14:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v18);
  }
  v12 = *(CInteractionTracker **)this;
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
  if ( !ActiveManipulation )
  {
    if ( *((_DWORD *)v12 + 46) == 2 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v14 = *((_DWORD *)ActiveManipulation + 107);
  if ( *((_DWORD *)ActiveManipulation + 109) != 6 )
  {
    if ( (unsigned int)(v14 - 2) <= 2 )
    {
      if ( *((_DWORD *)v12 + 46) != 1 )
      {
        CInteractionTracker::TransitionToInContact(v12);
        goto LABEL_27;
      }
      if ( (unsigned int)(v14 - 2) <= 2 )
        goto LABEL_27;
    }
    v15 = *((_DWORD *)v12 + 46);
    if ( v15 == 2 )
      goto LABEL_27;
    if ( !v15 )
      CInteractionTracker::TransitionToInContact(v12);
LABEL_26:
    CInteractionTracker::TransitionToInertia(v12, 0LL);
    goto LABEL_27;
  }
  CInteractionTracker::ProcessMousewheelManipulation(v12);
LABEL_27:
  *((_BYTE *)this + 112) = 0;
}
