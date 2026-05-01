/*
 * XREFs of ?CrmpRegistrationContextCleanup@@YAXPEAU_CRMP_REGISTRATION_CONTEXT@@@Z @ 0x180008DA8
 * Callers:
 *     CrmRegister @ 0x180008990 (CrmRegister.c)
 *     CrmUnregister @ 0x180008D70 (CrmUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall CrmpRegistrationContextCleanup(struct _CRMP_REGISTRATION_CONTEXT *a1)
{
  if ( *((_QWORD *)a1 + 1) )
  {
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EC20, 1u, 0LL);
    *((_QWORD *)a1 + 2) = 0LL;
  }
}
