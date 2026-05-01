/*
 * XREFs of PsmHamReferenceHostId @ 0x180041B10
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z @ 0x1800422BC (-HamSrvHostIdStoreReferenceId@@YAPEAU_HAM_HOSTID_ENTRY@@PEAU_HAM_HOSTID_STORE@@PEBGPEAXK_K@Z.c)
 */

struct _HAM_HOSTID_ENTRY *__fastcall PsmHamReferenceHostId(
        unsigned __int16 *a1,
        void *a2,
        unsigned int a3,
        unsigned __int64 a4)
{
  return HamSrvHostIdStoreReferenceId((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 3048), a1, a2, a3, a4);
}
