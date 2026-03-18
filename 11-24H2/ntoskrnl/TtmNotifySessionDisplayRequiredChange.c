/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x140903D68
 * Callers:
 *     PopPowerRequestCallbackDisplayRequired @ 0x140903ED0 (PopPowerRequestCallbackDisplayRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     PoSessionEngagementUpdate @ 0x1405DB008 (PoSessionEngagementUpdate.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x14076B0A4 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x14090241C (TtmiLogSessionDisplayRequiredReference.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x1409024E0 (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 */

void __fastcall TtmNotifySessionDisplayRequiredChange(int a1, unsigned int a2, char a3)
{
  bool v5; // si
  int v6; // eax
  unsigned int *v7; // rbx
  int v8; // r8d
  int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  char v14; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v15; // [rsp+88h] [rbp+20h] BYREF

  v15 = 0LL;
  v14 = 0;
  v5 = 0;
  v6 = TtmpAcquireSessionById(&v15, a1);
  v7 = v15;
  if ( v6 < 0 )
  {
    v8 = v6;
    v9 = 3812;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v9, v8, -1);
    goto LABEL_11;
  }
  TtmpUpdateDisplayRequiredPowerRequest(v15, a2, a3);
  v10 = v7[5];
  if ( !a3 )
  {
    if ( !v10 )
    {
      v9 = 3844;
      v8 = -1073741811;
      goto LABEL_3;
    }
    v11 = v10 - 1;
    v7[5] = v11;
    v5 = v11 == 0;
LABEL_8:
    if ( !v5 )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( v10 == -1 )
  {
    v9 = 3864;
    v8 = -1073741675;
    goto LABEL_3;
  }
  v13 = v10 + 1;
  v7[5] = v13;
  if ( v13 != 1 )
    goto LABEL_8;
  v5 = 1;
LABEL_9:
  if ( v7[5] )
    v14 = 1;
LABEL_11:
  if ( v7 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v5 )
  {
    ZwUpdateWnfStateData((__int64)&WNF_PO_DISPLAY_REQUEST_ACTIVE, (__int64)&v14);
    LOBYTE(v12) = v14;
    PoSessionEngagementUpdate(v12);
  }
  if ( a3 )
    TtmiLogSessionDisplayRequiredReference();
  else
    TtmiLogSessionDisplayRequiredDereference();
}
