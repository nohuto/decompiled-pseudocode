/*
 * XREFs of ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x1402232D4
 * Callers:
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140228588 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_M.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateProcess(
        DXG_GUEST_GLOBAL_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct _UNICODE_STRING *a3)
{
  struct DXGKVMB_COMMAND_BASE *v6; // rbx
  HANDLE CurrentProcessId; // rax
  size_t Length; // rdi
  char v9; // cl
  char v10; // al
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v13; // ebx
  struct _MDL *v15; // [rsp+30h] [rbp-D0h]
  unsigned int v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v17[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+60h] [rbp-A0h]
  unsigned int v19; // [rsp+170h] [rbp+70h] BYREF

  v18 = 0;
  *(_OWORD *)v17 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v17, this, 0x238u, 0LL, 0LL, 0LL);
  v6 = v17[0];
  if ( !v17[0] )
    goto LABEL_6;
  CurrentProcessId = PsGetCurrentProcessId();
  *((_BYTE *)v6 + 12) = 1;
  Length = 520LL;
  *((_DWORD *)v6 + 3) &= 0x1FFu;
  *((_QWORD *)v6 + 4) = CurrentProcessId;
  *(_QWORD *)v6 = 0LL;
  *((_DWORD *)v6 + 2) = 0;
  *((_QWORD *)v6 + 2) = 1000LL;
  *((_QWORD *)v6 + 3) = a2;
  *((_BYTE *)v6 + 562) = 0;
  *(_DWORD *)((char *)v6 + 563) = 0;
  *((_BYTE *)v6 + 567) = 0;
  if ( a3->Length <= 0x208u )
    Length = a3->Length;
  memmove((char *)v6 + 40, a3->Buffer, Length);
  *((_WORD *)v6 + (Length >> 1) + 20) = 0;
  v9 = *((_BYTE *)v6 + 562) ^ (*((_BYTE *)a2 + 408) ^ *((_BYTE *)v6 + 562)) & 1;
  *((_BYTE *)v6 + 562) = v9;
  v10 = v9 ^ (v9 ^ (2 * (*((_DWORD *)a2 + 102) >> 2))) & 2;
  *((_BYTE *)v6 + 562) = v10;
  v11 = *((_DWORD *)a2 + 102) >> 5;
  LOBYTE(v11) = v10 ^ (v10 ^ (8 * v11)) & 8;
  *((_BYTE *)v6 + 562) = v11;
  *((_BYTE *)v6 + 562) = v11 ^ (v11 ^ *((_DWORD *)a2 + 102) & 0xF0) & 0x10;
  CurrentProcess = PsGetCurrentProcess(v11);
  v16[0] = 8;
  *((_BYTE *)v6 + 562) = *((_BYTE *)v6 + 562) & 0xFB | (PsGetProcessWow64Process(CurrentProcess) != 0 ? 4 : 0);
  if ( (int)DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (unsigned __int8 *)v17[1], v17[0], v18, &v19, v16, v15) < 0
    || (v13 = v19, v16[0] < 4) )
  {
LABEL_6:
    v13 = 0;
  }
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v17);
  return v13;
}
