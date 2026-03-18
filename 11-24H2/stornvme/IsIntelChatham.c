/*
 * XREFs of IsIntelChatham @ 0x140017C70
 * Callers:
 *     NVMeHwFindAdapter @ 0x140017CA0 (NVMeHwFindAdapter.c)
 *     IoSqToIoCqMapping @ 0x14001AEE8 (IoSqToIoCqMapping.c)
 *     NVMeControllerIdentify @ 0x140026FDC (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1400297C8 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsIntelChatham(__int64 a1)
{
  return *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209;
}
