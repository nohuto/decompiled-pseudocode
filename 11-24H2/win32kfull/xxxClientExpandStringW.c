/*
 * XREFs of xxxClientExpandStringW @ 0x140133BCC
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x140133688 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x14011C730 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140196E58 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  unsigned __int8 *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // ebx
  PVOID *v16; // rdx
  int v17; // [rsp+30h] [rbp-328h] BYREF
  unsigned int v18[2]; // [rsp+38h] [rbp-320h] BYREF
  void *Src; // [rsp+40h] [rbp-318h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+48h] [rbp-310h] BYREF
  __int128 v21; // [rsp+58h] [rbp-300h] BYREF
  void (*v22)(void *); // [rsp+68h] [rbp-2F0h]
  __int128 v23; // [rsp+70h] [rbp-2E8h] BYREF
  __int64 v24; // [rsp+80h] [rbp-2D8h]
  __int128 v25; // [rsp+88h] [rbp-2D0h] BYREF
  __int64 v26; // [rsp+98h] [rbp-2C0h]
  _OWORD v27[3]; // [rsp+B0h] [rbp-2A8h] BYREF
  __int64 v28; // [rsp+E0h] [rbp-278h]
  unsigned __int8 v29[592]; // [rsp+F0h] [rbp-268h] BYREF

  memset(v27, 0, sizeof(v27));
  v28 = 0LL;
  Src = 0LL;
  v17 = 0;
  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  result = (unsigned __int8 *)AllocCallbackMessage(0x38u, 1u, v2, v29, 1, 0x248uLL);
  v6 = result;
  RegionSize[1] = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v5, v4);
    v21 = 0LL;
    v22 = 0LL;
    if ( v6 != (unsigned __int8 *)v27 && v6 != v29 )
    {
      v9 = PtiCurrent(v8, v7);
      *(_QWORD *)&v21 = *((_QWORD *)v9 + 48);
      *((_QWORD *)v9 + 48) = &v21;
      *((_QWORD *)&v21 + 1) = v6;
      v22 = Win32FreePool;
    }
    *((_DWORD *)v6 + 10) = *(_DWORD *)a1;
    *((_DWORD *)v6 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v6 + 11)) & 0x7FFFFFFF;
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v6,
                *((void **)a1 + 1),
                (unsigned int)(*(_DWORD *)a1 + 2),
                (void **)v6 + 6) < 0 )
      goto LABEL_14;
    *((_DWORD *)v6 + 11) &= ~0x80000000;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v18);
    EtwTraceBeginCallback(59LL);
    *((_QWORD *)v6 + 2) = 0LL;
    v10 = KeUserModeCallback(59LL, v6, *(unsigned int *)v6, &Src, &v17);
    EtwTraceEndCallback(59LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v18);
    if ( v10 < 0 )
      goto LABEL_14;
    if ( v17 != 24 )
      goto LABEL_14;
    *(_QWORD *)v18 = 0LL;
    RtlCopyFromUser(v18, Src, 8uLL);
    v11 = v18[0];
    RegionSize[0] = *(_QWORD *)v18;
    v23 = 0LL;
    v24 = 0LL;
    RtlCopyFromUser(&v23, Src, 0x18uLL);
    v25 = v23;
    v26 = v24;
    v14 = *((_QWORD *)PtiCurrent(v13, v12) + 69);
    if ( !v14 )
      goto LABEL_13;
    if ( (*(_DWORD *)(v14 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v14 + 96) == a1 )
    {
LABEL_14:
      v15 = 0;
    }
    else
    {
LABEL_13:
      v15 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v25, v11, *((_DWORD *)a1 + 1) >> 31, 0);
      RegionSize[0] = v15;
      CopyOutputString((volatile void **)&v25, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
    }
    if ( v6 != (unsigned __int8 *)v27 && v6 != v29 )
    {
      v16 = (PVOID *)(v6 + 32);
      if ( *((_QWORD *)v6 + 4) )
      {
        RegionSize[0] = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v16, RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v21, (__int64)v16);
    }
    return (unsigned __int8 *)v15;
  }
  return result;
}
