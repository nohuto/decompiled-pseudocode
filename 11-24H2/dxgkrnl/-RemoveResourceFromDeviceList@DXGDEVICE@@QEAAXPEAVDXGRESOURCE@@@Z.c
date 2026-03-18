/*
 * XREFs of ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x14038B200
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x140356E10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 */

void __fastcall DXGDEVICE::RemoveResourceFromDeviceList(struct _KTHREAD **this, struct DXGRESOURCE *a2)
{
  DXGPUSHLOCK *v2; // rdi
  struct DXGRESOURCE **v5; // rcx
  struct DXGRESOURCE **v6; // rsi
  __int64 v7; // rdx
  struct DXGRESOURCE **v8; // rdi
  __int64 v9; // rdx
  char v10[8]; // [rsp+50h] [rbp-28h] BYREF
  char *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]

  v2 = (DXGPUSHLOCK *)(this + 30);
  v11 = (char *)(this + 30);
  if ( this != (struct _KTHREAD **)-240LL && this[31] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPUSHLOCK::AcquireExclusive(v2);
  v5 = this + 7;
  v12 = 2;
  if ( a2 == this[7] )
  {
    v6 = this + 7;
  }
  else
  {
    if ( !*((_QWORD *)a2 + 4) )
      goto LABEL_15;
    v6 = this + 7;
  }
  v7 = *((_QWORD *)a2 + 5);
  v8 = v5;
  if ( v7 )
  {
    v8 = v6;
    *(_QWORD *)(v7 + 32) = *((_QWORD *)a2 + 4);
  }
  v9 = *((_QWORD *)a2 + 4);
  if ( v9 )
  {
    *(_QWORD *)(v9 + 40) = *((_QWORD *)a2 + 5);
  }
  else
  {
    if ( *v5 != a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 9290;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"m_pResourceList == pResource",
        9290LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *v8 = (struct DXGRESOURCE *)*((_QWORD *)a2 + 5);
  }
LABEL_15:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
}
