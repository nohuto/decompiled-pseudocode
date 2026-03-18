/*
 * XREFs of xxxClientAddFontResourceW @ 0x14011672C
 * Callers:
 *     xxxAddFontResourceW @ 0x1401166E0 (xxxAddFontResourceW.c)
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

unsigned __int8 *__fastcall xxxClientAddFontResourceW(void **a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  int v13; // ebx
  unsigned int v14; // ebx
  PVOID *v15; // rdx
  int v16; // [rsp+30h] [rbp-2F8h] BYREF
  __int64 v17; // [rsp+38h] [rbp-2F0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2E8h] BYREF
  void *Src; // [rsp+48h] [rbp-2E0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-2D8h] BYREF
  void (*v21)(void *); // [rsp+60h] [rbp-2C8h]
  __int64 v22; // [rsp+68h] [rbp-2C0h]
  unsigned __int8 v23[144]; // [rsp+80h] [rbp-2A8h] BYREF
  unsigned __int8 v24[512]; // [rsp+110h] [rbp-218h] BYREF

  memset_0(v23, 0, 0x88uLL);
  Src = 0LL;
  v16 = 0;
  result = (unsigned __int8 *)AllocCallbackMessage(0x88u, 1u, *((unsigned __int16 *)a1 + 1), v24, 1, 0x200uLL);
  v9 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v8, v7);
    v20 = 0LL;
    v21 = 0LL;
    if ( v9 != v23 && v9 != v24 )
    {
      v12 = PtiCurrent(v11, v10);
      *(_QWORD *)&v20 = *((_QWORD *)v12 + 48);
      *((_QWORD *)v12 + 48) = &v20;
      *((_QWORD *)&v20 + 1) = v9;
      v21 = Win32FreePool;
    }
    *((_WORD *)v9 + 20) = *(_WORD *)a1;
    *((_WORD *)v9 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v9,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v9 + 6) < 0 )
      goto LABEL_13;
    *((_DWORD *)v9 + 14) = a2;
    if ( a3 && *(_DWORD *)(a3 + 4) )
    {
      *(_OWORD *)(v9 + 60) = *(_OWORD *)a3;
      *(_OWORD *)(v9 + 76) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(v9 + 92) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(v9 + 108) = *(_OWORD *)(a3 + 48);
      *(_QWORD *)(v9 + 124) = *(_QWORD *)(a3 + 64);
    }
    else
    {
      *((_DWORD *)v9 + 16) = 0;
    }
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v17);
    EtwTraceBeginCallback(83LL);
    *((_QWORD *)v9 + 2) = 0LL;
    v13 = KeUserModeCallback(83LL, v9, *(unsigned int *)v9, &Src, &v16);
    EtwTraceEndCallback(83LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v17);
    if ( v13 >= 0 && v16 == 24 )
    {
      v17 = 0LL;
      RtlCopyFromUser(&v17, Src, 8uLL);
      v14 = v17;
      v22 = v17;
    }
    else
    {
LABEL_13:
      v14 = 0;
    }
    if ( v9 != v23 && v9 != v24 )
    {
      v15 = (PVOID *)(v9 + 32);
      if ( *((_QWORD *)v9 + 4) )
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
