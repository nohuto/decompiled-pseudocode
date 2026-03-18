/*
 * XREFs of ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x14006DAC0
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x14006D30C (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z @ 0x14006DB54 (-InsertObject@CLinearObjectTableBase@DirectComposition@@QEAAJPEAXPEAI@Z.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::RegisterChannel(
        PERESOURCE *this,
        struct DirectComposition::CChannel *a2,
        unsigned int *a3)
{
  unsigned int v6; // esi
  int inserted; // ebx
  bool v8; // zf
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(this[10]);
  v10 = 0;
  v6 = 0;
  inserted = DirectComposition::CLinearObjectTableBase::InsertObject(
               (DirectComposition::CLinearObjectTableBase *)(this + 3),
               a2,
               &v10);
  if ( inserted >= 0 )
    v6 = v10;
  ExReleaseResourceLite(this[10]);
  KeLeaveCriticalRegion();
  if ( inserted >= 0 )
  {
    v8 = *((_DWORD *)this + 37) == 0;
    *a3 = v6;
    if ( v8 )
      return (unsigned int)-1073741300;
  }
  return (unsigned int)inserted;
}
