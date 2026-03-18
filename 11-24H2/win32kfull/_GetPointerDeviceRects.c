/*
 * XREFs of _GetPointerDeviceRects @ 0x1400264A4
 * Callers:
 *     NtUserGetPointerDeviceRects @ 0x140026380 (NtUserGetPointerDeviceRects.c)
 *     ?ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1402071D8 (-ProcessInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     NtUserGetHimetricScaleFactorFromPixelLocation @ 0x140207810 (NtUserGetHimetricScaleFactorFromPixelLocation.c)
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z @ 0x1402A3E3C (-CreateEdgePalmRejectionZones@PalmRejection@@YAHPEAX@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1402A4784 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x14002622C (GetScreenRectForDpi.c)
 *     GetCurrentThreadCompositedDpi @ 0x140026674 (GetCurrentThreadCompositedDpi.c)
 *     VirtualizeMultiMonDigitizerSize @ 0x1400266E0 (VirtualizeMultiMonDigitizerSize.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     EnsurePointerDeviceHasMonitor @ 0x140083760 (EnsurePointerDeviceHasMonitor.c)
 */

__int64 __fastcall GetPointerDeviceRects(__int64 a1, __m128i *a2, __m128i *a3)
{
  unsigned int v6; // r14d
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  unsigned __int16 v8; // bx
  __m128i v9; // xmm6
  __m128i *v11; // rax
  __int64 v12; // r15
  __m128i *v13; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i *v15; // [rsp+20h] [rbp-50h] BYREF
  __m128i v16; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-38h] BYREF
  __m128i v18; // [rsp+48h] [rbp-28h] BYREF
  int v19; // [rsp+A8h] [rbp+38h] BYREF

  v19 = 0;
  v15 = 0LL;
  v6 = 1;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v15, &v19) )
  {
    v6 = 0;
    goto LABEL_9;
  }
  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
  v8 = CurrentThreadCompositedDpi;
  if ( v19 )
  {
    if ( a3 )
      *a3 = *GetScreenRectForDpi(&v16, CurrentThreadCompositedDpi);
    if ( a2 )
    {
      v9 = *(__m128i *)RIMGetVirtualDesktopPhysicalSize(&v18);
      v16 = v9;
      if ( ***(_DWORD ***)(W32GetUserSessionState() + 57008) > 1u )
      {
        VirtualizeMultiMonDigitizerSize(&v16, v8);
        v9 = v16;
      }
      *a2 = v9;
    }
    goto LABEL_9;
  }
  EnsurePointerDeviceHasMonitor(v15);
  if ( !a2 )
    goto LABEL_13;
  v11 = v15;
  *a2 = v15[11];
  v12 = v11[1].m128i_i64[0];
  if ( ***(_DWORD ***)(W32GetUserSessionState() + 57008) <= 1u || *(_DWORD *)(v12 + 1336) )
    goto LABEL_13;
  v13 = v15;
  if ( v15[1].m128i_i32[2] != 7 )
  {
    VirtualizeMultiMonDigitizerSize(a2, v8);
LABEL_13:
    v13 = v15;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)(v13[1].m128i_i64[0] + 1336) )
    {
      *a3 = v13[10];
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      PhysicalToLogicalDPIRect(a3, a3, CurrentThreadDpiAwarenessContext, 0LL);
    }
    else
    {
      *a3 = *GetScreenRectForDpi(&v18, v8);
    }
  }
LABEL_9:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17);
  return v6;
}
