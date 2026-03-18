/*
 * XREFs of McTemplateK0qxxxxiq_EtwWriteTransfer @ 0x1400183FC
 * Callers:
 *     ?VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z @ 0x140016AC0 (-VidSchiGetSmoothenedFrameTimeQpc@@YA_KPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_GLOBAL@@_K2@Z.c)
 *     ?VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU_D3DKMT_PRESENT_STATS_DWM2@@@Z @ 0x140017030 (-VidSchQueryLastCompletedPresentIdDWMInternal@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_DEVICE@@IIPEAU.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400190D0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 */

__int64 McTemplateK0qxxxxiq_EtwWriteTransfer(
        _DWORD a1,
        _DWORD a2,
        _DWORD a3,
        _DWORD a4,
        char a5,
        char a6,
        char a7,
        char a8,
        ...)
{
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context);
}
