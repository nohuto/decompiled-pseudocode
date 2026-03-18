/*
 * XREFs of ?VmBusSendSubmitVailPresentHistoryToken@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@U_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@PEAVDXGSYNCOBJECT@@PEAVDXGALLOCATION_VGPU@@I_K@Z @ 0x1402F99B0
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140317D20 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitVailPresentHistoryToken(
        struct DXG_VMBUS_CHANNEL_BASE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned int a10,
        __int64 a11)
{
  int v15; // r8d
  char *v16; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edx
  _OWORD *v22; // rdx
  _OWORD *v23; // rax
  __int64 v24; // r9
  __int128 v25; // xmm1
  bool v26; // zf
  int v27; // edx
  unsigned int v28; // ebx
  PVOID P[2]; // [rsp+30h] [rbp-158h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-148h]
  char v31; // [rsp+44h] [rbp-144h] BYREF

  if ( a7 )
    v15 = *(_DWORD *)(a7 + 8);
  else
    v15 = 0;
  v30 = 0;
  *(_OWORD *)P = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)P, a1, v15 + 1160, 0LL, 0LL, 0LL);
  v16 = (char *)P[0];
  if ( P[0] )
  {
    v18 = *(_DWORD *)(a2 + 488);
    *(_QWORD *)P[0] = 0LL;
    *((_DWORD *)v16 + 5) = 0;
    v16[12] = 0;
    *((_DWORD *)v16 + 3) &= 0x1FFu;
    *((_DWORD *)v16 + 2) = v18;
    *((_DWORD *)v16 + 4) = 64;
    if ( a3 )
      v19 = *(_DWORD *)(a3 + 28);
    else
      v19 = 0;
    *((_DWORD *)v16 + 6) = v19;
    *((_QWORD *)v16 + 4) = a5;
    v20 = a8;
    *((_QWORD *)v16 + 6) = a7;
    *((_QWORD *)v16 + 5) = a6;
    *((_QWORD *)v16 + 7) = a4;
    if ( a8 )
      v20 = *(_DWORD *)(a8 + 84);
    *((_DWORD *)v16 + 16) = v20;
    if ( a9 )
      v21 = *(_DWORD *)(a9 + 20);
    else
      v21 = 0;
    *((_DWORD *)v16 + 17) = v21;
    v22 = v16 + 72;
    v23 = (_OWORD *)a6;
    v24 = 8LL;
    do
    {
      *v22 = *v23;
      v22[1] = v23[1];
      v22[2] = v23[2];
      v22[3] = v23[3];
      v22[4] = v23[4];
      v22[5] = v23[5];
      v22[6] = v23[6];
      v22 += 8;
      v25 = v23[7];
      v23 += 8;
      *(v22 - 1) = v25;
      --v24;
    }
    while ( v24 );
    *v22 = *v23;
    v22[1] = v23[1];
    v22[2] = v23[2];
    *((_QWORD *)v22 + 6) = *((_QWORD *)v23 + 6);
    v26 = *((_DWORD *)v16 + 18) == 2;
    *((_QWORD *)v16 + 10) = a11;
    if ( v26 )
    {
      *((_QWORD *)v16 + 17) = 0LL;
      *((_QWORD *)v16 + 15) = 0LL;
      *((_QWORD *)v16 + 12) = a10;
      *((_DWORD *)v16 + 33) = *((_DWORD *)v16 + 33) & 0xDDFFFFFF | 0x20000000;
      *(_DWORD *)(a6 + 60) |= 0x20000000u;
      *((_QWORD *)v16 + 18) = 0LL;
    }
    if ( a7 )
      v27 = *(_DWORD *)(a7 + 8);
    else
      v27 = 0;
    *((_DWORD *)v16 + 288) = v27;
    if ( a7 )
      memmove(v16 + 1160, (const void *)(a7 + 16), *(unsigned int *)(a7 + 8));
    v28 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            a1,
            (unsigned __int8 *)P[1],
            (struct DXGKVMB_COMMAND_BASE *)P[0],
            v30);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)P);
    return v28;
  }
  else
  {
    if ( P[1] )
    {
      if ( P[1] != &v31 )
        ExFreePoolWithTag(P[1], 0x4D767844u);
    }
    return 3221225495LL;
  }
}
