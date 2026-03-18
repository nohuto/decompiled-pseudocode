/*
 * XREFs of SmmUnlockPages @ 0x140280940
 * Callers:
 *     ?SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x14028035C (-SmmLockPagedObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 *     SmmLockPagesForAdapter @ 0x1402806EC (SmmLockPagesForAdapter.c)
 *     ?SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1402807E4 (-SmmUnlockPagedObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SmmUnlockPages(PMDL Mdl)
{
  _InterlockedAdd64(&qword_14015E620, -(__int64)Mdl->ByteCount);
  MmUnlockPages(Mdl);
  IoFreeMdl(Mdl);
}
