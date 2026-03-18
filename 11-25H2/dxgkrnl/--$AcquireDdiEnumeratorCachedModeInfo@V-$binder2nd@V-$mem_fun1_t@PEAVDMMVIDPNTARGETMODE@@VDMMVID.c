/*
 * XREFs of ??$AcquireDdiEnumeratorCachedModeInfo@V?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTARGETMODESET@@QEAAJV?$binder2nd@V?$mem_fun1_t@PEAVDMMVIDPNTARGETMODE@@VDMMVIDPNTARGETMODESET@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x14037D55C
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x14037CD50 (-AcquireNextModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODES.c)
 *     ?AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@PEAPEBU3@@Z @ 0x14037D180 (-AcquireNextModeInfo@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMOD.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x14003E3D8 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ @ 0x14037DD70 (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NXZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireDdiEnumeratorCachedModeInfo<KM_STL::binder2nd<KM_STL::mem_fun1_t<DMMVIDPNTARGETMODE *,DMMVIDPNTARGETMODESET,DMMVIDPNTARGETMODE const *>>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 result; // rax
  __int64 Instance; // rdi
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rsi
  int v18; // eax

  v3 = 0;
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 136) )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v12 = v7;
    if ( v7 )
    {
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(v7, v8, v10, v11);
      if ( Instance )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v15 = Instance + 16;
        *(_DWORD *)v15 = *(_DWORD *)(v12 + 24);
        *(_OWORD *)(v15 + 8) = *(_OWORD *)(v12 + 72);
        *(_OWORD *)(v15 + 24) = *(_OWORD *)(v12 + 88);
        *(_OWORD *)(v15 + 40) = *(_OWORD *)(v12 + 104);
        *(_QWORD *)(v15 + 56) = *(_QWORD *)(v12 + 120);
        *(_DWORD *)(v15 + 64) = *(_DWORD *)(v12 + 128);
        if ( DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)v12) )
        {
          *(_QWORD *)(v15 + 68) = *(_QWORD *)(v12 + 144);
        }
        else
        {
          v16 = *(_QWORD *)(a1 + 112);
          if ( !*(_QWORD *)(v16 + 40) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 68;
          }
          v17 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v16 + 40) + 64LL) + 48);
          if ( !*(_QWORD *)(v17 + 8) )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 68;
          }
          if ( (*(_DWORD *)(*(_QWORD *)(v17 + 8) + 24LL) & 0x20) != 0 )
            v18 = -2;
          else
            v18 = -1;
          *(_DWORD *)(v15 + 72) = v18;
          *(_DWORD *)(v15 + 68) = v18;
        }
        *a3 = v15;
      }
      else
      {
        WdLogSingleEntry1(6LL, a1);
        WdLogGlobalForLineNumber = 676;
        v3 = -1073741801;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
      return v3;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = a2;
      result = 3223192394LL;
      WdLogGlobalForLineNumber = 657;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 638;
  }
  return result;
}
