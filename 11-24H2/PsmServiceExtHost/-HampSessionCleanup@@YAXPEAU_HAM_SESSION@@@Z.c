/*
 * XREFs of ?HampSessionCleanup@@YAXPEAU_HAM_SESSION@@@Z @ 0x180083EEC
 * Callers:
 *     ?HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180083F90 (-HampSessionDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall HampSessionCleanup(struct _HAM_SESSION *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rcx

  v1 = *((_QWORD *)a1 + 14);
  if ( v1 )
  {
    v3 = *((_QWORD *)a1 + 15);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1 + 160LL))(*((_QWORD *)a1 + 14), *((unsigned int *)a1 + 32));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)a1 + 15) = 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)a1 + 14) = 0LL;
  }
  v4 = *((_QWORD *)a1 + 17);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CemRcObjectCleanup(a1);
}
