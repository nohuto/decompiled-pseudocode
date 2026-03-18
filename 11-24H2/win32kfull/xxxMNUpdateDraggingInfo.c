/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1402E8064
 * Callers:
 *     xxxMNMouseMove @ 0x14006DA24 (xxxMNMouseMove.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14003F108 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x14006DE58 (IsMFMWFPWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x140282D2C (safe_cast_fnid_to_PMENUWND.c)
 *     LockMFMWFPWindow @ 0x1402BD81C (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1402BD8D4 (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1402E7E6C (xxxMNSetGapState.c)
 */

__int64 __fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // r14
  struct tagWND *v7; // r12
  unsigned int v8; // r13d
  int v9; // ebp
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // r15d
  _QWORD *v19; // rax
  int v20; // r15d
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebx
  int v25; // edi
  unsigned int v26; // eax
  BOOL v27; // eax
  bool v28; // zf
  _QWORD v30[2]; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF

  v3 = (__int64 *)(a1 + 80);
  Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, *(_QWORD *)(a1 + 80));
  v7 = (struct tagWND *)*v3;
  v8 = *(_DWORD *)(a1 + 88);
  v9 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v3, a2);
  v10 = *v3;
  *(_DWORD *)(a1 + 88) = a3;
  LOBYTE(v11) = IsMFMWFPWindow(v10);
  if ( !v11 || (v14 = safe_cast_fnid_to_PMENUWND(v13)) == 0 || (v12 = *(_QWORD *)(v14 + 8)) == 0 )
  {
    *v3 = 0LL;
    *(_DWORD *)(a1 + 88) = -1;
    return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v12);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v30, v12);
  v15 = MNGetpItem((__int64)v30, *(_DWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 92) = 0;
  v17 = v15;
  if ( v15 )
  {
    v18 = *(_DWORD *)(a1 + 16) - *(_DWORD *)(*(_QWORD *)(*v3 + 40) + 108LL);
    v19 = (_QWORD *)MNGetpItemFromIndex(
                      *(_QWORD *)(*(_QWORD *)v30[0] + 40LL),
                      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v30[0] + 40LL) + 116LL));
    v20 = *(_DWORD *)(*v19 + 68LL) + v18;
    v21 = *(_DWORD *)(*(_QWORD *)v17 + 68LL);
    v23 = (unsigned int)(v21 + *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(*v19, v22) + 19928) + 2172LL));
    if ( v20 > (int)v23 )
    {
      v24 = *(_DWORD *)(*(_QWORD *)v17 + 68LL);
      v25 = *(_DWORD *)(*(_QWORD *)v17 + 76LL);
      if ( v20 >= v24 + v25 - *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v23, v16) + 19928) + 2172LL) )
        *(_DWORD *)(a1 + 92) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 92) = 1;
    }
  }
  if ( v7 != (struct tagWND *)*v3 )
    goto LABEL_21;
  v26 = *(_DWORD *)(a1 + 88) - v8;
  if ( v26 != -1 )
  {
    if ( !v26 )
    {
      v27 = v9 != *(_DWORD *)(a1 + 92);
LABEL_17:
      v28 = !v27;
      goto LABEL_20;
    }
    if ( v26 == 1 )
    {
      if ( *(_DWORD *)(a1 + 92) == 1 && v9 == 2 )
        goto LABEL_22;
      v27 = 1;
      goto LABEL_17;
    }
LABEL_21:
    *(_DWORD *)(a1 + 92) |= 4u;
    xxxMNSetGapState(v7, v8, v9, 0);
    xxxMNSetGapState((struct tagWND *)*v3, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a1 + 92) != 2 )
    goto LABEL_21;
  v28 = v9 == 1;
LABEL_20:
  if ( !v28 )
    goto LABEL_21;
LABEL_22:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v30, v16);
  return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v12);
}
