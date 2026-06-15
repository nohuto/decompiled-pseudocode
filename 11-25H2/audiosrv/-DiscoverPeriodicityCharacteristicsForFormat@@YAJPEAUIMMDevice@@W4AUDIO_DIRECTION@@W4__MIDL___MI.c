/*
 * XREFs of ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800449C0
 * Callers:
 *     ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180042EEC (-GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__.c)
 *     _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180044110 (_lambda_5789e60fd85b99cd3c89d9f341e01d71_--operator().c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18012F8D4 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x180045080 (-CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SH.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x180083C04 (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x18015E2E8 (-HnsToBlocksRU@@YAJ_KKKPEAK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 DiscoverPeriodicityCharacteristicsForFormat(__int64 *a1, unsigned int a2, int a3, struct _GUID *a4, ...)
{
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r13
  unsigned __int16 *v7; // rsi
  double v8; // xmm1_8
  unsigned int *v9; // r15
  __int64 v10; // rax
  int PacketSizesFromConstraints; // ebx
  struct PacketSizeConstraints *v12; // r15
  unsigned int v13; // edi
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned int *v21; // r14
  unsigned int *v22; // rdx
  unsigned int *v23; // r8
  unsigned int *v24; // rcx
  unsigned int v25; // eax
  unsigned int *v26; // rdx
  unsigned int *v27; // r8
  unsigned int *v28; // rcx
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // eax
  int v33; // r14d
  int v34; // eax
  unsigned int v35; // r15d
  unsigned int v36; // eax
  unsigned int v37; // r13d
  unsigned int v38; // eax
  int v39; // eax
  bool v40; // sf
  unsigned int *v41; // rdx
  unsigned int v42; // eax
  unsigned int *v43; // rax
  unsigned int v44; // ecx
  unsigned __int64 v45; // [rsp+28h] [rbp-59h]
  unsigned __int64 v46; // [rsp+30h] [rbp-51h]
  unsigned int v47; // [rsp+60h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-19h] BYREF
  struct _GUID v49; // [rsp+70h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]
  unsigned int v51; // [rsp+D0h] [rbp+4Fh] BYREF
  unsigned int v52; // [rsp+D8h] [rbp+57h]
  int v53; // [rsp+E0h] [rbp+5Fh]
  struct _GUID *v54; // [rsp+E8h] [rbp+67h]
  void *Src; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list Srca; // [rsp+F0h] [rbp+6Fh]
  struct PacketSizeConstraints *v57; // [rsp+F8h] [rbp+77h]
  __int64 v58; // [rsp+100h] [rbp+7Fh]
  unsigned __int64 v59; // [rsp+108h] [rbp+87h] BYREF
  va_list va1; // [rsp+108h] [rbp+87h]
  unsigned int *v61; // [rsp+110h] [rbp+8Fh]
  unsigned int *v62; // [rsp+118h] [rbp+97h]
  unsigned int *v63; // [rsp+120h] [rbp+9Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+9Fh]
  unsigned int *v65; // [rsp+128h] [rbp+A7h]
  unsigned int *v66; // [rsp+130h] [rbp+AFh]
  va_list va3; // [rsp+138h] [rbp+B7h] BYREF

  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(Srca, a4);
  Src = va_arg(va1, void *);
  v57 = va_arg(va1, struct PacketSizeConstraints *);
  v58 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v59 = va_arg(va2, _QWORD);
  v61 = va_arg(va2, unsigned int *);
  v62 = va_arg(va2, unsigned int *);
  va_copy(va3, va2);
  v63 = va_arg(va3, unsigned int *);
  v65 = va_arg(va3, unsigned int *);
  v66 = va_arg(va3, unsigned int *);
  v54 = a4;
  v53 = a3;
  v52 = a2;
  v5 = 100000LL;
  v6 = v59;
  if ( v59 )
    v5 = v59;
  v7 = (unsigned __int16 *)Src;
  v8 = (double)(int)v5 * (double)*((int *)Src + 1) / 10000000.0 + 0.5;
  *v65 = (int)v8;
  *v63 = (int)v8;
  *v62 = (int)v8;
  v9 = v61;
  *v61 = (int)v8;
  v10 = *a1;
  pv = 0LL;
  PacketSizesFromConstraints = (*(__int64 (__fastcall **)(__int64 *, LPVOID *))(v10 + 40))(a1, &pv);
  if ( PacketSizesFromConstraints < 0 )
  {
    v19 = 526LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)PacketSizesFromConstraints);
    if ( pv )
      CoTaskMemFree(pv);
    return (unsigned int)PacketSizesFromConstraints;
  }
  if ( (unsigned int)GetClassFromEndpointId(pv) )
  {
    v21 = v65;
    goto LABEL_22;
  }
  v12 = v57;
  if ( v57 && (v58 & 2) != 0 )
  {
    LODWORD(v59) = 0;
    LODWORD(Src) = 0;
    v51 = 0;
    v47 = 0;
    v49 = *v54;
    PacketSizesFromConstraints = GetPacketSizesFromConstraints(
                                   v57,
                                   *((_DWORD *)v7 + 2),
                                   v7[6],
                                   &v49,
                                   v5,
                                   v45,
                                   v46,
                                   (unsigned int *)va1,
                                   (unsigned int *)Srca,
                                   &v51,
                                   &v47);
    if ( PacketSizesFromConstraints < 0 )
    {
      v19 = 547LL;
      goto LABEL_13;
    }
    v25 = v59;
    v21 = v65;
    *v65 = v59;
    v26 = v63;
    *v63 = v25;
    v27 = v62;
    *v62 = v25;
    v28 = v61;
    *v61 = v25;
    if ( !v53 && !v6 )
    {
      *v27 = (unsigned int)Src;
      *v26 = v51;
      if ( v52 != 1 || (v29 = v47, !*(_BYTE *)v12) )
        v29 = *v28;
      *v21 = v29;
    }
    v9 = v28;
    goto LABEL_22;
  }
  v13 = v7[8] + 64;
  v14 = CoTaskMemAlloc(v13);
  v15 = v14;
  *(_QWORD *)&v49.Data1 = v14;
  if ( v14 )
  {
    *v14 = v7[8] + 64;
    v14[1] = GetSessionIdFromEndpointId(pv);
    v15[2] = v53;
    *(struct _GUID *)(v15 + 3) = *v54;
    memcpy_0(v15 + 11, v7, v7[8] + 18LL);
    LODWORD(v59) = 0;
    v16 = CheckConnectorSupportForPeriodicity(a1, v52, v15, v13, v5);
    v17 = v16;
    if ( v16 < 0 )
    {
      if ( v16 == -2005139404 )
      {
        CoTaskMemFree(v15);
        if ( pv )
          CoTaskMemFree(pv);
        return 2289827892LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24E,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v16);
        CoTaskMemFree(v15);
        if ( pv )
          CoTaskMemFree(pv);
        return v17;
      }
    }
    v20 = v59;
    v21 = v65;
    *v65 = v59;
    v22 = v63;
    *v63 = v20;
    v23 = v62;
    *v62 = v20;
    v24 = v61;
    *v61 = v20;
    if ( v53 || v6 )
      goto LABEL_20;
    if ( v12 )
    {
      LODWORD(v63) = 0;
      v49 = *v54;
      v30 = GetPacketSizesFromConstraints(
              v12,
              *((_DWORD *)v7 + 2),
              v7[6],
              &v49,
              0x186A0uLL,
              (unsigned __int64)va1,
              v46,
              v24,
              v23,
              v22,
              (unsigned int *)va2);
      v31 = v30;
      if ( v30 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x269,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v30);
        CoTaskMemFree(v15);
        if ( pv )
          CoTaskMemFree(pv);
        return v31;
      }
      if ( v52 == 1 && *(_BYTE *)v12 )
      {
        v32 = (unsigned int)v63;
        v9 = v61;
      }
      else
      {
        v9 = v61;
        v32 = *v61;
      }
      *v21 = v32;
      goto LABEL_21;
    }
    if ( (v58 & 1) == 0 )
    {
LABEL_20:
      v9 = v24;
    }
    else
    {
      v33 = 0;
      LODWORD(Src) = 0;
      v34 = HnsToBlocksRU(0x61A8uLL, *((_DWORD *)v7 + 2), v7[6], (unsigned int *)Srca);
      v35 = v34;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x27A,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v34);
        CoTaskMemFree(v15);
        if ( pv )
          CoTaskMemFree(pv);
        return v35;
      }
      v36 = ((_DWORD)Src - 1) & 0xFFFFFFE0;
      v9 = v61;
      v37 = v52;
      while ( 1 )
      {
        v38 = v36 + 32;
        v47 = v38;
        v51 = v38;
        LODWORD(Src) = v38;
        if ( v38 >= *v9 )
          break;
        v39 = CheckConnectorSupportForPeriodicity(
                a1,
                v37,
                v15,
                v13,
                (unsigned int)(int)((double)(int)v38 * 10000000.0 / (double)*((int *)v7 + 1) + 0.5));
        v40 = v39 < 0;
        if ( v39 >= 0 )
        {
          if ( (_DWORD)Src == (_DWORD)v59 )
          {
            v41 = v63;
            *v63 = v59;
            goto LABEL_63;
          }
          v40 = v39 < 0;
        }
        v36 = v47;
        if ( v40 )
          v36 = v51;
      }
      v41 = v63;
LABEL_63:
      if ( *v41 < *v9 )
      {
        while ( v33 < 3 )
        {
          LODWORD(Src) = 32 * (1 << v33);
          v42 = (_DWORD)Src * ((*v41 - 1) / (unsigned int)Src + 1);
          LODWORD(v61) = v42;
          if ( v42 < *v9
            && (int)CheckConnectorSupportForPeriodicity(
                      a1,
                      v37,
                      v15,
                      v13,
                      (unsigned int)(int)((double)(int)v42 * 10000000.0 / (double)*((int *)v7 + 1) + 0.5)) >= 0
            && (_DWORD)v59 == (_DWORD)v61 )
          {
            v43 = v62;
            *v62 = (unsigned int)Src;
            v41 = v63;
            goto LABEL_72;
          }
          ++v33;
          v41 = v63;
        }
        v43 = v62;
LABEL_72:
        v44 = *v9;
        v21 = v65;
        if ( *v43 == *v9 )
        {
          *v43 = v44;
          *v41 = v44;
        }
      }
      else
      {
        v21 = v65;
      }
    }
LABEL_21:
    CoTaskMemFree(v15);
LABEL_22:
    *v66 = *v21;
    if ( *v21 > *v9 )
      *v21 = *v9;
    if ( pv )
      CoTaskMemFree(pv);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x241,
    (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
    (const char *)0x8007000ELL);
  if ( pv )
    CoTaskMemFree(pv);
  return 2147942414LL;
}
