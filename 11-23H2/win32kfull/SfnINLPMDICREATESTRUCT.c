/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C0208F30
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C00AD510 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00E0550 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9418 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00E9504 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1C013C550 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0204834 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r13
  unsigned int v10; // r14d
  int v11; // r12d
  int *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct tagTHREADINFO *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned __int8 *result; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  void **v26; // r9
  unsigned int v27; // r8d
  CHAR *v28; // rdx
  int v29; // eax
  unsigned int v30; // r8d
  unsigned int v31; // r8d
  CHAR *v32; // rdx
  void **v33; // r9
  int v34; // eax
  unsigned int v35; // r8d
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  ULONG_PTR v40; // r14
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // esi
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rcx
  __int64 *v51; // rcx
  __int64 v52; // rsi
  _BYTE v53[4]; // [rsp+30h] [rbp-398h] BYREF
  int v54; // [rsp+34h] [rbp-394h] BYREF
  int *v55; // [rsp+38h] [rbp-390h]
  int v56; // [rsp+40h] [rbp-388h]
  __int64 v57; // [rsp+58h] [rbp-370h]
  __int64 *v58; // [rsp+60h] [rbp-368h]
  unsigned __int64 v59; // [rsp+68h] [rbp-360h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+70h] [rbp-358h] BYREF
  __int64 v61; // [rsp+88h] [rbp-340h]
  __int128 v62; // [rsp+90h] [rbp-338h]
  __int64 v63; // [rsp+A0h] [rbp-328h]
  __int128 v64; // [rsp+A8h] [rbp-320h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-310h]
  __int64 v66; // [rsp+C0h] [rbp-308h]
  __int128 v67; // [rsp+E0h] [rbp-2E8h] BYREF
  __int64 v68; // [rsp+F0h] [rbp-2D8h]
  int v69; // [rsp+100h] [rbp-2C8h] BYREF
  char v70[140]; // [rsp+104h] [rbp-2C4h] BYREF
  unsigned __int8 v71[512]; // [rsp+190h] [rbp-238h] BYREF

  v61 = a3;
  v56 = a2;
  v58 = a1;
  LODWORD(v8) = 0;
  LODWORD(v9) = 0;
  v10 = 0;
  v11 = a7 & 1;
  memset_0(&v69, 0, 0x90uLL);
  v12 = &v69;
  v59 = 0LL;
  v54 = 0;
  v67 = 0LL;
  v68 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v17 = PtiCurrentShared(v14, v13, v15, v16);
  RegionSize[0] = (ULONG_PTR)v17;
  if ( v58 )
    v57 = v58[5] - *((_QWORD *)v17 + 59);
  else
    v57 = 0LL;
  v18 = *(_QWORD *)(a4 + 8);
  if ( v18 && (v18 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v11) )
  {
    v19 = *(_DWORD *)(a4 + 56);
    v8 = v19 + 2;
    if ( (unsigned int)v8 < v19 )
      goto LABEL_60;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v8 *= 2LL;
      if ( v8 > 0xFFFFFFFF )
        goto LABEL_60;
    }
    v10 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v11) )
  {
    v20 = *(_DWORD *)(a4 + 72);
    v9 = v20 + 2;
    if ( (unsigned int)v9 < v20 )
      goto LABEL_60;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v9 *= 2LL;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_60;
    }
    ++v10;
  }
  if ( (int)v8 + (int)v9 >= (unsigned int)v8 )
  {
    if ( v10 )
    {
      result = AllocCallbackMessage(144, v10, (unsigned int)(v8 + v9), v71, 1, 0x200uLL);
      v12 = (int *)result;
      v55 = (int *)result;
      if ( !result )
        return result;
    }
    else
    {
      v12 = &v69;
      v55 = &v69;
      memset_0(v70, 0, sizeof(v70));
      v69 = 144;
    }
    PtiCurrentShared(v23, v22, v24, v25);
    v64 = 0LL;
    v65 = 0LL;
    if ( v12 != &v69 && v12 != (int *)v71 )
      PushW32ThreadLock((__int64)v12, &v64, (__int64)Win32FreePool);
    *((_QWORD *)v12 + 5) = v57;
    v12[12] = v56;
    *((_QWORD *)v12 + 7) = v61;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v12 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v12 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v12 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v12 + 14) = *(_QWORD *)(a4 + 48);
    if ( !(_DWORD)v8 )
      goto LABEL_38;
    v26 = (void **)(v12 + 18);
    v27 = *(_DWORD *)(a4 + 56);
    v28 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v29 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v28, 2 * v27 + 2, v26);
LABEL_37:
        if ( v29 < 0 )
          goto LABEL_60;
LABEL_38:
        if ( !(_DWORD)v9 )
        {
LABEL_48:
          *((_QWORD *)v12 + 15) = a5;
          *((_QWORD *)v12 + 16) = a6;
          v36 = v58;
          ThreadLock(v58, &v67);
          v40 = RegionSize[0];
          v41 = *(_QWORD *)(RegionSize[0] + 480);
          *(_OWORD *)RegionSize = *(_OWORD *)(v41 + 64);
          v62 = *(_OWORD *)RegionSize;
          v63 = *(_QWORD *)(v41 + 80);
          *(_QWORD *)(v41 + 72) = v57;
          if ( v36 )
            v42 = *v36;
          else
            v42 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v40 + 480) + 64LL) = v42;
          if ( v36 )
            v43 = *(_QWORD *)(v36[5] + 224);
          else
            v43 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v40 + 480) + 80LL) = v43;
          LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition(
            (LeaveEnterCritProperDisposition *)v53,
            v37,
            v38,
            v39);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v12 + 2) = 0LL;
          v44 = KeUserModeCallback(15LL, v12, (unsigned int)*v12, &v59, &v54);
          EtwTraceEndCallback(15LL);
          LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition(
            (LeaveEnterCritProperDisposition *)v53,
            v45,
            v46);
          ThreadUnlock1(v48, v47, v49);
          v50 = *(_QWORD *)(v40 + 480);
          *(_OWORD *)(v50 + 64) = *(_OWORD *)RegionSize;
          *(_QWORD *)(v50 + 80) = v63;
          if ( v44 >= 0 && v54 == 24 )
          {
            v51 = (__int64 *)v59;
            if ( v59 + 8 < v59 || v59 + 8 > MmUserProbeAddress )
              v51 = (__int64 *)MmUserProbeAddress;
            v52 = *v51;
            v66 = *v51;
            goto LABEL_61;
          }
          goto LABEL_60;
        }
        v31 = *(_DWORD *)(a4 + 72);
        v32 = *(CHAR **)(a4 + 80);
        v33 = (void **)(v12 + 16);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v34 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v32, 2 * v31 + 2, v33);
LABEL_47:
            if ( v34 < 0 )
              goto LABEL_60;
            goto LABEL_48;
          }
          v35 = v31 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v34 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v32, (v31 >> 1) + 1, v33, 0);
            goto LABEL_47;
          }
          v35 = v31 + 2;
        }
        v34 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v32, v35, v33);
        goto LABEL_47;
      }
      v30 = v27 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v29 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v28, (v27 >> 1) + 1, v26, 0);
        goto LABEL_37;
      }
      v30 = v27 + 2;
    }
    v29 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v28, v30, v26);
    goto LABEL_37;
  }
LABEL_60:
  v52 = 0LL;
LABEL_61:
  if ( v12 != &v69 && v12 != (int *)v71 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v64);
  }
  return (unsigned __int8 *)v52;
}
