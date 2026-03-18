/*
 * XREFs of ?VmBusSendEvict@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIUD3DDDI_EVICT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K@Z @ 0x14022AEA8
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z @ 0x14035E31C (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEBD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x14022EE3C (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEvict(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        int a2,
        int a3,
        struct D3DDDI_EVICT_FLAGS a4,
        unsigned int a5,
        const struct DXGALLOCATIONREFERENCE *a6,
        unsigned __int64 *a7)
{
  __int64 v11; // rax
  _DWORD *v14; // r9
  __int64 v15; // r10
  __int64 v16; // rax
  int v17; // esi
  unsigned int v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+70h] [rbp-90h]
  unsigned __int64 v21; // [rsp+180h] [rbp+80h] BYREF

  if ( a5 - 1 > 0x7FFF )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 12069;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"NumAllocation is invalid", 12069LL, 0LL, 0LL, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    v19 = 0LL;
    v20 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v19, this, 4 * a5 + 36, 0LL, 0LL, 0LL);
    v11 = v19;
    if ( (_QWORD)v19 )
    {
      *(_BYTE *)(v19 + 12) = 0;
      *(_DWORD *)(v11 + 12) &= 0x1FFu;
      *(_QWORD *)v11 = 0LL;
      *(_QWORD *)(v11 + 16) = 12LL;
      *(_DWORD *)(v11 + 8) = a2;
      *(struct D3DDDI_EVICT_FLAGS *)(v11 + 28) = a4;
      *(_DWORD *)(v11 + 24) = a3;
      *(_DWORD *)(v11 + 32) = a5;
      if ( a5 )
      {
        v14 = (_DWORD *)(v11 + 36);
        v15 = a5;
        do
        {
          v16 = *(_QWORD *)a6;
          a6 = (const struct DXGALLOCATIONREFERENCE *)((char *)a6 + 8);
          *v14++ = *(_DWORD *)(v16 + 20);
          --v15;
        }
        while ( v15 );
      }
      v18[0] = 8;
      v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v19, &v21, v18);
      if ( v17 < 0 || (v17 = -1073741823, v18[0] < 8) )
      {
        WdLogSingleEntry1(2LL, v17);
        WdLogGlobalForLineNumber = 12102;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"VmBusSendEvict failed: 0x%I64x",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v17 = 0;
        *a7 = v21;
      }
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v19);
      return (unsigned int)v17;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 12077;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate storage for input buffer",
        12077LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v19);
      return 3221225495LL;
    }
  }
}
