/*
 * XREFs of HalpMceInit @ 0x140B68694
 * Callers:
 *     HalpInitializeMce @ 0x140B4BBE4 (HalpInitializeMce.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402105E0 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalpHvInitMcaPcrContext @ 0x1404CE1F8 (HalpHvInitMcaPcrContext.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x14054AA40 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x14054B7C8 (HalpHvSetMachineCheckHandlerState.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     HalpMceInitProcessor @ 0x140B687E8 (HalpMceInitProcessor.c)
 */

void __fastcall HalpMceInit(__int64 a1)
{
  ULONG v2; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 v4; // rsi
  char v5; // cl
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (HalpFeatureBits & 4) == 0 || !*(_BYTE *)(a1 + 42) )
    HalpMcaEnabled = 0;
  if ( !HalpMcaEnabled && (HalpFeatureBits & 8) == 0 )
    HalpMceEnabled = 0;
  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    v4 = 0LL;
    do
    {
      *(_DWORD *)Affinity.Reserved = 0;
      Affinity.Reserved[2] = 0;
      v5 = *(_DWORD *)((_BYTE *)KiGlobalState + v4) & 0x3F;
      Affinity.Group = *(_DWORD *)((char *)KiGlobalState + v4) >> 6;
      Affinity.Mask = 1LL << v5;
      if ( v2 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      HalpHvInitMcaPcrContext();
      for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 184) )
        HalpMceInitProcessor(a1, *(_QWORD *)(i + 172));
      ++v2;
      v4 += 4LL;
    }
    while ( v2 < ActiveProcessorCount );
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( HalpHvWheaEnlightenedCpuManager )
  {
    if ( HalpMceEnabled )
    {
      HalpHvInitMcaStatusMsrCache(v8);
      HalpHvSetMachineCheckHandlerState(v10, v9, v11, v12);
    }
  }
}
