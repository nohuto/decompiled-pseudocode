/*
 * XREFs of ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@IIPEAUtagRECT@@3IPEBU5@IPEAE@Z @ 0x140221230
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030635C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034D5A0 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400648D8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x140182164 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?IsFeatureEnabled@DXGADAPTER@@QEAA?AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z @ 0x140190D18 (-IsFeatureEnabled@DXGADAPTER@@QEAA-AU_DXGK_ISFEATUREENABLED_RESULT@@W4_DXGK_FEATURE_ID@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402FACC0 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGCONTEXT *a3,
        struct DXGHWQUEUE *a4,
        unsigned int a5,
        unsigned int a6,
        struct tagRECT *a7,
        struct tagRECT *a8,
        unsigned int a9,
        struct tagRECT *a10,
        unsigned int Size,
        unsigned __int8 *a12)
{
  unsigned int v13; // r14d
  __int64 v14; // rax
  const wchar_t *v15; // r9
  struct DXGKVMB_COMMAND_BASE *v17; // rbx
  int v18; // eax
  int v19; // eax
  __int64 v20; // rsi
  struct DXGPROCESS *v21; // [rsp+50h] [rbp-178h] BYREF
  struct DXGHWQUEUE *v22; // [rsp+58h] [rbp-170h]
  void *Src; // [rsp+60h] [rbp-168h]
  DXG_VMBUS_CHANNEL_BASE *v24; // [rsp+68h] [rbp-160h]
  struct DXGKVMB_COMMAND_BASE *v25[2]; // [rsp+70h] [rbp-158h] BYREF
  unsigned int v26; // [rsp+80h] [rbp-148h]

  v22 = a4;
  v21 = a2;
  v24 = this;
  Src = a10;
  v13 = 16 * a9;
  if ( a9 > 0x2000 )
  {
    WdLogSingleEntry0(2LL);
    v14 = 11243LL;
    v15 = L"SubRectCount is invalid";
LABEL_3:
    WdLogGlobalForLineNumber = v14;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v15, v14, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( Size > 0x20000 )
  {
    WdLogSingleEntry0(2LL);
    v14 = 11248LL;
    v15 = L"PrivateDriverDataSize is invalid";
    goto LABEL_3;
  }
  *(_OWORD *)v25 = 0LL;
  v26 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v25, this, v13 + Size + 80, 0LL, 0LL, 0LL);
  v17 = v25[0];
  if ( v25[0] )
  {
    *(_QWORD *)v25[0] = 0LL;
    *((_DWORD *)v17 + 2) = 0;
    *((_BYTE *)v17 + 12) = 0;
    *((_DWORD *)v17 + 3) &= 0x1FFu;
    *((_QWORD *)v17 + 2) = 38LL;
    *((_DWORD *)v17 + 2) = *((_DWORD *)v21 + 122);
    *((_DWORD *)v17 + 6) = *(_DWORD *)(*((_QWORD *)a3 + 2) + 472LL);
    if ( v22
      && (*((_BYTE *)DXGADAPTER::IsFeatureEnabled(
                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 16LL),
                       &v21,
                       0x23u)
          + 2) & 1) != 0 )
    {
      v18 = *((_DWORD *)v22 + 7);
    }
    else
    {
      v18 = *((_DWORD *)a3 + 7);
    }
    *((_DWORD *)v17 + 7) = v18;
    *((_DWORD *)v17 + 8) = a5;
    *((_DWORD *)v17 + 9) = a6;
    *(struct tagRECT *)((char *)v17 + 40) = *a7;
    *(struct tagRECT *)((char *)v17 + 56) = *a8;
    *((_DWORD *)v17 + 18) = a9;
    *((_DWORD *)v17 + 19) = Size;
    if ( a9 )
      memmove((char *)v17 + 80, Src, v13);
    if ( Size )
    {
      if ( &a12[Size] < a12 || (unsigned __int64)&a12[Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove((char *)v17 + v13 + 80, a12, Size);
    }
    v19 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v24, (unsigned __int8 *)v25[1], v25[0], v26);
    v20 = v19;
    if ( v19 < 0 )
    {
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 11302;
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"VmBusSendBlt failed: 0x%I64x", v20, 0LL, 0LL, 0LL, 0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v25);
    return (unsigned int)v20;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11256;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate input buffer",
      11256LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v25);
    return 3221225495LL;
  }
}
