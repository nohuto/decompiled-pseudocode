/*
 * XREFs of UpdateMonitorForWindowAndChildren @ 0x14008BA78
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x140034540 (NtUserUpdateLayeredWindow.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401E1800 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x14022BB34 (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1402C61F0 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     UpdateWindowMonitor @ 0x140045CB0 (UpdateWindowMonitor.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     HMValidateCatHandleNoSecure @ 0x14008C510 (HMValidateCatHandleNoSecure.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14008C5F8 (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x14008D5F0 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14008D624 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 */

__int64 __fastcall UpdateMonitorForWindowAndChildren(struct tagWND **a1, struct tagMONITOR *a2, _QWORD *a3, int a4)
{
  __int64 result; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  struct tagWLDBI *v11; // rsi
  _QWORD *i; // r14
  __int64 v13; // rbx
  __int64 v14; // rcx

  result = (__int64)BuildHwndList((struct tagWND *)a1, 1LL, 0LL, 1);
  v9 = (_QWORD *)result;
  if ( result )
  {
    v11 = BuildWindowListWithDpiBoundaryInfo((struct tagWND *)a1, a1[13], (struct tagBWL *)result, 0LL);
    for ( i = v9 + 4; *i != 1LL; ++i )
    {
      v13 = HMValidateCatHandleNoSecure(*i);
      UpdateWindowMonitor((struct tagWND *)v13, a2);
      if ( a4 )
      {
        if ( !IsTopLevelWindow(v13)
          || (v14 = *(_QWORD *)(v13 + 40), (*(_DWORD *)(v14 + 232) & 0x400) != 0) && (*(_BYTE *)(v14 + 16) & 0xF) != 0 )
        {
          *(_DWORD *)(v13 + 380) |= 0x40000u;
        }
      }
    }
    if ( v11 )
    {
      UpdateWindowPositionsForDpiBoundaryChange(v11);
      FreeListFree(v11);
    }
    if ( a3 )
      *a3 = v9;
    else
      FreeHwndList(v9, v10);
    return 1LL;
  }
  return result;
}
