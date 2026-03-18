/*
 * XREFs of xxxGetMenuItemRect @ 0x1401B15B8
 * Callers:
 *     NtUserGetMenuItemRect @ 0x1401B1410 (NtUserGetMenuItemRect.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401B175C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1401B1824 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 MenuPwnd; // rax
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rsi
  int v13; // ebx
  int v14; // esi
  struct tagTHREADINFO *v15; // rax
  __int64 result; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // r9d
  _DWORD *v21; // rcx
  int v22; // ebx
  int v23; // esi
  ULONG_PTR BugCheckParameter3[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a3;
  *(_OWORD *)a4 = 0LL;
  if ( a3 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  MenuPwnd = GetMenuPwnd();
  v8 = MenuPwnd;
  if ( !MenuPwnd )
    return 0LL;
  v9 = *(_BYTE *)(*(_QWORD *)(MenuPwnd + 40) + 26LL) & 0x40;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0 )
  {
    v17 = *(_QWORD *)(MenuPwnd + 40);
    v13 = (*(_BYTE *)(v17 + 26) & 0x40) != 0 ? *(_DWORD *)(v17 + 112) : *(_DWORD *)(v17 + 104);
    v14 = *(_DWORD *)(v17 + 108);
  }
  else
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, MenuPwnd);
    xxxMNRecomputeBarIfNeeded(v8, a2);
    v12 = *(_DWORD **)(v8 + 40);
    v13 = v9 ? v12[24] : v12[22];
    v14 = v12[23];
    v15 = PtiCurrent(v11, v10);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v15, BugCheckParameter3);
  }
  if ( (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) )
    return 0LL;
  v18 = *(_QWORD *)(**(_QWORD **)a2 + 88LL) + 96 * v4;
  v19 = *(_DWORD *)(*(_QWORD *)v18 + 72LL);
  *(_DWORD *)(a4 + 8) = v19;
  v20 = *(_DWORD *)(*(_QWORD *)v18 + 76LL);
  *(_DWORD *)(a4 + 12) = v20;
  v21 = *(_DWORD **)v18;
  if ( v9 )
    v22 = v13 - (v21[16] + v21[18]);
  else
    v22 = v21[16] + v13;
  v23 = v21[17] + v14;
  result = 1LL;
  *(_DWORD *)a4 += v22;
  *(_DWORD *)(a4 + 4) += v23;
  *(_DWORD *)(a4 + 8) = v19 + v22;
  *(_DWORD *)(a4 + 12) = v20 + v23;
  return result;
}
