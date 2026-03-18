/*
 * XREFs of ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHHI@Z @ 0x140180F4C
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402B351C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x140033D08 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x140040898 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x140051FDC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z @ 0x14037A144 (-IsVSyncAvailable@DXGDEVICE@@QEAAEI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::CheckDevicePresentSettings(DXGDEVICE **this, int a2, int a3, int a4, unsigned int a5)
{
  DXGDEVICE *v9; // rdx
  ADAPTER_DISPLAY *v10; // rcx
  struct DXGDEVICE *VidPnSourceOwner; // rax
  DXGDEVICE *v12; // rax
  struct DXGDEVICE *v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  unsigned int v16; // ebx
  DXGDEVICE *v17; // rax

  if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 235) + 3120LL), this[2], a5) )
  {
    if ( !DXGDEVICE::IsVSyncAvailable(this[2], a5) )
    {
      if ( *((_DWORD *)this[2] + 116) == 1 )
      {
        v16 = -1071775738;
        WdLogSingleEntry3(4LL, -1071775738LL, this, a5);
        WdLogGlobalForLineNumber = 551;
        return v16;
      }
      if ( a2 )
      {
        WdLogSingleEntry3(4LL, 0LL, this, a5);
        result = 3223192376LL;
        WdLogGlobalForLineNumber = 557;
        return result;
      }
    }
    if ( a3 )
      return 0LL;
    v17 = this[2];
    if ( *((_DWORD *)v17 + 116) != 1 || (*((_DWORD *)v17 + a5 + 310) & 0x100) != 0 )
      return 0LL;
    v16 = a4 != 0 ? -1071775719 : -1071775739;
    WdLogSingleEntry3(3LL, (int)v16, this, a5);
    WdLogGlobalForLineNumber = 575;
    return v16;
  }
  WdLogSingleEntry3(3LL, -1071775744LL, this, a5);
  v9 = this[2];
  WdLogGlobalForLineNumber = 500;
  if ( (*(_DWORD *)(*((_QWORD *)v9 + 5) + 408LL) & 4) != 0
    && (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*(ADAPTER_DISPLAY **)(*((_QWORD *)v9 + 235) + 3120LL), a5) == 1 )
  {
    v10 = *(ADAPTER_DISPLAY **)(*((_QWORD *)this[2] + 235) + 3120LL);
    if ( (*(_DWORD *)(*(_QWORD *)(3984LL * a5 + *((_QWORD *)v10 + 16) + 752) + 408LL) & 4) != 0 )
    {
      VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner(v10, a5);
      WdLogSingleEntry3(2LL, this[2], a5, VidPnSourceOwner);
      v12 = this[2];
      WdLogGlobalForLineNumber = 511;
      v13 = ADAPTER_DISPLAY::GetVidPnSourceOwner(*(ADAPTER_DISPLAY **)(*((_QWORD *)v12 + 235) + 3120LL), a5);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"This Dwm Device (0x%I64x) does not have VidPn ownership for source 0x%I64x, another DWM device (0x%I64x) has sha"
         "red ownership, likely Dwm device leak",
        (__int64)this[2],
        a5,
        (__int64)v13,
        0LL,
        0LL);
      LOBYTE(v14) = 1;
      *((_BYTE *)this[2] + 1938) = 1;
      if ( (unsigned __int8)WdIsDebuggerPresent(v14) )
      {
        DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
        __debugbreak();
      }
    }
  }
  return 3223191552LL;
}
