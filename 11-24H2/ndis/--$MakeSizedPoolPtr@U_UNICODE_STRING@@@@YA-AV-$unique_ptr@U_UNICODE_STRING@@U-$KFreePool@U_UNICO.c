/*
 * XREFs of ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x1401661F0
 * Callers:
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140136D84 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     BuildServicePath @ 0x140166040 (BuildServicePath.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x140167720 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x14002C200 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@QEAA@$$T@Z @ 0x14008C3C0 (--$-0$00X@-$unique_ptr@VRegistryKnobCollection@@U-$KFreePool@VRegistryKnobCollection@@@@@wistd@@.c)
 */

_QWORD *__fastcall MakeSizedPoolPtr<_UNICODE_STRING>(_QWORD *a1, unsigned int a2, __int64 a3)
{
  _OWORD *Pool2; // rax

  Pool2 = (_OWORD *)ExAllocatePool2(64LL, a3, a2);
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      a1,
      (__int64)Pool2);
  }
  else
  {
    wistd::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>(a1);
  }
  return a1;
}
