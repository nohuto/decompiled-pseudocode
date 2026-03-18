/*
 * XREFs of ?VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORMATION@@@Z @ 0x14022B688
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401CC6F8 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002F1C4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDriverStoreFile(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        char *a2,
        unsigned int *a3,
        unsigned __int8 *a4,
        struct _FILE_BASIC_INFORMATION *a5)
{
  char v9; // si
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v16[8]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v17; // [rsp+168h] [rbp+68h]
  int v18; // [rsp+170h] [rbp+70h]
  LARGE_INTEGER v19; // [rsp+178h] [rbp+78h]
  LARGE_INTEGER v20; // [rsp+180h] [rbp+80h]
  LARGE_INTEGER v21; // [rsp+188h] [rbp+88h]
  LARGE_INTEGER v22; // [rsp+190h] [rbp+90h]
  ULONG v23; // [rsp+198h] [rbp+98h]
  unsigned __int16 v24[266]; // [rsp+19Ch] [rbp+9Ch] BYREF

  if ( !a3 || !a4 || (v9 = 0, !a5) )
    v9 = 1;
  v15 = 0;
  v14 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v14, this, 0x20u, 0LL, 0LL, 0LL);
  v10 = v14;
  v13[0] = 584;
  *(_BYTE *)(v14 + 12) = 0;
  *(_DWORD *)(v10 + 12) &= 0x1FFu;
  *(_QWORD *)v10 = 0LL;
  *(_DWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 53LL;
  *(_BYTE *)(v10 + 24) = v9;
  v11 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v14, v16, v13);
  if ( v11 < 0 )
    goto LABEL_10;
  v11 = -1073741823;
  if ( v13[0] < 0x248 )
    goto LABEL_11;
  v11 = v18;
  if ( v18 < 0 )
  {
LABEL_10:
    if ( v11 == -2147483642 )
      goto LABEL_12;
LABEL_11:
    WdLogSingleEntry1(3LL, v11);
    WdLogGlobalForLineNumber = 12979;
    goto LABEL_12;
  }
  if ( !v9 )
  {
    *a4 = v16[0];
    *a3 = v17;
    a5->ChangeTime = v22;
    a5->CreationTime = v19;
    a5->FileAttributes = v23;
    a5->LastAccessTime = v20;
    a5->LastWriteTime = v21;
    v24[259] = 0;
    RtlStringCbCopyW(a2, 0x208uLL, (char *)v24);
  }
LABEL_12:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v14);
  return (unsigned int)v11;
}
