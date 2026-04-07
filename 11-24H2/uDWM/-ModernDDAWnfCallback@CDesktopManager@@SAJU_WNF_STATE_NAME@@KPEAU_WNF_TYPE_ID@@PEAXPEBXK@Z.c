/*
 * XREFs of ?ModernDDAWnfCallback@CDesktopManager@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800BA7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopManager::ModernDDAWnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall ***a4)(_QWORD, const void *, struct _WNF_TYPE_ID *),
        const void *a5,
        unsigned int a6)
{
  if ( a6 == 392 && a4 )
    (**a4)(a4, a5, a3);
  return 0LL;
}
