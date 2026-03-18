/*
 * XREFs of NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc @ 0x14002C6CC
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 * Callees:
 *     SrbAssignQueueId @ 0x140004320 (SrbAssignQueueId.c)
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     SetPrpFromBuffer @ 0x140006710 (SetPrpFromBuffer.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc(__int64 a1, char a2)
{
  unsigned int v2; // edi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  int i; // edx
  unsigned __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 *v11; // [rsp+80h] [rbp+40h] BYREF
  __int64 v12; // [rsp+88h] [rbp+48h]

  v2 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    v5 = a1 + 1408;
    if ( *(_BYTE *)(a1 + 1408) )
    {
      v2 = -1056964596;
LABEL_22:
      *(_BYTE *)(a1 + 1408) = 0;
      return v2;
    }
    if ( !*(_QWORD *)(a1 + 1536) || !*(_QWORD *)(a1 + 1544) )
    {
      v2 = -1056964605;
      goto LABEL_22;
    }
    LocalCommandReuse(a1, a1 + 1408);
    *(_QWORD *)(*(_QWORD *)(v5 + 96) + 4200LL) = v5;
    v11 = (unsigned __int64 *)(*(_QWORD *)(a1 + 1536) + 0x2000LL);
    v12 = *(_QWORD *)(a1 + 1544) + 0x2000LL;
  }
  else
  {
    NVMeAllocateDmaBuffer(a1, 8u);
    if ( !v11 )
      return (unsigned int)-1056964605;
    v5 = a1 + 1008;
    LocalCommandReuse(a1, a1 + 1008);
  }
  StorPortQuerySystemTime(&v10, v6, v7);
  *v11 = (v10 / 0x2710 - 11644473600000LL) & 0xFFFFFFFFFFFFLL;
  if ( !(unsigned int)SetPrpFromBuffer(a1, *(_QWORD *)(v5 + 96), v12, 8u) )
  {
    v2 = -1056964607;
    if ( a2 )
      goto LABEL_22;
    goto LABEL_18;
  }
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(v5 + 96) + 4225LL) |= i )
    ++i;
  *(_BYTE *)(*(_QWORD *)(v5 + 96) + 4225LL) |= 4u;
  SrbAssignQueueId(a1, v5 + 8);
  *(_DWORD *)(*(_QWORD *)(v5 + 96) + 4100LL) = -1;
  *(_BYTE *)(*(_QWORD *)(v5 + 96) + 4096LL) = 9;
  *(_BYTE *)(*(_QWORD *)(v5 + 96) + 4136LL) = 14;
  if ( a2 )
  {
    v2 = StorPortExtendedFunction(49LL, a1, 0LL, 0LL);
    if ( v2 )
      goto LABEL_22;
  }
  ProcessCommand(a1, v5 + 8);
  if ( !a2 )
  {
    WaitForCommandComplete(a1, v5 + 8, 1u);
    v2 = *(_BYTE *)(v5 + 11) != 1 ? 0xC1000001 : 0;
LABEL_18:
    if ( v11 )
      NVMeFreeDmaBuffer(a1, 8LL, (__int64 *)&v11, v12);
  }
  return v2;
}
