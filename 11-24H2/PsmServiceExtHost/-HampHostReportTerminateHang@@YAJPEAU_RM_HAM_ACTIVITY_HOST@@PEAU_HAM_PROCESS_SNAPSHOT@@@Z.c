/*
 * XREFs of ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007DF0C
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180006EF4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z @ 0x18007F218 (-HampUtilActOnThreads@@YAJPEAXKKP6AJ000@Z0@Z.c)
 *     ?HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z @ 0x18007F324 (-HampUtilCreateTempFile@@YAJPEBGKPEAPEAXPEAG@Z.c)
 *     ?HampUtilDeleteTempFile@@YAJPEBG@Z @ 0x18007F3F0 (-HampUtilDeleteTempFile@@YAJPEBG@Z.c)
 *     ?HampSystemWerUploadLiveDump@@YAJPEBG0@Z @ 0x18009094C (-HampSystemWerUploadLiveDump@@YAJPEBG0@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostReportTerminateHang(struct _RM_HAM_ACTIVITY_HOST *a1, struct _HAM_PROCESS_SNAPSHOT *a2)
{
  unsigned int v4; // edx
  const unsigned __int16 *v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  const unsigned __int16 *v12; // rcx
  __int64 v13; // rdi
  NTSTATUS v14; // ebx
  __int64 v16; // rcx
  ULONG v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD InputBuffer[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h]
  HANDLE v25; // [rsp+68h] [rbp-98h]
  __int128 v26; // [rsp+70h] [rbp-90h]
  unsigned __int16 v27[528]; // [rsp+80h] [rbp-80h] BYREF

  v17 = 0;
  memset_0(InputBuffer, 0, 0x40uLL);
  Handle = (HANDLE)-1LL;
  v7 = 0LL;
  if ( *((_DWORD *)a2 + 4) )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)a2;
      v17 = 0;
      if ( (int)HampUtilActOnThreads(
                  *(void **)(v8 + 8 * v7),
                  0,
                  v6,
                  (int (*)(void *, void *, void *))HampProcessCountThreads,
                  &v17) >= 0
        && v17 == 1 )
      {
        break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)a2 + 4) )
        goto LABEL_7;
    }
    if ( (_DWORD)v7 != -1 )
      goto LABEL_21;
  }
LABEL_7:
  v7 = 0LL;
  if ( *((_DWORD *)a2 + 4) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)a2;
      v17 = 0;
      HampUtilActOnThreads(
        *(void **)(v9 + 8 * v7),
        0,
        v6,
        (int (*)(void *, void *, void *))HampProcessCountThreads,
        &v17);
      if ( v17 > 1 )
        break;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)a2 + 4) )
        goto LABEL_10;
    }
    if ( (_DWORD)v7 != -1 )
    {
LABEL_21:
      v16 = *(_QWORD *)a2;
      v10 = *(_DWORD *)(*((_QWORD *)a2 + 1) + 4 * v7);
      v18 = 0;
      HampUtilActOnThreads(*(void **)(v16 + 8 * v7), 0, v6, HampProcessQueryFirstThreadId, &v18);
      goto LABEL_11;
    }
  }
LABEL_10:
  v10 = 0;
  v18 = 0;
LABEL_11:
  v11 = HampUtilCreateTempFile(v5, v4, &Handle, v27);
  v13 = (__int64)Handle;
  v14 = v11;
  if ( v11 >= 0 )
  {
    v24 = 0LL;
    v26 = 0LL;
    v22 = v10;
    v23 = v18;
    InputBuffer[0] = 1;
    InputBuffer[1] = 513;
    v21 = 1LL;
    DWORD2(v26) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
    v25 = Handle;
    v14 = NtSystemDebugControl(SysDbgClearUmAttachPid|SysDbgQueryTraceInformation, InputBuffer, 0x40u, 0LL, 0, 0LL);
    if ( v14 >= 0 )
    {
      NtClose((HANDLE)v13);
      v13 = -1LL;
      v14 = HampSystemWerUploadLiveDump(v27, (const unsigned __int16 *)a1 + 12);
      if ( v14 < 0 )
      {
LABEL_18:
        HampUtilDeleteTempFile(v12);
        return (unsigned int)v14;
      }
      v14 = 0;
    }
  }
  if ( v13 != -1 )
    NtClose((HANDLE)v13);
  if ( v14 < 0 )
    goto LABEL_18;
  return (unsigned int)v14;
}
