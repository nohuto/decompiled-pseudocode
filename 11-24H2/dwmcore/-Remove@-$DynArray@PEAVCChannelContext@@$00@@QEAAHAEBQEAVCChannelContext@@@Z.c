/*
 * XREFs of ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18019EB44
 * Callers:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180015A70 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18014B770 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18019E1F4 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18022B67C (-Partition_RegisterForNotifications@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?RemoveExcludedTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x18028F680 (-RemoveExcludedTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x18028F6B0 (-RemoveTarget@CCompositionLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z @ 0x18028F6F0 (-RemoveTargetVisual@CCompositionLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveExcludedTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x180298880 (-RemoveExcludedTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x1802988C0 (-RemoveTarget@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z @ 0x1802988F0 (-RemoveTargetVisual@CCompositionSpotLight@@UEAAXPEAVCVisual@@@Z.c)
 *     ?RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z @ 0x1802CFBAC (-RemoveExclusiveView@CHolographicManager@@QEAAXPEAVCHolographicExclusiveView@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802D5858 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CChannelContext *,1>::Remove(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 i; // r11
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0LL;
  for ( i = *a1; (unsigned int)v3 < v2; v3 = (unsigned int)(v3 + 1) )
  {
    if ( *a2 == *(_QWORD *)(i + 8 * v3) )
      break;
  }
  if ( (unsigned int)v3 >= v2 )
    return 0LL;
  for ( ; (unsigned int)v3 < v2 - 1; v2 = *((_DWORD *)a1 + 6) )
  {
    v6 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    *(_QWORD *)(i + 8 * v6) = *(_QWORD *)(i + 8LL * (unsigned int)v3);
  }
  result = 1LL;
  *((_DWORD *)a1 + 6) = v2 - 1;
  return result;
}
