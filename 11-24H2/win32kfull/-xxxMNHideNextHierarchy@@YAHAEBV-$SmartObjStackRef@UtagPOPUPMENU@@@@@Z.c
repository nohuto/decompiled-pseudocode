/*
 * XREFs of ?xxxMNHideNextHierarchy@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x14009BDD0
 * Callers:
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 *     xxxMNButtonDown @ 0x14009BCCC (xxxMNButtonDown.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxMNHideNextHierarchy(__int64 a1)
{
  struct tagWND *v2; // rbx
  __int64 v3; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(**(_QWORD **)a1 + 24LL) )
    return 0LL;
  v2 = *(struct tagWND **)(**(_QWORD **)a1 + 24LL);
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v2);
  if ( v2 != *(struct tagWND **)(**(_QWORD **)a1 + 56LL) )
    xxxSendMessage(v2, 0x1E4u);
  xxxSendMessage(v2, 0x1E5u);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v3);
  return 1LL;
}
