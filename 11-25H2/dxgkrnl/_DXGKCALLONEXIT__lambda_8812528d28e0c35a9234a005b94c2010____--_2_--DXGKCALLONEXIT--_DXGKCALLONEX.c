/*
 * XREFs of _DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140082160
 * Callers:
 *     DpiMdmProcessAdapterBrightness @ 0x140088794 (DpiMdmProcessAdapterBrightness.c)
 *     DpiMdmProcessStartAdapter @ 0x140088D14 (DpiMdmProcessStartAdapter.c)
 * Callees:
 *     ?RemoveChildPairingDueToRequirements@DISPLAY_MUX_MGR@@QEAAXU_LUID@@@Z @ 0x140086D28 (-RemoveChildPairingDueToRequirements@DISPLAY_MUX_MGR@@QEAAXU_LUID@@@Z.c)
 */

void __fastcall DXGKCALLONEXIT__lambda_8812528d28e0c35a9234a005b94c2010____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(
        __int64 **a1)
{
  __int64 v1; // rdx

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = **a1;
    if ( *(_DWORD *)(v1 + 6032) != 1 )
      DISPLAY_MUX_MGR::RemoveChildPairingDueToRequirements(qword_14015E3C0, *(struct _LUID *)(v1 + 6036));
  }
}
