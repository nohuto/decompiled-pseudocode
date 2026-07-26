/*
 * XREFs of ??$MakePoolPtr@UNDIS_IF_UPDATE_CONTEXT@@@@YA?AV?$unique_ptr@UNDIS_IF_UPDATE_CONTEXT@@U?$KFreePool@UNDIS_IF_UPDATE_CONTEXT@@@@@wistd@@K@Z @ 0x140152518
 * Callers:
 *     NdisIfUpdateInterface @ 0x1400CFF70 (NdisIfUpdateInterface.c)
 * Callees:
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x140028B00 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14009C2D8 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 */

_QWORD *__fastcall MakePoolPtr<NDIS_IF_UPDATE_CONTEXT>(_QWORD *a1)
{
  __int64 Pool2; // rax

  Pool2 = ExAllocatePool2(64LL, 40LL, 1718174798);
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = 0LL;
    *(_OWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
      (__int64)a1,
      Pool2);
  }
  else
  {
    wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(a1);
  }
  return a1;
}
