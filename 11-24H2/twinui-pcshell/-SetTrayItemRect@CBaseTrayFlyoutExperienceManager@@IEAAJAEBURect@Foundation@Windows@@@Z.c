/*
 * XREFs of ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x1803CBEE8
 * Callers:
 *     ?PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@@Z @ 0x1803CB0E0 (-PositionFlyout@CBaseTrayFlyoutExperienceManager@@UEAAJAEBURect@Foundation@Windows@@AEBUSize@34@.c)
 *     ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x1803CC0BC (-ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B78DC (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?RecalculateClipRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1803CB470 (-RecalculateClipRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::SetTrayItemRect(
        CBaseTrayFlyoutExperienceManager *this,
        const struct Windows::Foundation::Rect *a2)
{
  int v3; // edx
  int v4; // ebx
  __int64 v5; // rdx
  int *v7; // rdi
  int v8; // esi
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-50h] BYREF
  RECT v13; // [rsp+28h] [rbp-48h] BYREF
  _AppBarData pData; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( *((float *)a2 + 2) >= 1.0 && *((float *)a2 + 3) >= 1.0 )
  {
    *((_DWORD *)this + 99) = (int)*((float *)a2 + 1);
    *((_DWORD *)this + 98) = (int)*(float *)a2;
    *((_DWORD *)this + 100) = (int)(float)(*(float *)a2 + *((float *)a2 + 2));
    v3 = (int)(float)(*((float *)a2 + 3) + *((float *)a2 + 1));
    goto LABEL_15;
  }
  *(_QWORD *)&pData.cbSize = 48LL;
  memset(&pData.hWnd, 0, 40);
  if ( !(unsigned int)SHAppBarMessage(5u, &pData) )
  {
    v4 = -2147418113;
    v5 = 750LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v7 = (int *)((char *)this + 392);
  if ( !CopyRect((LPRECT)((char *)this + 392), &pData.rc) )
  {
    v4 = -2147467259;
    v5 = 751LL;
    goto LABEL_6;
  }
  v8 = *((_DWORD *)this + 101) - *((_DWORD *)this + 99);
  if ( v8 >= *((_DWORD *)this + 100) - *v7 )
    v8 = *((_DWORD *)this + 100) - *v7;
  if ( (unsigned int)Mirror_IsThreadRTL() )
    v9 = *v7;
  else
    v9 = *((_DWORD *)this + 100) - v8;
  v3 = *((_DWORD *)this + 101);
  *v7 = v9;
  *((_DWORD *)this + 99) = v3 - v8;
  *((_DWORD *)this + 100) = v8 + v9;
LABEL_15:
  *((_DWORD *)this + 101) = v3;
  v12 = 0;
  v10 = *((_QWORD *)this + 8);
  v13 = 0LL;
  if ( v10 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, RECT *, int *))(*(_QWORD *)v10 + 40LL))(v10, &v13, &v12);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x305,
        (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v11);
  }
  v4 = CBaseTrayFlyoutExperienceManager::RecalculateClipRect((__int64)this, &v13, v12);
  if ( v4 < 0 )
  {
    v5 = 775LL;
    goto LABEL_6;
  }
  return 0LL;
}
