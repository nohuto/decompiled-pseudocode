/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x140058E6C
 * Callers:
 *     ??1?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAA@XZ @ 0x140035C60 (--1-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits.c)
 *     ??1?$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ @ 0x140035CA0 (--1-$CRealTimeSafeStruct@VCProcessingData@@$00@@QEAA@XZ.c)
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x14003E90C (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     _CRealTimeSafeList_CConnectionNode_ATLRT::CAtlList_CConnectionNode___CConnectionNodeTraits___::CRealTimeSafeList_CConnectionNode_ATLRT::CAtlList_CConnectionNode___CConnectionNodeTraits____::_1_::dtor$0 @ 0x1400944D1 (_CRealTimeSafeList_CConnectionNode_ATLRT--CAtlList_CConnectionNode___CConnectionNodeTraits___--C.c)
 *     _CRealTimeSafeStruct_CProcessingData_1_::CRealTimeSafeStruct_CProcessingData_1__::_1_::dtor$0 @ 0x140094502 (_CRealTimeSafeStruct_CProcessingData_1_--CRealTimeSafeStruct_CProcessingData_1__--_1_--dtor$0.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x140058EDC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx
  char *i; // rdi

  v5 = a3;
  for ( i = &a1[a3 * a2]; v5--; a4(i) )
    i -= a2;
}
