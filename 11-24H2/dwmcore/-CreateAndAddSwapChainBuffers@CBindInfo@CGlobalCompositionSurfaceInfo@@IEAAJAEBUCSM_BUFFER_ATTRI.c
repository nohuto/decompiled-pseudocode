/*
 * XREFs of ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x1801A5624
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1801A523C (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180043EE4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18005CC10 (McTemplateU0x_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x1801A59B4 (-CreateNewRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x1801A5C5C (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UCSM_REALIZATION_INFO@@V?$allocator@UCSM_REALIZATION_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A5F80 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UCSM_REALIZATION_INFO@@V-$allocator@UCSM_R.c)
 *     ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1801A61F0 (-EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1801A6438 (-EnsureDecodeBitmap@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CreateAndAddSwapChainBuffers(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 **v5; // rax
  __int64 v6; // r14
  __int64 *v7; // r12
  __int64 *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  unsigned int i; // eax
  struct ISwapChainRealization *v14; // rdi
  struct ISwapChainRealization *v15; // r13
  unsigned __int64 v16; // rax
  int v17; // eax
  unsigned int j; // edi
  void *v19; // rcx
  struct ISwapChainRealization *v21; // r15
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // [rsp+30h] [rbp-39h]
  struct ISwapChainRealization *v26; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v27; // [rsp+40h] [rbp-29h]
  __int128 v28; // [rsp+48h] [rbp-21h] BYREF
  __int64 v29; // [rsp+58h] [rbp-11h]
  __int128 v30; // [rsp+60h] [rbp-9h] BYREF
  bool v31; // [rsp+D0h] [rbp+67h]
  unsigned int v33; // [rsp+E0h] [rbp+77h] BYREF
  unsigned int v34; // [rsp+E8h] [rbp+7Fh]

  v33 = a3;
  v31 = 1;
  v29 = 0LL;
  v4 = 0;
  v28 = 0LL;
  if ( a3 )
    std::vector<CSM_REALIZATION_INFO>::_Resize_reallocate<std::_Value_init_tag>(&v28, a3);
  v5 = (__int64 **)((char *)this + 72);
  v6 = 0LL;
  v30 = 0LL;
  if ( &v30 == (__int128 *)((char *)this + 72) )
  {
    v8 = (__int64 *)*((_QWORD *)&v30 + 1);
    v7 = (__int64 *)v30;
  }
  else
  {
    v7 = *v5;
    *v5 = 0LL;
    v8 = (__int64 *)*((_QWORD *)this + 10);
    *((_QWORD *)this + 10) = 0LL;
    v6 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
  }
  v9 = *(_QWORD *)this;
  v10 = v28;
  *((_BYTE *)this + 183) = 0;
  v27 = v8;
  v25 = 0LL;
  v11 = NtOpenCompositionSurfaceRealizationInfo(*(_QWORD *)(v9 + 32), (char *)this + 24, &v33, v10);
  if ( v11 < 0 )
  {
    v4 = v11 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FB98, 4u, v11 | 0x10000000, 0x64Au, 0LL);
    goto LABEL_27;
  }
  if ( v33 <= 1 && *((_DWORD *)this + 8) != 3 )
  {
    v31 = 0;
    goto LABEL_10;
  }
  v12 = CGlobalCompositionSurfaceInfo::CBindInfo::EnsureDecodeBitmap(this);
  v4 = v12;
  if ( v12 >= 0 )
  {
LABEL_10:
    for ( i = 0; ; i = v34 + 1 )
    {
      v34 = i;
      if ( i >= v33 )
        break;
      v14 = 0LL;
      v15 = (struct ISwapChainRealization *)(v28 + 40LL * i);
      v26 = v15;
      if ( !*((_QWORD *)v15 + 3) )
        goto LABEL_13;
      v24 = v8 - v7;
      while ( 1 )
      {
        v16 = v25;
        if ( v25 >= v24 )
        {
          v15 = v26;
          goto LABEL_14;
        }
        v21 = (struct ISwapChainRealization *)v7[v25];
        v7[v25++] = 0LL;
        v22 = (*(__int64 (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v21 + 264LL))(v21);
        v23 = *((_QWORD *)v26 + 3);
        if ( v22 == v23 )
          break;
        if ( v21 )
          (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v14 = v21;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10000000) != 0 )
        McTemplateU0x_EventWriteTransfer((__int64)v26, &CompSurfInfo_ReuseRealization, v23);
      v15 = v26;
      (*(void (__fastcall **)(struct ISwapChainRealization *, struct ISwapChainRealization *))(*(_QWORD *)v21 + 96LL))(
        v21,
        v26);
      if ( !v21 )
      {
LABEL_13:
        v16 = v25;
LABEL_14:
        v26 = 0LL;
        v25 = v16;
        if ( v14 )
          (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v14 + 16LL))(v14);
        v17 = CGlobalCompositionSurfaceInfo::CBindInfo::CreateNewRealization(this, a2, v15, v31, &v26);
        v4 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FB98, 4u, v17, 0x687u, 0LL);
          if ( v26 )
            (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v26 + 16LL))(v26);
          goto LABEL_23;
        }
        *((_QWORD *)v15 + 1) = 0LL;
        v14 = v26;
      }
      CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(this, v14);
      if ( v14 )
        (*(void (__fastcall **)(struct ISwapChainRealization *))(*(_QWORD *)v14 + 16LL))(v14);
      v8 = v27;
    }
    if ( v33 > 1 )
      CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(this);
    goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, &dword_18032FB98, 4u, v12, 0x651u, 0LL);
LABEL_23:
  for ( j = 0; j < v33; ++j )
  {
    v19 = *(void **)(v28 + 40LL * j + 8);
    if ( v19 )
      CloseHandle(v19);
  }
LABEL_27:
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v7,
      v27);
    std::_Deallocate<16,0>(v7, (v6 - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  if ( (_QWORD)v28 )
    std::_Deallocate<16,0>((_QWORD *)v28, 8 * ((v29 - (__int64)v28) >> 3));
  return v4;
}
