/*
 * XREFs of ?GetWeakReference@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@UEAAJPEAPEAVIUnknownWeakRef@@@Z @ 0x1801FCE80
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??0CMILCOMWeakRef@@QEAA@PEAUIUnknown@@@Z @ 0x1801FCF20 (--0CMILCOMWeakRef@@QEAA@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMILCOMBaseWeakRefSource<CMilObjectDeleter>::GetWeakReference(
        struct IUnknown *a1,
        struct IUnknown *a2)
{
  CMILCOMWeakRef *v5; // rax
  CMILCOMWeakRef *v6; // rax
  signed __int64 v7; // rdi

  if ( a1[2].lpVtbl )
    goto LABEL_2;
  v5 = (CMILCOMWeakRef *)MIDL_user_allocate(0x40uLL);
  if ( v5 )
  {
    v6 = CMILCOMWeakRef::CMILCOMWeakRef(v5, a1);
    v7 = (signed __int64)v6;
    if ( v6 )
    {
      (*(void (__fastcall **)(CMILCOMWeakRef *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1[2], v7, 0LL) )
        (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_2:
      a2->lpVtbl = a1[2].lpVtbl;
      (*((void (__fastcall **)(struct IUnknownVtbl *))a1[2].lpVtbl->QueryInterface + 1))(a1[2].lpVtbl);
      return 0LL;
    }
  }
  return 2147942414LL;
}
