/*
 * XREFs of DxgkEnumAdapters @ 0x14031C620
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z @ 0x14031C638 (-DxgkEnumAdaptersImpl@@YAJPEAU_D3DKMT_ENUMADAPTERS@@DEW4_KWAIT_REASON@@@Z.c)
 */

__int64 __fastcall DxgkEnumAdapters(
        struct _D3DKMT_ENUMADAPTERS *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  return DxgkEnumAdaptersImpl(a1, a2, a3, a4);
}
