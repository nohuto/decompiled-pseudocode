/*
 * XREFs of ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1402F9700
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402FE4BC (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z @ 0x1401820FC (-GetHostHandle@DXGKEYEDMUTEX@@QEAAII@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140228588 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
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
  __int64 v16; // r9
  int v17; // eax
  size_t v18; // r14
  unsigned int v19; // edi
  __int64 v20; // rbx
  int v21; // esi
  unsigned int HostHandle; // [rsp+50h] [rbp-B0h] BYREF
  DXGPROCESS *v23; // [rsp+58h] [rbp-A8h]
  unsigned __int64 *v24; // [rsp+60h] [rbp-A0h]
  PVOID P[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v26; // [rsp+80h] [rbp-80h]
  char v27; // [rsp+84h] [rbp-7Ch] BYREF

  v23 = a2;
  v24 = a8;
  HostHandle = DXGKEYEDMUTEX::GetHostHandle((DXGKEYEDMUTEX *)a3, a4);
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = 0LL;
  v26 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, this, 0x40u, 0LL, 0LL, 0LL);
  v12 = P[0];
  if ( !P[0] )
  {
    if ( P[1] )
    {
      if ( P[1] != &v27 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
  v14 = *((_DWORD *)a3 + 8);
  HostProcess = DXGPROCESS::GetHostProcess(v23);
  *(_QWORD *)v12 = 0LL;
  v12[5] = 0;
  v12[2] = HostProcess;
  v12[7] = HostHandle;
  *((_QWORD *)v12 + 4) = a5;
  v12[10] = a6;
  v17 = v12[14];
  *((_BYTE *)v12 + 12) = 1;
  v12[3] &= 0x1FFu;
  v12[4] = 1014;
  v12[6] = v14;
  *((_QWORD *)v12 + 6) = QuadPart;
  v12[14] = v17 & 0xFFFFFFFE | (a7 == 0LL);
  v18 = *((unsigned int *)a3 + 42);
  v19 = (v18 + 31) & 0xFFFFFFF8;
  if ( v19 > 0x20000 || v19 < (unsigned int)v18 )
  {
    WdLogSingleEntry1(3LL, v19);
    WdLogGlobalForLineNumber = 13975;
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return 2147483653LL;
  }
  else
  {
    v20 = operator new[](v19, 0x4B677844u, 64LL, v16);
    if ( !v20 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 13982;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate output buffer for VmBusSendAcquireKeyedMutexSync",
        13982LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
      return 3221225495LL;
    }
    HostHandle = (v18 + 31) & 0xFFFFFFF8;
    v21 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
            (struct _KTHREAD **)this,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v26,
            (char *)v20,
            &HostHandle);
    if ( v21 >= 0 )
    {
      if ( HostHandle < v19 )
      {
        v21 = -1073741823;
      }
      else
      {
        v21 = *(_DWORD *)v20;
        if ( (_DWORD)v18 )
          memmove(a3[20], (const void *)(v20 + 24), v18);
        *v24 = *(_QWORD *)(v20 + 16);
        if ( a9 )
          *a9 = *(_QWORD *)(v20 + 8);
      }
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v20);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return (unsigned int)v21;
  }
}
