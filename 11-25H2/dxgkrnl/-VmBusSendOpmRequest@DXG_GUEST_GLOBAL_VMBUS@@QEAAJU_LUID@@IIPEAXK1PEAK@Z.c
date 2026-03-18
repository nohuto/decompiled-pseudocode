/*
 * XREFs of ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x140226BB0
 * Callers:
 *     DxgkAttemptOpmVmBusRedirect @ 0x1403B389C (DxgkAttemptOpmVmBusRedirect.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140228588 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
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
  __int64 v19; // r9
  int *v20; // r14
  int v21; // ebx
  unsigned int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // r8
  __int64 v25; // rdi
  struct _MDL *v26; // [rsp+30h] [rbp-D0h]
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh]
  void *Src; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGKVMB_COMMAND_BASE *v30[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+70h] [rbp-90h]

  Src = a5;
  v10 = *a8 + 19;
  v28 = a4;
  v11 = v10 & 0xFFFFFFF8;
  v27 = a3;
  v12 = Size + 56;
  if ( Size + 56 > 0x20000 || v11 > 0x20000 )
  {
    v23 = v11;
    v24 = v11;
    v25 = v12;
    WdLogSingleEntry2(2LL, v12, v24);
    WdLogGlobalForLineNumber = 14285;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Either input buffer size (0x%I64x) or output buffer size (0x%I64x) is too big to go over VmBus",
      v25,
      v23,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v31 = 0;
    *(_OWORD *)v30 = 0LL;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v30, this, v12, 0LL, 0LL, 0LL);
    v13 = v30[0];
    if ( v30[0] )
    {
      v15 = *a8;
      v16 = v27;
      *(_QWORD *)v30[0] = 0LL;
      *((_DWORD *)v13 + 2) = 0;
      *((_DWORD *)v13 + 5) = 0;
      v17 = Src;
      *((_DWORD *)v13 + 8) = v16;
      v18 = v28;
      *((_BYTE *)v13 + 12) = 1;
      *((_DWORD *)v13 + 3) &= 0x1FFu;
      *((_DWORD *)v13 + 9) = v18;
      *((_DWORD *)v13 + 4) = 1017;
      *((struct _LUID *)v13 + 3) = a2;
      *((_DWORD *)v13 + 10) = Size;
      *((_DWORD *)v13 + 11) = v15;
      memmove((char *)v13 + 48, v17, Size);
      v20 = (int *)operator new[](v11, 0x4B677844u, 64LL, v19);
      Src = v20;
      v27 = v11;
      v21 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v30[1], v30[0], v31, v20, &v27, v26);
      if ( v21 >= 0 )
      {
        v21 = -1073741823;
        if ( v27 >= 8 )
        {
          v21 = *v20;
          if ( *v20 >= 0 )
          {
            v22 = v20[1];
            if ( v22 <= *a8 )
            {
              memmove(a7, v20 + 2, v22);
              *a8 = v20[1];
            }
          }
        }
      }
      wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset(&Src);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v30);
      return (unsigned int)v21;
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 14293;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate storage for input buffer",
        14293LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v30);
      return 3221225495LL;
    }
  }
}
