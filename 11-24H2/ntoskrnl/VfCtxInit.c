/*
 * XREFs of VfCtxInit @ 0x140BA3D84
 * Callers:
 *     VfMiscPluginEntry @ 0x140BA0670 (VfMiscPluginEntry.c)
 * Callees:
 *     KeAllocateXStateContext @ 0x1403D3E40 (KeAllocateXStateContext.c)
 *     KeFreeXStateContext @ 0x1403FF338 (KeFreeXStateContext.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall VfCtxInit(__int64 a1, __int64 a2)
{
  void **v2; // rbx
  __int64 v3; // rdi

  if ( (KeFeatureBits & 0x800000) != 0 && MEMORY[0xFFFFF780000003D8] )
  {
    ViCtxXStateEnabledMask = MEMORY[0xFFFFF780000003D8];
    LODWORD(ViCtxXStateSize) = MEMORY[0xFFFFF780000003E8];
  }
  v2 = (void **)&unk_141000760;
  v3 = 16LL;
  do
  {
    if ( ViCtxXStateEnabledMask && (int)KeAllocateXStateContext((__int64)v2, a2, ViCtxXStateSize) >= 0 )
    {
      if ( (int)KeAllocateXStateContext((__int64)(v2 + 4), a2, ViCtxXStateSize) >= 0 )
      {
        memset_0(v2[2], 0, (unsigned int)ViCtxXStateSize);
        memset_0(v2[6], 0, (unsigned int)ViCtxXStateSize);
        *((_DWORD *)v2 - 3) |= 1u;
      }
      else
      {
        KeFreeXStateContext((__int64)v2);
      }
    }
    _InterlockedIncrement(&ViCtxInitializedIsrStateBlocks);
    v2 += 10;
    --v3;
  }
  while ( v3 );
}
