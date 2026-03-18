/*
 * XREFs of _DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1400827C4
 * Callers:
 *     DpiMdmProcessAdapterBrightness @ 0x140088E5C (DpiMdmProcessAdapterBrightness.c)
 *     DpiMdmProcessStartAdapter @ 0x1400893FC (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     ?RemoveChildPairingDueToRequirements@DISPLAY_MUX_MGR@@QEAAXU_LUID@@@Z @ 0x1400873E4 (-RemoveChildPairingDueToRequirements@DISPLAY_MUX_MGR@@QEAAXU_LUID@@@Z.c)
 */

void __fastcall DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(
        __int64 **a1)
{
  __int64 v1; // rdx

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = **a1;
    if ( *(_DWORD *)(v1 + 6032) != 1 )
      DISPLAY_MUX_MGR::RemoveChildPairingDueToRequirements(qword_140161380, *(struct _LUID *)(v1 + 6036));
  }
}
