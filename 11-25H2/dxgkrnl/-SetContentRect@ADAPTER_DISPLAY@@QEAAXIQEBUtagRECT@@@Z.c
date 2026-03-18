/*
 * XREFs of ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1400576F4
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CF78 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1403D8B40 (-DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x140412150 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z @ 0x1403A6598 (-DmmGetMostImportantClientVidPnPathTargetsFromSource@@YAJQEAXIQEAI@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::SetContentRect(ADAPTER_DISPLAY *this, unsigned int a2, const struct tagRECT *const a3)
{
  *(struct tagRECT *)(3984LL * a2 + *((_QWORD *)this + 16) + 628) = *a3;
  if ( *((_DWORD *)this + 36) && a3->right > a3->left )
  {
    if ( a3->left || a3->top )
    {
      if ( a2 == *((_DWORD *)this + 34) )
        *((_DWORD *)this + 36) = 2;
    }
    else
    {
      *((_DWORD *)this + 36) = 1;
      if ( a2 != *((_DWORD *)this + 34) )
      {
        *((_DWORD *)this + 34) = a2;
        if ( DmmGetMostImportantClientVidPnPathTargetsFromSource(
               *((void *const *)this + 2),
               a2,
               (unsigned int *const)this + 35) < 0 )
          *((_DWORD *)this + 36) = 3;
      }
    }
  }
}
