/*
 * XREFs of IopIrpHasExtensionType @ 0x1403EF950
 * Callers:
 *     IoReuseIrp @ 0x140359950 (IoReuseIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x14035E5F8 (IoMakeAssociatedIrpPriv.c)
 *     IopPerfCompleteRequest @ 0x14049CE74 (IopPerfCompleteRequest.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140593D00 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140593D50 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140593D90 (IoGetAdapterCryptoEngineExtension.c)
 *     IoSetFsZeroingOffset @ 0x140593E30 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140593E70 (IoSetFsZeroingOffsetRequired.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopIrpHasExtensionType(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  int v3; // ecx

  v2 = *(_QWORD *)(a1 + 200);
  if ( *(char *)(a1 + 71) < 0 )
    return a2 == 2;
  if ( v2 )
  {
    v3 = *(unsigned __int16 *)(v2 + 2);
    if ( _bittest(&v3, a2) )
      return 1;
  }
  return 0;
}
