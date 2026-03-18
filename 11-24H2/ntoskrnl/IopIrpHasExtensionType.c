/*
 * XREFs of IopIrpHasExtensionType @ 0x1403F51A0
 * Callers:
 *     IoReuseIrp @ 0x14031A320 (IoReuseIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x140374CE8 (IoMakeAssociatedIrpPriv.c)
 *     IopPerfCompleteRequest @ 0x1403DC6BC (IopPerfCompleteRequest.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140597410 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x140597460 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x1405974A0 (IoGetAdapterCryptoEngineExtension.c)
 *     IoSetFsZeroingOffset @ 0x140597540 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140597580 (IoSetFsZeroingOffsetRequired.c)
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
