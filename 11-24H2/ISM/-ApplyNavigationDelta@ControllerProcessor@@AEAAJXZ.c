/*
 * XREFs of ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017929C
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017BAD4 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800245F0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x180175DC8 (-OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x180175E50 (-OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x180179210 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x18017A9C4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?MapPointByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagPOINT@@1@Z @ 0x18017B164 (-MapPointByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagPOINT@@1@Z.c)
 *     ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x18017C048 (-SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18017C124 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::ApplyNavigationDelta(ControllerProcessor *this)
{
  float v1; // xmm3_4
  float v3; // xmm2_4
  __int64 v4; // rdx
  int v5; // r14d
  int v6; // ebx
  char v7; // al
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // edi
  LONG y; // r15d
  struct tagPOINT v13; // rbx
  bool v14; // r15
  bool v15; // di
  ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v17; // r8
  const char *v18; // r9
  int v19; // eax
  int v20; // eax
  ControllerNavigationManager *v21; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  int v24; // [rsp+70h] [rbp+40h] BYREF
  struct tagPOINT v25; // [rsp+78h] [rbp+48h] BYREF
  struct tagPOINT v26; // [rsp+80h] [rbp+50h] BYREF

  v1 = *((float *)this + 92);
  if ( COERCE_FLOAT(LODWORD(v1) & _xmm) >= 1.0 || COERCE_FLOAT(*((_DWORD *)this + 93) & _xmm) >= 1.0 )
  {
    v3 = *((float *)this + 93);
    LOBYTE(v24) = 0;
    v4 = *((unsigned int *)this + 710);
    v5 = 1;
    v6 = (int)v1;
    v25.y = (int)v3;
    v25.x = (int)v1;
    *((float *)this + 93) = v3 - (float)(int)v3;
    *((float *)this + 92) = v1 - (float)(int)v1;
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 939) + 104LL))(
           *((_QWORD *)this + 939),
           v4,
           1LL) >= 0 )
    {
      v7 = v24;
    }
    else
    {
      v7 = 0;
      LOBYTE(v24) = 0;
    }
    if ( v7 )
    {
      v8 = ControllerProcessor::SendPointerDelta(this, v25);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6CB,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v8,
          (int)&v24);
      if ( (*((_BYTE *)this + 328) & 0x20) == 0 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 961) + 96LL))(*((_QWORD *)this + 961));
        if ( v9 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x6CF,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v9,
            (int)&v24);
      }
    }
    else
    {
      v10 = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this);
      *((_QWORD *)this + 45) = v10;
      v11 = v6 + v10;
      v25.y += *((_DWORD *)this + 91);
      y = v25.y;
      v25.x = v6 + v10;
      v26 = ControllerProcessor::AdjustPointToBounds(v25, (struct tagRECT *)((char *)this + 312));
      v13 = v26;
      v14 = v26 != __PAIR64__(y, v11);
      v15 = v26.x == *((_DWORD *)this + 78)
         || v26.x == *((_DWORD *)this + 80) - 1
         || v26.y == *((_DWORD *)this + 79)
         || v26.y == *((_DWORD *)this + 81) - 1;
      if ( *((_QWORD *)this + 45) == v26 )
        v5 = 0;
      if ( *((_BYTE *)this + 400) && v5 && PtInRect((const RECT *)this + 24, v26) )
      {
        ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedOverrideBounds(ControllerNavigationManager, v13, v17, v18);
      }
      v19 = ControllerProcessor::SetPointerPosition(this, v13, v14);
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6F7,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v19,
          (int)&v24);
      if ( (*((_BYTE *)this + 328) & 0x20) == 0 )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 961) + 80LL))(
                *((_QWORD *)this + 961),
                *((_QWORD *)this + 963),
                *((_QWORD *)this + 964));
        if ( v20 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x702,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v20,
            (int)&v24);
      }
      if ( v15 && v5 && (*((_BYTE *)this + 328) & 0x10) != 0 )
      {
        v25 = 0LL;
        ControllerProcessor::MapPointByVisualIdentifier(
          (ControllerProcessor *)((char *)this + 336),
          0LL,
          (struct _LUID *)(((unsigned __int64)this + 336) & -(__int64)(*((_QWORD *)this + 42) != 0LL)),
          &v26,
          &v25);
        v21 = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedClientBounds(v21, v25);
      }
    }
  }
  return 0LL;
}
