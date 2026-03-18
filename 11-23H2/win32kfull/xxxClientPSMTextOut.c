/*
 * XREFs of xxxClientPSMTextOut @ 0x1C0212A10
 * Callers:
 *     xxxPSMTextOut @ 0x1C0240F14 (xxxPSMTextOut.c)
 * Callees:
 *     GreSaveDCInternal @ 0x1C006DAB0 (GreSaveDCInternal.c)
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     CreateCompatiblePublicDC @ 0x1C023EC2C (CreateCompatiblePublicDC.c)
 */

unsigned __int8 *__fastcall xxxClientPSMTextOut(
        Gre::Base *a1,
        unsigned int a2,
        unsigned int a3,
        char **a4,
        int a5,
        int a6)
{
  unsigned __int8 *result; // rax
  HDC v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int8 *v16; // rdi
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // r8
  _BYTE v24[4]; // [rsp+60h] [rbp-2D8h] BYREF
  int v25; // [rsp+64h] [rbp-2D4h] BYREF
  __int64 v26; // [rsp+68h] [rbp-2D0h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-2C8h] BYREF
  _QWORD v28[3]; // [rsp+78h] [rbp-2C0h] BYREF
  __int128 v29; // [rsp+90h] [rbp-2A8h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-298h]
  unsigned __int8 v31[80]; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int8 v32[512]; // [rsp+100h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  memset_0(v31, 0, sizeof(v31));
  v28[0] = 0LL;
  v25 = 0;
  v26 = 0LL;
  result = (unsigned __int8 *)CreateCompatiblePublicDC((__int64)a1);
  v11 = (HDC)result;
  v28[2] = result;
  if ( result )
  {
    result = AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v32, 1, 0x200uLL);
    v16 = result;
    v28[1] = result;
    if ( result )
    {
      PtiCurrentShared(v13, v12, v14, v15);
      v29 = 0LL;
      v30 = 0LL;
      if ( v16 != v31 && v16 != v32 )
        PushW32ThreadLock((__int64)v16, &v29, (__int64)Win32FreePool);
      *((_QWORD *)v16 + 7) = v11;
      *((_DWORD *)v16 + 16) = a2;
      *((_DWORD *)v16 + 17) = a3;
      *((_DWORD *)v16 + 18) = a5;
      *((_DWORD *)v16 + 19) = a6;
      *((_WORD *)v16 + 20) = *(_WORD *)a4;
      *((_WORD *)v16 + 21) = *((_WORD *)a4 + 1);
      if ( (int)CaptureCallbackData(
                  (struct _CAPTUREBUF *)v16,
                  a4[1],
                  (unsigned int)*(unsigned __int16 *)a4 + 2,
                  (void **)v16 + 6) >= 0 )
      {
        v17 = GreSaveDCInternal(a1, 1);
        LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
          (LeaveEnterCritProperDisposition *)v24,
          v18,
          v19,
          v20);
        EtwTraceBeginCallback(78LL);
        *((_QWORD *)v16 + 2) = 0LL;
        v21 = KeUserModeCallback(78LL, v16, *(unsigned int *)v16, v28, &v25);
        EtwTraceEndCallback(78LL);
        LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition(
          (LeaveEnterCritProperDisposition *)v24,
          v22,
          v23);
        GreRestoreDC(a1, v17);
        if ( v11 != (HDC)a1 && v21 >= 0 )
          NtGdiBitBltInternal(
            (__int64)a1,
            0,
            0,
            *(_DWORD *)(gpDispInfo + 88LL),
            *(_DWORD *)(gpDispInfo + 92LL),
            v11,
            0,
            0,
            13369376,
            0,
            0);
      }
      if ( v11 != (HDC)a1 )
      {
        GreDeleteDC(v11);
        GreDeleteObject(v26);
      }
      result = v31;
      if ( v16 != v31 )
      {
        result = v32;
        if ( v16 != v32 )
        {
          if ( *((_QWORD *)v16 + 4) )
          {
            RegionSize = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v16 + 4, &RegionSize, 0x8000u);
          }
          return (unsigned __int8 *)PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
        }
      }
    }
    else if ( v11 != (HDC)a1 )
    {
      GreDeleteDC(v11);
      return (unsigned __int8 *)GreDeleteObject(v26);
    }
  }
  return result;
}
