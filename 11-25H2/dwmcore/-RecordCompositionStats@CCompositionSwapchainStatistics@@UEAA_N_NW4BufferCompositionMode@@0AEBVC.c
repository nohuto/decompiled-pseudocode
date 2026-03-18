/*
 * XREFs of ?RecordCompositionStats@CCompositionSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18010A820
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastPresentCount@CGlobalCompositionSurfaceInfo@@UEBAIXZ @ 0x18010A810 (-GetLastPresentCount@CGlobalCompositionSurfaceInfo@@UEBAIXZ.c)
 *     ??$_Emplace_reallocate@AEBURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@?$vector@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@V?$allocator@URenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@std@@@std@@AEAAPEAURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@QEAU23@AEBU23@@Z @ 0x18020BC00 (--$_Emplace_reallocate@AEBURenderedCompositionFrameInstance@CCompositionSwapchainStatistics@@@-$.c)
 *     ?OutputMatchesMonitorTarget@CCompositionSwapchainStatistics@@CA_NAEBUPresentationOutputID@@AEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180217B58 (-OutputMatchesMonitorTarget@CCompositionSwapchainStatistics@@CA_NAEBUPresentationOutputID@@AEBUt.c)
 *     McTemplateU0pxxxq_EventWriteTransfer @ 0x18022831C (McTemplateU0pxxxq_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSwapchainStatistics::RecordCompositionStats(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        float *a5,
        int a6,
        struct tagCOMPOSITION_TARGET_ID *a7)
{
  CGlobalCompositionSurfaceInfo *v9; // rcx
  __int64 (*v10)(void); // rax
  unsigned int LastPresentCount; // eax
  int v13; // ebx
  __int64 i; // r8
  _QWORD *v15; // rax
  float v16; // xmm0_4
  unsigned int v17; // xmm1_4
  _OWORD *v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  char v22; // al
  int v23; // edx
  _BYTE v24[16]; // [rsp+48h] [rbp-31h] BYREF
  __int128 v25; // [rsp+58h] [rbp-21h] BYREF
  __int128 v26; // [rsp+68h] [rbp-11h]
  __int128 v27; // [rsp+78h] [rbp-1h]
  __int128 v28; // [rsp+88h] [rbp+Fh]

  v9 = *(CGlobalCompositionSurfaceInfo **)(a1 + 16);
  v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 320LL);
  if ( (char *)v10 == (char *)CGlobalCompositionSurfaceInfo::GetLastPresentCount )
    LastPresentCount = CGlobalCompositionSurfaceInfo::GetLastPresentCount(v9);
  else
    LastPresentCount = v10();
  if ( LastPresentCount <= *(_DWORD *)(a1 + 56) )
    return 0;
  if ( a3 )
  {
    if ( a3 == 1 )
      v13 = 3;
    else
      v13 = 0;
  }
  else
  {
    v13 = (a7 != 0LL) + 1;
  }
  for ( i = *(_QWORD *)(a1 + 24); i != *(_QWORD *)(a1 + 32); i += 64LL )
  {
    if ( *(_DWORD *)i == v13
      && (!a7
       || CCompositionSwapchainStatistics::OutputMatchesMonitorTarget((const struct PresentationOutputID *)(i + 4), a7))
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(i + 32) - *a5) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(i + 36) - a5[1]) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(i + 40) - a5[4]) & _xmm) <= 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(i + 44) - a5[5]) & _xmm) <= 0.0000011920929 )
    {
      return 0;
    }
  }
  *(_QWORD *)(a1 + 48) = *((_QWORD *)g_pComposition + 111);
  memset_0(&v25, 0, 0x40uLL);
  LODWORD(v25) = v13;
  if ( a7 )
  {
    *(_QWORD *)((char *)&v25 + 4) = *(_QWORD *)a7;
    LODWORD(v26) = *((_DWORD *)a7 + 6);
    HIDWORD(v25) = *((_DWORD *)a7 + 4);
    *(_QWORD *)((char *)&v26 + 4) = *((_QWORD *)a7 + 1);
  }
  BYTE12(v26) = v13 == 2
             && (v15 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 16) + 80LL))(
                                   *(_QWORD *)(a1 + 16),
                                   v24),
                 *(_QWORD *)((char *)&v26 + 4) != *v15);
  v16 = *a5;
  v17 = *((_DWORD *)a5 + 1);
  *(_QWORD *)&v28 = 0LL;
  v18 = *(_OWORD **)(a1 + 32);
  *(_QWORD *)&v27 = __PAIR64__(v17, LODWORD(v16));
  *((_QWORD *)&v27 + 1) = *((_QWORD *)a5 + 2);
  DWORD2(v28) = a6;
  if ( v18 == *(_OWORD **)(a1 + 40) )
  {
    std::vector<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance>::_Emplace_reallocate<CCompositionSwapchainStatistics::RenderedCompositionFrameInstance const &>(
      a1 + 24,
      v18,
      &v25);
    LOBYTE(v13) = v25;
  }
  else
  {
    v19 = v26;
    *v18 = v25;
    v20 = v27;
    v18[1] = v19;
    v21 = v28;
    v18[2] = v20;
    v18[3] = v21;
    *(_QWORD *)(a1 + 32) += 64LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 320LL))(*(_QWORD *)(a1 + 16));
    McTemplateU0pxxxq_EventWriteTransfer(
      *(_QWORD *)(a1 + 48),
      v23,
      *(_QWORD *)(a1 + 64),
      *(_QWORD *)(a1 + 72),
      *(_QWORD *)(a1 + 48),
      v22,
      v13);
  }
  return 1;
}
