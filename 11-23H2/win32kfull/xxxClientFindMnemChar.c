/*
 * XREFs of xxxClientFindMnemChar @ 0x1C0211C54
 * Callers:
 *     xxxMNFindChar @ 0x1C023E7C0 (xxxMNFindChar.c)
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

unsigned __int8 *__fastcall xxxClientFindMnemChar(char **a1, __int16 a2)
{
  unsigned __int8 *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // rcx
  __int64 v17; // rbx
  _BYTE v18[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v19; // [rsp+34h] [rbp-2A4h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-2A0h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-298h] BYREF
  __int128 v22; // [rsp+48h] [rbp-290h] BYREF
  __int64 v23; // [rsp+58h] [rbp-280h]
  __int64 v24; // [rsp+60h] [rbp-278h]
  unsigned __int8 v25[80]; // [rsp+70h] [rbp-268h] BYREF
  unsigned __int8 v26[512]; // [rsp+C0h] [rbp-218h] BYREF

  memset_0(v25, 0, 0x48uLL);
  v21 = 0LL;
  v19 = 0;
  result = AllocCallbackMessage(72, 1u, *((unsigned __int16 *)a1 + 1), v26, 1, 0x200uLL);
  v9 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrentShared(v6, v5, v7, v8);
    v22 = 0LL;
    v23 = 0LL;
    if ( v9 != v25 && v9 != v26 )
      PushW32ThreadLock((__int64)v9, &v22, (__int64)Win32FreePool);
    *((_WORD *)v9 + 28) = a2;
    *((_DWORD *)v9 + 15) = 1;
    *((_DWORD *)v9 + 16) = 1;
    *((_WORD *)v9 + 20) = *(_WORD *)a1;
    *((_WORD *)v9 + 21) = *((_WORD *)a1 + 1);
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v9,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v9 + 6) >= 0
      && (LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
            (LeaveEnterCritProperDisposition *)v18,
            v10,
            v11,
            v12),
          EtwTraceBeginCallback(66LL),
          *((_QWORD *)v9 + 2) = 0LL,
          v13 = KeUserModeCallback(66LL, v9, *(unsigned int *)v9, &v21, &v19),
          EtwTraceEndCallback(66LL),
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition(
            (LeaveEnterCritProperDisposition *)v18,
            v14,
            v15),
          v13 >= 0)
      && v19 == 24 )
    {
      v16 = (__int64 *)v21;
      if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
        v16 = (__int64 *)MmUserProbeAddress;
      v17 = *v16;
      v24 = *v16;
    }
    else
    {
      LODWORD(v17) = 0;
    }
    if ( v9 != v25 && v9 != v26 )
    {
      if ( *((_QWORD *)v9 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v22);
    }
    return (unsigned __int8 *)(unsigned int)v17;
  }
  return result;
}
