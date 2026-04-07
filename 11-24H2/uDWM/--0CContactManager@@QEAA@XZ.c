/*
 * XREFs of ??0CContactManager@@QEAA@XZ @ 0x18000D694
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18000D964 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CContactManager *__fastcall CContactManager::CContactManager(CContactManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 56, 0LL, 0LL);
  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 88, v2, v3);
  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 120, v4, v5);
  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 152, v6, v7);
  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 184, v8, v9);
  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 216, v10, v11);
  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 248, v12, v13);
  DynArrayImpl<0>::DynArrayImpl<0>((char *)this + 280, v14, v15);
  *((_QWORD *)this + 39) = v16;
  *((_DWORD *)this + 80) = v16;
  CContactManager::RefreshPresentationModeSettings(this);
  return this;
}
