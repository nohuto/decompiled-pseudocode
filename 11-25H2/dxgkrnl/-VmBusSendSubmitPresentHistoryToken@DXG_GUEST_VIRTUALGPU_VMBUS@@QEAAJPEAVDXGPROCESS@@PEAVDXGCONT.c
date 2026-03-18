/*
 * XREFs of ?VmBusSendSubmitPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGDEVICESYNCOBJECT@@@Z @ 0x140182D04
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitPresentHistoryToken(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        DXGPROCESS *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // esi
  _BYTE *v13; // rdi
  int HostProcess; // eax
  int v16; // eax
  unsigned int v17; // ebx
  PVOID P[2]; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v19; // [rsp+40h] [rbp-148h]
  char v20; // [rsp+44h] [rbp-144h] BYREF

  v8 = 0;
  v19 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, a1, 0x48u, 0LL, 0LL, 0LL);
  v13 = P[0];
  if ( P[0] )
  {
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    v13[12] = 0;
    *((_DWORD *)v13 + 3) &= 0x1FFu;
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = HostProcess;
    *((_QWORD *)v13 + 2) = 34LL;
    if ( a3 )
      v16 = *(_DWORD *)(a3 + 28);
    else
      v16 = 0;
    *((_DWORD *)v13 + 6) = v16;
    *((_QWORD *)v13 + 6) = a7;
    *((_QWORD *)v13 + 5) = a6;
    *((_QWORD *)v13 + 4) = a5;
    *((_QWORD *)v13 + 7) = a4;
    if ( a8 )
      v8 = *(_DWORD *)(a8 + 44);
    *((_DWORD *)v13 + 16) = v8;
    v17 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            a1,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v19);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return v17;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v20 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
