/*
 * XREFs of ??1CContactManager@@QEAA@XZ @ 0x1800B6698
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B84E0 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18000D7AC (-Reset@CContactManager@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18009455C (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CContactManager::~CContactManager(void **this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  CContactManager::Reset((CContactManager *)this);
  if ( *this )
    DefaultHeap::Free(*this);
  v2 = this[1];
  if ( v2 )
    DefaultHeap::Free(v2);
  v3 = this[2];
  if ( v3 )
    DefaultHeap::Free(v3);
  v4 = this[3];
  if ( v4 )
    DefaultHeap::Free(v4);
  v5 = this[4];
  if ( v5 )
    DefaultHeap::Free(v5);
  v6 = this[5];
  if ( v6 )
    DefaultHeap::Free(v6);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 35);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 31);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 27);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 23);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 19);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 15);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 11);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 7);
}
