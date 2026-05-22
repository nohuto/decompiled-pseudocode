/*
 * XREFs of ??0InputProcessManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18019B30C
 * Callers:
 *     ??0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18000D0D8 (--0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18000E77C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??$?0U?$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@?$unique_ptr@VCSharedCircularQueueProducer@@U?$default_delete@VCSharedCircularQueueProducer@@@std@@@std@@QEAA@$$T@Z @ 0x18005DDA0 (--$-0U-$default_delete@VCSharedCircularQueueProducer@@@std@@$0A@@-$unique_ptr@VCSharedCircularQu.c)
 */

InputProcessManager *__fastcall InputProcessManager::InputProcessManager(
        InputProcessManager *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  InputProcessManager *result; // rax

  *(_QWORD *)this = &BamoInputProcessManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputProcessManager::`vftable'{for `IInputProcessManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((InputProcessManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoInputProcessManagerPrincipalImpl::`vftable';
  *(_QWORD *)this = &InputProcessManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &InputProcessManager::`vftable'{for `IInputProcessManagerPrincipal'};
  std::unique_ptr<CSharedCircularQueueProducer>::unique_ptr<CSharedCircularQueueProducer>((_QWORD *)this + 7);
  *((_BYTE *)this + 64) = 0;
  result = this;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 10) = 0LL;
  return result;
}
