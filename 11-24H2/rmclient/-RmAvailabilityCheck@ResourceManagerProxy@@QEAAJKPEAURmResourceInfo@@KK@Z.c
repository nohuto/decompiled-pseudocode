/*
 * XREFs of ?RmAvailabilityCheck@ResourceManagerProxy@@QEAAJKPEAURmResourceInfo@@KK@Z @ 0x1800197D0
 * Callers:
 *     RmAvailabilityCheck @ 0x1800198E0 (RmAvailabilityCheck.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall ResourceManagerProxy::RmAvailabilityCheck(
        ResourceManagerProxy *this,
        int a2,
        struct RmResourceInfo *a3,
        int a4,
        unsigned int a5)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001ECE0, 5u, 0LL, *((_QWORD *)this + 1), a2, a3, a4, a5);
}
