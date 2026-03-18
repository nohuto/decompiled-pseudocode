/*
 * XREFs of ??$ReleaseInterface@V?$CWeakReference@VCResource@@@@@@YAXAEAPEAV?$CWeakReference@VCResource@@@@@Z @ 0x1801E6214
 * Callers:
 *     ??1CExpression@@MEAA@XZ @ 0x1801FD7DC (--1CExpression@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800AF020 (-Release@-$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ReleaseInterface<CWeakReference<CResource>>(CResourceWeakRef **a1)
{
  CResourceWeakRef *v2; // rcx
  void (*v3)(void); // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
      CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release(v2);
    else
      v3();
    *a1 = 0LL;
  }
}
