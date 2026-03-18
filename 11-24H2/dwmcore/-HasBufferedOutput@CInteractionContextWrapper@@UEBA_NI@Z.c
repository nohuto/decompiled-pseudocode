/*
 * XREFs of ?HasBufferedOutput@CInteractionContextWrapper@@UEBA_NI@Z @ 0x18021DF80
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z @ 0x180126818 (-FindBufferedOutputPointer@CInteractionContextWrapper@@AEBAPEAVCBufferedOutputPointer@@I@Z.c)
 */

bool __fastcall CInteractionContextWrapper::HasBufferedOutput(CInteractionContextWrapper *this, int a2)
{
  if ( !*((_DWORD *)this + 138) )
    return 0;
  if ( a2 )
    return CInteractionContextWrapper::FindBufferedOutputPointer(this, a2) != 0LL;
  return 1;
}
