/*
 * XREFs of ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180091CA4
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180091264 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180091900 (-RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z.c)
 *     ?PositionAppAtEnd@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x180092BC0 (-PositionAppAtEnd@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Mi.c)
 *     ?_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z @ 0x1800A0C78 (-_RemoveWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAX_K@Z.c)
 *     ?RemoveApplication@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@UEAAX_K@Z @ 0x180236450 (-RemoveApplication@-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@M.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x1802F4714 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEA.c)
 *     ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180303320 (-HandleDestruction@CImmersiveApp@@UEAA-AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

__int64 __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v4; // r8

  if ( a2 >= a1[1] )
    return 2147650721LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*a1 + 8 * a2));
  v4 = a1[1];
  if ( a2 != v4 - 1 )
    memmove_0((void *)(*a1 + 8 * a2), (const void *)(*a1 + 8 * a2 + 8), 8 * (v4 - a2) - 8);
  --a1[1];
  return 0LL;
}
