/*
 * XREFs of xxxClientLoadMenu @ 0x1401A9338
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     xxxLoadSysMenu @ 0x1401A910C (xxxLoadSysMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402E1C74 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoRip @ 0x14008ED8C (HMValidateHandleNoRip.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, void **a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  _BOOL8 v6; // rdx
  unsigned __int8 *result; // rax
  unsigned __int8 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  unsigned __int16 v12; // ax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rbx
  PVOID *v16; // rdx
  int v17; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-2A0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-298h] BYREF
  void *Src; // [rsp+48h] [rbp-290h] BYREF
  __int128 v21; // [rsp+50h] [rbp-288h] BYREF
  void (*v22)(void *); // [rsp+60h] [rbp-278h]
  __int64 v23; // [rsp+68h] [rbp-270h]
  _DWORD v24[16]; // [rsp+80h] [rbp-258h] BYREF
  unsigned __int8 v25[512]; // [rsp+C0h] [rbp-218h] BYREF

  memset_0(v24, 0, sizeof(v24));
  Src = 0LL;
  v17 = 0;
  v5 = *((unsigned __int16 *)a2 + 1);
  v6 = (_WORD)v5 != 0;
  if ( (_WORD)v5 )
  {
    result = AllocCallbackMessage(64, v6, v5 & -(__int64)((_WORD)v5 != 0), v25, 1, 0x200uLL);
    v8 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v8 = (unsigned __int8 *)v24;
    RegionSize = (ULONG_PTR)v24;
    v24[0] = 64;
  }
  PtiCurrent(v4, v6);
  v21 = 0LL;
  v22 = 0LL;
  if ( v8 != (unsigned __int8 *)v24 && v8 != v25 )
  {
    v11 = PtiCurrent(v10, v9);
    *(_QWORD *)&v21 = *((_QWORD *)v11 + 48);
    *((_QWORD *)v11 + 48) = &v21;
    *((_QWORD *)&v21 + 1) = v8;
    v22 = Win32FreePool;
  }
  *((_QWORD *)v8 + 5) = a1;
  *((_WORD *)v8 + 24) = *(_WORD *)a2;
  v12 = *((_WORD *)a2 + 1);
  *((_WORD *)v8 + 25) = v12;
  if ( v12 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v8,
                a2[1],
                (unsigned int)*(unsigned __int16 *)a2 + 2,
                (void **)v8 + 7) < 0 )
      goto LABEL_15;
  }
  else
  {
    *((_QWORD *)v8 + 7) = a2[1];
  }
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v18);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v13 = KeUserModeCallback(76LL, v8, *(unsigned int *)v8, &Src, &v17);
  EtwTraceEndCallback(76LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v18);
  if ( v13 >= 0 && v17 == 24 )
  {
    v18 = 0LL;
    RtlCopyFromUser(&v18, Src, 8uLL);
    v23 = v18;
    LOBYTE(v14) = 2;
    v15 = HMValidateHandleNoRip(v18, v14);
    goto LABEL_16;
  }
LABEL_15:
  v15 = 0LL;
LABEL_16:
  if ( v8 != (unsigned __int8 *)v24 && v8 != v25 )
  {
    v16 = (PVOID *)(v8 + 32);
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v16, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v21, (__int64)v16);
  }
  return (unsigned __int8 *)v15;
}
