/*
 * XREFs of RIMOpenDevWorker @ 0x14012D31C
 * Callers:
 *     RIMOpenDev @ 0x1401D2344 (RIMOpenDev.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x140069204 (RimDeviceTypeToRimInputType.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdDSd @ 0x1401D259C (WPP_RECORDER_AND_TRACE_SF_qdDSd.c)
 *     rimSleep @ 0x1401D2850 (rimSleep.c)
 */

__int64 __fastcall RIMOpenDevWorker(
        __int64 a1,
        struct _OBJECT_ATTRIBUTES *a2,
        ACCESS_MASK a3,
        ULONG a4,
        __int64 a5,
        unsigned int a6,
        void **FileHandle,
        struct _IO_STATUS_BLOCK *IoStatusBlock)
{
  ULONG ShareAccess; // eax
  ACCESS_MASK v9; // r10d
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  char v13; // r14
  NTSTATUS File; // eax
  bool v16; // r12
  int v17; // esi
  __int64 v18; // rdi
  char v19; // bl
  __int64 v20; // rcx
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rcx
  char v25; // r12
  int v26; // esi
  __int64 v27; // rdi
  char v28; // bl
  __int64 v29; // rcx
  __int64 v30; // rax
  int v31; // edx
  int v32; // r8d
  int AllocationSize; // [rsp+20h] [rbp-88h]
  ULONG FileAttributes; // [rsp+28h] [rbp-80h]
  ULONG CreateDisposition; // [rsp+38h] [rbp-70h]
  struct _OBJECT_ATTRIBUTES *v36; // [rsp+B8h] [rbp+10h]
  bool v39; // [rsp+D0h] [rbp+28h]

  v36 = a2;
  ShareAccess = a4;
  v9 = a3;
  v11 = 0;
  v12 = 0;
  v13 = 1;
  while ( v12 < a6 )
  {
    File = ZwCreateFile(FileHandle, v9, a2, IoStatusBlock, 0LL, 0, ShareAccess, 3u, 0, 0LL, 0);
    v11 = File;
    if ( File != -1073741757 && File != -1073741790 )
      break;
    v24 = *(unsigned int *)(a1 + 184);
    if ( (v24 & 0x80u) == 0LL && !*(_DWORD *)(W32GetUserSessionState(v24) + 324) )
    {
      if ( v11 == -1073741757 || v11 == -1073741790 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
        {
          v13 = 0;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = *(_DWORD *)(a1 + 48);
          v18 = *(_QWORD *)(a1 + 200);
          v19 = RimDeviceTypeToRimInputType(a1, v17);
          UserSessionState = W32GetUserSessionState(v20);
          LOBYTE(v22) = v16;
          LOBYTE(v23) = v13;
          WPP_RECORDER_AND_TRACE_SF_qdDSd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v23,
            v22,
            *(_QWORD *)(UserSessionState + 19392),
            AllocationSize,
            FileAttributes,
            19,
            CreateDisposition,
            a1,
            v17,
            v19,
            v18,
            v11);
        }
        if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
          KeBugCheckEx(0x164u, 5uLL, a1 + 192, 0LL, 0LL);
      }
      return v11;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v25 = 0;
    }
    v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = *(_DWORD *)(a1 + 48);
      v27 = *(_QWORD *)(a1 + 200);
      v28 = RimDeviceTypeToRimInputType(a1, v26);
      v30 = W32GetUserSessionState(v29);
      LOBYTE(v31) = v25;
      LOBYTE(v32) = v39;
      WPP_RECORDER_AND_TRACE_SF_qdDSd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v31,
        v32,
        *(_QWORD *)(v30 + 19392),
        AllocationSize,
        FileAttributes,
        18,
        CreateDisposition,
        a1,
        v26,
        v28,
        v27,
        v11);
    }
    rimSleep();
    ShareAccess = a4;
    ++v12;
    v9 = a3;
    a2 = v36;
  }
  return v11;
}
