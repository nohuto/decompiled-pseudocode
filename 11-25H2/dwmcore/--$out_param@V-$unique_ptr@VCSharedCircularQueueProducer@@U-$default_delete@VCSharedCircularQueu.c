/*
 * XREFs of ??$out_param@V?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@@details@0@AEAV?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@@Z @ 0x18029AF5C
 * Callers:
 *     ?EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z @ 0x18029B0F0 (-EnsureVailPerFrameDataHostReaderQueue@CSuperWetSource@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::out_param<std::unique_ptr<CSharedCircularQueueProducer>>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  result = a1;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 16) = 1;
  return result;
}
