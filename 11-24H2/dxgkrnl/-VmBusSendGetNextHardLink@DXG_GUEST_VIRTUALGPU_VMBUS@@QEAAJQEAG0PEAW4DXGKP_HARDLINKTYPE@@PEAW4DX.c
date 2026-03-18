/*
 * XREFs of ?VmBusSendGetNextHardLink@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAG0PEAW4DXGKP_HARDLINKTYPE@@PEAW4DXGKP_HARDLINKOVERWRITETYPE@@@Z @ 0x14022BC50
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401CC6F8 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x14002F1C4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetNextHardLink(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        char *a2,
        char *a3,
        enum DXGKP_HARDLINKTYPE *a4,
        enum DXGKP_HARDLINKOVERWRITETYPE *a5)
{
  __int64 v9; // rax
  int v10; // ebx
  unsigned int v11; // r11d
  int v12; // eax
  unsigned int v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+50h] [rbp-B0h]
  _DWORD v17[3]; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 v18[260]; // [rsp+16Ch] [rbp+6Ch] BYREF
  unsigned __int16 v19[262]; // [rsp+374h] [rbp+274h] BYREF

  v16 = 0;
  v15 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v15, this, 0x18u, 0LL, 0LL, 0LL);
  v9 = v15;
  v14[0] = 1056;
  *(_BYTE *)(v15 + 12) = 0;
  *(_DWORD *)(v9 + 12) &= 0x1FFu;
  *(_QWORD *)v9 = 0LL;
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 55LL;
  v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v15, v17, v14);
  if ( v10 < 0 )
    goto LABEL_5;
  v10 = -1073741823;
  if ( v14[0] < 0x41C )
    goto LABEL_6;
  v10 = v17[0];
  if ( v17[0] < 0 )
  {
LABEL_5:
    if ( v10 == -2147483642 )
      goto LABEL_7;
LABEL_6:
    WdLogSingleEntry1(3LL, v10);
    WdLogGlobalForLineNumber = 13016;
    goto LABEL_7;
  }
  v19[259] = 0;
  v18[259] = 0;
  RtlStringCbCopyW(a2, 0x208uLL, (char *)v19);
  RtlStringCbCopyW(a3, v11, (char *)v18);
  v12 = v17[2];
  *(_DWORD *)a4 = v17[1];
  *(_DWORD *)a5 = v12;
LABEL_7:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v15);
  return (unsigned int)v10;
}
