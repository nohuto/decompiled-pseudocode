/*
 * XREFs of ??3@YAXPEAX@Z @ 0x180002C38
 * Callers:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x1800021F0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKnownGameList@@AEAPEBG@Z @ 0x18003CEAC (--$MakeAndInitialize@VCQueryKnownGameList@@V1@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAVCQueryKno.c)
 *     ??1?$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18003D07C (--1-$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18003D190 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WR.c)
 *     ??_ECEnumerateEntries@@UEAAPEAXI@Z @ 0x18003D1C0 (--_ECEnumerateEntries@@UEAAPEAXI@Z.c)
 *     ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18003D200 (--_ECGameEntry@@UEAAPEAXI@Z.c)
 *     ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003D240 (--_ECQueryKnownGameList@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
