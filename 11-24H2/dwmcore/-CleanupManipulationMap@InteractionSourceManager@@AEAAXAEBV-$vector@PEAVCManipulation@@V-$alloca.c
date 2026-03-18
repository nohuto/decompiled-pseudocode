/*
 * XREFs of ?CleanupManipulationMap@InteractionSourceManager@@AEAAXAEBV?$vector@PEAVCManipulation@@V?$allocator@PEAVCManipulation@@@std@@@std@@@Z @ 0x1800E8F20
 * Callers:
 *     ?ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBUMarshaledManipulationInfo@@@Z @ 0x1800E90D0 (-ProcessSetManipulations@InteractionSourceManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800E8CAC (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$vect.c)
 *     ??0?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z @ 0x1800E8DC0 (--0-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCManipulation@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180134248 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z @ 0x180215B20 (-IsManipulationActive@InteractionSourceManager@@AEAA_NPEBVCManipulation@@@Z.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@0@Z @ 0x1802491C8 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$al_ea_1802491C8.c)
 *     ?ClearAllConfigurations@CChainingHelper@@QEAAXXZ @ 0x180249728 (-ClearAllConfigurations@CChainingHelper@@QEAAXXZ.c)
 *     ??$_Erase@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@V?$_Uhash_compare@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@4@@4@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@4@$0A@@std@@@std@@AEAA_KAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802AF2E8 (--$_Erase@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$_Hash@V-$_Umap_trait.c)
 */

void __fastcall InteractionSourceManager::CleanupManipulationMap(
        InteractionSourceManager *this,
        CMILRefCountImpl ***a2)
{
  CMILRefCountImpl **v2; // rdi
  __int64 *v3; // rax
  CMILRefCountImpl **v5; // rsi
  __int64 *v7; // rbx
  __int64 *v8; // rbx
  CMILRefCountImpl **v9; // r14
  CMILRefCountImpl **v10; // rcx
  CMILRefCountImpl **v11; // r14
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  CMILRefCountImpl **v16; // [rsp+30h] [rbp-50h]
  _QWORD v17[3]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-20h]
  char v20[24]; // [rsp+68h] [rbp-18h] BYREF
  __int64 *v21; // [rsp+C0h] [rbp+40h]
  char *v22; // [rsp+C8h] [rbp+48h]

  v22 = (char *)this + 8;
  v2 = 0LL;
  v3 = (__int64 *)*((_QWORD *)this + 2);
  v15 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v7 = (__int64 *)*v3;
  v21 = v3;
  while ( v7 != v3 )
  {
    v10 = *a2;
    v11 = (CMILRefCountImpl **)(v7 + 2);
    while ( v10 != a2[1] )
    {
      if ( *v11 == *v10 )
        goto LABEL_10;
      ++v10;
    }
    if ( v5 == v2 )
    {
      std::vector<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
        (__int64 *)&v15,
        (__int64)v5,
        v7 + 2);
      v2 = v16;
      v5 = (CMILRefCountImpl **)*((_QWORD *)&v15 + 1);
    }
    else
    {
      wil::com_ptr_t<CManipulation,wil::err_returncode_policy>::com_ptr_t<CManipulation,wil::err_returncode_policy>(
        v5++,
        *v11);
      *((_QWORD *)&v15 + 1) = v5;
    }
    if ( InteractionSourceManager::IsManipulationActive(this, *v11) )
    {
      CChainingHelper::ClearAllConfigurations((CChainingHelper *)v7[3]);
      v12 = *((_QWORD *)this + 12);
      v13 = 0LL;
      v14 = *((_QWORD *)this + 9);
      while ( v13 < *((_QWORD *)this + 13) )
      {
        if ( *(CMILRefCountImpl **)(*(_QWORD *)(*((_QWORD *)this + 10)
                                              + 8 * (((v12 + v13) >> 1) & (*((_QWORD *)this + 11) - 1LL)))
                                  + 8LL * (((_DWORD)v12 + (_DWORD)v13) & 1)) == *v11 )
          goto LABEL_21;
        ++v13;
      }
      LODWORD(v13) = *((_DWORD *)this + 26);
LABEL_21:
      v17[1] = 0LL;
      v18[1] = 0LL;
      v17[0] = v14;
      v18[0] = v14;
      v19 = v12 + (int)v13;
      v17[2] = v19 + 1;
      std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase((char *)this + 72, v20, v18, v17);
      *((_BYTE *)this + 112) = 1;
    }
    CResource::UnRegisterNotifierInternal(*(CResource **)this, *v11);
LABEL_10:
    v7 = (__int64 *)*v7;
    v3 = v21;
  }
  v8 = (__int64 *)v15;
  v9 = (CMILRefCountImpl **)v15;
  if ( (CMILRefCountImpl **)v15 != v5 )
  {
    do
      std::_Hash<std::_Umap_traits<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::unique_ptr<CChainingHelper>,std::_Uhash_compare<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>,std::hash<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>,std::equal_to<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>>,std::allocator<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>,0>>::_Erase<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
        v22,
        v9++);
    while ( v9 != v5 );
    v8 = (__int64 *)v15;
  }
  if ( v8 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v8,
      (__int64 *)v5);
    std::_Deallocate<16,0>(v8, ((char *)v2 - (char *)v8) & 0xFFFFFFFFFFFFFFF8uLL);
  }
}
