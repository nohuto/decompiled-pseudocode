/*
 * XREFs of ?ndisOidGetStatisticAllProcessors@@YAEPEAU_NDIS_MINIPORT_STATS@@KPEA_K@Z @ 0x14004DAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidGetStatisticAllProcessors(
        struct _NDIS_MINIPORT_STATS *a1,
        int a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r8
  unsigned __int64 v10; // r10

  v3 = 0LL;
  *a3 = 0LL;
  if ( a2 == 131591 )
  {
    v8 = -1LL;
    v6 = 8;
    v7 = -1LL;
LABEL_4:
    if ( ndisMaxNumberOfProcessors )
    {
      v9 = ndisMaxNumberOfProcessors;
      do
      {
        v10 = *a3 + *(unsigned __int64 *)((char *)&a1->ifHCInOctets + v6 + v3);
        *a3 = v10;
        if ( v8 >= 0 )
        {
          v10 += *(unsigned __int64 *)((char *)&a1->ifHCInOctets + v3 + v8);
          *a3 = v10;
        }
        if ( v7 >= 0 )
          *a3 = v10 + *(unsigned __int64 *)((char *)&a1->ifHCInOctets + v3 + v7);
        v3 += 112LL;
        --v9;
      }
      while ( v9 );
      LOBYTE(v3) = 0;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 131585:
        v8 = -1LL;
        v6 = 88;
        v7 = -1LL;
        goto LABEL_4;
      case 131586:
        v8 = -1LL;
        v6 = 64;
        v7 = -1LL;
        goto LABEL_4;
      case 131587:
        v8 = -1LL;
        v6 = 96;
        v7 = -1LL;
        goto LABEL_4;
      case 131588:
        v8 = -1LL;
        v6 = 72;
        v7 = -1LL;
        goto LABEL_4;
      case 131589:
        v8 = -1LL;
        v6 = 104;
        v7 = -1LL;
        goto LABEL_4;
      case 131590:
        v8 = -1LL;
        v6 = 80;
        v7 = -1LL;
        goto LABEL_4;
      case 131592:
        v8 = -1LL;
        v6 = 32;
        v7 = -1LL;
        goto LABEL_4;
      case 131593:
        v8 = -1LL;
        v6 = 24;
        v7 = -1LL;
        goto LABEL_4;
      case 131594:
        v8 = -1LL;
        v6 = 40;
        v7 = -1LL;
        goto LABEL_4;
      case 131595:
        v8 = -1LL;
        v6 = 16;
        v7 = -1LL;
        goto LABEL_4;
      case 131596:
        v8 = -1LL;
        v6 = 48;
        v7 = -1LL;
        goto LABEL_4;
      case 131609:
        v6 = 8;
        v7 = 24LL;
        v8 = 16LL;
        goto LABEL_4;
      case 131610:
        v6 = 88;
        v7 = 96LL;
        v8 = 104LL;
        goto LABEL_4;
      default:
        LOBYTE(v3) = 1;
        break;
    }
  }
  return v3;
}
