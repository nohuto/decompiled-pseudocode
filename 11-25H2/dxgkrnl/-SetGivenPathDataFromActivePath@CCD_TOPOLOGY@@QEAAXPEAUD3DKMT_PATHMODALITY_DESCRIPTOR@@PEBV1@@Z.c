/*
 * XREFs of ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x140261760
 * Callers:
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1402EBB8C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x140372558 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14004A1A0 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 */

void __fastcall CCD_TOPOLOGY::SetGivenPathDataFromActivePath(
        CCD_TOPOLOGY *this,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        const struct CCD_TOPOLOGY *a3)
{
  __int64 v5; // rdi
  unsigned int i; // ecx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  D3DDDI_RATIONAL PresentationVSync; // rax
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned int v13; // ecx
  unsigned int v14; // edx
  bool v15; // cf
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1065;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1066;
  }
  v5 = *((_QWORD *)a3 + 8);
  for ( i = 0; i < *(unsigned __int16 *)(v5 + 20); ++i )
  {
    v7 = 296LL * i;
    if ( *((_DWORD *)a2 + 4) == *(_DWORD *)(v7 + v5 + 72)
      && *((_DWORD *)a2 + 5) == *(_DWORD *)(v7 + v5 + 76)
      && *((_DWORD *)a2 + 6) == *(_DWORD *)(v7 + v5 + 80)
      && *((_DWORD *)a2 + 7) == *(_DWORD *)(v7 + v5 + 84) )
    {
      v8 = *(_QWORD *)a2;
      if ( (*(_QWORD *)a2 & 2) == 0
        || *((_DWORD *)a2 + 13) == *(_DWORD *)(v7 + v5 + 108) && *((_DWORD *)a2 + 14) == *(_DWORD *)(v7 + v5 + 112) )
      {
        v9 = *(_QWORD *)(v7 + v5 + 56);
        if ( (v9 & 4) == 0 || *(_DWORD *)(v7 + v5 + 136) == 1 )
        {
          if ( (v8 & 0x1000000) != 0 )
          {
            if ( (v9 & 0x800000000LL) != 0 )
            {
              PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v7 + v5 + 88));
              v11 = *((unsigned int *)a2 + 57);
              v12 = *((unsigned int *)a2 + 56);
              if ( v11 * (unsigned __int64)*(unsigned int *)(v7 + v5 + 288) > v12
                                                                            * (unsigned __int64)*(unsigned int *)(v7 + v5 + 292)
                || v11 * (unsigned __int64)PresentationVSync.Numerator < v12
                                                                       * (unsigned __int64)(*((_DWORD *)a2 + 60)
                                                                                          * PresentationVSync.Denominator) )
              {
                return;
              }
            }
            else if ( *((_DWORD *)a2 + 56) != *(_DWORD *)(v7 + v5 + 280)
                   || *((_DWORD *)a2 + 57) != *(_DWORD *)(v7 + v5 + 284)
                   || *((_DWORD *)a2 + 60) != *(_DWORD *)(v7 + v5 + 296) )
            {
              return;
            }
          }
          v13 = *(_DWORD *)(v7 + v5 + 152);
          if ( v13 <= *(_DWORD *)(v7 + v5 + 100) )
          {
            v14 = *(_DWORD *)(v7 + v5 + 156);
            if ( v14 <= *(_DWORD *)(v7 + v5 + 104) && *(_DWORD *)(v7 + v5 + 188) == 1 )
            {
              if ( ((*((_DWORD *)a2 + 33) - 2) & 0xFFFFFFFD) != 0 )
              {
                if ( v13 < *((_DWORD *)a2 + 38) )
                  return;
                v15 = v14 < *((_DWORD *)a2 + 39);
              }
              else
              {
                if ( v13 < *((_DWORD *)a2 + 39) )
                  return;
                v15 = v14 < *((_DWORD *)a2 + 38);
              }
              if ( !v15 )
              {
                if ( (v8 & 0x100) != 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 1151;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"(GivenPathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_VALID) == 0",
                    1151LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( (*(_BYTE *)a2 & 1) != 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 1152;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"(GivenPathDescriptor->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_TMI_ACTIVE_SIZE_VALID) == 0",
                    1152LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( (*((_DWORD *)a2 + 2) & 0x100LL) != 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 1153;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"(GivenPathDescriptor->FixedFlags & D3DKMT_PATHMODALITY_DESCRIPTOR_SMI_FIXED) == 0",
                    1153LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v16 = *((_QWORD *)a2 + 1);
                if ( (v16 & 1) != 0 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 1154;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"(GivenPathDescriptor->FixedFlags & D3DKMT_PATHMODALITY_DESCRIPTOR_TMI_ACTIVE_SIZE_FIXED) == 0",
                    1154LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                  v16 = *((_QWORD *)a2 + 1);
                }
                v17 = *(_QWORD *)a2;
                *((_OWORD *)a2 + 6) = *(_OWORD *)(v7 + v5 + 152);
                *((_OWORD *)a2 + 7) = *(_OWORD *)(v7 + v5 + 168);
                *((_DWORD *)a2 + 11) = *(_DWORD *)(v7 + v5 + 100);
                *((_DWORD *)a2 + 12) = *(_DWORD *)(v7 + v5 + 104);
                if ( (v17 & 2) == 0 )
                {
                  *(_QWORD *)((char *)a2 + 52) = *(_QWORD *)(v7 + v5 + 108);
                  *((_DWORD *)a2 + 20) ^= (*(_DWORD *)(v7 + v5 + 136) ^ *((_DWORD *)a2 + 20)) & 0x1F8;
                  v17 |= 2uLL;
                }
                v18 = v17 | 0x10000000000101LL;
                *((_QWORD *)a2 + 1) = v16 | 0x101;
                *(_QWORD *)a2 = v18;
                v19 = *(_DWORD *)(v7 + v5 + 56) & 0x400 | (unsigned __int64)v18;
                *(_QWORD *)a2 = v19;
                if ( (v19 & 0x1000000) == 0 )
                {
                  *((_QWORD *)a2 + 28) = *(_QWORD *)(v7 + v5 + 280);
                  *((_DWORD *)a2 + 60) = *(_DWORD *)(v7 + v5 + 296);
                  *(_QWORD *)a2 = v19 | 0x1000000;
                }
              }
            }
          }
        }
      }
      return;
    }
  }
}
