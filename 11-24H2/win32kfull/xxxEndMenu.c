/*
 * XREFs of xxxEndMenu @ 0x1402E8608
 * Callers:
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024F6E8 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     xxxEndMenuLoop @ 0x1402517D0 (xxxEndMenuLoop.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140252758 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxMNCancel @ 0x14009D784 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     xxxMNReleaseCapture @ 0x1402688C4 (xxxMNReleaseCapture.c)
 */

_QWORD *__fastcall xxxEndMenu(__int64 a1)
{
  __int64 v2; // rdx
  _DWORD **v3; // rax
  _DWORD *v4; // rcx
  struct tagTHREADINFO *v5; // rbx
  struct tagTHREADINFO *v6; // rsi
  int v7; // eax
  int v8; // ebx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v10, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v10, *(_QWORD *)a1);
  if ( *(_QWORD *)v10[0] )
  {
    v3 = (_DWORD **)v10[0];
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    v4 = *v3;
    **v3 |= 0x8000u;
    v5 = PtiCurrent((__int64)v4, v2);
    v6 = *(struct tagTHREADINFO **)(a1 + 32);
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( *(_QWORD *)(*((_QWORD *)v5 + 59) + 112LL) == v2 )
      xxxMNReleaseCapture(a1, v2);
    if ( v5 == v6 )
    {
      v7 = *(_DWORD *)(a1 + 8);
      if ( (v7 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v7 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0, 0LL);
        }
        else
        {
          v8 = **(_DWORD **)v10[0];
          xxxMNCloseHierarchy(*(_QWORD *)v10[0], a1);
          if ( (v8 & 8) != 0 && *(_QWORD *)(*(_QWORD *)v10[0] + 16LL) )
            xxxDestroyWindow(*(struct tagWND **)(*(_QWORD *)v10[0] + 16LL), v2);
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v10, v2);
}
