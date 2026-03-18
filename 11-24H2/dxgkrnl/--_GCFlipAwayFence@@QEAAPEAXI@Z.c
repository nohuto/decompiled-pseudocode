/*
 * XREFs of ??_GCFlipAwayFence@@QEAAPEAXI@Z @ 0x14009B1C0
 * Callers:
 *     ?FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z @ 0x14009A7B0 (-FreeFlipAwayFence@CAdapterCollection@@QEAAX_K@Z.c)
 *     ??1CAdapter@@IEAA@XZ @ 0x14009B090 (--1CAdapter@@IEAA@XZ.c)
 *     ?Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1@@Z @ 0x14009C0C0 (-Create@CFlipAwayFence@@SAJPEAU_LIST_ENTRY@@IAEBUtagCOMPOSITION_TARGET_FLIP_AWAY_FENCE@@PEAPEAV1.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1CFlipAwayFence@@QEAA@XZ @ 0x14009C038 (--1CFlipAwayFence@@QEAA@XZ.c)
 */

CFlipAwayFence *__fastcall CFlipAwayFence::`scalar deleting destructor'(CFlipAwayFence *this)
{
  CFlipAwayFence::~CFlipAwayFence(this);
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  return this;
}
