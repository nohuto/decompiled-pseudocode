/*
 * XREFs of ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x14022D49C
 * Callers:
 *     DxgkAttemptOpmVmBusRedirect @ 0x1403A43EC (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140023358 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x14022EE74 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendOpmRequest(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct _LUID a2,
        unsigned int a3,
        int a4,
        void *a5,
        unsigned int Size,
        void *a7,
        unsigned int *a8)
{
  unsigned int v10; // edi
  unsigned int v11; // edi
  unsigned int v12; // eax
  struct DXGKVMB_COMMAND_BASE *v13; // rcx
  int v15; // eax
  unsigned int v16; // r8d
  void *v17; // rdx
  int v18; // r8d
  int *v19; // r14
  int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rdi
  struct _MDL *v25; // [rsp+30h] [rbp-D0h]
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGKVMB_COMMAND_BASE *v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-90h]

  Src = a5;
  v10 = *a8 + 19;
  v27 = a4;
  v11 = v10 & 0xFFFFFFF8;
  v26 = a3;
  v12 = Size + 56;
  if ( Size + 56 > 0x20000 || v11 > 0x20000 )
  {
    v22 = v11;
    v23 = v11;
    v24 = v12;
    WdLogSingleEntry2(2LL, v12, v23);
    WdLogGlobalForLineNumber = 14473;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Either input buffer size (0x%I64x) or output buffer size (0x%I64x) is too big to go over VmBus",
      v24,
      v22,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v30 = 0;
    *(_OWORD *)v29 = 0LL;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v29, this, v12, 0LL, 0LL, 0LL);
    v13 = v29[0];
    if ( v29[0] )
    {
      v15 = *a8;
      v16 = v26;
      *(_QWORD *)v29[0] = 0LL;
      *((_DWORD *)v13 + 2) = 0;
      *((_DWORD *)v13 + 5) = 0;
      v17 = Src;
      *((_DWORD *)v13 + 8) = v16;
      v18 = v27;
      *((_BYTE *)v13 + 12) = 1;
      *((_DWORD *)v13 + 3) &= 0x1FFu;
      *((_DWORD *)v13 + 9) = v18;
      *((_DWORD *)v13 + 4) = 1017;
      *((struct _LUID *)v13 + 3) = a2;
      *((_DWORD *)v13 + 10) = Size;
      *((_DWORD *)v13 + 11) = v15;
      memmove((char *)v13 + 48, v17, Size);
      v19 = (int *)operator new[](v11, 0x4B677844u, 64LL);
      Src = v19;
      v26 = v11;
      v20 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v29[1], v29[0], v30, v19, &v26, v25);
      if ( v20 >= 0 )
      {
        v20 = -1073741823;
        if ( v26 >= 8 )
        {
          v20 = *v19;
          if ( *v19 >= 0 )
          {
            v21 = v19[1];
            if ( v21 <= *a8 )
            {
              memmove(a7, v19 + 2, v21);
              *a8 = v19[1];
            }
          }
        }
      }
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&Src);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v29);
      return (unsigned int)v20;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 14481;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate storage for input buffer",
        14481LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v29);
      return 3221225495LL;
    }
  }
}
