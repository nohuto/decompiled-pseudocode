/*
 * XREFs of ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x140076058
 * Callers:
 *     DXGADAPTER_ValidateMockDriverState @ 0x14006C2A0 (DXGADAPTER_ValidateMockDriverState.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x14033A0A0 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 * Callees:
 *     ?ValidateFbrHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_FBR@@@Z @ 0x140075EEC (-ValidateFbrHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_FBR@@@Z.c)
 *     ?ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z @ 0x14007608C (-ValidatePlaneHelper@MOCKDRIVERSTATE@@AEAAXPEBU_MOCKDRIVERSTATE_VALIDATE_PLANE@@@Z.c)
 */

void __fastcall MOCKDRIVERSTATE::ValidateMockDriverState(
        MOCKDRIVERSTATE *a1,
        int a2,
        const struct _MOCKDRIVERSTATE_VALIDATE_FBR *a3)
{
  if ( *((_BYTE *)a1 + 32) )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
        MOCKDRIVERSTATE::ValidateFbrHelper(a1, a3);
    }
    else
    {
      MOCKDRIVERSTATE::ValidatePlaneHelper(a1, a3);
    }
  }
}
