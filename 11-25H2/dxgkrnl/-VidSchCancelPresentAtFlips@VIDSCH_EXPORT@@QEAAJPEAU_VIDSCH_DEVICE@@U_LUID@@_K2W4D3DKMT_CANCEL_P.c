/*
 * XREFs of ?VidSchCancelPresentAtFlips@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@U_LUID@@_K2W4D3DKMT_CANCEL_PRESENTS_OPERATION@@U_D3DKMT_CANCEL_PRESENTS_FLAGS@@PEAX@Z @ 0x140076EE8
 * Callers:
 *     NtDxgkCancelPresents @ 0x1403CBD00 (NtDxgkCancelPresents.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchCancelPresentAtFlips(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int, __int64))(*(_QWORD *)(a1 + 8) + 1056LL))(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
