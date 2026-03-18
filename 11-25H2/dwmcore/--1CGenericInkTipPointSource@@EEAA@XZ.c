/*
 * XREFs of ??1CGenericInkTipPointSource@@EEAA@XZ @ 0x1802B501C
 * Callers:
 *     ??_GCGenericInkTipPointSource@@EEAAPEAXI@Z @ 0x1802B5060 (--_GCGenericInkTipPointSource@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA@XZ @ 0x180229C74 (--1-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@std@@@std@@QEAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CGenericInkTipPointSource::~CGenericInkTipPointSource(void **this)
{
  void *v2; // rcx

  std::unique_ptr<CSharedCircularQueue>::~unique_ptr<CSharedCircularQueue>(this + 3);
  v2 = this[2];
  if ( v2 )
  {
    this[2] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
