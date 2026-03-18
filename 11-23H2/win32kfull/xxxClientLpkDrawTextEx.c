/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C0212608
 * Callers:
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x1C024C320 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x1C024C448 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
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

__int64 __fastcall xxxClientLpkDrawTextEx(
        Gre::Base *a1,
        int a2,
        int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC CompatiblePublicDC; // r14
  __int64 MaximumLength; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 *v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 *v28; // rcx
  __int64 v29; // rbx
  _BYTE v30[4]; // [rsp+60h] [rbp-358h] BYREF
  int v31; // [rsp+64h] [rbp-354h] BYREF
  __int64 v32; // [rsp+68h] [rbp-350h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-348h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-340h] BYREF
  __int64 v35; // [rsp+88h] [rbp-330h]
  _QWORD v36[3]; // [rsp+90h] [rbp-328h] BYREF
  __int128 v37; // [rsp+A8h] [rbp-310h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-300h]
  unsigned __int8 v39[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v40[512]; // [rsp+180h] [rbp-238h] BYREF

  LODWORD(v35) = a2;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v39, 0, 0xA8uLL);
  v36[0] = 0LL;
  v31 = 0;
  v32 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC((__int64)a1);
  v36[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * a5 + 2) )
    MaximumLength = 2LL * a5 + 2;
  v18 = AllocCallbackMessage(168, 1u, MaximumLength, v40, 1, 0x200uLL);
  v36[1] = v18;
  if ( !v18 )
  {
    if ( CompatiblePublicDC != (HDC)a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v32);
    }
    return 0LL;
  }
  PtiCurrentShared(v17, v16, v19, v20);
  v37 = 0LL;
  v38 = 0LL;
  if ( v18 != v39 && v18 != v40 )
    PushW32ThreadLock((__int64)v18, &v37, (__int64)Win32FreePool);
  *((_QWORD *)v18 + 7) = CompatiblePublicDC;
  *((_DWORD *)v18 + 16) = v35;
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
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v18 + 6) < 0 )
    goto LABEL_21;
  v21 = GreSaveDCInternal(a1, 1);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
    (LeaveEnterCritProperDisposition *)v30,
    v22,
    v23,
    v24);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v18 + 2) = 0LL;
  v25 = KeUserModeCallback(79LL, v18, *(unsigned int *)v18, v36, &v31);
  EtwTraceEndCallback(79LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v30, v26, v27);
  GreRestoreDC(a1, v21);
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    if ( v25 < 0 )
      goto LABEL_21;
    NtGdiBitBltInternal(
      (__int64)a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 88LL),
      *(_DWORD *)(gpDispInfo + 92LL),
      CompatiblePublicDC,
      0,
      0,
      13369376,
      0,
      0);
  }
  if ( v25 >= 0 && v31 == 24 )
  {
    v28 = (__int64 *)v36[0];
    if ( (unsigned __int64)(v36[0] + 8LL) < v36[0] || v36[0] + 8LL > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v35 = *v28;
    goto LABEL_22;
  }
LABEL_21:
  LODWORD(v29) = 0;
LABEL_22:
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v32);
  }
  if ( v18 != v39 && v18 != v40 )
  {
    if ( *((_QWORD *)v18 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v18 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v37);
  }
  return (unsigned int)v29;
}
