/*
 * XREFs of xxxClientExtTextOutW @ 0x14003C3AC
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14003C16C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
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

__int64 __fastcall xxxClientExtTextOutW(
        HDC a1,
        int a2,
        int a3,
        unsigned int a4,
        _OWORD *a5,
        PCWSTR SourceString,
        int a7)
{
  HDC CompatiblePublicDC; // r14
  unsigned __int64 MaximumLength; // r8
  int v12; // ebx
  unsigned __int8 *v13; // rdi
  struct tagTHREADINFO *v14; // rax
  unsigned int v15; // ebx
  int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 UserSessionState; // rax
  unsigned int v23; // ebx
  __int64 v24; // [rsp+60h] [rbp-308h] BYREF
  int v25; // [rsp+68h] [rbp-300h] BYREF
  __int64 v26; // [rsp+70h] [rbp-2F8h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-2F0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v29; // [rsp+90h] [rbp-2D8h]
  void *Src; // [rsp+98h] [rbp-2D0h] BYREF
  __int128 v31; // [rsp+A0h] [rbp-2C8h] BYREF
  void (*v32)(void *); // [rsp+B0h] [rbp-2B8h]
  unsigned __int8 *v33; // [rsp+B8h] [rbp-2B0h]
  HDC v34; // [rsp+C0h] [rbp-2A8h]
  unsigned __int8 v35[112]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v36[512]; // [rsp+140h] [rbp-228h] BYREF

  LODWORD(v24) = a3;
  LODWORD(v29) = a2;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v35, 0, 0x68uLL);
  Src = 0LL;
  v25 = 0;
  v26 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v34 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= 2 * (unsigned __int64)(unsigned int)(a7 + 1) )
    MaximumLength = 2LL * (unsigned int)(a7 + 1);
  v12 = 1;
  v13 = (unsigned __int8 *)AllocCallbackMessage(0x68u, 1u, MaximumLength, v36, 1, 0x200uLL);
  v33 = v13;
  if ( !v13 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v26);
    }
    return 0LL;
  }
  PtiCurrent();
  v31 = 0LL;
  v32 = 0LL;
  if ( v13 != v35 && v13 != v36 )
  {
    v14 = PtiCurrent();
    *(_QWORD *)&v31 = *((_QWORD *)v14 + 48);
    *((_QWORD *)v14 + 48) = &v31;
    *((_QWORD *)&v31 + 1) = v13;
    v32 = Win32FreePool;
  }
  *((_QWORD *)v13 + 7) = CompatiblePublicDC;
  *((_DWORD *)v13 + 16) = v29;
  *((_DWORD *)v13 + 17) = v24;
  *((_DWORD *)v13 + 18) = a4;
  if ( a5 )
    *(_OWORD *)(v13 + 76) = *a5;
  else
    v12 = 0;
  *((_DWORD *)v13 + 24) = v12;
  *((_DWORD *)v13 + 23) = a7;
  *((_WORD *)v13 + 20) = DestinationString.Length;
  *((_WORD *)v13 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v13,
              DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v13 + 6) < 0 )
    goto LABEL_21;
  v15 = GreSaveDC(a1);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v24);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v16 = KeUserModeCallback(80LL, v13, *(unsigned int *)v13, &Src, &v25);
  EtwTraceEndCallback(80LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v24);
  GreRestoreDC(a1, v15);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v16 < 0 )
    {
LABEL_21:
      v23 = 0;
      goto LABEL_22;
    }
    v19 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 57008);
    v20 = *(_DWORD *)(v19 + 100);
    UserSessionState = W32GetUserSessionState(v19, v21);
    GreBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)(UserSessionState + 57008) + 96LL),
      v20,
      CompatiblePublicDC,
      0,
      0,
      0xCC0020u,
      0,
      0);
  }
  if ( v16 < 0 || v25 != 24 )
    goto LABEL_21;
  v24 = 0LL;
  RtlCopyFromUser(&v24, Src, 8uLL);
  v23 = v24;
  v29 = v24;
LABEL_22:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v26);
  }
  if ( v13 != v35 && v13 != v36 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v31);
  }
  return v23;
}
