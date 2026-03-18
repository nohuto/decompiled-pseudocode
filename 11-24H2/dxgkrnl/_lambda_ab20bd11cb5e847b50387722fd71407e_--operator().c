/*
 * XREFs of _lambda_ab20bd11cb5e847b50387722fd71407e_::operator() @ 0x1401BD670
 * Callers:
 *     _DXGKCALLONEXIT__lambda_ab20bd11cb5e847b50387722fd71407e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006473C (_DXGKCALLONEXIT__lambda_ab20bd11cb5e847b50387722fd71407e____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1403DC890 (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x140022C10 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x140052D60 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1403DBB8C (-IsClientHandleValid@DispBrokerClient@@AEAA_NXZ.c)
 */

void __fastcall lambda_ab20bd11cb5e847b50387722fd71407e_::operator()(unsigned int ***a1)
{
  struct DispBrokerClientHandle **v2; // rdx
  DispBrokerClientHandle **v3; // rcx
  int v4; // ebx
  unsigned __int64 v5; // kr00_8
  unsigned int **v6; // rax
  unsigned int v7; // r8d
  _BYTE v8[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  unsigned __int64 v11; // [rsp+88h] [rbp+10h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, (struct _KTHREAD **)*a1 + 2, 0);
  DXGPUSHLOCK::AcquireExclusive(v9);
  v2 = (struct DispBrokerClientHandle **)a1[1];
  v3 = (DispBrokerClientHandle **)(*a1 + 6);
  v10 = 2;
  DispBrokerClientReference::Assign(v3, *v2);
  v4 = *(_DWORD *)a1[2];
  if ( v4 >= 0 != DispBrokerClient::IsClientHandleValid((DispBrokerClient *)*a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 190;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"!!NT_SUCCESS(Status) == IsClientHandleValid()",
      190LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = KeQueryInterruptTimePrecise(&v11);
  v6 = a1[3];
  v7 = *(_DWORD *)a1[2];
  v11 = v5 / 0xA;
  DxgkLogCodePointPacketForSession(112, ***a1, v7, (v5 / 0xA - (unsigned __int64)*v6) / 0x3E8, 0, 0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8);
}
