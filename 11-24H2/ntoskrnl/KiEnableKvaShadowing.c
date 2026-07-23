/*
 * XREFs of KiEnableKvaShadowing @ 0x140B5C8EC
 * Callers:
 *     KiInitializeProcessorState @ 0x14073A9E0 (KiInitializeProcessorState.c)
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KiSetAddressPolicy @ 0x1402CA5C0 (KiSetAddressPolicy.c)
 *     HvlRescindEnlightenments @ 0x140588CCC (HvlRescindEnlightenments.c)
 *     KiIsKvaShadowDisabled @ 0x1405BB554 (KiIsKvaShadowDisabled.c)
 *     KiInitializeDescriptorIst @ 0x1405C0E68 (KiInitializeDescriptorIst.c)
 *     SpcIsKvaLeakageSimulated @ 0x1406A1C18 (SpcIsKvaLeakageSimulated.c)
 *     SpcQueryKvaLeakagePresent @ 0x1406A1C28 (SpcQueryKvaLeakagePresent.c)
 *     KiInitializeIdt @ 0x140B5A760 (KiInitializeIdt.c)
 *     KiShadowProcessorAllocation @ 0x140B5CA8C (KiShadowProcessorAllocation.c)
 */

__int64 __fastcall KiEnableKvaShadowing(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // cf
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 result; // rax
  __int16 v17; // cx

  if ( KiIsKvaShadowDisabled() )
  {
    KiIsKvaShadowConfigDisabled = 1;
  }
  else
  {
    if ( (KeFeatureBits2 & 0x18000) == 0x8000 )
      *(_QWORD *)(v5 + 11520) = 3LL;
    if ( (unsigned int)SpcQueryKvaLeakagePresent() || SpcIsKvaLeakageSimulated() )
    {
      v8 = __readcr3();
      *(_QWORD *)(v7 + 44672) = v8;
      *(_QWORD *)(v6 + 4216) = *(_QWORD *)(v6 + 4100);
      KiInitializeDescriptorIst(v7, v6);
      *(_QWORD *)(v9 + 4100) = v9 + 16896;
      if ( *(_DWORD *)(a1 + 36) )
      {
        result = KiShadowProcessorAllocation(a1, v9, a3);
        if ( !(_DWORD)result )
          return result;
        v17 = *(_WORD *)(KeGetPrcb(0) + 44714);
        *(_DWORD *)(a1 + 44696) |= 2u;
        *(_WORD *)(a1 + 44714) = v17;
      }
      else
      {
        KiInitializeIdt(v9, 1);
        KeGetCurrentThread()->ApcState.Process->AddressPolicy = 1;
        byte_140FD0060 = 1;
        _InterlockedOr(dword_140FD04FC, 0x4000u);
        KiSetAddressPolicy(1LL, v10, v11, v12);
        v13 = _bittest64((const signed __int64 *)(a1 + 36768), 0x2Au);
        *(_WORD *)(a1 + 44714) = 24;
        if ( v13 )
        {
          v14 = __readcr4();
          __writecr4(v14 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
          v15 = __readcr3();
          __writecr3(v15 | 2);
          KiFlushPcid |= 1u;
        }
        if ( (*(_QWORD *)(a1 + 36768) & 0x240000000000LL) == 0x240000000000LL )
          KiFlushPcid |= 2u;
        HvlRescindEnlightenments();
        KiKvaShadow = 1;
        KiKvaShadowMode = 2 - (KiFlushPcid != 0);
      }
      if ( KiFlushPcid )
        _interlockedbittestandset64((volatile signed __int32 *)(a1 + 44672), 0x3FuLL);
    }
  }
  return 1LL;
}
