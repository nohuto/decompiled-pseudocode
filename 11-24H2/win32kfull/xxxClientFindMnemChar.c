/*
 * XREFs of xxxClientFindMnemChar @ 0x1402BBFBC
 * Callers:
 *     xxxMNFindChar @ 0x1402EAF50 (xxxMNFindChar.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxClientFindMnemChar(char **a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // ebx
  unsigned int v14; // ebx
  PVOID *v15; // rdx
  int v16; // [rsp+30h] [rbp-2B8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-2B0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2A8h] BYREF
  void *Src; // [rsp+48h] [rbp-2A0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-298h] BYREF
  void (*v21)(void *); // [rsp+60h] [rbp-288h]
  __int64 v22; // [rsp+68h] [rbp-280h]
  unsigned __int8 v23[80]; // [rsp+80h] [rbp-268h] BYREF
  unsigned __int8 v24[512]; // [rsp+D0h] [rbp-218h] BYREF

  memset_0(v23, 0, 0x48uLL);
  Src = 0LL;
  v16 = 0;
  result = AllocCallbackMessage(72, 1u, *((unsigned __int16 *)a1 + 1), v24, 1, 0x200uLL);
  v7 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v6, v5);
    v20 = 0LL;
    v21 = 0LL;
    if ( v7 != v23 && v7 != v24 )
    {
      v10 = PtiCurrent(v9, v8);
      *(_QWORD *)&v20 = *((_QWORD *)v10 + 48);
      *((_QWORD *)v10 + 48) = &v20;
      *((_QWORD *)&v20 + 1) = v7;
      v21 = Win32FreePool;
    }
    *((_WORD *)v7 + 28) = a2;
    *((_DWORD *)v7 + 15) = 1;
    *((_DWORD *)v7 + 16) = 1;
    *((_WORD *)v7 + 20) = *(_WORD *)a1;
    *((_WORD *)v7 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v7,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v7 + 6) >= 0
      && (LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v17, v11, v12),
          EtwTraceBeginCallback(66LL),
          *((_QWORD *)v7 + 2) = 0LL,
          v13 = KeUserModeCallback(66LL, v7, *(unsigned int *)v7, &Src, &v16),
          EtwTraceEndCallback(66LL),
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v17),
          v13 >= 0)
      && v16 == 24 )
    {
      v17 = 0LL;
      RtlCopyFromUser(&v17, Src, 8uLL);
      v14 = v17;
      v22 = v17;
    }
    else
    {
      v14 = 0;
    }
    if ( v7 != v23 && v7 != v24 )
    {
      v15 = (PVOID *)(v7 + 32);
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v15, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v20, (__int64)v15);
    }
    return (unsigned __int8 *)v14;
  }
  return result;
}
