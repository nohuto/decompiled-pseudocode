/*
 * XREFs of ?ndisIncrementSyncIdleCountersLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140052D10
 * Callers:
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086A20 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x140086C40 (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisIncrementSyncIdleCountersLocked(__int64 a1, int a2, int a3)
{
  unsigned int i; // eax
  __int64 v4; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx

  if ( a2 == 33 )
  {
    *(_DWORD *)(a1 + 512) |= 1u;
    for ( i = 0; i < 5; ++i )
    {
      if ( *((_DWORD *)&xmmword_1400F6BA0 + 6 * i) == a3 )
        return;
    }
    goto LABEL_6;
  }
  v5 = a2 - 34;
  if ( !v5 )
  {
    *(_DWORD *)(a1 + 512) |= 2u;
    goto LABEL_6;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    *(_DWORD *)(a1 + 512) |= 4u;
    goto LABEL_6;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *(_DWORD *)(a1 + 512) |= 8u;
    goto LABEL_6;
  }
  if ( v7 == 1 )
  {
    ++*(_DWORD *)(a1 + 516);
LABEL_6:
    v4 = *(_QWORD *)(a1 + 600);
    *(_DWORD *)(a1 + 144) = 0;
    *(_BYTE *)(v4 + 20) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 600) + 44LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 600) + 68LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 600) + 92LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 600) + 116LL) = 0;
  }
}
