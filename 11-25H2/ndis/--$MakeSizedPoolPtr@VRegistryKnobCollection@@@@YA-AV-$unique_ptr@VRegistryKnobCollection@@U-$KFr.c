/*
 * XREFs of ??$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA?AV?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@K_K@Z @ 0x14016E4A0
 * Callers:
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x14016E0A0 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x140028B00 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@QEAA@$$T@Z @ 0x140097B70 (--$-0$00X@-$unique_ptr@VRegistryKnobCollection@@U-$KFreePool@VRegistryKnobCollection@@@@@wistd@@.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<RegistryKnobCollection>(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, a3, 1651197006);
  if ( Pool2 )
  {
    *(_OWORD *)(Pool2 + 72) = 0LL;
    *(_QWORD *)(Pool2 + 88) = 0LL;
    *(_OWORD *)(Pool2 + 8) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_QWORD *)(Pool2 + 56) = 0LL;
    *(_QWORD *)(Pool2 + 64) = 0LL;
    *(_QWORD *)Pool2 = &RegistryKnobCollection::`vftable';
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      (__int64)a1,
      Pool2);
  }
  else
  {
    wistd::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>(a1);
  }
  return a1;
}
