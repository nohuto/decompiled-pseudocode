/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140C46FF8
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 * Callees:
 *     CmFcInitSystem0 @ 0x140C4C294 (CmFcInitSystem0.c)
 */

__int64 CmInitBootFeatureConfigurations()
{
  return CmFcInitSystem0();
}
