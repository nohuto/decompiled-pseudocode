/*
 * XREFs of ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1403DF7A8
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B513C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1401845C4 (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x14022EE74 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendAcquireKeyedMutexSync(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        void **a3,
        int a4,
        unsigned __int64 a5,
        int a6,
        union _LARGE_INTEGER *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  LONGLONG QuadPart; // r14
  _DWORD *v12; // rdi
  int v14; // ebx
  int HostProcess; // eax
  int v16; // eax
  size_t v17; // r14
  unsigned int v18; // edi
  __int64 v19; // rbx
  int v20; // esi
  unsigned int HostHandle; // [rsp+50h] [rbp-B0h] BYREF
  DXGPROCESS *v22; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v23; // [rsp+60h] [rbp-A0h]
  PVOID P[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v25; // [rsp+80h] [rbp-80h]
  char v26; // [rsp+84h] [rbp-7Ch] BYREF

  v22 = a2;
  v23 = a8;
  HostHandle = DXGKEYEDMUTEX::GetHostHandle((DXGKEYEDMUTEX *)a3, a4);
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  v25 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x40u, 0LL, 0LL, 0LL);
  v12 = P[0];
  if ( !P[0] )
  {
    if ( P[1] )
    {
      if ( P[1] != &v26 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
  v14 = *((_DWORD *)a3 + 8);
  HostProcess = DXGPROCESS::GetHostProcess(v22);
  *(_QWORD *)v12 = 0LL;
  v12[5] = 0;
  v12[2] = HostProcess;
  v12[7] = HostHandle;
  *((_QWORD *)v12 + 4) = a5;
  v12[10] = a6;
  v16 = v12[14];
  *((_BYTE *)v12 + 12) = 1;
  v12[3] &= 0x1FFu;
  v12[4] = 1014;
  v12[6] = v14;
  *((_QWORD *)v12 + 6) = QuadPart;
  v12[14] = v16 & 0xFFFFFFFE | (a7 == 0LL);
  v17 = *((unsigned int *)a3 + 42);
  v18 = (v17 + 31) & 0xFFFFFFF8;
  if ( v18 > 0x20000 || v18 < (unsigned int)v17 )
  {
    WdLogSingleEntry1(3LL, v18);
    WdLogGlobalForLineNumber = 14163;
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return 2147483653LL;
  }
  else
  {
    v19 = operator new[](v18, 0x4B677844u, 64LL);
    if ( !v19 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 14170;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate output buffer for VmBusSendAcquireKeyedMutexSync",
        14170LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
      return 3221225495LL;
    }
    HostHandle = (v17 + 31) & 0xFFFFFFF8;
    v20 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
            (struct _KTHREAD **)this,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v25,
            (char *)v19,
            &HostHandle);
    if ( v20 >= 0 )
    {
      if ( HostHandle < v18 )
      {
        v20 = -1073741823;
      }
      else
      {
        v20 = *(_DWORD *)v19;
        if ( (_DWORD)v17 )
          memmove(a3[20], (const void *)(v19 + 24), v17);
        *v23 = *(_QWORD *)(v19 + 16);
        if ( a9 )
          *a9 = *(_QWORD *)(v19 + 8);
      }
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v19);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v20;
  }
}
