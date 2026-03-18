/*
 * XREFs of ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x140425B64
 * Callers:
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1401B7D90 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140285A10 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140037374 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004FDB4 (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x14009F020 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     ?IsAllocationPinnableOrNoNeedPin@DXGDEVICE@@QEAAHIPEBVDXGALLOCATION@@@Z @ 0x1401B8A50 (-IsAllocationPinnableOrNoNeedPin@DXGDEVICE@@QEAAHIPEBVDXGALLOCATION@@@Z.c)
 *     ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x140310EFC (-PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140329108 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 */

__int64 __fastcall MANAGEDPRIMARIESTRACKER::RestoreManagedPrimaryState(MANAGEDPRIMARIESTRACKER *this, int a2)
{
  int v4; // eax
  unsigned int v5; // r14d
  __int64 v6; // rbp
  const struct DXGALLOCATION *v7; // r8
  int v8; // eax
  __int64 v9; // rbx
  int updated; // eax
  __int64 v11; // rbx
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-30h]

  if ( !*(_QWORD *)this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 143;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pDisplayCore != NULL", 143LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *((_DWORD *)this + 104);
  if ( (v4 & 4) != 0 )
  {
    *((_DWORD *)this + 104) = v4 & 0xFFFFFFFB;
    if ( a2 )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)this + 16LL)) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 161;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"m_pDisplayCore->IsCoreResourceExclusiveOwner()",
          161LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v5 = 0;
      if ( (*((_DWORD *)this + 104) & 0xFFFFFFF8) != 0 )
      {
        do
        {
          v6 = *((_QWORD *)this + v5 + 2);
          if ( v6 )
          {
            if ( *(_QWORD *)(v6 + 1880) != *(_QWORD *)(*(_QWORD *)this + 16LL)
              || !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*(ADAPTER_RENDER **)(v6 + 16)) )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 170;
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                0xFFFFFFFFLL,
                L"(pOwnerDevice == NULL) || ((pOwnerDevice->GetDisplayAdapter(VidPnSourceId) == m_pDisplayCore->GetAdapter"
                 "()) && (pOwnerDevice->GetRenderCore()->IsCoreResourceExclusiveOwner()))",
                170LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)this, (const struct DXGDEVICE *)v6, v5) )
            {
              if ( *((_BYTE *)this + v5 + 400) )
              {
                if ( (*((_DWORD *)this + v5 + 84) & 0x200) != 0 )
                {
                  v7 = (const struct DXGALLOCATION *)*((_QWORD *)this + v5 + 18);
                  if ( v7 )
                  {
                    if ( (unsigned int)DXGDEVICE::IsAllocationPinnableOrNoNeedPin((DXGDEVICE *)v6, v5, v7) )
                    {
                      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + v5 + 18) + 48LL) + 4LL) & 1) != 0 )
                      {
                        if ( (*((_DWORD *)this + v5 + 84) & 0x100) == 0 )
                        {
                          WdLogSingleEntry0(1LL);
                          WdLogGlobalForLineNumber = 210;
                          DxgkLogInternalTriageEvent(
                            0LL,
                            262146,
                            0xFFFFFFFFLL,
                            L"m_PrimaryDescription[VidPnSourceId].Pinned",
                            210LL,
                            0LL,
                            0LL,
                            0LL,
                            0LL);
                        }
                        if ( !ADAPTER_DISPLAY::IsVidPnSourceVisible(*(ADAPTER_DISPLAY **)this, v5)
                          || (*(_DWORD *)(v6 + 4LL * v5 + 1240) & 0x300) != 0x300 )
                        {
                          v8 = DXGDEVICE::PinPrimaryAllocations((DXGDEVICE *)v6, v5);
                          if ( v8 >= 0 )
                          {
                            updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                                        *(PERESOURCE ***)this,
                                        (PERESOURCE **)v6,
                                        v5,
                                        *(struct DXGADAPTERALLOCATION **)(*((_QWORD *)this + v5 + 18) + 48LL));
                            if ( updated >= 0 )
                            {
                              DXGDEVICE::SetDisplayedPrimary(
                                (DXGDEVICE *)v6,
                                v5,
                                *((const struct DXGALLOCATION **)this + v5 + 18),
                                *((_DWORD *)this + v5 + 68),
                                1u);
                              *(_DWORD *)(v6 + 4LL * v5 + 1240) |= 0x200u;
                            }
                            else
                            {
                              v11 = updated;
                              WdLogSingleEntry4(
                                2LL,
                                updated,
                                *(_QWORD *)(*(_QWORD *)this + 16LL),
                                v5,
                                *((_QWORD *)this + v5 + 18));
                              v14 = *((_QWORD *)this + v5 + 18);
                              v13 = *(_QWORD *)(*(_QWORD *)this + 16LL);
                              WdLogGlobalForLineNumber = 249;
                              DxgkLogInternalTriageEvent(
                                0LL,
                                0x40000,
                                0xFFFFFFFFLL,
                                L"Status=0x%I64x Adapter 0x%I64x: UpdateModeWithPrimary failed 0x%I64x 0x%I64x",
                                v11,
                                v13,
                                v5,
                                v14,
                                0LL);
                            }
                          }
                          else
                          {
                            v9 = v8;
                            WdLogSingleEntry3(2LL, v8, v6, v5);
                            WdLogGlobalForLineNumber = 235;
                            DxgkLogInternalTriageEvent(
                              0LL,
                              0x40000,
                              0xFFFFFFFFLL,
                              L"Status=0x%I64x Device 0x%I64x: PinPrimaryAllocations failed 0x%I64x",
                              v9,
                              v6,
                              v5,
                              0LL,
                              0LL);
                          }
                        }
                      }
                    }
                    else
                    {
                      MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"Displayed Primary is not in the primary allocation"
                                                                      " list during RestoreManagedPrimaryState.");
                    }
                  }
                }
              }
            }
          }
          ++v5;
        }
        while ( v5 < *((_DWORD *)this + 104) >> 3 );
      }
    }
  }
  return 0LL;
}
