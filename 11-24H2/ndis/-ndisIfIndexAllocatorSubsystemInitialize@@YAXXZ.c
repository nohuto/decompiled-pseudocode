/*
 * XREFs of ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400CEB04
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x14018E8A4 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void __fastcall ndisIfIndexAllocatorSubsystemInitialize(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  int v3; // edx
  int v4; // ecx
  struct _GUID *v5; // [rsp+20h] [rbp-18h]

  ndisRegisterKnobs(&stru_14011A850, 1uLL, a3, 0LL, v5);
  v4 = *(_DWORD *)dword_14011D538;
  if ( (unsigned int)(*(_DWORD *)dword_14011D538 - 1) > 0x7FFE )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 3;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        22,
        10,
        (struct _GUID *)&WPP_08d66058e44c3546dbc094f515ac4e09_Traceguids,
        dword_14011D538[0]);
    }
    v4 = 1;
    *(_DWORD *)dword_14011D538 = 1;
  }
  dword_14011CAC0 = 1;
  xmmword_14011CAC8 = 0LL;
  dword_14011CAC4 = v4;
  BitMapHeader = 0LL;
  dword_14011CAD8 = v4;
  dword_14011CADC = 0xFFFF;
}
