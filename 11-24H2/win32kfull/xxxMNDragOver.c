/*
 * XREFs of xxxMNDragOver @ 0x1402E7CF0
 * Callers:
 *     NtUserMNDragOver @ 0x140299BB0 (NtUserMNDragOver.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x14006DE58 (IsMFMWFPWindow.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14006EFFC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x14009A560 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxCallHandleMenuMessages @ 0x1402270AC (xxxCallHandleMenuMessages.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     GetMenuStateWindow @ 0x1402BD7E8 (GetMenuStateWindow.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdi
  int v9; // eax
  __int64 MenuStateWindow; // rax
  __int64 *v11; // rbp
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  _QWORD v21[2]; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, 0LL);
  v6 = 0LL;
  v8 = *((_QWORD *)PtiCurrent(v5, v4) + 81);
  if ( v8
    && (v9 = *(_DWORD *)(v8 + 8), (v9 & 0x400) != 0)
    && (*(_DWORD *)(v8 + 8) = v9 | 0x8000,
        MenuStateWindow = GetMenuStateWindow((_QWORD *)v8),
        (v11 = (__int64 *)MenuStateWindow) != 0LL) )
  {
    ++*(_DWORD *)(v8 + 40);
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, MenuStateWindow);
    xxxCallHandleMenuMessages(v8, v11, 160, 0LL, *a1 | (a1[2] << 16));
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v12);
    LOBYTE(v13) = IsMFMWFPWindow(*(_QWORD *)(v8 + 80));
    if ( v13 )
    {
      v15 = safe_cast_fnid_to_PMENUWND(v14);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8);
        if ( v16 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v21, v16);
          if ( *(_QWORD *)(*(_QWORD *)v21[0] + 40LL) )
            v17 = **(_QWORD **)(*(_QWORD *)v21[0] + 40LL);
          else
            v17 = 0LL;
          *(_QWORD *)(a2 + 8) = v17;
          *(_DWORD *)(a2 + 16) = *(_DWORD *)(v8 + 88);
          if ( *(_QWORD *)(*(_QWORD *)v21[0] + 8LL) )
            v6 = **(_QWORD **)(*(_QWORD *)v21[0] + 8LL);
          *(_QWORD *)(a2 + 24) = v6;
          v18 = *(_DWORD *)(v8 + 92);
          *(_DWORD *)a2 = v18;
          if ( (v18 & 2) != 0 )
            ++*(_DWORD *)(a2 + 16);
          LODWORD(v6) = 1;
        }
      }
    }
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v8, 1);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v21, v19);
    return (unsigned int)v6;
  }
  else
  {
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v21, v7);
    return 0LL;
  }
}
