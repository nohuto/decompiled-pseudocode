/*
 * XREFs of HalpMceInit @ 0x140B58864
 * Callers:
 *     HalpInitializeMce @ 0x140B3BBE4 (HalpInitializeMce.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     HalpHvInitMcaPcrContext @ 0x1404CE418 (HalpHvInitMcaPcrContext.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140548150 (HalpHvInitMcaStatusMsrCache.c)
 *     HalpHvSetMachineCheckHandlerState @ 0x140548ED8 (HalpHvSetMachineCheckHandlerState.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     HalpMceInitProcessor @ 0x140B589B8 (HalpMceInitProcessor.c)
 */

void __fastcall HalpMceInit(__int64 a1)
{
  ULONG v2; // edi
  ULONG ActiveProcessorCount; // ebp
  __int64 v4; // rsi
  char v5; // cl
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 i; // rbx
  __int64 v8; // rcx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-48h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-38h] BYREF

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
      HalpHvSetMachineCheckHandlerState();
    }
  }
}
