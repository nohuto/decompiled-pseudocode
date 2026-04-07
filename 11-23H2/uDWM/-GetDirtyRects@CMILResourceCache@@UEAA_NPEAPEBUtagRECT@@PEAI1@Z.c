/*
 * XREFs of ?GetDirtyRects@CMILResourceCache@@UEAA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x180111140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CMILResourceCache::GetDirtyRects(
        CMILResourceCache *this,
        const struct tagRECT **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  *a2 = (const struct tagRECT *)&unk_18012B480;
  *a3 = 0;
  (*(void (__fastcall **)(CMILResourceCache *, unsigned int *))(*(_QWORD *)this + 40LL))(this, a4);
  return 0;
}
