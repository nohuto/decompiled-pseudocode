/*
 * XREFs of ClientLoadLibrary @ 0x1C00E6D58
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C0122AD0 (xxxLoadHmodIndex.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall ClientLoadLibrary(void **a1, void **a2)
{
  unsigned __int8 *v4; // rdi
  int v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rbx
  _BYTE v9[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v10; // [rsp+34h] [rbp-2A4h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-298h] BYREF
  __int128 v13; // [rsp+48h] [rbp-290h] BYREF
  __int64 v14; // [rsp+58h] [rbp-280h]
  __int64 v15; // [rsp+60h] [rbp-278h]
  unsigned __int8 v16[80]; // [rsp+70h] [rbp-268h] BYREF
  unsigned __int8 v17[512]; // [rsp+C0h] [rbp-218h] BYREF

  memset_0(v16, 0, 0x48uLL);
  v12 = 0LL;
  v10 = 0;
  v4 = (unsigned __int8 *)AllocCallbackMessage(
                            0x48u,
                            2u,
                            *((unsigned __int16 *)a2 + 1) + (unsigned __int64)*((unsigned __int16 *)a1 + 1),
                            v17,
                            1,
                            0x200uLL);
  RegionSize = (ULONG_PTR)v4;
  if ( !v4 )
    return 0LL;
  PtiCurrentShared();
  v13 = 0LL;
  v14 = 0LL;
  if ( v4 != v16 && v4 != v17 )
    PushW32ThreadLock((__int64)v4, &v13, (__int64)Win32FreePool);
  *((_WORD *)v4 + 20) = *(_WORD *)a1;
  *((_WORD *)v4 + 21) = *((_WORD *)a1 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v4, a1[1], *(unsigned __int16 *)a1 + 2, (void **)v4 + 6) < 0 )
    goto LABEL_17;
  *((_WORD *)v4 + 28) = *(_WORD *)a2;
  *((_WORD *)v4 + 29) = *((_WORD *)a2 + 1);
  if ( CaptureCallbackData((struct _CAPTUREBUF *)v4, a2[1], *(unsigned __int16 *)a2 + 2, (void **)v4 + 8) < 0 )
    goto LABEL_17;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9);
  EtwTraceBeginCallback(75LL);
  *((_QWORD *)v4 + 2) = 0LL;
  v5 = KeUserModeCallback(75LL, v4, *(unsigned int *)v4, &v12, &v10);
  EtwTraceEndCallback(75LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v9);
  if ( v5 >= 0 && v10 == 24 )
  {
    v6 = (__int64 *)v12;
    if ( v12 + 8 < v12 || v12 + 8 > MmUserProbeAddress )
      v6 = (__int64 *)MmUserProbeAddress;
    v7 = *v6;
    v15 = *v6;
  }
  else
  {
LABEL_17:
    v7 = 0LL;
  }
  if ( v4 != v16 && v4 != v17 )
  {
    if ( *((_QWORD *)v4 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v4 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v13);
  }
  return v7;
}
