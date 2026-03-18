/*
 * XREFs of ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x140224378
 * Callers:
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401C66C4 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z @ 0x1401CBDA0 (-KnownEscapeBuildTestCommandBuffer@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x140405A98 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x140408694 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x140228550 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        enum _D3DKMT_ESCAPETYPE a6,
        struct _D3DDDI_ESCAPEFLAGS a7,
        unsigned int Size,
        unsigned __int8 *Src)
{
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  int v17; // edi
  void *v18; // rbp
  unsigned int v19[4]; // [rsp+50h] [rbp-168h] BYREF
  __int128 v20; // [rsp+60h] [rbp-158h] BYREF
  int v21; // [rsp+70h] [rbp-148h]

  if ( Size > 0x20000 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 12161;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"PrivateDriverDataSize is invalid",
      12161LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = (Size + 7) & 0xFFFFFFF8;
  v19[0] = v14;
  v21 = 0;
  v15 = 56;
  v20 = 0LL;
  if ( v14 )
    v15 = v14 + 55;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v20, this, v15, 0LL, 0LL, 0LL);
  v16 = v20;
  if ( (_QWORD)v20 )
  {
    *(struct _D3DDDI_ESCAPEFLAGS *)(v20 + 36) = a7;
    *(_DWORD *)(v16 + 44) = a5;
    *(_DWORD *)(v16 + 28) = a4;
    v18 = (void *)(v16 + 48);
    *(_BYTE *)(v16 + 12) = 0;
    *(_DWORD *)(v16 + 12) &= 0x1FFu;
    *(_DWORD *)(v16 + 32) = a6;
    *(_QWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 16) = 13LL;
    *(_DWORD *)(v16 + 8) = a2;
    *(_DWORD *)(v16 + 24) = a3;
    *(_DWORD *)(v16 + 40) = Size;
    memmove((void *)(v16 + 48), Src, Size);
    if ( Size )
    {
      v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v20, v18, v19);
      if ( v17 < 0 )
        goto LABEL_14;
      if ( v19[0] >= Size )
      {
        memmove(Src, v18, Size);
        goto LABEL_15;
      }
      v17 = -1073741823;
    }
    else
    {
      v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v20, 0LL, 0LL);
    }
    if ( v17 >= 0 )
      goto LABEL_15;
LABEL_14:
    WdLogSingleEntry1(3LL, v17);
    WdLogGlobalForLineNumber = 12205;
    goto LABEL_15;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 12170;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate storage for input buffer",
    12170LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v17 = -1073741801;
LABEL_15:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v20);
  return (unsigned int)v17;
}
