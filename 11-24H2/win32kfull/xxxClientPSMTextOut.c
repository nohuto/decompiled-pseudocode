/*
 * XREFs of xxxClientPSMTextOut @ 0x1402BC690
 * Callers:
 *     xxxPSMTextOut @ 0x1402ECC34 (xxxPSMTextOut.c)
 * Callees:
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GreSaveDC @ 0x140036E78 (GreSaveDC.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1401753E8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     CreateCompatiblePublicDC @ 0x1401EE788 (CreateCompatiblePublicDC.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14026E428 (RtlCopyFromUser.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B80BC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1402B8118 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

HDC __fastcall xxxClientPSMTextOut(HDC a1, unsigned int a2, unsigned int a3, char **a4, int a5, int a6)
{
  HDC result; // rax
  HDC v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int8 *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 UserSessionState; // rax
  PVOID *v28; // rdx
  int v29; // [rsp+60h] [rbp-2E8h] BYREF
  HBITMAP v30; // [rsp+68h] [rbp-2E0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-2D8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-2D0h] BYREF
  void *Src; // [rsp+80h] [rbp-2C8h] BYREF
  __int128 v34; // [rsp+88h] [rbp-2C0h] BYREF
  void (*v35)(void *); // [rsp+98h] [rbp-2B0h]
  HDC v36; // [rsp+A0h] [rbp-2A8h]
  HDC v37; // [rsp+A8h] [rbp-2A0h]
  unsigned __int8 v38[80]; // [rsp+C0h] [rbp-288h] BYREF
  unsigned __int8 v39[512]; // [rsp+110h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  memset_0(v38, 0, sizeof(v38));
  Src = 0LL;
  v29 = 0;
  v30 = 0LL;
  result = CreateCompatiblePublicDC(a1, &v30);
  v11 = result;
  v37 = result;
  if ( !result )
    return result;
  result = (HDC)AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v39, 1, 0x200uLL);
  v14 = (unsigned __int8 *)result;
  v36 = result;
  if ( !result )
  {
    if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      return (HDC)GreDeleteObject(v30);
    }
    return result;
  }
  PtiCurrent(v13, v12);
  v34 = 0LL;
  v35 = 0LL;
  if ( v14 != v38 && v14 != v39 )
  {
    v17 = PtiCurrent(v16, v15);
    *(_QWORD *)&v34 = *((_QWORD *)v17 + 48);
    *((_QWORD *)v17 + 48) = &v34;
    *((_QWORD *)&v34 + 1) = v14;
    v35 = Win32FreePool;
  }
  *((_QWORD *)v14 + 7) = v11;
  *((_DWORD *)v14 + 16) = a2;
  *((_DWORD *)v14 + 17) = a3;
  *((_DWORD *)v14 + 18) = a5;
  *((_DWORD *)v14 + 19) = a6;
  *((_WORD *)v14 + 20) = *(_WORD *)a4;
  *((_WORD *)v14 + 21) = *((_WORD *)a4 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v14,
              a4[1],
              (unsigned int)*(unsigned __int16 *)a4 + 2,
              (void **)v14 + 6) >= 0 )
  {
    v18 = GreSaveDC(a1);
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v31, v19, v20);
    EtwTraceBeginCallback(78LL);
    *((_QWORD *)v14 + 2) = 0LL;
    v21 = KeUserModeCallback(78LL, v14, *(unsigned int *)v14, &Src, &v29);
    EtwTraceEndCallback(78LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v31);
    GreRestoreDC(a1, v18);
    if ( v11 == a1 )
    {
LABEL_12:
      if ( v21 >= 0 && v29 == 24 )
      {
        v31 = 0LL;
        RtlCopyFromUser(&v31, Src, 8uLL);
      }
      goto LABEL_15;
    }
    if ( v21 >= 0 )
    {
      v24 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 57008);
      v25 = *(_DWORD *)(v24 + 100);
      UserSessionState = W32GetUserSessionState(v24, v26);
      GreBitBltInternal(
        a1,
        0,
        0,
        *(_DWORD *)(*(_QWORD *)(UserSessionState + 57008) + 96LL),
        v25,
        v11,
        0,
        0,
        0xCC0020u,
        0,
        0);
      goto LABEL_12;
    }
  }
LABEL_15:
  if ( v11 != a1 )
  {
    GreDeleteDC(v11);
    GreDeleteObject(v30);
  }
  result = (HDC)v38;
  if ( v14 != v38 )
  {
    result = (HDC)v39;
    if ( v14 != v39 )
    {
      v28 = (PVOID *)(v14 + 32);
      if ( *((_QWORD *)v14 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v28, &RegionSize, 0x8000u);
      }
      return (HDC)PopAndFreeAlwaysW32ThreadLock((__int64)&v34, (__int64)v28);
    }
  }
  return result;
}
