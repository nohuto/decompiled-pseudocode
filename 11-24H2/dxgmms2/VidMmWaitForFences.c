/*
 * XREFs of VidMmWaitForFences @ 0x140043570
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z @ 0x1400B4060 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1PEAU_KEVENT@@@Z.c)
 */

void __fastcall VidMmWaitForFences(
        VIDMM_GLOBAL *a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        const unsigned __int64 *a3,
        unsigned int a4)
{
  VIDMM_GLOBAL::WaitForFences(a1, a2, a3, a4, 0LL, 0LL);
}
