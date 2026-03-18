/*
 * XREFs of xxxMNCancel @ 0x14009D784
 * Callers:
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxMNButtonUp @ 0x14009D560 (xxxMNButtonUp.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x14009D684 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMenuWindowProc @ 0x14017E730 (xxxMenuWindowProc.c)
 *     xxxEndMenuLoop @ 0x1402517D0 (xxxEndMenuLoop.c)
 *     xxxMNChar @ 0x1402BD9E4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxEndMenu @ 0x1402E8608 (xxxEndMenu.c)
 *     xxxMNKeyFilter @ 0x1402EB098 (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostTransformableMessage @ 0x1400664C4 (_PostTransformableMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1400733C8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     xxxMNSelectItem @ 0x14009DA30 (xxxMNSelectItem.c)
 *     xxxMNCloseHierarchy @ 0x14009E0A0 (xxxMNCloseHierarchy.c)
 *     xxxSendMenuSelect @ 0x14009E36C (xxxSendMenuSelect.c)
 *     xxxPlayEventSound @ 0x1400A4F40 (xxxPlayEventSound.c)
 *     xxxDestroyWindow @ 0x14015EF90 (xxxDestroyWindow.c)
 *     xxxMNReleaseCapture @ 0x1402688C4 (xxxMNReleaseCapture.c)
 */

_QWORD *__fastcall xxxMNCancel(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  struct tagWND *v10; // rdi
  __int64 v11; // rdx
  int v12; // ebx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  __int64 v22; // rdx
  unsigned int v23; // [rsp+30h] [rbp-50h]
  _QWORD v24[2]; // [rsp+38h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+48h] [rbp-38h] BYREF
  ULONG_PTR v26[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v27[3]; // [rsp+68h] [rbp-18h] BYREF

  v5 = a3;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, *(_QWORD *)a1);
  v23 = **(_DWORD **)v24[0];
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFF3;
  v6 = *(_QWORD *)v24[0];
  **(_DWORD **)v24[0] |= 0x8000u;
  if ( PtiCurrent(v6, v7) == *(struct tagTHREADINFO **)(a1 + 32) )
  {
    v8 = 0x80000LL;
    if ( (**(_DWORD **)v24[0] & 0x80000) == 0 )
    {
      **(_DWORD **)v24[0] |= 0x80000u;
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(v26, *(_QWORD *)(*(_QWORD *)v24[0] + 16LL));
      xxxMNCloseHierarchy(*(_QWORD *)v24[0], a1);
      xxxMNSelectItem(v24, a1, 0xFFFFFFFFLL);
      v9 = v24[0];
      *(_DWORD *)(a1 + 8) &= ~1u;
      v10 = *(struct tagWND **)(*(_QWORD *)v9 + 8LL);
      Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, (__int64)v10);
      xxxMNReleaseCapture(a1);
      if ( ((v23 >> 3) & 1) != 0 )
      {
        xxxWindowEvent(7u, *(struct tagWND **)(*(_QWORD *)v24[0] + 16LL), -4, 0, 0);
        if ( *(_QWORD *)(*(_QWORD *)v24[0] + 16LL) )
          xxxDestroyWindow(*(struct tagWND **)(*(_QWORD *)v24[0] + 16LL));
      }
      if ( v10 )
      {
        v12 = -1;
        v13 = (unsigned int)SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v27, 0xFFFFFFFFLL);
        xxxSendMenuSelect((_DWORD)v10, 0, v13, -1, a1);
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v27, v14);
        if ( ((v23 >> 2) & 1) == 0 )
          v12 = (v23 & 1) != 0 ? 0xFFFFFFFD : 0;
        xxxWindowEvent(5u, v10, v12, 0, 0);
        if ( (v23 & 0x800) == 0 )
          xxxSendMessage(v10, 0x212u);
        if ( a2 )
        {
          xxxPlayEventSound(6u);
          *(_DWORD *)(a1 + 24) = v5;
          if ( (v23 & 0x100) == 0 )
            PostTransformableMessage(v10, a2, v5, a4, 1);
        }
        else
        {
          *(_DWORD *)(a1 + 24) = 0;
        }
        v17 = PtiCurrent(v16, v15);
        Win32HM_UnlockFromThread<1>((ULONG_PTR)v17, BugCheckParameter3);
        v20 = PtiCurrent(v19, v18);
        Win32HM_UnlockFromThread<1>((ULONG_PTR)v20, v26);
      }
      else
      {
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v11);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v26, v22);
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v24, v8);
}
