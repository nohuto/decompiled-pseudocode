/*
 * XREFs of ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x18026F894
 * Callers:
 *     ??_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z @ 0x18026F960 (--_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x18026F9AC (-NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z.c)
 */

void __fastcall CProcessAttributionManager::Observer::~Observer(CProcessAttributionManager **this)
{
  void **v2; // rsi
  void **i; // rdi
  CProcessAttributionManager *v4; // rcx

  *this = (CProcessAttributionManager *)&CProcessAttributionManager::Observer::`vftable';
  CProcessAttributionManager::NotifyOnDeadObserver(this[1], (struct CProcessAttributionObserver *)this);
  v2 = (void **)this[3];
  for ( i = (void **)this[2]; i != v2; ++i )
    operator delete(*i);
  v4 = this[2];
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (this[4] - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    this[2] = 0LL;
    this[3] = 0LL;
    this[4] = 0LL;
  }
  *this = (CProcessAttributionManager *)&CProcessAttributionObserver::`vftable';
}
