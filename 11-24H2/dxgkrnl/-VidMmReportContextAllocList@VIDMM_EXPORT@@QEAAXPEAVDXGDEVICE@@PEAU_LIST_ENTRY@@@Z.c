/*
 * XREFs of ?VidMmReportContextAllocList@VIDMM_EXPORT@@QEAAXPEAVDXGDEVICE@@PEAU_LIST_ENTRY@@@Z @ 0x140055390
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403B580C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1403D065C (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmReportContextAllocList(
        VIDMM_EXPORT *this,
        struct DXGDEVICE *a2,
        struct _LIST_ENTRY *a3)
{
  (*(void (__fastcall **)(struct DXGDEVICE *, struct _LIST_ENTRY *))(*((_QWORD *)this + 1) + 664LL))(a2, a3);
}
