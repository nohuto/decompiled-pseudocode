/*
 * XREFs of xxxClientLoadStringW @ 0x140114990
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x140112BF8 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x14011C730 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140196E58 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140198814 (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxClientLoadStringW(unsigned int a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  unsigned __int8 *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int8 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  int v14; // ebx
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  PVOID *v20; // rdx
  int v21; // [rsp+30h] [rbp-2F8h] BYREF
  unsigned int v22[2]; // [rsp+38h] [rbp-2F0h] BYREF
  void *Src; // [rsp+40h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+48h] [rbp-2E0h] BYREF
  _DWORD v25[2]; // [rsp+58h] [rbp-2D0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-2C8h]
  __int128 v27; // [rsp+68h] [rbp-2C0h] BYREF
  void (*v28)(void *); // [rsp+78h] [rbp-2B0h]
  __int128 v29; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v30; // [rsp+90h] [rbp-298h]
  __int128 v31; // [rsp+98h] [rbp-290h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-280h]
  unsigned __int8 v33[64]; // [rsp+C0h] [rbp-268h] BYREF
  unsigned __int8 v34[512]; // [rsp+100h] [rbp-228h] BYREF

  memset_0(v33, 0, sizeof(v33));
  Src = 0LL;
  v21 = 0;
  v6 = 2 * a3;
  v26 = a2;
  v25[0] = 0;
  v25[1] = 2;
  result = (unsigned __int8 *)AllocCallbackMessage(0x40u, 1u, 2 * a3, v34, 0, 0x200uLL);
  v10 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v9, v8);
    v27 = 0LL;
    v28 = 0LL;
    if ( v10 != v33 && v10 != v34 )
    {
      v13 = PtiCurrent(v12, v11);
      *(_QWORD *)&v27 = *((_QWORD *)v13 + 48);
      *((_QWORD *)v13 + 48) = &v27;
      *((_QWORD *)&v27 + 1) = v10;
      v28 = Win32FreePool;
    }
    *((_DWORD *)v10 + 10) = a1;
    *((_DWORD *)v10 + 11) = a3;
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v10, v6, (void **)v10 + 6) < 0 )
      goto LABEL_12;
    *((_DWORD *)v10 + 14) = v6;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v22);
    EtwTraceBeginCallback(98LL);
    *((_QWORD *)v10 + 2) = 0LL;
    v14 = KeUserModeCallback(98LL, v10, *(unsigned int *)v10, &Src, &v21);
    EtwTraceEndCallback(98LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v22);
    if ( v14 < 0 )
      goto LABEL_12;
    if ( v21 != 24 )
      goto LABEL_12;
    *(_QWORD *)v22 = 0LL;
    RtlCopyFromUser(v22, Src, 8uLL);
    v15 = v22[0];
    RegionSize[0] = *(_QWORD *)v22;
    v29 = 0LL;
    v30 = 0LL;
    RtlCopyFromUser(&v29, Src, 0x18uLL);
    v31 = v29;
    v32 = v30;
    v18 = *((_QWORD *)PtiCurrent(v17, v16) + 69);
    if ( !v18 )
      goto LABEL_11;
    if ( (*(_DWORD *)(v18 + 84) & 1) != 0 && *(_DWORD **)(v18 + 96) == v25 )
    {
LABEL_12:
      v19 = 0;
    }
    else
    {
LABEL_11:
      v19 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v31, v15, 0, 0);
      RegionSize[0] = v19;
      CopyOutputString((struct _CALLBACKSTATUS *)&v31, (struct _LARGE_STRING *)v25, a3, 0);
    }
    if ( v10 != v33 && v10 != v34 )
    {
      v20 = (PVOID *)(v10 + 32);
      if ( *((_QWORD *)v10 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v20, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v27, (__int64)v20);
    }
    return (unsigned __int8 *)v19;
  }
  return result;
}
