/*
 * XREFs of ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x1C00E3750
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 * Callees:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     CreateInputContext @ 0x1C00759D0 (CreateInputContext.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00AD580 (PopAndFreeW32ThreadLock.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E34E8 (RtlInitLargeUnicodeString.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C00E3684 (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     DesktopAlloc @ 0x1C00E42F0 (DesktopAlloc.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0139FC4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0139FF4 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

struct tagWND *__fastcall xxxCreateDefaultImeWindow(struct tagWND *a1, __int16 a2, void *a3)
{
  struct tagTHREADINFO *v6; // rax
  struct tagTHREADINFO *v7; // rbx
  int v8; // r12d
  __int64 v9; // rdx
  PVOID *v10; // rsi
  PVOID *v11; // r15
  __int64 v12; // rax
  void *v13; // r14
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  ULONG64 v19; // rcx
  ULONG64 v20; // r8
  ULONG64 *v21; // rax
  ULONG64 v22; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v27; // [rsp+90h] [rbp-A8h]
  __int128 v28; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-70h]
  __int128 v31; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-50h]
  _BYTE v33[32]; // [rsp+F0h] [rbp-48h] BYREF
  ULONG64 v34; // [rsp+158h] [rbp+20h]

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v6 = PtiCurrentShared();
  v7 = v6;
  if ( !*((_QWORD *)v6 + 99) && PsGetThreadProcessId(*(PETHREAD *)v6) == (HANDLE)gpidLogon )
    CreateInputContext(0LL, v24, v25, v26);
  if ( !*((_QWORD *)v7 + 99) )
    return 0LL;
  if ( a2 == *(_WORD *)(gpsi + 898LL) )
    return 0LL;
  v8 = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 1) != 0 )
    return 0LL;
  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v9 + 31) & 0xC0) == 0x40
    && *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL) + 424LL) != *((_QWORD *)v7 + 53)
    && (*(_DWORD *)(v9 + 28) & 0x10000000) == 0 )
  {
    return 0LL;
  }
  v10 = (PVOID *)*((_QWORD *)v7 + 57);
  v11 = v10 + 17;
  if ( !v10[17] )
    return 0LL;
  v12 = DesktopAlloc(v10, 24LL, 9LL);
  v13 = (void *)v12;
  if ( !v12 )
    return 0LL;
  *(_OWORD *)v12 = xmmword_1C03173E0;
  *(_QWORD *)(v12 + 16) = 0x45004D0049LL;
  RtlInitLargeUnicodeString((__int64)&v28, v12);
  PushW32ThreadLock((__int64)v10, &v29, UserDereferenceObject);
  if ( v10 )
    ObfReferenceObject(v10);
  ThreadLock(a1, &v31);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  if ( !CurrentProcessWin32Process
    || (-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process) == 0 )
  {
    goto LABEL_15;
  }
  v16 = PsGetCurrentProcessWin32Process(-*(_QWORD *)CurrentProcessWin32Process);
  if ( v16 )
    v16 &= -(__int64)(*(_QWORD *)v16 != 0LL);
  if ( !(unsigned int)IsImmersiveAppRestricted(v16) )
LABEL_15:
    v8 = 0;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v33, 0LL);
  v17 = (_QWORD *)xxxCreateWindowEx(
                    0,
                    *(unsigned __int16 *)(gpsi + 898LL),
                    *(unsigned __int16 *)(gpsi + 898LL),
                    &v28,
                    0x88000000,
                    0,
                    0,
                    0,
                    0,
                    a1,
                    (__int64)v33,
                    a3,
                    0LL,
                    0,
                    0x400u,
                    v8,
                    0LL);
  v27 = v17;
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v33);
  if ( v17 )
  {
    v21 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(v17);
    if ( v21 )
      v22 = *v21;
    else
      v22 = 0LL;
    v34 = v22;
    if ( v22 )
    {
      if ( (v22 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = MmUserProbeAddress;
      if ( v22 >= MmUserProbeAddress )
        v22 = MmUserProbeAddress;
      *(_BYTE *)v22 = *(_BYTE *)v22;
      *(_BYTE *)(v22 + 55) = *(_BYTE *)(v22 + 55);
      v20 = v34;
      v18 = *(_DWORD *)(v34 + 44) | 8u;
      *(_DWORD *)(v34 + 44) = v18;
      LOBYTE(v19) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
      if ( (_BYTE)v19 == 64 && *(struct tagTHREADINFO **)(*((_QWORD *)a1 + 13) + 16LL) != v7 )
      {
        v18 = (unsigned int)v18 | 0x10;
        *(_DWORD *)(v34 + 44) = v18;
      }
    }
    else
    {
      xxxDestroyWindow(v17);
      v27 = 0LL;
    }
  }
  ThreadUnlock1(v19, v18, v20);
  RtlFreeHeap(*v11, 0, v13);
  PopAndFreeW32ThreadLock((__int64)&v29);
  return (struct tagWND *)v27;
}
