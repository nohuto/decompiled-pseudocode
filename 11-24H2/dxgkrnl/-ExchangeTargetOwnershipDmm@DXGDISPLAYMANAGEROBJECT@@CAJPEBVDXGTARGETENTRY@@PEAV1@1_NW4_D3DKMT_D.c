/*
 * XREFs of ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403B00D8
 * Callers:
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1401C742C (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1401C75BC (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 *     ?AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1403AFCBC (-AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I_NW4_D3DKMT_DISPLAY_TARGET_USAGE@.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1403AFF30 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEBD@Z @ 0x14000E400 (-AcquireShared@COREACCESS@@QEAAXPEBD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x14000EE70 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x140038E8C (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?DmmGetTargetUsage@@YA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z @ 0x1403087EC (-DmmGetTargetUsage@@YA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAVDXGADAPTER@@IPEA_N@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___ @ 0x1403D7348 (DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255___.c)
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x140414B04 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
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
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned int v14; // edi
  int LowPart; // edx
  unsigned int TargetUsage; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  _BYTE v21[8]; // [rsp+30h] [rbp-61h] BYREF
  struct _LUID v22; // [rsp+38h] [rbp-59h] BYREF
  struct DXGADAPTER *v23[2]; // [rsp+40h] [rbp-51h] BYREF
  __int64 v24; // [rsp+50h] [rbp-41h] BYREF
  __int64 v25; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v27[64]; // [rsp+70h] [rbp-21h] BYREF

  v5 = a1[3];
  v23[0] = 0LL;
  v22 = v5;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v23, &v22);
  v10 = v23[0];
  if ( !v23[0] )
  {
    WdLogSingleEntry2(3LL, v22.HighPart, v5.LowPart);
    WdLogGlobalForLineNumber = 654;
LABEL_3:
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v23, 0LL);
    return 3221226021LL;
  }
  COREACCESS::COREACCESS((COREACCESS *)v27, v23[0]);
  COREACCESS::AcquireShared((COREACCESS *)v27, 0LL);
  if ( a2 )
  {
    if ( *((_DWORD *)v10 + 50) != 1 )
    {
      WdLogSingleEntry2(3LL, v22.HighPart, v22.LowPart);
      WdLogGlobalForLineNumber = 665;
      COREACCESS::~COREACCESS((COREACCESS *)v27, v12);
      goto LABEL_3;
    }
    v5.LowPart = v22.LowPart;
    v10 = v23[0];
  }
  if ( *((_QWORD *)v10 + 390) )
  {
    if ( a4 && a2 )
    {
      LowPart = a1[4].LowPart;
      v21[0] = 0;
      TargetUsage = DmmGetTargetUsage((__int64)v10, LowPart, v21);
      if ( TargetUsage != a5 )
      {
        WdLogSingleEntry4(3LL, v22.HighPart, v5.LowPart, a1[4].LowPart, a5);
        WdLogGlobalForLineNumber = 685;
        v14 = -1073741267;
        goto LABEL_19;
      }
      LOBYTE(v17) = v21[0];
      v18 = DXGDISPLAYMANAGEROBJECT::AccessCheckTargetPolicy(TargetUsage, v17);
      v14 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry4(3LL, v22.HighPart, v5.LowPart, a1[4].LowPart, v18);
        WdLogGlobalForLineNumber = 692;
        goto LABEL_19;
      }
    }
    v19 = a1[4].LowPart;
    v26[0] = &v24;
    v25 = a3;
    v26[1] = &v25;
    v24 = a2;
    v20 = DmmDoForSpecifiedTarget__lambda_533853168684940ab58800475a78e255_(v10, v19, v26);
    v14 = v20;
    if ( v20 >= 0 )
    {
      v14 = 0;
    }
    else
    {
      WdLogSingleEntry1(3LL, v20);
      WdLogGlobalForLineNumber = 700;
    }
    goto LABEL_19;
  }
  WdLogSingleEntry2(3LL, v22.HighPart, v5.LowPart);
  WdLogGlobalForLineNumber = 671;
  v14 = -1073741275;
LABEL_19:
  COREACCESS::~COREACCESS((COREACCESS *)v27, v13);
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v23, 0LL);
  return v14;
}
