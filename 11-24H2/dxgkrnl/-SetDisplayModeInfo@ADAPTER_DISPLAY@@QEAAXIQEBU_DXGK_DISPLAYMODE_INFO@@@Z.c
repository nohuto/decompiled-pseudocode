/*
 * XREFs of ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14002974C
 * Callers:
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x140259010 (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14037C6F0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x14040D3E0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer @ 0x140029C90 (McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x140283840 (-UpdateDisplayModeInfo@DXGDODPRESENT@@QEAAXIPEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetDisplayModeInfo(
        DXGADAPTER **this,
        unsigned int a2,
        const struct _DXGK_DISPLAYMODE_INFO *const a3)
{
  __int64 v4; // rbp
  int v6; // edx
  int v7; // r8d
  DXGADAPTER *v8; // rax
  __int64 v9; // rsi
  DXGADAPTER *v10; // rcx
  int v11; // eax
  DXGADAPTER *v12; // rcx
  int v13; // eax
  DXGDODPRESENT *v14; // rcx
  bool v15; // zf

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5892;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"IsCoreResourceExclusiveOwner()",
      5892LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5893;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      5893LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = this[16];
  v9 = 4024 * v4;
  *(_OWORD *)((char *)v8 + v9 + 992) = *(_OWORD *)a3;
  *(_OWORD *)((char *)v8 + v9 + 1008) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)v8 + v9 + 1024) = *((_OWORD *)a3 + 2);
  *(_OWORD *)((char *)v8 + v9 + 1040) = *((_OWORD *)a3 + 3);
  *(_OWORD *)((char *)v8 + v9 + 1056) = *((_OWORD *)a3 + 4);
  v10 = this[16];
  v11 = *((_DWORD *)v10 + 1006 * v4 + 157);
  if ( ((*((_DWORD *)a3 + 7) - 2) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)((char *)v10 + v9 + 636) = *(_DWORD *)a3 + v11;
    v12 = this[16];
    v13 = *((_DWORD *)a3 + 1) + *(_DWORD *)((char *)v12 + v9 + 632);
  }
  else
  {
    *(_DWORD *)((char *)v10 + v9 + 636) = *((_DWORD *)a3 + 1) + v11;
    v12 = this[16];
    v13 = *(_DWORD *)a3 + *(_DWORD *)((char *)v12 + v9 + 632);
  }
  *(_DWORD *)((char *)v12 + v9 + 640) = v13;
  v14 = this[58];
  if ( v14 )
    DXGDODPRESENT::UpdateDisplayModeInfo(v14, v4, (struct _D3DKMT_DISPLAYMODE *)((char *)this[16] + v9 + 992));
  v15 = bTracingEnabled == 0;
  *(_DWORD *)((char *)this[16] + v9 + 1116) = -1;
  *(_DWORD *)((char *)this[16] + v9 + 1120) = -1;
  if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0pqqqqqqqqqqqq_EtwWriteTransfer(
      *((_BYTE *)a3 + 36) & 1,
      v6,
      v7,
      (_DWORD)this,
      v4,
      *(_DWORD *)a3,
      *((_DWORD *)a3 + 1),
      *((_DWORD *)a3 + 2),
      *((_DWORD *)a3 + 4),
      *((_DWORD *)a3 + 5),
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 7),
      *((_DWORD *)a3 + 8),
      *((_BYTE *)a3 + 36) & 1,
      *((_DWORD *)a3 + 11),
      *((_DWORD *)a3 + 12));
}
