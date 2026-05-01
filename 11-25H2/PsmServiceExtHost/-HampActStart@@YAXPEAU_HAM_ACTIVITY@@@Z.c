/*
 * XREFs of ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002BFFC
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A900 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ?HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x1800175A0 (-HampAppAcquireLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18001E7CC (-HampAppReleaseLockShared@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C3FC (-HampHostCheckQueueDependencyWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800566A4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x18005719C (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampActStart(struct _HAM_ACTIVITY *a1)
{
  struct _EVENT_DATA_DESCRIPTOR *v2; // rcx
  char v3; // r12
  struct _EVENT_DATA_DESCRIPTOR v4; // xmm1
  struct _EVENT_DATA_DESCRIPTOR v5; // xmm0
  struct _RM_HAM_ACTIVITY_HOST *v6; // rcx
  __int64 v7; // r14
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int16 v11; // r15
  int v12; // edi
  ULONGLONG Ptr; // rbx
  unsigned __int64 v14; // rdi
  char *v15; // r9
  ULONG *p_Size; // r8
  __int64 v17; // r11
  ULONGLONG v18; // r10
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  ULONGLONG v22; // rax
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  char v24; // [rsp+41h] [rbp-BFh] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v28[2]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  ULONGLONG v31; // [rsp+90h] [rbp-70h]
  unsigned int v32; // [rsp+98h] [rbp-68h]
  char v33; // [rsp+9Ch] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+C0h] [rbp-40h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+D0h] [rbp-30h]
  char *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  char *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]

  memset_0(v28, 0, 0x40uLL);
  v2 = (struct _EVENT_DATA_DESCRIPTOR *)*((_QWORD *)a1 + 66);
  v3 = *((_BYTE *)a1 + 562);
  v4 = v2[2];
  v27 = *v2;
  UserData = v27;
  v5 = v2[1];
  *((_BYTE *)a1 + 562) = 3;
  v36 = v4;
  v35 = v5;
  if ( v2 )
  {
    HampFreeHeap(v2);
    *((_QWORD *)a1 + 66) = 0LL;
  }
  v6 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_BYTE *)a1 + 563) = 6;
  HampHostUpdateActivityState(v6);
  v7 = *((_QWORD *)a1 + 10);
  *((_QWORD *)a1 + 64) = *(_QWORD *)(v7 + 816);
  v8 = *(_DWORD *)(v7 + 848);
  if ( v8 <= *((_DWORD *)a1 + 97) )
    v8 = *((_DWORD *)a1 + 97);
  *(_DWORD *)(v7 + 848) = v8;
  HampHostCheckQueueDependencyWorker((struct _RM_HAM_ACTIVITY_HOST *)v7);
  BitMapHeader = 0LL;
  RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 124, 0x2Fu);
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x19u) )
    *(_QWORD *)(v7 + 664) |= 0x400000000000000uLL;
  if ( *((_QWORD *)a1 + 8) )
  {
    v9 = *((_QWORD *)a1 + 5);
    v28[1] = 0LL;
    v29 = 0;
    v28[0] = v9;
    if ( *(_DWORD *)(v7 + 560) == 2 )
    {
      v10 = *(_QWORD *)(v7 + 792);
      HampAppAcquireLockShared((struct _HAM_APPLICATION *)v10);
      v11 = *(_WORD *)(v10 + 616);
      v12 = (*(_DWORD *)(v10 + 620) >> 5) & 7;
      HampAppReleaseLockShared((struct _HAM_APPLICATION *)v10);
      if ( v12 == 4 )
      {
        v12 = 3;
      }
      else if ( v12 != 3 && (*(_QWORD *)(v7 + 664) & 0x2000000000000LL) == 0 )
      {
        v12 = 3;
      }
    }
    else
    {
      v12 = 4;
      v11 = 6912;
    }
    Ptr = v27.Ptr;
    v25 = 0LL;
    LOWORD(v32) = v11;
    v31 = v27.Ptr;
    v32 = (v12 << 16) | v32 & 0xFFF8FFFF;
    v30 = *((_QWORD *)a1 + 64);
    RtlQueryPerformanceFrequency(&v25);
    v14 = v25;
    v15 = &v33;
    p_Size = &UserData.Size;
    v17 = 5LL;
    do
    {
      v18 = *(_QWORD *)p_Size;
      if ( *(_QWORD *)p_Size )
      {
        v19 = -1LL;
        v27.Ptr = ((v18 - Ptr) * (unsigned __int128)0x3E8uLL) >> 64;
        if ( is_mul_ok(v18 - Ptr, 0x3E8uLL) )
          v19 = 1000 * (v18 - Ptr);
        v20 = v19 / v14;
        if ( v19 / v14 > 0xFFFFFFFF )
          LODWORD(v20) = -1;
      }
      else
      {
        LODWORD(v20) = -1;
      }
      *(_DWORD *)v15 = v20;
      p_Size += 2;
      v15 += 4;
      Ptr = v18;
      --v17;
    }
    while ( v17 );
    HampSystemIssueActivityCallback(
      *((struct _HAM_CLIENT_CONTEXT **)a1 + 8),
      (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v28,
      0);
    v21 = *(_QWORD *)(v7 + 664);
    if ( (v21 & 0x100000000000LL) != 0 && (v21 & 0x30000) != 0 )
      HampActRequestStopEx(a1, 2LL, 5LL);
  }
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v22 = *((_QWORD *)a1 + 5);
    v42 = 0;
    v39 = 0;
    v27.Ptr = v22;
    v40 = &v23;
    v37 = &v24;
    v36.Ptr = (ULONGLONG)&v27;
    *(&BitMapHeader.SizeOfBitMap + 1) = 4;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v23 = v3;
    v24 = 3;
    v41 = 1;
    v38 = 1;
    *(_QWORD *)&v36.Size = 8LL;
    BitMapHeader.SizeOfBitMap = 184549376;
    BitMapHeader.Buffer = (PULONG)8;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v35.Ptr = (ULONGLONG)&unk_1800D52F6;
    UserData.Reserved = 2;
    *(_QWORD *)&v35.Size = 0x100000037LL;
    LODWORD(v25) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, (PCEVENT_DESCRIPTOR)&BitMapHeader, 0LL, 0LL, 5u, &UserData);
  }
}
