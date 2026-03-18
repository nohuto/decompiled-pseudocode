/*
 * XREFs of xxxDefWindowProc @ 0x1C00DF700
 * Callers:
 *     xxxGetControlColor @ 0x1C0007990 (xxxGetControlColor.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0014C78 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     xxxTooltipWndProc @ 0x1C00D7ED0 (xxxTooltipWndProc.c)
 *     xxxEventWndProc @ 0x1C00DE640 (xxxEventWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00DF38C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxValidateClassAndSize @ 0x1C00DF5B4 (xxxValidateClassAndSize.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C01282F0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxSwitchWndProc @ 0x1C01CAD30 (xxxSwitchWndProc.c)
 *     xxxGetWindowText @ 0x1C01F24D4 (xxxGetWindowText.c)
 *     xxxMenuWindowProc @ 0x1C0219F60 (xxxMenuWindowProc.c)
 *     xxxSBWndProc @ 0x1C022A1A0 (xxxSBWndProc.c)
 * Callees:
 *     xxxLoadUserApiHook @ 0x1C00DF860 (xxxLoadUserApiHook.c)
 *     xxxRealDefWindowProc @ 0x1C0109880 (xxxRealDefWindowProc.c)
 *     SfnDWORD @ 0x1C01243F0 (SfnDWORD.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDefWindowProc(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax

  if ( a2 == 397 || a2 == 325 )
    return 0LL;
  v7 = 0LL;
  if ( a2 != 60 )
    v7 = a4;
  if ( gihmodUserApiHook < 0 )
    return xxxRealDefWindowProc(a1);
  v8 = *((_QWORD *)a1 + 5);
  if ( *(char *)(v8 + 19) < 0 && (a2 != 130 || (*(_BYTE *)(v8 + 18) & 4) == 0 || *(__int16 *)(v8 + 42) < 0) )
    return xxxRealDefWindowProc(a1);
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 || !(unsigned int)xxxLoadUserApiHook() )
    return xxxRealDefWindowProc(a1);
  v10 = a2 & 0x1FFFF;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 18LL) & 8) != 0 )
  {
    if ( v10 < 0x400 )
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
               a1,
               a2,
               a3,
               v7,
               0LL,
               *(_QWORD *)(gpsi + 552LL),
               1,
               0LL);
    v11 = *(_QWORD *)(gpsi + 552LL);
    return SfnDWORD((_DWORD)a1, a2, a3, v7, 0LL, v11);
  }
  if ( v10 >= 0x400 )
  {
    v11 = *(_QWORD *)(gpsi + 744LL);
    return SfnDWORD((_DWORD)a1, a2, a3, v7, 0LL, v11);
  }
  return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, _DWORD, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
           a1,
           a2,
           a3,
           v7,
           0LL,
           *(_QWORD *)(gpsi + 744LL),
           0,
           0LL);
}
