/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x14099D3C4
 * Callers:
 *     PopPowerRequestCallbackDisplayRequired @ 0x14099B3A0 (PopPowerRequestCallbackDisplayRequired.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PoSessionEngagementUpdate @ 0x1405D8328 (PoSessionEngagementUpdate.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x14076B2C4 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14099E1A4 (TtmpAcquireSessionById.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x140ABC708 (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x140ABC890 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, unsigned int a2, char a3)
{
  unsigned int v4; // ebp
  bool v6; // si
  int v7; // eax
  unsigned int *v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v16; // eax
  unsigned int ExplicitScope; // [rsp+70h] [rbp+8h] BYREF
  char Buffer; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v19; // [rsp+88h] [rbp+20h] BYREF

  ExplicitScope = a1;
  v19 = 0LL;
  v4 = 0;
  Buffer = 0;
  v6 = 0;
  v7 = TtmpAcquireSessionById(&v19, a1);
  v8 = v19;
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 3812LL;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v11, v10, 0xFFFFFFFFLL);
    goto LABEL_11;
  }
  TtmpUpdateDisplayRequiredPowerRequest(v19, a2, a3);
  v12 = v8[5];
  if ( !a3 )
  {
    if ( !v12 )
    {
      v9 = -1073741811;
      v11 = 3844LL;
      v10 = 3221225485LL;
      goto LABEL_3;
    }
    v13 = v12 - 1;
    v8[5] = v13;
    v6 = v13 == 0;
LABEL_8:
    v9 = 0;
    if ( !v6 )
      goto LABEL_11;
    goto LABEL_9;
  }
  if ( v12 == -1 )
  {
    v9 = -1073741675;
    v11 = 3864LL;
    v10 = 3221225621LL;
    goto LABEL_3;
  }
  v16 = v12 + 1;
  v8[5] = v16;
  if ( v16 != 1 )
    goto LABEL_8;
  v6 = 1;
  v9 = 0;
LABEL_9:
  if ( v8[5] )
    Buffer = 1;
LABEL_11:
  if ( v8 )
  {
    v4 = v8[5];
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v6 )
  {
    ZwUpdateWnfStateData(&WNF_PO_DISPLAY_REQUEST_ACTIVE, &Buffer, 1u, 0LL, &ExplicitScope, 0, 0);
    LOBYTE(v14) = Buffer;
    PoSessionEngagementUpdate(v14);
  }
  if ( a3 )
    return TtmiLogSessionDisplayRequiredReference(ExplicitScope, v4, v9);
  else
    return TtmiLogSessionDisplayRequiredDereference(ExplicitScope, v4, v9);
}
