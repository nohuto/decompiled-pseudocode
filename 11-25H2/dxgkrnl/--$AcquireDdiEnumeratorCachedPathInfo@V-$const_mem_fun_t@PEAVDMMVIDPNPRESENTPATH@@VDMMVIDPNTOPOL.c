/*
 * XREFs of ??$AcquireDdiEnumeratorCachedPathInfo@V?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@@DMMVIDPNTOPOLOGY@@QEAAJV?$const_mem_fun_t@PEAVDMMVIDPNPRESENTPATH@@VDMMVIDPNTOPOLOGY@@@KM_STL@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@H@Z @ 0x14037ECEC
 * Callers:
 *     ?AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEAPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14037EA10 (-AcquireFirstPathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEA.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@SAPEAV12@QEBVDMMVIDPNPRESENTPATH@@@Z @ 0x14003BCC0 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@SAP.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1400644D4 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
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
  __int64 v13; // r9
  _DWORD *v14; // rbx
  int v15; // edx
  int v16; // ecx
  int MacroVisionTriggerBits; // eax
  __int64 v18; // rax
  __int128 *v19; // rax
  __int64 v20; // xmm1_8
  __int64 result; // rax
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  unsigned __int64 v24; // rdi
  void *v25; // rax
  void *v26; // rsi
  void *v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+30h] [rbp-28h]
  __int128 v30; // [rsp+38h] [rbp-20h] BYREF
  __int64 v31; // [rsp+48h] [rbp-10h]

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
      Instance = Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(v6, v7, v9, v10);
      if ( Instance )
      {
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
        v14 = (_DWORD *)(Instance + 16);
        *(_DWORD *)(Instance + 28) = *(_DWORD *)(v11 + 112);
        v15 = *(_DWORD *)(v11 + 116);
        if ( (unsigned int)(v15 - 254) > 1 && v15 && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 96LL) + 407LL) )
          v15 = 1;
        *(_DWORD *)(Instance + 36) = v15;
        *(_DWORD *)(Instance + 24) = *(_DWORD *)(v11 + 104);
        *v14 = *(_DWORD *)(*(_QWORD *)(v11 + 88) + 24LL);
        *(_DWORD *)(Instance + 20) = *(_DWORD *)(*(_QWORD *)(v11 + 96) + 24LL);
        *(_DWORD *)(Instance + 80) = *(_DWORD *)(v11 + 164);
        v16 = *(_DWORD *)(v11 + 172);
        *(_DWORD *)(Instance + 84) = v16;
        *(_DWORD *)(Instance + 348) = *(_DWORD *)(v11 + 168);
        if ( v16 == 2 )
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
        v18 = *(_QWORD *)(v11 + 184);
        if ( v18 )
        {
          v22 = *(_OWORD *)(v18 + 16);
          v23 = *(_QWORD *)(v18 + 32);
          v19 = &v28;
          v28 = v22;
          v29 = v23;
        }
        else
        {
          v19 = &v30;
          v30 = *(_OWORD *)&g_DefaultGammaRamp.Type;
          v31 = 0LL;
        }
        v20 = *((_QWORD *)v19 + 2);
        *(_OWORD *)(Instance + 352) = *v19;
        *(_QWORD *)(Instance + 368) = v20;
        if ( !*(_QWORD *)(Instance + 368) )
          goto LABEL_16;
        v24 = *(_QWORD *)(Instance + 360);
        v25 = (void *)operator new[](v24, 0x4E506456u, 256LL, v13);
        v26 = v25;
        if ( v25 )
        {
          memmove(v25, *(const void **)(Instance + 368), v24);
          *(_QWORD *)(Instance + 368) = v26;
LABEL_16:
          *a3 = v14;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
          return 0LL;
        }
        WdLogSingleEntry1(6LL, v24);
        v27 = (void *)Instance;
        WdLogGlobalForLineNumber = 2029;
      }
      else
      {
        WdLogSingleEntry1(6LL, a1);
        v27 = 0LL;
        WdLogGlobalForLineNumber = 1972;
      }
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v27);
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
