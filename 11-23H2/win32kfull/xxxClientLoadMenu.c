/*
 * XREFs of xxxClientLoadMenu @ 0x1C00E0A48
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxLoadSysMenu @ 0x1C00E3AD4 (xxxLoadSysMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0228D98 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00DEAEC (HMValidateHandleNoRip.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, void **a2)
{
  __int64 v4; // r9
  unsigned __int8 *v5; // rdi
  unsigned __int16 v6; // ax
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // rbx
  unsigned __int8 *result; // rax
  _BYTE v11[4]; // [rsp+30h] [rbp-298h] BYREF
  int v12; // [rsp+34h] [rbp-294h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-290h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-288h] BYREF
  __int128 v15; // [rsp+48h] [rbp-280h] BYREF
  __int64 v16; // [rsp+58h] [rbp-270h]
  __int64 v17; // [rsp+60h] [rbp-268h]
  _DWORD v18[16]; // [rsp+70h] [rbp-258h] BYREF
  unsigned __int8 v19[512]; // [rsp+B0h] [rbp-218h] BYREF

  memset_0(v18, 0, sizeof(v18));
  v14 = 0LL;
  v12 = 0;
  v4 = *((unsigned __int16 *)a2 + 1);
  if ( (_WORD)v4 )
  {
    result = (unsigned __int8 *)AllocCallbackMessage(
                                  0x40u,
                                  (_WORD)v4 != 0,
                                  v4 & -(__int64)((_WORD)v4 != 0),
                                  v19,
                                  1,
                                  0x200uLL);
    v5 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v5 = (unsigned __int8 *)v18;
    RegionSize = (ULONG_PTR)v18;
    v18[0] = 64;
  }
  PtiCurrentShared();
  v15 = 0LL;
  v16 = 0LL;
  if ( v5 != (unsigned __int8 *)v18 && v5 != v19 )
    PushW32ThreadLock((__int64)v5, &v15, (__int64)Win32FreePool);
  *((_QWORD *)v5 + 5) = a1;
  *((_WORD *)v5 + 24) = *(_WORD *)a2;
  v6 = *((_WORD *)a2 + 1);
  *((_WORD *)v5 + 25) = v6;
  if ( v6 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v5, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v5 + 7) < 0 )
      goto LABEL_19;
  }
  else
  {
    *((_QWORD *)v5 + 7) = a2[1];
  }
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v11);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v7 = KeUserModeCallback(76LL, v5, *(unsigned int *)v5, &v14, &v12);
  EtwTraceEndCallback(76LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v11);
  if ( v7 >= 0 && v12 == 24 )
  {
    v8 = (__int64 *)v14;
    if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
      v8 = (__int64 *)MmUserProbeAddress;
    v17 = *v8;
    v9 = HMValidateHandleNoRip(v17, 2);
    goto LABEL_12;
  }
LABEL_19:
  v9 = 0LL;
LABEL_12:
  if ( v5 != (unsigned __int8 *)v18 && v5 != v19 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v15);
  }
  return (unsigned __int8 *)v9;
}
