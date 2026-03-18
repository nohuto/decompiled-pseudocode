/*
 * XREFs of DirectComposition::Memory::Allocate @ 0x14004AC18
 * Callers:
 *     ?TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z @ 0x14004A7E0 (-TelemetrySetApplicationId@CApplicationChannel@DirectComposition@@QEAAJPEBG@Z.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x14009C810 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z @ 0x140224CD8 (-CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z.c)
 *     ?push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z @ 0x1402253C0 (-push_back@CGenericPropertyList@DirectComposition@@QEAA_NPEAVCGenericProperty@2@@Z.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___ @ 0x14004ACF8 (NSInstrumentation--CLeakTrackingAllocator--AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85.c)
 */

__int64 __fastcall DirectComposition::Memory::Allocate(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 UserSessionState; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+20h] BYREF

  LOBYTE(v10) = a4;
  UserSessionState = W32GetUserSessionState(a1);
  v10 = a2;
  v9[0] = v8;
  v9[1] = &v10;
  return NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_1fd17fd8824effd8075d8ed53ede85aa___(
           UserSessionState + 72288,
           a1,
           a2,
           v9,
           256LL,
           v8[1]);
}
