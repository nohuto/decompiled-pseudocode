/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x14007C3CC
 * Callers:
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x14007C284 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x14007E4B4 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
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

__int64 __fastcall xxxClientLpkDrawTextEx(
        HDC a1,
        int a2,
        unsigned int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC CompatiblePublicDC; // r14
  unsigned __int64 MaximumLength; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  unsigned int v22; // ebx
  int v23; // r12d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rdx
  __int64 UserSessionState; // rax
  unsigned int v30; // ebx
  __int64 v31; // [rsp+60h] [rbp-358h] BYREF
  int v32; // [rsp+68h] [rbp-350h] BYREF
  __int64 v33; // [rsp+70h] [rbp-348h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-338h] BYREF
  void *Src; // [rsp+90h] [rbp-328h] BYREF
  __int128 v37; // [rsp+98h] [rbp-320h] BYREF
  void (*v38)(void *); // [rsp+A8h] [rbp-310h]
  unsigned __int8 *v39; // [rsp+B0h] [rbp-308h]
  HDC v40; // [rsp+B8h] [rbp-300h]
  __int64 v41; // [rsp+C0h] [rbp-2F8h]
  unsigned __int8 v42[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v43[512]; // [rsp+180h] [rbp-238h] BYREF

  LODWORD(v31) = a2;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v42, 0, 0xA8uLL);
  Src = 0LL;
  v32 = 0;
  v33 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v40 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * a5 + 2) )
    MaximumLength = 2LL * a5 + 2;
  v18 = (unsigned __int8 *)AllocCallbackMessage(0xA8u, 1u, MaximumLength, v43, 1, 0x200uLL);
  v39 = v18;
  if ( !v18 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v33);
    }
    return 0LL;
  }
  PtiCurrent(v17, v16);
  v37 = 0LL;
  v38 = 0LL;
  if ( v18 != v42 && v18 != v43 )
  {
    v21 = PtiCurrent(v20, v19);
    *(_QWORD *)&v37 = *((_QWORD *)v21 + 48);
    *((_QWORD *)v21 + 48) = &v37;
    *((_QWORD *)&v37 + 1) = v18;
    v38 = Win32FreePool;
  }
  *((_QWORD *)v18 + 7) = CompatiblePublicDC;
  *((_DWORD *)v18 + 16) = v31;
  *((_DWORD *)v18 + 17) = a3;
  *((_DWORD *)v18 + 18) = a5;
  *((_DWORD *)v18 + 19) = a6;
  *((_DWORD *)v18 + 20) = a7;
  *(_OWORD *)(v18 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v18 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v18 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v18 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v18 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v18 + 40) = a9;
  *((_DWORD *)v18 + 41) = a10;
  *((_WORD *)v18 + 20) = DestinationString.Length;
  *((_WORD *)v18 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v18,
              DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v18 + 6) < 0 )
    goto LABEL_18;
  v22 = GreSaveDC(a1);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v31);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v18 + 2) = 0LL;
  v23 = KeUserModeCallback(79LL, v18, *(unsigned int *)v18, &Src, &v32);
  EtwTraceEndCallback(79LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v31);
  GreRestoreDC(a1, v22);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v23 < 0 )
    {
LABEL_18:
      v30 = 0;
      goto LABEL_19;
    }
    v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 57008);
    v27 = *(_DWORD *)(v26 + 100);
    UserSessionState = W32GetUserSessionState(v26, v28);
    GreBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)(UserSessionState + 57008) + 96LL),
      v27,
      CompatiblePublicDC,
      0,
      0,
      0xCC0020u,
      0,
      0);
  }
  if ( v23 < 0 || v32 != 24 )
    goto LABEL_18;
  v31 = 0LL;
  RtlCopyFromUser(&v31, Src, 8uLL);
  v30 = v31;
  v41 = v31;
LABEL_19:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v33);
  }
  if ( v18 != v42 && v18 != v43 )
  {
    if ( *((_QWORD *)v18 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v18 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v37);
  }
  return v30;
}
