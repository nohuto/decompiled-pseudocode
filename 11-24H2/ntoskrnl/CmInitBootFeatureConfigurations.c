/*
 * XREFs of CmInitBootFeatureConfigurations @ 0x140C44EA8
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 * Callees:
 *     CmFcInitSystem0 @ 0x140C4A170 (CmFcInitSystem0.c)
 */

__int64 CmInitBootFeatureConfigurations()
{
  return CmFcInitSystem0();
}
