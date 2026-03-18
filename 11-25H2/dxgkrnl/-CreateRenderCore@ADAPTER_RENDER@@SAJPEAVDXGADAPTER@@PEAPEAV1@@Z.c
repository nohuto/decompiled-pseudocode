/*
 * XREFs of ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x140199E78
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x14006561C (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ??0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1401992B0 (--0ADAPTER_RENDER@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019A850 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x14019B49C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateRenderCore(
        struct DXGADAPTER *a1,
        struct ADAPTER_RENDER **a2,
        __int64 a3,
        __int64 (__fastcall *a4)(void *const, struct _DXGKARG_ACQUIRESWIZZLINGRANGE *))
{
  __int64 (__fastcall *v6)(void *const, struct _DXGKARG_CREATEOVERLAY *); // rax
  __int64 (__fastcall *v7)(void *const, const struct _DXGKARG_UPDATEOVERLAY *); // rcx
  __int64 (__fastcall *v8)(void *const, const struct _DXGKARG_FLIPOVERLAY *); // rdx
  __int64 (__fastcall *v9)(void *const); // r8
  int v10; // ecx
  __int64 v11; // rax
  const wchar_t *v12; // r9
  int v13; // eax
  __int64 v14; // rax
  const wchar_t *v15; // r9
  __int64 result; // rax
  int v17; // eax
  int v18; // edx
  unsigned int v19; // eax
  int v20; // ecx
  __int64 v21; // rdx
  ADAPTER_RENDER *v22; // rax
  ADAPTER_RENDER *v23; // rax
  struct ADAPTER_RENDER *v24; // rdi
  int v25; // esi

  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 480;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"i_pAdapter != NULL", 480LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 481;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"o_ppRenderCore != NULL", 481LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_BYTE *)a1 + 209) )
    goto LABEL_145;
  if ( !*((_BYTE *)a1 + 448)
    || !*((_QWORD *)a1 + 58)
    || !*((_QWORD *)a1 + 60)
    || !*((_QWORD *)a1 + 61)
    || !*((_QWORD *)a1 + 90)
    || !*((_QWORD *)a1 + 91)
    || !*((_QWORD *)a1 + 62)
    || !*((_QWORD *)a1 + 66)
    || !*((_QWORD *)a1 + 67)
    || !*((_QWORD *)a1 + 68)
    || !*((_QWORD *)a1 + 72)
    || !*((_QWORD *)a1 + 73)
    || !*((_QWORD *)a1 + 76) && *((int *)a1 + 751) < 2000
    || !*((_QWORD *)a1 + 87) && (*((_DWORD *)a1 + 744) & 8) == 0
    || !*((_QWORD *)a1 + 89)
    || !*((_QWORD *)a1 + 75) && !*((_QWORD *)a1 + 214)
    || !*((_QWORD *)a1 + 93) )
  {
    if ( *((int *)a1 + 751) >= 1200 )
    {
      if ( !*((_QWORD *)a1 + 58)
        && !*((_QWORD *)a1 + 60)
        && !*((_QWORD *)a1 + 61)
        && !*((_QWORD *)a1 + 90)
        && !*((_QWORD *)a1 + 91)
        && !*((_QWORD *)a1 + 62)
        && !*((_QWORD *)a1 + 66)
        && !*((_QWORD *)a1 + 67)
        && !*((_QWORD *)a1 + 68)
        && !*((_QWORD *)a1 + 72)
        && !*((_QWORD *)a1 + 73)
        && !*((_QWORD *)a1 + 76)
        && !*((_QWORD *)a1 + 89)
        && !*((_QWORD *)a1 + 93)
        && !*((_QWORD *)a1 + 59)
        && !*((_QWORD *)a1 + 65)
        && !*((_QWORD *)a1 + 92)
        && !*((_QWORD *)a1 + 100)
        && !*((_QWORD *)a1 + 63)
        && !*((_QWORD *)a1 + 64)
        && !*((_QWORD *)a1 + 86)
        && !*((_QWORD *)a1 + 88)
        && !*((_QWORD *)a1 + 94)
        && !*((_QWORD *)a1 + 95)
        && !*((_QWORD *)a1 + 96) )
      {
        WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
        result = 0LL;
        WdLogGlobalForLineNumber = 545;
        *a2 = 0LL;
        return result;
      }
      WdLogSingleEntry0(2LL);
      v11 = 539LL;
      v12 = L"Not all the render relevant DDIs are NULL.";
      goto LABEL_143;
    }
    WdLogSingleEntry0(2LL);
    v11 = 557LL;
    goto LABEL_70;
  }
  WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v6 = (__int64 (__fastcall *)(void *const, struct _DXGKARG_CREATEOVERLAY *))*((_QWORD *)a1 + 88);
  WdLogGlobalForLineNumber = 509;
  if ( !v6 )
  {
    *((_QWORD *)a1 + 88) = ADAPTER_RENDER::DefaultDdiCreateOverlay;
    v6 = ADAPTER_RENDER::DefaultDdiCreateOverlay;
  }
  v7 = (__int64 (__fastcall *)(void *const, const struct _DXGKARG_UPDATEOVERLAY *))*((_QWORD *)a1 + 94);
  if ( !v7 )
  {
    *((_QWORD *)a1 + 94) = ADAPTER_RENDER::DefaultDdiUpdateOverlay;
    v7 = ADAPTER_RENDER::DefaultDdiUpdateOverlay;
  }
  v8 = (__int64 (__fastcall *)(void *const, const struct _DXGKARG_FLIPOVERLAY *))*((_QWORD *)a1 + 95);
  if ( !v8 )
  {
    *((_QWORD *)a1 + 95) = ADAPTER_RENDER::DefaultDdiFlipOverlay;
    v8 = ADAPTER_RENDER::DefaultDdiFlipOverlay;
  }
  v9 = (__int64 (__fastcall *)(void *const))*((_QWORD *)a1 + 96);
  if ( !v9 )
  {
    *((_QWORD *)a1 + 96) = ADAPTER_RENDER::DefaultDdiDestroyOverlay;
    v9 = ADAPTER_RENDER::DefaultDdiDestroyOverlay;
  }
  if ( !*((_QWORD *)a1 + 86) )
    *((_QWORD *)a1 + 86) = ADAPTER_RENDER::DefaultDdiStopCapture;
  a4 = ADAPTER_RENDER::DefaultDdiAcquireSwizzlingRange;
  if ( !*((_QWORD *)a1 + 63) )
    *((_QWORD *)a1 + 63) = ADAPTER_RENDER::DefaultDdiAcquireSwizzlingRange;
  if ( !*((_QWORD *)a1 + 64) )
    *((_QWORD *)a1 + 64) = ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange;
  if ( v6 != ADAPTER_RENDER::DefaultDdiCreateOverlay )
  {
LABEL_45:
    if ( v9 != ADAPTER_RENDER::DefaultDdiDestroyOverlay
      && v8 != ADAPTER_RENDER::DefaultDdiFlipOverlay
      && v7 != ADAPTER_RENDER::DefaultDdiUpdateOverlay )
    {
      goto LABEL_48;
    }
LABEL_114:
    WdLogSingleEntry0(2LL);
    v11 = 610LL;
    v12 = L"Create, Update, Flip and DestroyOverlay should all be supplied if any one of them is";
    goto LABEL_143;
  }
  if ( v7 != ADAPTER_RENDER::DefaultDdiUpdateOverlay
    || v8 != ADAPTER_RENDER::DefaultDdiFlipOverlay
    || v9 != ADAPTER_RENDER::DefaultDdiDestroyOverlay )
  {
    if ( v6 == ADAPTER_RENDER::DefaultDdiCreateOverlay )
      goto LABEL_114;
    goto LABEL_45;
  }
LABEL_48:
  v10 = *((_DWORD *)a1 + 684);
  if ( ((v10 - 4096) & 0xFFFFFCFF) == 0
    && v10 != 4352
    && (!*((_QWORD *)a1 + 59) || !*((_QWORD *)a1 + 65) || !*((_QWORD *)a1 + 92)) )
  {
    WdLogSingleEntry0(2LL);
    v11 = 630LL;
    v12 = L"Miniport did not provide required DDIs for WDDM v1.x";
LABEL_143:
    WdLogGlobalForLineNumber = v11;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v12, v11, 0LL, 0LL, 0LL, 0LL);
    return 3221225561LL;
  }
  v13 = *((_DWORD *)a1 + 613);
  if ( (v13 & 4) != 0 )
  {
    if ( !*((_QWORD *)a1 + 100) )
    {
      WdLogSingleEntry0(2LL);
      v14 = 639LL;
      v15 = L"Miniport did not provide RenderKm function but reported PresentationCaps.SupportKernelModeCommandBuffer cap";
LABEL_57:
      WdLogGlobalForLineNumber = v14;
LABEL_58:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v15, v14, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    if ( *((int *)a1 + 751) < 1105 )
    {
      WdLogSingleEntry1(3LL, a1);
      *((_DWORD *)a1 + 613) &= ~4u;
      a4 = ADAPTER_RENDER::DefaultDdiAcquireSwizzlingRange;
      v13 = *((_DWORD *)a1 + 613);
      WdLogGlobalForLineNumber = 644;
      *((_QWORD *)a1 + 100) = 0LL;
    }
    if ( (v13 & 0x20000000) != 0 )
    {
      WdLogSingleEntry0(2LL);
      v14 = 651LL;
      v15 = L"Miniport set the NoCacheCoherentApertureMemory cap on non-ARM architecture";
      goto LABEL_57;
    }
  }
  if ( *((_DWORD *)a1 + 611) > 4u )
    *((_DWORD *)a1 + 611) = 4;
  if ( *((_DWORD *)a1 + 610)
    && (*((__int64 (__fastcall **)(void *const, struct _DXGKARG_ACQUIRESWIZZLINGRANGE *))a1 + 63) == ADAPTER_RENDER::DefaultDdiAcquireSwizzlingRange
     || *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))a1 + 64) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange) )
  {
    WdLogSingleEntry0(2LL);
    v11 = 666LL;
LABEL_70:
    v12 = L"Miniport did not provide required DDIs";
    goto LABEL_143;
  }
  v17 = *((_DWORD *)a1 + 616);
  if ( (v17 & 1) != 0 )
  {
    if ( *((int *)a1 + 684) < 0x2000 )
    {
      v18 = *((_DWORD *)a1 + 619);
      if ( !v18 )
      {
        WdLogSingleEntry1(3LL, a1);
        WdLogGlobalForLineNumber = 677;
        return 3221225485LL;
      }
      v19 = v18 * *((_DWORD *)a1 + 74);
      if ( *((int *)a1 + 751) <= 2400 && v19 > 0x40 )
      {
        WdLogSingleEntry4(3LL, a1, 64LL, *((unsigned int *)a1 + 74), *((unsigned int *)a1 + 619));
        WdLogGlobalForLineNumber = 692;
        return 3221225485LL;
      }
      *((_DWORD *)a1 + 750) = v19;
    }
  }
  else
  {
    if ( (v17 & 4) != 0 )
    {
      WdLogSingleEntry1(3LL, a1);
      WdLogGlobalForLineNumber = 704;
      return 3221225485LL;
    }
    if ( (v17 & 0x10) != 0 )
    {
      WdLogSingleEntry1(3LL, a1);
      WdLogGlobalForLineNumber = 711;
      return 3221225485LL;
    }
    *((_DWORD *)a1 + 619) = 1;
    *((_DWORD *)a1 + 750) = 1;
  }
  if ( *((_BYTE *)a1 + 3016)
    && *((int *)a1 + 684) >= 4608
    && (!*((_DWORD *)a1 + 732)
     || !*((_DWORD *)a1 + 733)
     || !*((_BYTE *)a1 + 2938)
     || (*((_DWORD *)a1 + 744) & 8) == 0
     && ((*((_DWORD *)a1 + 615) & 2) == 0 || (*((_DWORD *)a1 + 111) & 0x10) == 0 && (*((_DWORD *)a1 + 613) & 4) == 0)) )
  {
    WdLogSingleEntry0(2LL);
    v14 = 731LL;
    v15 = L"Driver reports WDDM version 1.2 but does not implement all mandatory WDDM 1.2 render features.";
    goto LABEL_57;
  }
  v20 = *((_DWORD *)a1 + 684);
  if ( v20 < 0x2000 )
  {
    if ( v20 < 4864 )
      goto LABEL_145;
  }
  else
  {
    v21 = *((unsigned int *)a1 + 615);
    if ( (v21 & 2) == 0 && (*((_DWORD *)a1 + 744) & 8) == 0 )
    {
      WdLogSingleEntry1(2LL, v21);
      v14 = *((unsigned int *)a1 + 615);
      v15 = L"Driver reports WDDM version 2.0 or higher but does not support FlipOnVSyncMmIo cap. The caps value is 0x%x";
      WdLogGlobalForLineNumber = 741;
      goto LABEL_58;
    }
  }
  if ( !*((_QWORD *)a1 + 110) )
  {
    WdLogSingleEntry0(2LL);
    v14 = 753LL;
    v15 = L"Driver reports WDDM 1.3 driver, but does not support node metadata.";
    goto LABEL_57;
  }
  if ( v20 >= 9216 && (*((_DWORD *)a1 + 617) & 0x800) != 0 && (!*((_QWORD *)a1 + 164) || !*((_QWORD *)a1 + 165)) )
  {
    WdLogSingleEntry0(2LL);
    v14 = 768LL;
    v15 = L"Driver reports WDDM 2.4 driver with IoMmuSecureMode support, but does not support Begin/EndExclusiveAccess DDIs.";
    goto LABEL_57;
  }
  if ( v20 >= 12800
    && (*((_DWORD *)a1 + 1272) & 1) != 0
    && (!*((_QWORD *)a1 + 196)
     || !*((_QWORD *)a1 + 197)
     || !*((_QWORD *)a1 + 198)
     || !*((_QWORD *)a1 + 199)
     || !*((_QWORD *)a1 + 200)) )
  {
    WdLogSingleEntry0(2LL);
    v14 = 788LL;
    v15 = L"Driver reports WDDM 3.2 driver with DirtyBitTracking support, but does not support required DDIs.";
    goto LABEL_57;
  }
LABEL_145:
  v22 = (ADAPTER_RENDER *)operator new(0x780uLL, 0x4B677844u, 64LL, (__int64)a4);
  if ( v22 && (v23 = ADAPTER_RENDER::ADAPTER_RENDER(v22, a1), (v24 = v23) != 0LL) )
  {
    v25 = ADAPTER_RENDER::Initialize(v23);
    if ( v25 >= 0 )
    {
      WdLogSingleEntry2(4LL, v24, a1);
      WdLogGlobalForLineNumber = 821;
      *a2 = v24;
    }
    else
    {
      ADAPTER_RENDER::Destroy(v24);
      ADAPTER_RENDER::`scalar deleting destructor'(v24);
    }
    return (unsigned int)v25;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 803;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating ADAPTER_RENDER class, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
