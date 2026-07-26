/*
 * XREFs of ndisNblTrackerWatchdogWorkerRoutine @ 0x1401435E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x14000F080 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x14009B8D4 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __fastcall ndisNblTrackerWatchdogWorkerRoutine(_DWORD *P)
{
  int v1; // edx
  int v3; // edx
  __int64 v4; // rbx
  void (__fastcall *v5)(_QWORD); // rax

  v1 = P[2];
  if ( !v1 || (v3 = v1 - 3) == 0 || (unsigned int)(v3 - 1) <= 1 )
  {
    v4 = *(_QWORD *)P;
    if ( (_BYTE)KdDebuggerNotPresent )
      ndisMLiveBugCheck((struct _NDIS_MINIPORT_BLOCK *)v4, 48LL, v4, *(_QWORD *)(v4 + 3832), 0LL);
    if ( (*(_DWORD *)(v4 + 120) & 0x80u) != 0 )
    {
      v5 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 3760) + 360LL) + 120LL);
      if ( v5 )
        v5(*(_QWORD *)(v4 + 24));
    }
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v4, 0x68u);
  }
  ExFreePoolWithTag(P, 0);
}
