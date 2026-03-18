/*
 * XREFs of SfnPOWERBROADCAST @ 0x1C0081550
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x1C00B5D8C (SetOrClrWF.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall SfnPOWERBROADCAST(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v9; // ebx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  struct tagTHREADINFO *v12; // r13
  __int64 v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned __int8 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdi
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30[8]; // [rsp+30h] [rbp-348h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-340h] BYREF
  int v32; // [rsp+40h] [rbp-338h] BYREF
  unsigned int v33; // [rsp+44h] [rbp-334h]
  unsigned __int64 v34; // [rsp+58h] [rbp-320h] BYREF
  __int128 v35; // [rsp+68h] [rbp-310h]
  __int64 v36; // [rsp+78h] [rbp-300h]
  __int128 v37; // [rsp+80h] [rbp-2F8h] BYREF
  __int64 v38; // [rsp+90h] [rbp-2E8h]
  __int64 v39; // [rsp+98h] [rbp-2E0h]
  __int128 v40; // [rsp+B8h] [rbp-2C0h]
  __int128 v41; // [rsp+C8h] [rbp-2B0h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-2A0h]
  _DWORD v43[24]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v44[512]; // [rsp+140h] [rbp-238h] BYREF

  v33 = a2;
  RegionSize = (unsigned __int16)a3 & 0x8000;
  v9 = 0;
  memset_0(v43, 0, 0x58uLL);
  v34 = 0LL;
  v32 = 0;
  v41 = 0LL;
  v42 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v10 = PtiCurrentShared();
  v12 = v10;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v10 + 59);
  else
    v13 = 0LL;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  LOBYTE(v11) = 1;
  if ( !HMValidateHandleNoSecure(v14, v11) )
    return 0LL;
  if ( a3 <= 0x8013 )
  {
    if ( (_DWORD)a3 )
    {
      if ( (_DWORD)a3 == 2 )
      {
        if ( (*(_BYTE *)(a1[5] + 19) & 1) == 0 )
          return 0LL;
        v28 = 769LL;
LABEL_46:
        v29 = 0LL;
        goto LABEL_44;
      }
      if ( (_DWORD)a3 != 4 )
      {
        if ( (_DWORD)a3 != 6 && (_DWORD)a3 != 7 )
        {
          if ( (_DWORD)a3 == 32787 )
            v9 = 1;
          goto LABEL_14;
        }
        SetOrClrWF(0LL, a1, 769LL, 1LL);
        v28 = 770LL;
        goto LABEL_46;
      }
      SetOrClrWF(0LL, a1, 769LL, 1LL);
      v28 = 770LL;
    }
    else
    {
      v28 = 769LL;
    }
    v29 = 1LL;
LABEL_44:
    SetOrClrWF(v29, a1, v28, 1LL);
  }
LABEL_14:
  v15 = 0;
  if ( RegionSize )
  {
    if ( a4 )
    {
      if ( a4 >= MmSystemRangeStart )
      {
        v15 = a4[4] + 20;
        if ( a4[4] >= 0xFFFFFFEC )
          return 0LL;
      }
    }
  }
  if ( !v9 )
  {
    v16 = (unsigned __int8 *)v43;
    RegionSize = (ULONG_PTR)v43;
    v43[0] = 88;
    goto LABEL_20;
  }
  v16 = (unsigned __int8 *)AllocCallbackMessage(0x58u, v9, v15, v44, 1, 0x200uLL);
  RegionSize = (ULONG_PTR)v16;
  if ( !v16 )
    return 0LL;
LABEL_20:
  PtiCurrentShared();
  v37 = 0LL;
  v38 = 0LL;
  if ( v16 != (unsigned __int8 *)v43 && v16 != v44 )
    PushW32ThreadLock(v16, &v37, Win32FreePool);
  *((_QWORD *)v16 + 5) = v13;
  *((_DWORD *)v16 + 12) = v33;
  *((_QWORD *)v16 + 7) = a3;
  if ( v15 )
  {
    if ( CaptureCallbackData((struct _CAPTUREBUF *)v16, a4, v15, (void **)v16 + 10) < 0 )
      goto LABEL_52;
  }
  else
  {
    *((_QWORD *)v16 + 10) = a4;
  }
  *((_QWORD *)v16 + 8) = a5;
  *((_QWORD *)v16 + 9) = a6;
  ThreadLock(a1, &v41);
  v17 = *((_QWORD *)v12 + 60);
  v40 = *(_OWORD *)(v17 + 64);
  v35 = v40;
  v36 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 60) + 80LL) = v19;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v30);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v16 + 2) = 0LL;
  v20 = KeUserModeCallback(29LL, v16, *(unsigned int *)v16, &v34, &v32);
  EtwTraceEndCallback(29LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v30);
  ThreadUnlock1(v22, v21, v23);
  v24 = *((_QWORD *)v12 + 60);
  *(_OWORD *)(v24 + 64) = v40;
  *(_QWORD *)(v24 + 80) = v36;
  if ( v20 >= 0 && v32 == 24 )
  {
    v25 = (__int64 *)v34;
    if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v39 = *v25;
    goto LABEL_37;
  }
LABEL_52:
  v26 = 0LL;
LABEL_37:
  if ( v16 != (unsigned __int8 *)v43 && v16 != v44 )
  {
    if ( *((_QWORD *)v16 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v16 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v37);
  }
  return v26;
}
