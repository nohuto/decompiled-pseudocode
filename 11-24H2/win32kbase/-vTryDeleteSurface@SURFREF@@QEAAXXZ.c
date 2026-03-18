/*
 * XREFs of ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x14014CC70
 * Callers:
 *     <none>
 * Callees:
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x140036FD8 (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ?GrepQueueApc@@YA_NP6AXPEAX00@Z00@Z @ 0x1401C4190 (-GrepQueueApc@@YA_NP6AXPEAX00@Z00@Z.c)
 */

void __fastcall SURFREF::vTryDeleteSurface(void ***this)
{
  if ( KeAreApcsDisabled() )
    GrepQueueApc(SURFREF::vTryDeleteSurface_::_8_::_lambda_1_::_lambda_invoker_cdecl_, *this[4], 0LL);
  else
    SURFREF::bDeleteSurface((SURFREF *)this);
}
