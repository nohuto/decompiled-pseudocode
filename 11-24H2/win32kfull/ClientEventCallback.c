/*
 * XREFs of ClientEventCallback @ 0x1402B85B8
 * Callers:
 *     xxxEventWndProc @ 0x1402DBD80 (xxxEventWndProc.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall ClientEventCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int8 *result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ebx
  unsigned int v15; // ebx
  PVOID *v16; // rdx
  int v17; // [rsp+30h] [rbp-298h] BYREF
  __int64 v18; // [rsp+38h] [rbp-290h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-288h] BYREF
  void *Src; // [rsp+48h] [rbp-280h] BYREF
  __int128 v21; // [rsp+50h] [rbp-278h] BYREF
  void (*v22)(void *); // [rsp+60h] [rbp-268h]
  __int64 v23; // [rsp+68h] [rbp-260h]
  _OWORD v24[3]; // [rsp+78h] [rbp-250h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-220h]
  unsigned __int8 v26[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 6) + 8;
  memset(v24, 0, sizeof(v24));
  v25 = 0LL;
  Src = 0LL;
  v17 = 0;
  result = AllocCallbackMessage(56, 1u, v4, v26, 1, 0x200uLL);
  v8 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v7, v6);
    v21 = 0LL;
    v22 = 0LL;
    if ( v8 != (unsigned __int8 *)v24 && v8 != v26 )
    {
      v11 = PtiCurrent(v10, v9);
      *(_QWORD *)&v21 = *((_QWORD *)v11 + 48);
      *((_QWORD *)v11 + 48) = &v21;
      *((_QWORD *)&v21 + 1) = v8;
      v22 = Win32FreePool;
    }
    *((_QWORD *)v8 + 5) = a1;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v8, (char *)a2, v4, (void **)v8 + 6) >= 0
      && (LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v18, v12, v13),
          EtwTraceBeginCallback(65LL),
          *((_QWORD *)v8 + 2) = 0LL,
          v14 = KeUserModeCallback(65LL, v8, *(unsigned int *)v8, &Src, &v17),
          EtwTraceEndCallback(65LL),
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v18),
          v14 >= 0)
      && v17 == 24 )
    {
      v18 = 0LL;
      RtlCopyFromUser(&v18, Src, 8uLL);
      v15 = v18;
      v23 = v18;
    }
    else
    {
      v15 = 0;
    }
    if ( v8 != (unsigned __int8 *)v24 && v8 != v26 )
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
  return result;
}
