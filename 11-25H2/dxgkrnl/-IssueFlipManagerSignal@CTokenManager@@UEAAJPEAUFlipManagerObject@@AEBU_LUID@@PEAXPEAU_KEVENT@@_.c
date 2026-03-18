/*
 * XREFs of ?IssueFlipManagerSignal@CTokenManager@@UEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400982F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVENT@@_K@Z @ 0x1400986D8 (-IssueFlipManagerSignal@CAdapterCollection@@QEAAJPEAUFlipManagerObject@@AEBU_LUID@@PEAXPEAU_KEVE.c)
 */

__int64 __fastcall CTokenManager::IssueFlipManagerSignal(
        CTokenManager *this,
        struct FlipManagerObject *a2,
        const struct _LUID *a3,
        void *a4,
        struct _KEVENT *Event,
        unsigned __int64 a6)
{
  return CAdapterCollection::IssueFlipManagerSignal((CTokenManager *)((char *)this + 112), a2, a3, a4, Event, a6);
}
