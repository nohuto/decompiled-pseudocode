/*
 * XREFs of PpmHeteroRegisterWpsUpdatesAmd @ 0x1407656C0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 */

__int64 __fastcall PpmHeteroRegisterWpsUpdatesAmd(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  ULONG v4; // r14d
  __int64 v5; // r12
  ULONG MaximumProcessorCount; // r15d
  ULONG i; // esi
  unsigned int j; // ebp
  __int64 Prcb; // rax

  v2 = 0;
  if ( a2 )
  {
    if ( !PpmHeteroHgsEnabled
      || PpmHeteroHgsVendor != 1
      || !*(_QWORD *)(a2 + 32)
      || !*(_QWORD *)(a2 + 8)
      || !*(_QWORD *)(a2 + 40)
      || !*(_QWORD *)(a2 + 48) )
    {
      return (unsigned int)-1073741811;
    }
    if ( PpmHeteroHgsTableEntry || PpmHeteroCheckWpsTableUpdated || PpmHeteroAcknowledgeWpsUpdate )
      return (unsigned int)-1073741616;
    v4 = *(_DWORD *)(a2 + 16);
    v5 = *(_QWORD *)(a2 + 32);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( v4 > MaximumProcessorCount )
      return (unsigned int)-1073741811;
    for ( i = 0; i < v4; ++i )
    {
      for ( j = 0; j < MaximumProcessorCount; ++j )
      {
        if ( *(_DWORD *)(v5 + 4LL * i) == *(_DWORD *)(KeGetPrcb(j) + 212) )
        {
          Prcb = KeGetPrcb(j);
          if ( Prcb )
          {
            *(_WORD *)(Prcb + 35406) = i;
            *(_WORD *)(Prcb + 35402) = i * *(_WORD *)(a2 + 20);
          }
          break;
        }
      }
    }
    PpmHeteroHgsTableEntry = *(_QWORD *)(a2 + 8);
    PpmHeteroWpsUpdateInterfaceHandle = *(_QWORD *)a2;
    PpmHeteroCheckWpsTableUpdated = *(_QWORD *)(a2 + 40);
    PpmHeteroAcknowledgeWpsUpdate = *(_QWORD *)(a2 + 48);
    PpmHeteroHgsCapabilityBits = *(_DWORD *)(a2 + 24);
  }
  return v2;
}
