/*
 * XREFs of ?ndisVerifierNdisFPauseComplete@@YAXPEAX@Z @ 0x1400CD1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisVerifierNdisFPauseComplete(_QWORD *a1)
{
  (*((void (__fastcall **)(_QWORD *, _QWORD, void (__stdcall *)(NDIS_HANDLE)))ndisVerifierNdisDispatch + 19))(
    a1,
    a1[97],
    NdisFPauseComplete);
}
