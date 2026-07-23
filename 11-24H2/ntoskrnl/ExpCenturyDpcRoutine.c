/*
 * XREFs of ExpCenturyDpcRoutine @ 0x1403C16E0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     _local_unwind @ 0x1404FB730 (_local_unwind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine9 @ 0x1406B6780 (KiCustomAccessRoutine9.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall ExpCenturyDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  void *v8; // rcx
  __int64 v9; // rdi
  _DWORD v10[32]; // [rsp+0h] [rbp-158h] BYREF
  _BYTE v11[82]; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+D2h] [rbp-86h]
  __int64 v13; // [rsp+DAh] [rbp-7Eh]
  _DWORD *v14; // [rsp+140h] [rbp-18h]

  v14 = v10;
  memset_0(v11, 0, 0x62uLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v10[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v13 = a3;
    v12 = __ROL8__(a2, a3);
    *(_QWORD *)&v11[10] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine9(a2);
  }
  v9 = *(_QWORD *)(PsGetServerSiloGlobals(a2) + 1224);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 928)) == 1 )
  {
    if ( a2 )
      ObfReferenceObjectWithTag(v8, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 736), DelayedWorkQueue);
  }
}
