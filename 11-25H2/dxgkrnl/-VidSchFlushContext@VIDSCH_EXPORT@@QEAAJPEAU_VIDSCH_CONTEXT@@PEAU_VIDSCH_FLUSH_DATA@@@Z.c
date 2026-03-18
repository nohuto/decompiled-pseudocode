/*
 * XREFs of ?VidSchFlushContext@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_FLUSH_DATA@@@Z @ 0x140053CB4
 * Callers:
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x140335B54 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchFlushContext(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_CONTEXT *a2,
        struct _VIDSCH_FLUSH_DATA *a3)
{
  return (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, struct _VIDSCH_FLUSH_DATA *))(*((_QWORD *)this + 1) + 304LL))(
           a2,
           a3);
}
