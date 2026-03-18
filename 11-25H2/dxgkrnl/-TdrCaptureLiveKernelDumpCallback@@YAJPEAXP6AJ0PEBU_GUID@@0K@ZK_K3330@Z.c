/*
 * XREFs of ?TdrCaptureLiveKernelDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1401CA3D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TdrCaptureLiveKernelDumpCallback(
        void *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        _QWORD *a8)
{
  __int64 v8; // r9

  v8 = *((unsigned int *)a8 + 716);
  a8[364] = a1;
  return ((__int64 (__fastcall *)(void *, __int128 *, _QWORD, __int64))a2)(a1, &WdDxgkSecondaryDataGUID, a8[357], v8);
}
