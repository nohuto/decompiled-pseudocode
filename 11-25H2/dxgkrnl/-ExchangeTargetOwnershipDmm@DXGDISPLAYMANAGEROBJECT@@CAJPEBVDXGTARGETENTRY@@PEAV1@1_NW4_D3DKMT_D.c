/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403BBF58
 * Callers:
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1401C2DD8 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401C2F68 (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403BBB3C (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1403BBDB0 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14001BF80 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14001D9E0 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14001E450 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14001EF20 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002D968 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003907C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     Feature_AllowReleaseTargetOwnershipIfStopped__private_IsEnabledDeviceUsageNoInline @ 0x14006E9F0 (Feature_AllowReleaseTargetOwnershipIfStopped__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x14032606C (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1403DFAEC (DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x14041A36C (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ExchangeTargetOwnershipDmm(
        struct _LUID *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5)
{
  struct _LUID v5; // rbx
  struct DXGADAPTER *v10; // rsi
  struct DXGADAPTER *const v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned int v14; // edi
  int LowPart; // edx
  unsigned int TargetUsage; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  unsigned __int64 v21; // rdx
  _BYTE v22[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct _LUID v23; // [rsp+38h] [rbp-C8h] BYREF
  struct DXGADAPTER *v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[64]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[144]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = a1[3];
  v24[0] = 0LL;
  v23 = v5;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v24, &v23);
  v10 = v24[0];
  if ( !v24[0] )
  {
    WdLogSingleEntry2(3LL, v23.HighPart, v5.LowPart);
    WdLogGlobalForLineNumber = 644;
LABEL_3:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v24, 0LL);
    return 3221226021LL;
  }
  COREACCESS::COREACCESS((COREACCESS *)v28, v24[0]);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, v12, 0LL);
  if ( (unsigned int)Feature_AllowReleaseTargetOwnershipIfStopped__private_IsEnabledDeviceUsageNoInline() )
  {
    COREACCESS::AcquireShared((COREACCESS *)v28, 0LL);
    if ( a2 )
    {
      if ( *((_DWORD *)v10 + 50) != 1 )
      {
        WdLogSingleEntry2(3LL, v23.HighPart, v23.LowPart);
        WdLogGlobalForLineNumber = 660;
LABEL_8:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
        COREACCESS::~COREACCESS((COREACCESS *)v28, v13);
        goto LABEL_3;
      }
      v5.LowPart = v23.LowPart;
      v10 = v24[0];
    }
  }
  else if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29, 0LL) < 0 )
  {
    WdLogSingleEntry2(3LL, v23.HighPart, v5.LowPart);
    WdLogGlobalForLineNumber = 668;
    goto LABEL_8;
  }
  if ( *((_QWORD *)v10 + 390) )
  {
    if ( a4 && a2 )
    {
      LowPart = a1[4].LowPart;
      v22[0] = 0;
      TargetUsage = DmmGetTargetUsage((__int64)v10, LowPart, v22);
      if ( TargetUsage != a5 )
      {
        WdLogSingleEntry4(3LL, v23.HighPart, v5.LowPart, a1[4].LowPart, a5);
        WdLogGlobalForLineNumber = 689;
        v14 = -1073741267;
        goto LABEL_23;
      }
      LOBYTE(v17) = v22[0];
      v18 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage, v17);
      v14 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry4(3LL, v23.HighPart, v5.LowPart, a1[4].LowPart, v18);
        WdLogGlobalForLineNumber = 696;
        goto LABEL_23;
      }
    }
    v19 = a1[4].LowPart;
    v27[0] = &v25;
    v26 = a3;
    v27[1] = &v26;
    v25 = a2;
    v20 = DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(v10, v19, v27);
    v14 = v20;
    if ( v20 >= 0 )
    {
      v14 = 0;
    }
    else
    {
      WdLogSingleEntry1(3LL, v20);
      WdLogGlobalForLineNumber = 704;
    }
    goto LABEL_23;
  }
  WdLogSingleEntry2(3LL, v23.HighPart, v5.LowPart);
  WdLogGlobalForLineNumber = 675;
  v14 = -1073741275;
LABEL_23:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
  COREACCESS::~COREACCESS((COREACCESS *)v28, v21);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v24, 0LL);
  return v14;
}
