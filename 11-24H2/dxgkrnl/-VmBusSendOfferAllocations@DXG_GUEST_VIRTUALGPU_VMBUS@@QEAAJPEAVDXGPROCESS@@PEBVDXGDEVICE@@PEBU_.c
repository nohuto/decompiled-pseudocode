/*
 * XREFs of ?VmBusSendOfferAllocations@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBVDXGDEVICE@@PEBU_D3DKMT_OFFERALLOCATIONS@@PEBI@Z @ 0x14022CBC0
 * Callers:
 *     ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z @ 0x140299D04 (-OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140023F70 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1400644F8 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018462C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x14032B750 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x14032B83C (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1403E0D70 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOfferAllocations(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct DXGDEVICE *a3,
        const struct _D3DKMT_OFFERALLOCATIONS *a4,
        const unsigned int *a5)
{
  UINT NumAllocations; // r8d
  __int64 v9; // rsi
  struct DXGKVMB_COMMAND_BASE *v10; // rbx
  UINT j; // r15d
  unsigned int v12; // eax
  __int64 v13; // r9
  int v14; // ecx
  struct DXGRESOURCE *v15; // rdx
  DXGAUTOPUSHLOCK *v16; // rcx
  DXGAUTOPUSHLOCK *v17; // rcx
  UINT i; // r15d
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r8
  int v22; // edx
  struct DXGALLOCATION *v23; // rdx
  int v24; // eax
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  const struct DXGDEVICE *v28; // [rsp+68h] [rbp-98h]
  DXG_VMBUS_CHANNEL_BASE *v29; // [rsp+70h] [rbp-90h]
  _BYTE v30[24]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v31[32]; // [rsp+90h] [rbp-70h] BYREF
  struct DXGKVMB_COMMAND_BASE *v32[2]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp-40h]

  v28 = a3;
  NumAllocations = a4->NumAllocations;
  v29 = this;
  LODWORD(v9) = -1073741811;
  if ( NumAllocations > 0x8000 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 10726;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"NumAllocations is invalid", 10726LL, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v9;
  }
  *(_OWORD *)v32 = 0LL;
  v33 = 0;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v32, this, 4 * NumAllocations + 44, 0LL, 0LL, 0LL);
  v10 = v32[0];
  if ( !v32[0] )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 10735;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate storage for input buffer",
      10735LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_37;
  }
  *((_BYTE *)v32[0] + 12) = 0;
  *((_DWORD *)v10 + 3) &= 0x1FFu;
  *((_DWORD *)v10 + 2) = 0;
  *(_QWORD *)v10 = 0LL;
  *((_QWORD *)v10 + 2) = 57LL;
  *((_DWORD *)v10 + 6) = *((_DWORD *)a3 + 118);
  *((_DWORD *)v10 + 2) = *((_DWORD *)a2 + 122);
  *((_DWORD *)v10 + 7) = a4->NumAllocations;
  *((_DWORD *)v10 + 8) = a4->Priority;
  *((_DWORD *)v10 + 9) = a4->Flags.0;
  if ( !a4->pResources )
  {
    *((_BYTE *)v10 + 40) = 0;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v31, a2);
    for ( i = 0; ; ++i )
    {
      if ( i >= a4->NumAllocations )
      {
        v17 = (DXGAUTOPUSHLOCK *)v31;
        goto LABEL_35;
      }
      v19 = a5[i];
      v20 = (v19 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v20 >= *((_DWORD *)a2 + 74) )
        goto LABEL_29;
      v21 = *((_QWORD *)a2 + 35);
      v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
      if ( ((v19 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) || (v22 & 0x2000) != 0 || (v22 & 0x1F) == 0 )
        goto LABEL_29;
      if ( (*(_BYTE *)(v21 + 16LL * ((v19 >> 6) & 0xFFFFFF) + 8) & 0x1F) != 5 )
        break;
      v23 = *(struct DXGALLOCATION **)(v21 + 16LL * ((v19 >> 6) & 0xFFFFFF));
LABEL_30:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27, v23);
      if ( !v27 )
      {
        WdLogSingleEntry3(3LL, v28, a5[i], -1073741811LL);
        WdLogGlobalForLineNumber = 10775;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27);
        v16 = (DXGAUTOPUSHLOCK *)v31;
LABEL_19:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v16);
        goto LABEL_37;
      }
      *((_DWORD *)v10 + i + 11) = *(_DWORD *)(v27 + 20);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v27);
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_29:
    v23 = 0LL;
    goto LABEL_30;
  }
  *((_BYTE *)v10 + 40) = 1;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v30, a2);
  for ( j = 0; j < a4->NumAllocations; ++j )
  {
    v12 = (a5[j] >> 6) & 0xFFFFFF;
    if ( v12 >= *((_DWORD *)a2 + 74) )
      goto LABEL_14;
    v13 = *((_QWORD *)a2 + 35);
    if ( ((a5[j] >> 25) & 0x60) != (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x60) )
      goto LABEL_14;
    if ( (*(_DWORD *)(v13 + 16LL * v12 + 8) & 0x2000) != 0 )
      goto LABEL_14;
    v14 = *(_DWORD *)(v13 + 16LL * v12 + 8) & 0x1F;
    if ( !v14 )
      goto LABEL_14;
    if ( v14 != 4 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 318;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_14:
      v15 = 0LL;
      goto LABEL_15;
    }
    v15 = *(struct DXGRESOURCE **)(v13 + 16LL * v12);
LABEL_15:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v26, v15);
    if ( !v26 )
    {
      WdLogSingleEntry3(3LL, v28, a5[j], -1073741811LL);
      WdLogGlobalForLineNumber = 10757;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v26);
      v16 = (DXGAUTOPUSHLOCK *)v30;
      goto LABEL_19;
    }
    *((_DWORD *)v10 + j + 11) = *(_DWORD *)(v26 + 20);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v26);
  }
  v17 = (DXGAUTOPUSHLOCK *)v30;
LABEL_35:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(v17);
  v24 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v29, (unsigned __int8 *)v32[1], v32[0], v33);
  v9 = v24;
  if ( v24 < 0 )
  {
    WdLogSingleEntry1(2LL, v24);
    WdLogGlobalForLineNumber = 10785;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"VmBusSendOfferAllocations failed: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_37:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v32);
  return (unsigned int)v9;
}
