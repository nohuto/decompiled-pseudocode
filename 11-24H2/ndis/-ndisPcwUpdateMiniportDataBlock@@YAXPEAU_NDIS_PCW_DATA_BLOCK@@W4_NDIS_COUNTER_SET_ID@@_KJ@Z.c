/*
 * XREFs of ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x14013F88C
 * Callers:
 *     ?ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x14013F594 (-ndisPcwDeleteConsumer@@YAXPEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z.c)
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEB_W@Z @ 0x14013F628 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 *     ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013F734 (-ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z @ 0x14013F7C4 (-ndisPcwReferenceMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisPcwUpdateMiniportDataBlock(__int64 a1, int a2, unsigned int a3, int a4)
{
  _DWORD *v4; // r10
  _DWORD *v5; // r11
  int v6; // edi
  unsigned int v7; // ebx
  int v8; // edx
  __int64 v9; // rax
  bool i; // zf
  __int64 v11; // rcx
  unsigned int j; // eax

  *(_DWORD *)(a1 + 168) += a4;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = a2 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v5 = (_DWORD *)(a1 + 104);
      v7 = 13;
      v4 = (_DWORD *)((*(_QWORD *)(a1 + 176) + 80LL) & -(__int64)(*(_QWORD *)(a1 + 176) != 0LL));
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 176);
    v5 = (_DWORD *)a1;
    v7 = 26;
    if ( v9 )
      v4 = (_DWORD *)(v9 + 48);
  }
  for ( i = !_BitScanForward((unsigned int *)&v11, a3); !i; i = !_BitScanForward((unsigned int *)&v11, a3) )
  {
    if ( (unsigned int)v11 >= v7 )
      break;
    v5[v11] += a4;
    a3 &= ~(1 << v11);
  }
  if ( v4 )
  {
    for ( j = 0; j < v7; ++v5 )
    {
      if ( *v5 )
        v6 |= 1 << j;
      ++j;
    }
    *v4 = v6;
  }
}
