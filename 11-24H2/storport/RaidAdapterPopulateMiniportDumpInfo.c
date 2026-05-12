/*
 * XREFs of RaidAdapterPopulateMiniportDumpInfo @ 0x140182A40
 * Callers:
 *     RaUnitStorageDumpControl @ 0x140188700 (RaUnitStorageDumpControl.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 */

__int64 __fastcall RaidAdapterPopulateMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int MiniportDumpInfo; // ebx
  _QWORD *v8; // rcx
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  MiniportDumpInfo = 0;
  P = 0LL;
  if ( !*(_QWORD *)(v3 + 64) )
  {
    if ( !*(_BYTE *)(a1 + 4370) || (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x1000) != 0 )
    {
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
        && (MiniportDumpInfo = RaidAdapterGetMiniportDumpInfo(a1, a3, a2, 0, &P), MiniportDumpInfo >= 0)
        || (MiniportDumpInfo = RaidAdapterGetMiniportDumpInfo(a1, a3, a2, 1, &P), MiniportDumpInfo >= 0) )
      {
        v8 = P;
        if ( !P )
          return (unsigned int)MiniportDumpInfo;
        *(_QWORD *)(v3 + 64) = *((_QWORD *)P + 2);
        *(_QWORD *)(v3 + 136) = v8[2];
      }
      else
      {
        v8 = P;
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0x44436152u);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)MiniportDumpInfo;
}
