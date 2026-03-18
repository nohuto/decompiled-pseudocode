/*
 * XREFs of ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x140375E08
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x140374788 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1400631BC (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z @ 0x1401B4D44 (-DxgkpConvertRects@@YAXJJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBUtagRECT@@IPEAU2@2@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1402E0FA8 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 */

__int64 __fastcall DxgkCddUpdatePresentRects(
        struct ADAPTER_DISPLAY *a1,
        unsigned int a2,
        struct tagRECT **a3,
        unsigned int *a4)
{
  __int64 v6; // rdi
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v9; // rcx
  int v10; // r14d
  int v11; // r15d
  LONG right; // ecx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION CurrentOrientation; // eax
  unsigned int v15; // [rsp+40h] [rbp-20h] BYREF
  struct tagRECT *v16; // [rsp+48h] [rbp-18h] BYREF
  tagRECT v17; // [rsp+50h] [rbp-10h] BYREF

  v16 = 0LL;
  v15 = -1;
  v6 = a2;
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(a1, a2);
  if ( CddInterface )
  {
    (*((void (__fastcall **)(_QWORD, struct tagRECT **, unsigned int *))CddInterface + 3))(
      *(_QWORD *)CddInterface,
      &v16,
      &v15);
    if ( v15 )
    {
      if ( v15 != -1 )
      {
        v9 = *((_QWORD *)a1 + 16);
        v10 = *(_DWORD *)(4024 * v6 + v9 + 636) - *(_DWORD *)(4024 * v6 + v9 + 628);
        v11 = *(_DWORD *)(4024 * v6 + v9 + 640) - *(_DWORD *)(4024 * v6 + v9 + 632);
        v17 = *(tagRECT *)(4024 * v6 + v9 + 688);
        if ( (((unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)a1, v6, 1) - 2) & 0xFFFFFFFD) == 0 )
        {
          right = v17.right;
          v17.right = v17.bottom;
          v17.bottom = right;
        }
        CurrentOrientation = (unsigned int)ADAPTER_DISPLAY::GetCurrentOrientation((__int64)a1, v6, 0);
        DxgkpConvertRects(v10, v11, CurrentOrientation, &v17, v15, v16, v16);
        *a4 = v15;
        *a3 = v16;
      }
    }
    else
    {
      *a4 = 0;
    }
  }
  return 0LL;
}
