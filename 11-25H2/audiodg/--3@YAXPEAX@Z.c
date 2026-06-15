/*
 * XREFs of ??3@YAXPEAX@Z @ 0x140058DC8
 * Callers:
 *     ??_EHandleSendReceiveServer@@UEAAPEAXI@Z @ 0x140042E40 (--_EHandleSendReceiveServer@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x1400591C0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x14005A9A0 (--_ECAudioMediaType@@MEAAPEAXI@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x14005A9F4 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14005B000 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x1400767D0 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x140076800 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
