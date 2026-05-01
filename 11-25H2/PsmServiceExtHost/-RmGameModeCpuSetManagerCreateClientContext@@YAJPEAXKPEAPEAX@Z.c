/*
 * XREFs of ?RmGameModeCpuSetManagerCreateClientContext@@YAJPEAXKPEAPEAX@Z @ 0x180078000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall RmGameModeCpuSetManagerCreateClientContext(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2, void **a3)
{
  return RmSrvCpuSetManagerCreateClientContext(a1, a2, a3);
}
