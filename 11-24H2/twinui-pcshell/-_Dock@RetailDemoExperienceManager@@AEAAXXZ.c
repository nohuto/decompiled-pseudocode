/*
 * XREFs of ?_Dock@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A6120
 * Callers:
 *     ?Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x1803A4ED0 (-Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?_Show@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A6AEC (-_Show@RetailDemoExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1803A5F84 (-_AdjustWorkingArea@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 *     ?_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ @ 0x1803A687C (-_RestoreWorkingArea@RetailDemoExperienceManager@@AEAAXXZ.c)
 *     ?_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z @ 0x1803A68BC (-_SetFrameRect@RetailDemoExperienceManager@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall RetailDemoExperienceManager::_Dock(RetailDemoExperienceManager *this)
{
  _DWORD *v2; // rdi
  _DWORD *v3; // r14
  int v4; // ecx
  int v5; // eax
  int v6; // r8d
  int v7; // edx
  int v8; // r8d
  LONG v9; // ecx
  int v10; // r11d
  int v11; // r10d
  int v12; // edx
  int v13; // r9d
  LONG v14; // edx
  LONG v15; // eax
  int v16; // edx
  LONG v17; // ecx
  int v18; // r9d
  int v19; // r8d
  int v20; // [rsp+20h] [rbp-30h]
  struct tagRECT v21; // [rsp+20h] [rbp-30h]
  struct tagRECT pvParam; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( !*((_QWORD *)this + 25) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x12F,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
      (const char *)0x8000FFFFLL,
      v20);
  v2 = (_DWORD *)((char *)this + 352);
  v3 = (_DWORD *)((char *)this + 352);
  v4 = *((_DWORD *)this + 89);
  v5 = *((_DWORD *)this + 88);
  if ( *((_BYTE *)this + 382) )
  {
    v6 = 0;
    v7 = v5 + 2 * v4;
  }
  else
  {
    v6 = v5 + 2 * v4;
    v7 = 0;
  }
  *((_DWORD *)this + 100) = v6;
  *((_DWORD *)this + 101) = 0;
  *((_DWORD *)this + 102) = v7;
  *((_DWORD *)this + 103) = 0;
  if ( !*((_BYTE *)this + 381) )
  {
    RetailDemoExperienceManager::_RestoreWorkingArea(this);
    pvParam = 0LL;
    if ( !SystemParametersInfoW(0x30u, 0, &pvParam, 0) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x142,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x8000FFFFLL,
        0);
    v16 = *((_DWORD *)this + 89);
    if ( *((_BYTE *)this + 382) )
      v17 = pvParam.right - *v2 - v16;
    else
      v17 = v16 + pvParam.left;
    v18 = *((_DWORD *)this + 90);
    v21.left = v17;
    v21.right = *v2 + v17;
    v19 = v16 + pvParam.top;
    v21.top = v16 + pvParam.top;
    if ( v18 >= 0 )
    {
      if ( v19 + v18 >= pvParam.bottom - 2 * v16 - pvParam.top )
      {
        v21.bottom = pvParam.bottom - 2 * v16 - pvParam.top;
        goto LABEL_27;
      }
      v15 = v19 + v18;
    }
    else
    {
      v15 = pvParam.bottom - v16;
    }
    goto LABEL_25;
  }
  pvParam = (struct tagRECT)*((_OWORD *)this + 25);
  RetailDemoExperienceManager::_AdjustWorkingArea(this, &pvParam);
  v8 = *((_DWORD *)this + 89);
  if ( *((_BYTE *)this + 382) )
    v9 = v8 + *((_DWORD *)this + 106);
  else
    v9 = *((_DWORD *)this + 104) - *v3 - v8;
  v10 = *((_DWORD *)this + 105);
  v11 = *((_DWORD *)this + 90);
  v12 = *((_DWORD *)this + 107);
  v21.left = v9;
  v13 = v10 + v8;
  v21.top = v10 + v8;
  v21.right = *v3 + v9;
  if ( v11 >= 0 )
  {
    if ( v13 + v11 >= v12 - 2 * v8 - v10 )
    {
      v14 = v12 - 2 * v8 - v10;
      goto LABEL_15;
    }
    v15 = v11 + v13;
LABEL_25:
    v21.bottom = v15;
    goto LABEL_27;
  }
  v14 = v12 - v8;
LABEL_15:
  v21.bottom = v14;
LABEL_27:
  pvParam = v21;
  RetailDemoExperienceManager::_SetFrameRect(this, &pvParam);
}
