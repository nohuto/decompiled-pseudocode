/*
 * XREFs of IopIrpHasExtensionType @ 0x1403E8190
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x14025D5A8 (IoMakeAssociatedIrpPriv.c)
 *     IoReuseIrp @ 0x1402C2EB0 (IoReuseIrp.c)
 *     IopPerfCompleteRequest @ 0x1403CB914 (IopPerfCompleteRequest.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x140594390 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405943E0 (IoClearFsTrackOffsetState.c)
 *     IoGetAdapterCryptoEngineExtension @ 0x140594420 (IoGetAdapterCryptoEngineExtension.c)
 *     IoSetFsZeroingOffset @ 0x1405944C0 (IoSetFsZeroingOffset.c)
 *     IoSetFsZeroingOffsetRequired @ 0x140594500 (IoSetFsZeroingOffsetRequired.c)
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
