/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x140366EEC
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x140366C10 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x14003B680 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1400640F4 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 Instance; // rbp
  _DWORD *v13; // rbx
  int v14; // edx
  int v15; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v17; // rax
  __int128 *v18; // rax
  __int64 v19; // xmm1_8
  __int64 result; // rax
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  unsigned __int64 v23; // rdi
  void *v24; // rax
  void *v25; // rsi
  void *v26; // rcx
  __int128 v27; // [rsp+20h] [rbp-38h] BYREF
  __int64 v28; // [rsp+30h] [rbp-28h]
  __int128 v29; // [rsp+38h] [rbp-20h] BYREF
  __int64 v30; // [rsp+48h] [rbp-10h]

  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1926;
  }
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 192) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))a2)(a1 + *(int *)(a2 + 8));
    v11 = v6;
    if ( v6 )
    {
      Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(v6);
      if ( Instance )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v13 = (_DWORD *)(Instance + 16);
        *(_DWORD *)(Instance + 28) = *(_DWORD *)(v11 + 112);
        v14 = *(_DWORD *)(v11 + 116);
        if ( (unsigned int)(v14 - 254) > 1 && v14 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 96LL) + 407LL) )
          v14 = 1;
        *(_DWORD *)(Instance + 36) = v14;
        *(_DWORD *)(Instance + 24) = *(_DWORD *)(v11 + 104);
        *v13 = *(_DWORD *)(*(_QWORD *)(v11 + 88) + 24LL);
        *(_DWORD *)(Instance + 20) = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 24LL);
        *(_DWORD *)(Instance + 80) = *(_DWORD *)(v11 + 164);
        v15 = *(_DWORD *)(v11 + 172);
        *(_DWORD *)(Instance + 84) = v15;
        *(_DWORD *)(Instance + 348) = *(_DWORD *)(v11 + 168);
        if ( v15 == 2 )
          MacroVisionTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits((DMMVIDPNPRESENTPATH *)v11);
        else
          MacroVisionTriggerBits = 0;
        *(_DWORD *)(Instance + 88) = MacroVisionTriggerBits;
        if ( Instance == -32 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 842;
        }
        *(_DWORD *)(Instance + 32) = *(_DWORD *)(v11 + 120);
        if ( Instance == -40 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 849;
        }
        *(_DWORD *)(Instance + 40) = *(_DWORD *)(v11 + 124);
        v17 = *(_QWORD *)(v11 + 184);
        if ( v17 )
        {
          v21 = *(_OWORD *)(v17 + 16);
          v22 = *(_QWORD *)(v17 + 32);
          v18 = &v27;
          v27 = v21;
          v28 = v22;
        }
        else
        {
          v18 = &v29;
          v29 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v30 = 0LL;
        }
        v19 = *((_QWORD *)v18 + 2);
        *(_OWORD *)(Instance + 352) = *v18;
        *(_QWORD *)(Instance + 368) = v19;
        if ( !*(_QWORD *)(Instance + 368) )
          goto LABEL_16;
        v23 = *(_QWORD *)(Instance + 360);
        v24 = (void *)operator new[](v23, 0x4E506456u, 256LL);
        v25 = v24;
        if ( v24 )
        {
          memmove(v24, *(const void **)(Instance + 368), v23);
          *(_QWORD *)(Instance + 368) = v25;
LABEL_16:
          *a3 = v13;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          return 0LL;
        }
        WdLogSingleEntry1(6LL, v23);
        v26 = (void *)Instance;
        WdLogGlobalForLineNumber = 2029;
      }
      else
      {
        WdLogSingleEntry1(6LL, a1);
        v26 = 0LL;
        WdLogGlobalForLineNumber = 1972;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
      return 3221225495LL;
    }
    else
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = a2;
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
