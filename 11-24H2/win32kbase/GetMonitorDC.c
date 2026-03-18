/*
 * XREFs of GetMonitorDC @ 0x14009B3A0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x140099680 (UserGetMonitorDC.c)
 * Callees:
 *     IntersectRect @ 0x14000C128 (IntersectRect.c)
 *     CreateCacheDC @ 0x14000E010 (CreateCacheDC.c)
 *     ?SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000EF9C (-SetPwndOrg@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000F010 (-SetPwndRedirect@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     ?SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z @ 0x14000F084 (-SetPwndClip@tagDCE@@QEAAXPEAUtagWND@@@Z.c)
 *     GreSetDCOwnerEx @ 0x14000F100 (GreSetDCOwnerEx.c)
 *     IsGetStyleWindowSupported @ 0x14000F1C4 (IsGetStyleWindowSupported.c)
 *     GetStyleWindow @ 0x14000F1FC (GetStyleWindow.c)
 *     GreGetDCOrgEx @ 0x14000F3C0 (GreGetDCOrgEx.c)
 *     GreSelectVisRgnShared @ 0x14000FDA0 (GreSelectVisRgnShared.c)
 *     GreSetDCOrg @ 0x14000FE10 (GreSetDCOrg.c)
 *     GreGetBounds @ 0x14000FF10 (GreGetBounds.c)
 *     GreIsRendering @ 0x140010150 (GreIsRendering.c)
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140010DA0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GreCombineRgn @ 0x140025D30 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x14002C0D0 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     GetMonitorRect @ 0x140045308 (GetMonitorRect.c)
 *     CreateMonitorRegion @ 0x1400461D8 (CreateMonitorRegion.c)
 *     UpdateDCEInUseCount @ 0x1400C2468 (UpdateDCEInUseCount.c)
 *     GreHintDCWnd @ 0x1400D625C (GreHintDCWnd.c)
 *     IsGreHintDCWndSupported @ 0x1400DDF94 (IsGreHintDCWndSupported.c)
 *     GreSelectRedirectionBitmap @ 0x1400E07B4 (GreSelectRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1400E1754 (GetRedirectionBitmap.c)
 *     IsGetRedirectionBitmapSupported @ 0x1400E6654 (IsGetRedirectionBitmapSupported.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1400E668C (IsGreSelectRedirectionBitmapSupported.c)
 *     SpbCheckDce @ 0x14010441C (SpbCheckDce.c)
 *     IsSpbCheckDceSupported @ 0x140105394 (IsSpbCheckDceSupported.c)
 *     GreCopyVisRgn @ 0x140179AC0 (GreCopyVisRgn.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 v6; // rcx
  tagDCE *i; // rsi
  __int64 result; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  struct HOBJ__ *RectRgnIndirect; // rax
  __int64 (__fastcall *v12)(__int64, __int64); // r14
  __int64 (__fastcall *StyleWindow)(__int64, __int64); // rax
  __int64 v14; // rcx
  __int64 RedirectionBitmap; // rbx
  __int64 UserSessionState; // rax
  __int64 v17; // rax
  int v18; // ebx
  int v19; // edi
  __int64 v20; // rcx
  __int64 v21; // rax
  struct HOBJ__ *MonitorRegion; // rdi
  __int64 v23; // rcx
  HRGN v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // ebx
  int v31; // edi
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r8d
  __int64 v38; // r8
  int v39; // ecx
  int v40; // eax
  int v41; // edx
  int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rcx
  HRGN v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int128 v50; // xmm0
  HDC v51; // rcx
  __int64 v52; // rcx
  unsigned int v53; // r9d
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  struct REGION_CORE *v62; // [rsp+20h] [rbp-50h]
  __int128 v63; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v64[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v65; // [rsp+50h] [rbp-20h] BYREF

  v64[0] = 0LL;
  v63 = 0LL;
  while ( 2 )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(a1) + 57008);
    for ( i = *(tagDCE **)(v6 + 24); ; i = *(tagDCE **)i )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v6) + 57008) + 24LL;
      if ( i == (tagDCE *)v6 )
        break;
      if ( (*((_DWORD *)i + 12) & 0x401000) == 0
        && !(unsigned int)GreIsRendering(*((HDC *)i + 2))
        && *((struct tagMONITOR **)i + 9) == a2 )
      {
        if ( (*((_DWORD *)i + 12) & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
          SpbCheckDce(i);
        if ( GreSetDCOwnerEx(*((struct HOBJ__ **)i + 2), 0x80000002, 0, 0) )
        {
          tagDCE::SetPwndOrg(i, *(struct tagWND **)(a1 + 80));
          tagDCE::SetPwndClip(i, *(struct tagWND **)(a1 + 88));
          tagDCE::SetPwndRedirect(i, *(struct tagWND **)(a1 + 96));
          *((_QWORD *)i + 7) = *(_QWORD *)(a1 + 56);
          *((_QWORD *)i + 8) = *(_QWORD *)(a1 + 64);
          *((_DWORD *)i + 12) = *(_DWORD *)(a1 + 48) & 0x947F9 | 0x1002;
          v10 = *(_QWORD *)(a1 + 24);
          if ( v10 <= 1 )
          {
            *((_QWORD *)i + 3) = v10;
          }
          else
          {
            v65 = 0LL;
            RectRgnIndirect = GreCreateRectRgnIndirect((struct REGION_CORE *)&v65);
            *((_QWORD *)i + 3) = RectRgnIndirect;
            SetMonitorRegion(a2, (HRGN)RectRgnIndirect, *(HRGN *)(a1 + 24));
          }
          v12 = 0LL;
          if ( (*((_DWORD *)i + 12) & 0x4000) != 0
            && (int)IsGetStyleWindowSupported() >= 0
            && (StyleWindow = GetStyleWindow(*((_QWORD *)i + 10)), (v12 = StyleWindow) != 0LL) )
          {
            v14 = *((_QWORD *)StyleWindow + 5);
            if ( (*(_BYTE *)(v14 + 26) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported() >= 0 )
            {
              RedirectionBitmap = GetRedirectionBitmap(v12);
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0
                && !(unsigned int)GreSelectRedirectionBitmap(*((_QWORD *)i + 2), RedirectionBitmap) )
              {
                GreSelectVisRgnShared(*((HDC *)i + 2), 0LL, 1u);
              }
            }
            UserSessionState = W32GetUserSessionState(v14);
            GreCopyVisRgn(*(HDC *)(a1 + 16), *(HRGN *)(UserSessionState + 43104));
            v17 = *((_QWORD *)v12 + 5);
            v18 = *(_DWORD *)(v17 + 92);
            v19 = *(_DWORD *)(v17 + 88);
            v21 = W32GetUserSessionState(v20);
            GreOffsetRgn(*(HRGN *)(v21 + 43104), v19, v18);
            MonitorRegion = CreateMonitorRegion((__int64)a2);
            v24 = *(HRGN *)(W32GetUserSessionState(v23) + 43104);
            v26 = W32GetUserSessionState(v25);
            if ( !(unsigned int)GreCombineRgn(*(HRGN *)(v26 + 43104), v24, (HRGN)MonitorRegion, 1) )
            {
              v28 = W32GetUserSessionState(v27);
              LODWORD(v62) = 0;
              GreSetRectRgn(*(HRGN *)(v28 + 43104), 0, 0, 0, v62);
            }
            GreDeleteObject((HRGN)MonitorRegion);
            v29 = *((_QWORD *)v12 + 5);
            v30 = *(_DWORD *)(v29 + 92);
            v31 = *(_DWORD *)(v29 + 88);
            v33 = W32GetUserSessionState(v32);
            GreOffsetRgn(*(HRGN *)(v33 + 43104), -v31, -v30);
            v35 = W32GetUserSessionState(v34);
            GreSelectVisRgnShared(*((HDC *)i + 2), *(_QWORD *)(v35 + 43104), 2u);
            GreGetDCOrgEx(*(HDC *)(a1 + 16), v64, &v63);
            if ( a3 )
            {
              v36 = *((_QWORD *)v12 + 5);
              v37 = *(_DWORD *)(v36 + 92);
              LODWORD(v36) = 2 * *(_DWORD *)(v36 + 88);
              LODWORD(v63) = v36 + v63;
              DWORD2(v63) += v36;
              HIDWORD(v63) += 2 * v37;
              DWORD1(v63) += 2 * v37;
              v65 = *(_OWORD *)GetMonitorRect((__int64)&v65, (__int64)a2);
              IntersectRect(&v63, (int *)&v63, (int *)&v65);
              v38 = *((_QWORD *)v12 + 5);
              v39 = -*(_DWORD *)(v38 + 92);
              v40 = -*(_DWORD *)(v38 + 88);
              DWORD2(v63) -= *(_DWORD *)(v38 + 88);
              v41 = v40 + v63;
              HIDWORD(v63) += v39;
              v42 = v39 + DWORD1(v63);
              LODWORD(v63) = v40 + v63;
              DWORD1(v63) += v39;
            }
            else
            {
              v42 = DWORD1(v63);
              v41 = v63;
            }
            GreSetDCOrg(*((HDC *)i + 2), v41, v42, &v63);
            GreGetBounds(*((HDC *)i + 2), 0LL, 5);
          }
          else
          {
            v43 = W32GetUserSessionState(v9);
            GreCopyVisRgn(*(HDC *)(a1 + 16), *(HRGN *)(v43 + 43104));
            v45 = *(HRGN *)(W32GetUserSessionState(v44) + 43104);
            v47 = W32GetUserSessionState(v46);
            SetMonitorRegion(a2, *(HRGN *)(v47 + 43104), v45);
            v49 = W32GetUserSessionState(v48);
            GreSelectVisRgnShared(*((HDC *)i + 2), *(_QWORD *)(v49 + 43104), 2u);
            v50 = *(_OWORD *)GetMonitorRect((__int64)&v65, (__int64)a2);
            v65 = v50;
            if ( a3 )
              v63 = v50;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 16), v64, &v63);
            HIDWORD(v63) -= DWORD1(v65);
            DWORD2(v63) -= v65;
            v51 = (HDC)*((_QWORD *)i + 2);
            LODWORD(v63) = v63 - v65;
            DWORD1(v63) -= DWORD1(v65);
            GreSetDCOrg(v51, v63, SDWORD1(v63), &v63);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 )
            GreHintDCWnd(*((_QWORD *)i + 2), **((_QWORD **)i + 10), 0, 0, 0);
          if ( v12 && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
          {
            v54 = *((_QWORD *)v12 + 5);
            LOBYTE(v53) = ~*(_BYTE *)(v54 + 27);
            GreHintDCWnd(
              *((_QWORD *)i + 2),
              **((_QWORD **)i + 10),
              *(_QWORD *)v12,
              (v53 >> 1) & 1,
              (*(_WORD *)(v54 + 42) & 0x2FFF) == 669);
          }
          v55 = W32GetUserSessionState(v52);
          --*(_DWORD *)(v55 + 19716);
          if ( a3 )
          {
            *((_DWORD *)i + 12) |= 0x80000000;
            *((_QWORD *)i + 7) = 0LL;
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v56);
            if ( CurrentProcessWin32Process )
            {
              v58 = -*(_QWORD *)CurrentProcessWin32Process;
              CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
            }
            *((_QWORD *)i + 8) = CurrentProcessWin32Process;
            v59 = PsGetCurrentProcessWin32Process(v58);
            if ( v59 )
              v59 &= -(__int64)(*(_QWORD *)v59 != 0LL);
            *(_DWORD *)(v59 + 12) |= 0x200u;
          }
          v60 = *((_QWORD *)i + 7);
          if ( v60 )
            v61 = *(_QWORD *)(v60 + 464);
          else
            v61 = *((_QWORD *)i + 8);
          UpdateDCEInUseCount(1LL, v61);
          return *((_QWORD *)i + 2);
        }
      }
    }
    result = CreateCacheDC(0LL, *(_DWORD *)(a1 + 48) & 0x4000 | 0x802u, (__int64)a2);
    if ( result )
      continue;
    break;
  }
  return result;
}
