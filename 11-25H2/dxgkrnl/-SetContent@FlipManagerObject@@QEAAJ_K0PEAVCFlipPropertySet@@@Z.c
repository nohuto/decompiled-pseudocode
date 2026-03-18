/*
 * XREFs of ?SetContent@FlipManagerObject@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x140009CD4
 * Callers:
 *     NtFlipObjectSetContent @ 0x1400460D0 (NtFlipObjectSetContent.c)
 * Callees:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x140009A40 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::SetContent(
        FlipManagerObject *this,
        __int64 a2,
        unsigned __int64 a3,
        struct CFlipPropertySet *a4)
{
  int v8; // ebx

  v8 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v8 >= 0 )
  {
    v8 = CFlipManager::SetContent((FlipManagerObject *)((char *)this + 32), a2, a3, a4);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v8;
}
