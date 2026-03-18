/*
 * XREFs of ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0E@Z @ 0x140054C68
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140380FF4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDisplayModeEqual(const struct _D3DKMT_DISPLAYMODE *a1, const struct _D3DKMT_DISPLAYMODE *a2, char a3)
{
  char v4; // r10
  int Flags; // ecx
  int v6; // r8d
  D3DDDIFORMAT Format; // eax
  D3DDDIFORMAT v8; // ecx
  int v9; // r8d

  v4 = 1;
  if ( !a3 )
  {
    if ( a1->RefreshRate.Numerator != a2->RefreshRate.Numerator )
      return 0;
    if ( a1->RefreshRate.Denominator != a2->RefreshRate.Denominator )
      return 0;
    if ( a1->ScanLineOrdering != a2->ScanLineOrdering )
      return 0;
    if ( a1->DisplayOrientation != a2->DisplayOrientation )
      return 0;
    if ( a1->DisplayFixedOutput != a2->DisplayFixedOutput )
      return 0;
    Flags = (int)a1->Flags;
    v6 = (int)a2->Flags;
    if ( (((unsigned __int8)v6 ^ (unsigned __int8)Flags) & 1) != 0
      || (((unsigned __int8)v6 ^ (unsigned __int8)Flags) & 2) != 0
      || ((*((_BYTE *)&a2->Flags + 4) ^ *((_BYTE *)&a1->Flags + 4)) & 0xF) != 0 )
    {
      return 0;
    }
  }
  if ( a1->Width != a2->Width || a1->Height != a2->Height )
    return 0;
  Format = a2->Format;
  v8 = a1->Format;
  if ( v8 != Format
    && (v8 != D3DDDIFMT_A8R8G8B8 || Format != D3DDDIFMT_X8R8G8B8)
    && (v8 != D3DDDIFMT_X8R8G8B8 || Format != D3DDDIFMT_A8R8G8B8) )
  {
    return 0;
  }
  v9 = *((_DWORD *)&a2->Flags + 1);
  if ( (((unsigned __int8)v9 ^ *((_BYTE *)&a1->Flags + 4)) & 0x10) != 0
    || (((unsigned __int8)v9 ^ (unsigned __int8)*((_DWORD *)&a1->Flags + 1)) & 0x20) != 0 )
  {
    return 0;
  }
  return v4;
}
