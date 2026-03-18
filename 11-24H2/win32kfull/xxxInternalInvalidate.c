/*
 * XREFs of xxxInternalInvalidate @ 0x1400428C0
 * Callers:
 *     ComposeWindow @ 0x1400316A8 (ComposeWindow.c)
 *     xxxCompositedPaint @ 0x140032604 (xxxCompositedPaint.c)
 *     xxxRedrawWindow @ 0x140042630 (xxxRedrawWindow.c)
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x14008B5E8 (zzzUpdateWindowsAfterModeChange.c)
 *     zzzLockWindowUpdate2 @ 0x140097CA0 (zzzLockWindowUpdate2.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1400986AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SetRedirectedWindow @ 0x1400B67B4 (SetRedirectedWindow.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x14011127C (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x140157004 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxScrollWindowEx @ 0x140258878 (xxxScrollWindowEx.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x14028F93C (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1402900A4 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1402BCCD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1403249A0 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1400322B0 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x140042C90 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRect @ 0x140044AD0 (PhysicalToLogicalInPlaceRect.c)
 *     SpbCheckRect @ 0x140097868 (SpbCheckRect.c)
 *     xxxDoSyncPaint @ 0x1401A7398 (xxxDoSyncPaint.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall xxxInternalInvalidate(struct tagWND *a1, HRGN a2, unsigned int a3)
{
  unsigned int v3; // edi
  HRGN v5; // r8
  struct tagWND *v6; // rsi
  struct tagWND *i; // r14
  __int64 v8; // r13
  __int64 v9; // rdx
  struct tagRECT *v10; // rax
  HRGN v11; // r12
  struct tagWND *v12; // r15
  struct tagWND *v13; // r8
  __int64 v14; // rcx
  char v15; // al
  LONG left; // ecx
  LONG right; // eax
  LONG top; // ecx
  LONG bottom; // eax
  __int64 v20; // r8
  __int64 RectRgnIndirect; // rax
  LONG v22; // ecx
  LONG v23; // eax
  LONG v24; // ecx
  LONG v25; // eax
  HRGN v26; // [rsp+38h] [rbp-38h]
  struct tagWND *v27; // [rsp+40h] [rbp-30h]
  struct tagRECT v28; // [rsp+48h] [rbp-28h] BYREF
  struct tagRECT v29; // [rsp+58h] [rbp-18h] BYREF

  v3 = 0;
  v26 = a2;
  v27 = 0LL;
  v5 = a2;
  v6 = a1;
  i = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    for ( i = a1; i; i = (struct tagWND *)*((_QWORD *)i + 13) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 27LL) & 2) != 0 )
        break;
    }
    if ( i )
    {
      if ( a2 == (HRGN)1 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL, 1LL, 1LL);
        v8 = RectRgnIndirect;
        if ( RectRgnIndirect )
        {
          v5 = (HRGN)RectRgnIndirect;
          v26 = (HRGN)RectRgnIndirect;
        }
        else
        {
          v5 = v26;
        }
      }
      v27 = v6;
      a3 |= 0x80u;
      v6 = i;
    }
  }
  v9 = *((_QWORD *)v6 + 5);
  if ( (((a3 & 1) != 0) & (*(_BYTE *)(v9 + 26) >> 3)) != 0 )
    *((_DWORD *)v6 + 95) |= 0x4000u;
  if ( (a3 & 0x400) != 0 )
    v29 = *(struct tagRECT *)(v9 + 88);
  else
    v28 = *(struct tagRECT *)(v9 + 104);
  v10 = &v28;
  if ( (a3 & 0x400) != 0 )
    v10 = &v29;
  v29 = *v10;
  if ( (a3 & 9) != 0 )
  {
    v11 = v5;
    if ( v5 == (HRGN)1 )
    {
      v11 = *(HRGN *)(W32GetUserSessionState(&v29, v9) + 63408);
      SetRectRgnIndirect(v11, *((_QWORD *)v6 + 5) + (-(__int64)((a3 & 0x400) != 0) & 0xFFFFFFFFFFFFFFF0uLL) + 104);
      v20 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 168LL);
      if ( v20 )
        GreCombineRgn(v11, v11, v20, 1LL);
    }
  }
  else
  {
    v11 = *(HRGN *)(W32GetUserSessionState(&v29, v9) + 63408);
    SetEmptyRgn(v11);
  }
  if ( (a3 & 9) != 0 && (a3 & 1) != 0 )
  {
    v12 = v6;
    v13 = v6;
    if ( (*(_BYTE *)(*((_QWORD *)v6 + 5) + 27LL) & 0x20) == 0 )
    {
      while ( 1 )
      {
        v12 = (struct tagWND *)*((_QWORD *)v12 + 13);
        if ( !v12 )
          break;
        v14 = *((_QWORD *)v12 + 5);
        v15 = *(_BYTE *)(v14 + 31);
        if ( (v15 & 0x10) == 0 || (v15 & 0x20) != 0 )
          return;
        v28 = *(struct tagRECT *)(v14 + 104);
        PhysicalToLogicalInPlaceRect(v13, &v28);
        left = v29.left;
        right = v29.right;
        if ( v29.left <= v28.left )
          left = v28.left;
        v29.left = left;
        if ( v29.right >= v28.right )
          right = v28.right;
        v29.right = right;
        if ( left >= right )
          return;
        top = v29.top;
        bottom = v29.bottom;
        if ( v29.top <= v28.top )
          top = v28.top;
        v29.top = top;
        if ( v29.bottom >= v28.bottom )
          bottom = v28.bottom;
        v29.bottom = bottom;
        if ( top >= bottom )
          return;
        if ( (*(_BYTE *)(*((_QWORD *)v12 + 5) + 27LL) & 0x20) != 0 )
          break;
        v13 = v12;
      }
    }
  }
  if ( (a3 & 0x1001) == 0x1001 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(4097LL, v9) + 57008) + 40LL) )
    {
      v28 = 0LL;
      if ( (unsigned int)GreGetRgnBox(v11, &v28) )
      {
        v22 = v28.left;
        v23 = v28.right;
        if ( v28.left <= v29.left )
          v22 = v29.left;
        v28.left = v22;
        if ( v28.right >= v29.right )
          v23 = v29.right;
        v28.right = v23;
        if ( v22 >= v23 )
          goto LABEL_62;
        v24 = v28.top;
        v25 = v28.bottom;
        if ( v28.top <= v29.top )
          v24 = v29.top;
        v28.top = v24;
        if ( v28.bottom >= v29.bottom )
          v25 = v29.bottom;
        v28.bottom = v25;
        if ( v24 >= v25 )
LABEL_62:
          v28 = 0LL;
        SpbCheckRect(v6, &v28, 0);
      }
    }
  }
  InternalInvalidate2(v6, v26, v11, &v29, a3);
  if ( i )
  {
    v6 = v27;
    if ( v8 )
      GreDeleteObject(v8);
  }
  if ( (a3 & 0x100) != 0 )
  {
    xxxInternalUpdateWindow(v6, (a3 & 0x40) == 0);
  }
  else if ( (a3 & 0x200) != 0 )
  {
    if ( (a3 & 0x40) == 0 )
      v3 = (a3 & 0x80u) != 0 ? 32 : 4;
    xxxDoSyncPaint(v6, v3);
  }
}
