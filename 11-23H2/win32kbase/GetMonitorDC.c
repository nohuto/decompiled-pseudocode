/*
 * XREFs of GetMonitorDC @ 0x1C005B3E8
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C005B2C0 (UserGetMonitorDC.c)
 * Callees:
 *     IsSpbCheckDceSupported @ 0x1C000F398 (IsSpbCheckDceSupported.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F2F0 (GreCreateRectRgnIndirect.c)
 *     GreDeleteObject @ 0x1C00472A0 (GreDeleteObject.c)
 *     GreGetBounds @ 0x1C004A0F0 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C004BDD0 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgn @ 0x1C004EBC0 (GreSelectVisRgn.c)
 *     IntersectRect @ 0x1C0059BB8 (IntersectRect.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0059C2C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     CreateMonitorRegionForDpi @ 0x1C0059CD0 (CreateMonitorRegionForDpi.c)
 *     GreIsRendering @ 0x1C005B8F0 (GreIsRendering.c)
 *     IsGreHintDCWndSupported @ 0x1C005B930 (IsGreHintDCWndSupported.c)
 *     GreSetDCOrg @ 0x1C005B960 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C005BA60 (GreCopyVisRgn.c)
 *     UpdateDCEInUseCount @ 0x1C005BB40 (UpdateDCEInUseCount.c)
 *     CreateCacheDC @ 0x1C005BC20 (CreateCacheDC.c)
 *     IsGetStyleWindowSupported @ 0x1C005BE50 (IsGetStyleWindowSupported.c)
 *     GetMonitorRect @ 0x1C005BE7C (GetMonitorRect.c)
 *     GreOffsetRgn @ 0x1C005BF60 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x1C005C1D0 (GreCombineRgn.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C005C500 (GetCurrentThreadCompositedDpi.c)
 *     GreGetDCOrgEx @ 0x1C005D2D0 (GreGetDCOrgEx.c)
 *     IsGetRedirectionBitmapSupported @ 0x1C005D348 (IsGetRedirectionBitmapSupported.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C005D4DC (IsGreSelectRedirectionBitmapSupported.c)
 *     GreSetRectRgn @ 0x1C008A530 (GreSetRectRgn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 *i; // rbx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  __int128 v9; // xmm0
  HDC v10; // rcx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v18; // rax
  __int64 v19; // r15
  HDC v20; // rcx
  int v21; // eax
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  struct HOBJ__ *MonitorRegionForDpi; // r15
  __int64 v24; // rax
  int v25; // edx
  __int64 v26; // r8
  int v27; // ecx
  int v28; // eax
  struct HOBJ__ *RectRgnIndirect; // rax
  __int128 v30; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+40h] [rbp-10h] BYREF

  v30 = 0LL;
  while ( 2 )
  {
    for ( i = (__int64 *)*((_QWORD *)gpDispInfo + 3); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C0295AF0 )
          qword_1C0295AF0(i);
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 0x80000002, 0, 0) )
        {
          i[2] = *(_QWORD *)(a1 + 16);
          i[3] = *(_QWORD *)(a1 + 24);
          i[4] = *(_QWORD *)(a1 + 32);
          i[9] = *(_QWORD *)(a1 + 72);
          i[10] = *(_QWORD *)(a1 + 80);
          *((_DWORD *)i + 16) = *(_DWORD *)(a1 + 64) & 0x947F9 | 0x1002;
          v7 = *(_QWORD *)(a1 + 40);
          if ( v7 > 1 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion(a2, (HRGN)RectRgnIndirect, *(HRGN *)(a1 + 40));
          }
          else
          {
            i[5] = v7;
          }
          v8 = 0LL;
          if ( (i[8] & 0x4000) != 0
            && (int)IsGetStyleWindowSupported() >= 0
            && qword_1C0295AC0
            && (v18 = qword_1C0295AC0(i[2], 2848LL), (v8 = (_QWORD *)v18) != 0LL) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 26LL) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported() >= 0 )
            {
              v19 = qword_1C0295AA0 ? qword_1C0295AA0(v8) : 0LL;
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
              {
                v20 = (HDC)i[1];
                if ( !qword_1C0294E90 || (v21 = qword_1C0294E90(v20, v19), v20 = (HDC)i[1], !v21) )
                  GreSelectVisRgn(v20, 0LL, 1);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC);
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
            MonitorRegionForDpi = CreateMonitorRegionForDpi((__int64)a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, (HRGN)MonitorRegionForDpi, 1) )
              GreSetRectRgn(ghrgnGDC, 0);
            GreDeleteObject((HPALETTE)MonitorRegionForDpi);
            GreOffsetRgn(ghrgnGDC);
            GreSelectVisRgn((HDC)i[1], ghrgnGDC, 2);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v24 = v8[5];
              v25 = *(_DWORD *)(v24 + 92);
              LODWORD(v24) = 2 * *(_DWORD *)(v24 + 88);
              LODWORD(v30) = v24 + v30;
              DWORD2(v30) += v24;
              HIDWORD(v30) += 2 * v25;
              DWORD1(v30) += 2 * v25;
              v31 = *(_OWORD *)GetMonitorRect(&v31, a2);
              IntersectRect(&v30, (int *)&v30, (int *)&v31);
              v26 = v8[5];
              v27 = -*(_DWORD *)(v26 + 92);
              v28 = -*(_DWORD *)(v26 + 88);
              DWORD2(v30) -= *(_DWORD *)(v26 + 88);
              HIDWORD(v30) += v27;
              LODWORD(v30) = v28 + v30;
              DWORD1(v30) += v27;
            }
            GreSetDCOrg((HDC)i[1]);
            GreGetBounds((HDC)i[1], 0LL, 5);
          }
          else
          {
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn((HDC)i[1], ghrgnGDC, 2);
            v9 = *(_OWORD *)GetMonitorRect(&v31, a2);
            v31 = v9;
            if ( a3 )
              v30 = v9;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v30) -= DWORD1(v31);
            DWORD2(v30) -= v31;
            v10 = (HDC)i[1];
            LODWORD(v30) = v30 - v31;
            DWORD1(v30) -= DWORD1(v31);
            GreSetDCOrg(v10);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 && qword_1C0294EB0 )
            qword_1C0294EB0(i[1], *(_QWORD *)i[2], 0LL, 0LL, 0);
          if ( v8 && (*(_BYTE *)(v8[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 && qword_1C0294EB0 )
            qword_1C0294EB0(
              i[1],
              *(_QWORD *)i[2],
              *v8,
              (*(_BYTE *)(v8[5] + 27LL) & 2) == 0,
              (*(_WORD *)(v8[5] + 42LL) & 0x2FFF) == 669);
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
            if ( CurrentProcessWin32Process )
            {
              v13 = -*(_QWORD *)CurrentProcessWin32Process;
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            }
            i[10] = CurrentProcessWin32Process;
            v14 = PsGetCurrentProcessWin32Process(v13);
            if ( v14 )
              v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
            *(_DWORD *)(v14 + 12) |= 0x200u;
          }
          v15 = i[9];
          if ( v15 )
            v16 = *(_QWORD *)(v15 + 424);
          else
            v16 = i[10];
          UpdateDCEInUseCount(1LL, v16);
          return i[1];
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2) )
      continue;
    break;
  }
  return 0LL;
}
