/*
 * XREFs of ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140019A04
 * Callers:
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140019860 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z @ 0x14001A350 (-Combine@CRegion@@UEAAJAEBUIRegion@@W4CombineMode@2@@Z.c)
 *     ?Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z @ 0x1401299B0 (-Create@CRegion@@SAJAEBUtagRECT@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140019D9C (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z @ 0x140028934 (-RegionCore_set_to_null_scan@Win32kRS@@YAXPEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z @ 0x140029090 (-RegionCore_set_sizeScan@Win32kRS@@YAXPEAVREGION_CORE@@K@Z.c)
 *     ?RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z @ 0x140029144 (-RegionCore_get_pScan_mut@Win32kRS@@YAPEAVSCAN@@PEAVREGION_CORE@@@Z.c)
 *     ?RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z @ 0x14002A15C (-RegionCore_get_sizeScan@Win32kRS@@YAKPEBVREGION_CORE@@@Z.c)
 *     ?RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z @ 0x14002AE28 (-RegionCore_set_to_rect@Win32kRS@@YAXPEAVREGION_CORE@@PEBU_RECTL@@@Z.c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::InitializeFromRect(CRegion *this, const struct tagRECT *a2)
{
  unsigned int v4; // edi
  struct REGION_CORE *v5; // rdx
  struct REGION_CORE *RegionCore; // rbx
  PVOID SystemArgument1; // rax
  unsigned __int64 v8; // rcx
  struct SCAN *pScan_mut; // rcx
  const struct _RECTL *left; // r8
  LONG top; // ecx
  LONG right; // r9d
  struct REGION_CORE *bottom; // rdx
  __int64 v15; // rdx
  _DWORD *v16; // rdx
  unsigned __int64 v17; // rcx
  struct SCAN *v18; // rdx
  int v19; // eax
  _DWORD *v20; // rdx
  _DWORD *v21; // rdx
  unsigned __int64 v22; // rcx
  struct SCAN *v23; // rax
  struct SCAN *v24; // rdx
  __int128 v25; // [rsp+20h] [rbp-20h] BYREF

  v4 = -1073741801;
  RegionCore = RGNCOREMEMOBJ::AllocateRegionCore((unsigned int)this);
  if ( RegionCore )
  {
    SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      Win32kRS::RegionCore_set_to_null_scan(RegionCore, v5);
      SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
    }
    else
    {
      v8 = *((_QWORD *)RegionCore + 1);
      *((_QWORD *)RegionCore + 2) = 16LL;
      if ( v8 < 0x10 )
      {
        *((_QWORD *)RegionCore + 2) = v8;
        RustOnZeroSizedScanCallback();
        SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
      }
      *((_DWORD *)RegionCore + 6) = 1;
      *(_OWORD *)((char *)RegionCore + 28) = 0LL;
      if ( SystemArgument1 )
      {
        pScan_mut = Win32kRS::RegionCore_get_pScan_mut(RegionCore, v5);
        SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
      }
      else
      {
        pScan_mut = *(struct SCAN **)RegionCore;
      }
      *(_DWORD *)pScan_mut = 0;
      *((_DWORD *)pScan_mut + 3) = 0;
      *((_DWORD *)pScan_mut + 1) = 0x80000000;
      *((_DWORD *)pScan_mut + 2) = 0x7FFFFFFF;
    }
    left = (const struct _RECTL *)(unsigned int)a2->left;
    top = a2->top;
    right = a2->right;
    bottom = (struct REGION_CORE *)(unsigned int)a2->bottom;
    LODWORD(v25) = a2->left;
    *(_QWORD *)((char *)&v25 + 4) = __PAIR64__(right, top);
    HIDWORD(v25) = (_DWORD)bottom;
    if ( SystemArgument1 )
    {
      Win32kRS::RegionCore_set_to_rect(RegionCore, (struct REGION_CORE *)&v25, left);
    }
    else if ( (_DWORD)left == right || top == (_DWORD)bottom )
    {
      v22 = *((_QWORD *)RegionCore + 1);
      *((_QWORD *)RegionCore + 2) = 16LL;
      if ( v22 < 0x10 )
      {
        *((_QWORD *)RegionCore + 2) = v22;
        RustOnZeroSizedScanCallback();
        SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
      }
      *((_DWORD *)RegionCore + 6) = 1;
      *(_OWORD *)((char *)RegionCore + 28) = 0LL;
      if ( SystemArgument1 )
        v23 = Win32kRS::RegionCore_get_pScan_mut(RegionCore, bottom);
      else
        v23 = *(struct SCAN **)RegionCore;
      *(_DWORD *)v23 = 0;
      *((_DWORD *)v23 + 3) = 0;
      *((_DWORD *)v23 + 1) = 0x80000000;
      *((_DWORD *)v23 + 2) = 0x7FFFFFFF;
    }
    else
    {
      *(_OWORD *)((char *)RegionCore + 28) = v25;
      v15 = 56LL;
      if ( *((_DWORD *)RegionCore + 4) == 56 )
      {
        v24 = *(struct SCAN **)RegionCore;
        *((_DWORD *)v24 + 2) = DWORD1(v25);
        v16 = (_DWORD *)((char *)v24 + (unsigned int)(4 * *(_DWORD *)v24 + 16));
        v16[1] = DWORD1(v25);
        v16[2] = HIDWORD(v25);
        v16[3] = v25;
        v16[4] = DWORD2(v25);
        *(_DWORD *)((char *)v16 + (unsigned int)(4 * *v16 + 16) + 4) = HIDWORD(v25);
      }
      else
      {
        v17 = *((_QWORD *)RegionCore + 1);
        *((_QWORD *)RegionCore + 2) = 56LL;
        if ( v17 < 0x38 )
        {
          *((_QWORD *)RegionCore + 2) = v17;
          RustOnZeroSizedScanCallback();
          SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
        }
        *((_DWORD *)RegionCore + 6) = 3;
        if ( SystemArgument1 )
          v18 = Win32kRS::RegionCore_get_pScan_mut(RegionCore, (struct REGION_CORE *)v15);
        else
          v18 = *(struct SCAN **)RegionCore;
        *(_DWORD *)v18 = 0;
        *((_DWORD *)v18 + 1) = 0x80000000;
        v19 = DWORD1(v25);
        *((_DWORD *)v18 + 3) = 0;
        *((_DWORD *)v18 + 2) = v19;
        v20 = (_DWORD *)((char *)v18 + 16);
        *v20 = 2;
        v20[1] = DWORD1(v25);
        v20[2] = HIDWORD(v25);
        v20[3] = v25;
        v20[4] = DWORD2(v25);
        v20[5] = 2;
        v21 = (_DWORD *)((char *)v20 + (unsigned int)(4 * *v20 + 16));
        *v21 = 0;
        v21[1] = HIDWORD(v25);
        v21[2] = 0x7FFFFFFF;
        v21[3] = 0;
      }
    }
    *((_QWORD *)this + 2) = RegionCore;
    v4 = 0;
    *((_DWORD *)this + 3) = 2;
  }
  return v4;
}
