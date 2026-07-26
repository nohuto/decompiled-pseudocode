/*
 * XREFs of ndisAoAcTraceRundown @ 0x1400CBE7C
 * Callers:
 *     ndisMEmitTraceRundown @ 0x1400CC20C (ndisMEmitTraceRundown.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_Ld @ 0x140072CB0 (WPP_RECORDER_SF_Ld.c)
 *     WPP_RECORDER_SF_LDD @ 0x14009B758 (WPP_RECORDER_SF_LDD.c)
 *     WPP_RECORDER_SF_Zd @ 0x1400CC7D8 (WPP_RECORDER_SF_Zd.c)
 */

void __fastcall ndisAoAcTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v3; // bp
  __int64 *i; // rbx
  int v5; // edx
  _NDIS_OPEN_BLOCK *j; // rbx
  unsigned int AoAcReferences; // ecx
  char v8[8]; // [rsp+28h] [rbp-40h]
  __int64 v9; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  AoAc = a1->AoAc;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  NewIrql = v3;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xAu,
      (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids,
      *((_DWORD *)AoAc + 94),
      *((_DWORD *)AoAc + 13),
      *((_DWORD *)AoAc + 95));
  if ( *((_DWORD *)AoAc + 16) && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)AoAc + 16);
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xBu,
      (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids,
      *(_QWORD *)v8);
  }
  for ( i = (__int64 *)*((_QWORD *)AoAc + 1); i != (__int64 *)((char *)AoAc + 8); i = (__int64 *)*i )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = *((_DWORD *)i + 5);
      WPP_RECORDER_SF_Ld(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        1u,
        2u,
        0xCu,
        (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids,
        *((_DWORD *)i + 4),
        v9);
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  for ( j = a1->OpenQueue; j; j = j->MiniportNextOpen )
  {
    AoAcReferences = j->AoAcReferences;
    if ( AoAcReferences && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 1;
      WPP_RECORDER_SF_Zd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        2,
        13,
        (struct _GUID *)&WPP_7d6c249afa1232b027f6d4106b65a321_Traceguids,
        (__int64)&j->ProtocolHandle->Name,
        AoAcReferences);
    }
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
}
