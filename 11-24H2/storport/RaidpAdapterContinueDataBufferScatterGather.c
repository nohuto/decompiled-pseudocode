/*
 * XREFs of RaidpAdapterContinueDataBufferScatterGather @ 0x140066780
 * Callers:
 *     <none>
 * Callees:
 *     RaidXrbSetDataBufferAddress @ 0x140012540 (RaidXrbSetDataBufferAddress.c)
 *     RaidAdapterRequestComplete @ 0x140025020 (RaidAdapterRequestComplete.c)
 *     RaidAdapterScatterGatherExecute @ 0x140025860 (RaidAdapterScatterGatherExecute.c)
 *     RaidUpdateZoneIoMetadata @ 0x1400282B0 (RaidUpdateZoneIoMetadata.c)
 */

char __fastcall RaidpAdapterContinueDataBufferScatterGather(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  int v8; // eax

  v4 = *(_QWORD *)(a1 + 64);
  a4[19] = a3;
  if ( (int)RaidXrbSetDataBufferAddress(a4, v4, 1) < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 48;
    v7 = a4[21];
    if ( *(_BYTE *)(v7 + 2) == 40 )
      *(_DWORD *)(v7 + 44) = -1073741670;
    else
      *(_DWORD *)(v7 + 64) = -1073741670;
    RaidUpdateZoneIoMetadata(a4[28], 0LL, (__int64)a4);
    goto LABEL_8;
  }
  v8 = RaidAdapterScatterGatherExecute(v4, (__int64)a4, v6);
  if ( v8 < 0 )
  {
    *(_BYTE *)(a4[21] + 3LL) = 4;
LABEL_8:
    LOBYTE(v8) = RaidAdapterRequestComplete(v4, (__int64)a4, 1);
  }
  return v8;
}
