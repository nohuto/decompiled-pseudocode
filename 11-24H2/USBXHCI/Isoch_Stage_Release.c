/*
 * XREFs of Isoch_Stage_Release @ 0x140022B24
 * Callers:
 *     Isoch_PrepareStage @ 0x14000F1B0 (Isoch_PrepareStage.c)
 *     Isoch_MapStage @ 0x140010000 (Isoch_MapStage.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x140011400 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_CompleteStaleTransfers @ 0x1400121A0 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_Stage_MapIntoRing @ 0x14001FE60 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_CompleteTransfers @ 0x140022988 (Isoch_CompleteTransfers.c)
 * Callees:
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Isoch_Stage_Release(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int8 *v2; // rsi
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // r14
  __int64 v7; // rdx
  unsigned __int8 *v8; // rbx
  unsigned __int8 *v9; // r14
  __int64 v10; // rbp
  int v11; // ecx
  int v12; // r8d
  bool v13; // zf
  unsigned int v14; // ecx
  __int64 result; // rax

  v2 = *(unsigned __int8 **)a2;
  if ( a2[56] )
  {
    IoFreeMdl(*((PMDL *)a2 + 8));
    *((_QWORD *)a2 + 8) = 0LL;
    a2[56] = 0;
  }
  v5 = a2 + 8;
  v6 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
  if ( v6 != a2 + 8 )
  {
    if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
    {
      do
      {
        memset(*((void **)v6 + 2), 0, *((unsigned int *)v6 + 11));
        v6 = *(unsigned __int8 **)v6;
      }
      while ( v5 != v6 );
    }
    v7 = a1 + 208;
    if ( *(unsigned __int8 **)v5 != v5 )
    {
      **((_QWORD **)a2 + 2) = *(_QWORD *)v7;
      *(_QWORD *)(*(_QWORD *)v7 + 8LL) = *((_QWORD *)a2 + 2);
      *(_QWORD *)v7 = *(_QWORD *)v5;
      *(_QWORD *)(*(_QWORD *)v5 + 8LL) = v7;
      *((_QWORD *)a2 + 2) = a2 + 8;
      *(_QWORD *)v5 = v5;
    }
  }
  v8 = a2 + 24;
  v9 = (unsigned __int8 *)*((_QWORD *)a2 + 3);
  if ( v9 != a2 + 24 )
  {
    if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x32u) )
    {
      do
      {
        memset(*((void **)v9 + 2), 0, *((unsigned int *)v9 + 11));
        v9 = *(unsigned __int8 **)v9;
      }
      while ( v8 != v9 );
    }
    v10 = a1 + 208;
    if ( *(unsigned __int8 **)v8 != v8 )
    {
      **(_QWORD **)(v10 + 8) = *(_QWORD *)v8;
      *(_QWORD *)(*(_QWORD *)v8 + 8LL) = *(_QWORD *)(v10 + 8);
      **((_QWORD **)a2 + 4) = v10;
      *(_QWORD *)(v10 + 8) = *((_QWORD *)a2 + 4);
      *((_QWORD *)a2 + 4) = a2 + 24;
      *(_QWORD *)v8 = v8;
    }
  }
  v11 = v2[128];
  v12 = v2[132];
  --v2[130];
  v13 = a2 == &v2[v12 * v11 + 144];
  v14 = v2[129];
  if ( v13 )
  {
    result = (v12 + 1) / v14;
    v2[132] = (v12 + 1) % v14;
  }
  else
  {
    result = (unsigned int)((v2[129] - 1 + v2[131]) / v2[129]);
    v2[131] = (v2[129] - 1 + v2[131]) % v2[129];
  }
  return result;
}
