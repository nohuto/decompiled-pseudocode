/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$binder2nd@V?$const_mem_fun1_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@PEBV1@@KM_STL@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x1402D9E88
 * Callers:
 *     ?AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14025DC20 (-AcquirePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEB.c)
 *     ?AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1402D94F0 (-AcquirePathInfo@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAP.c)
 *     ?AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEBU3@@Z @ 0x1402D9A30 (-AcquireNextPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x14003BCC0 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1400644D4 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ @ 0x1402DA1D8 (-GetContentRotationHw@DMMVIDPNPRESENTPATH@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@XZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::binder2nd<KM_STL::const_mem_fun1_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY,DMMVIDPNPRESENTPATH const *>>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 Instance; // rbp
  __int64 v15; // r9
  _DWORD *v16; // rbx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION ContentRotationHw; // eax
  int v18; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v20; // rax
  __int128 *v21; // rax
  __int64 v22; // xmm1_8
  __int64 result; // rax
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  unsigned __int64 v26; // rdi
  void *v27; // rax
  void *v28; // rsi
  void *v29; // rcx
  __int128 v30; // [rsp+20h] [rbp-48h] BYREF
  __int64 v31; // [rsp+30h] [rbp-38h]
  __int128 v32; // [rsp+38h] [rbp-30h] BYREF
  __int64 v33; // [rsp+48h] [rbp-20h]

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1926;
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))a2)(a1 + *(int *)(a2 + 8), *(_QWORD *)(a2 + 16));
    v13 = v8;
    if ( v8 )
    {
      Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(v8, v9, v11, v12);
      if ( Instance )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v16 = (_DWORD *)(Instance + 16);
        *(_DWORD *)(Instance + 28) = *(_DWORD *)(v13 + 112);
        if ( a4 )
          ContentRotationHw = DMMVIDPNPRESENTPATH::GetContentRotationHw((DMMVIDPNPRESENTPATH *)v13);
        else
          ContentRotationHw = *(_DWORD *)(v13 + 116);
        *(_DWORD *)(Instance + 36) = ContentRotationHw;
        *(_DWORD *)(Instance + 24) = *(_DWORD *)(v13 + 104);
        *v16 = *(_DWORD *)(*(_QWORD *)(v13 + 88) + 24LL);
        *(_DWORD *)(Instance + 20) = *(_DWORD *)(*(_QWORD *)(v13 + 96) + 24LL);
        *(_DWORD *)(Instance + 80) = *(_DWORD *)(v13 + 164);
        v18 = *(_DWORD *)(v13 + 172);
        *(_DWORD *)(Instance + 84) = v18;
        *(_DWORD *)(Instance + 348) = *(_DWORD *)(v13 + 168);
        if ( v18 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v13);
        else
          MacroVisionTriggerBits = 0;
        *(_DWORD *)(Instance + 88) = MacroVisionTriggerBits;
        if ( Instance == -32 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 842;
        }
        *(_DWORD *)(Instance + 32) = *(_DWORD *)(v13 + 120);
        if ( Instance == -40 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 849;
        }
        *(_DWORD *)(Instance + 40) = *(_DWORD *)(v13 + 124);
        v20 = *(_QWORD *)(v13 + 184);
        if ( v20 )
        {
          v24 = *(_OWORD *)(v20 + 16);
          v25 = *(_QWORD *)(v20 + 32);
          v21 = &v30;
          v30 = v24;
          v31 = v25;
        }
        else
        {
          v21 = &v32;
          v32 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v33 = 0LL;
        }
        v22 = *((_QWORD *)v21 + 2);
        *(_OWORD *)(Instance + 352) = *v21;
        *(_QWORD *)(Instance + 368) = v22;
        if ( !*(_QWORD *)(Instance + 368) )
          goto LABEL_17;
        v26 = *(_QWORD *)(Instance + 360);
        v27 = (void *)operator new[](v26, 0x4E506456u, 256LL, v15);
        v28 = v27;
        if ( v27 )
        {
          memmove(v27, *(const void **)(Instance + 368), v26);
          *(_QWORD *)(Instance + 368) = v28;
LABEL_17:
          *a3 = v16;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          return 0LL;
        }
        WdLogSingleEntry1(6LL, v26);
        v29 = (void *)Instance;
        WdLogGlobalForLineNumber = 2029;
      }
      else
      {
        WdLogSingleEntry1(6LL, a1);
        v29 = 0LL;
        WdLogGlobalForLineNumber = 1972;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v29);
      return 3221225495LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = a2;
      result = 3223192359LL;
      WdLogGlobalForLineNumber = 1953;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3223192375LL;
    WdLogGlobalForLineNumber = 1936;
  }
  return result;
}
