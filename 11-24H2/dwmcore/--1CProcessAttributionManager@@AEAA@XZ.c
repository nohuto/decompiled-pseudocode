/*
 * XREFs of ??1CProcessAttributionManager@@AEAA@XZ @ 0x1802637AC
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x18025D134 (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x180212D00 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 */

void __fastcall CProcessAttributionManager::~CProcessAttributionManager(CProcessAttributionManager *this)
{
  CProcessAttributionManager::Record **v1; // rsi
  CProcessAttributionManager::Record **i; // rdi
  _QWORD *v4; // rcx

  v1 = (CProcessAttributionManager::Record **)*((_QWORD *)this + 1);
  for ( i = *(CProcessAttributionManager::Record ***)this; i != v1; ++i )
  {
    if ( *i )
      CProcessAttributionManager::Record::`scalar deleting destructor'(*i);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 5) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    std::_Deallocate<16,0>(*(_QWORD **)this, (*((_QWORD *)this + 2) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
