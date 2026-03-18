/*
 * XREFs of ??1CInteractionContextWrapper@@EEAA@XZ @ 0x1801F26AC
 * Callers:
 *     ??_GCInteractionContextWrapper@@EEAAPEAXI@Z @ 0x1801F2660 (--_GCInteractionContextWrapper@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1801F2708 (-RemoveAll@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@.c)
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x1801F2740 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 */

void __fastcall CInteractionContextWrapper::~CInteractionContextWrapper(CInteractionContextWrapper *this)
{
  *(_QWORD *)this = &CInteractionContextWrapper::`vftable';
  if ( *((_QWORD *)this + 2) )
  {
    DestroyInteractionContext();
    *((_QWORD *)this + 2) = 0LL;
    CInteractionContextWrapper::ResetBufferedOutput(this);
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((char *)this + 600);
  CQueue<CResource *>::~CQueue<CResource *>((char *)this + 536);
}
