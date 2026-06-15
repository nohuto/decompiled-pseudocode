/*
 * XREFs of ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x14000C59C
 * Callers:
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000B170 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 * Callees:
 *     ?SwapRTPointer@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAXXZ @ 0x14000C678 (-SwapRTPointer@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnecti.c)
 *     ?InnerInsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@0I@Z @ 0x14000C6FC (-InnerInsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConne.c)
 *     ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@Z @ 0x1400360BC (-RemoveAt@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@.c)
 *     ?Find@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEAVCConnectionNode@@PEAU3@@Z @ 0x140036CC0 (-Find@-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEA.c)
 */

__int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InsertAfter(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  int v5; // edi
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
    v5 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
           a1,
           a2,
           v4,
           *(unsigned __int16 *)(a1 + 112) ^ 1u);
    if ( v5 >= 0 )
    {
      CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::SwapRTPointer(a1);
      v5 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerInsertAfter(
             a1,
             a2,
             v6,
             *(unsigned __int16 *)(a1 + 112) ^ 1u);
      if ( v5 < 0 )
      {
        CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::SwapRTPointer(a1);
        v8 = ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::Find(
               a1 + 48 * (*(unsigned __int16 *)(a1 + 112) ^ 1LL),
               &v10);
        ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(v9, v8);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v5;
}
