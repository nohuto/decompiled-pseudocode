/*
 * XREFs of ?ndisOidPreMiniportStats@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140062290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisOidPreMiniportStats(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  unsigned __int8 v2; // bl
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // r9
  void *Pool2; // rsi
  _DWORD *v9; // rax
  __int64 result; // rax
  int v11; // ebx
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // r9
  int v19; // eax

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    result = 1LL;
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    v4 = *(_DWORD *)(v1 + 32);
    if ( *((_QWORD *)a1 + 2) || (v5 = *(_QWORD *)a1, *(_BYTE *)(*(_QWORD *)a1 + 32LL) >= 6u) )
    {
      if ( *(_DWORD *)(v1 + 48) < 4u )
      {
        *(_DWORD *)(v1 + 56) = 8;
        v2 = 1;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      else
      {
        Pool2 = (void *)ExAllocatePool2(64LL, 152LL, 1903313998);
        if ( Pool2 )
        {
          v9 = (_DWORD *)ExAllocatePool2(64LL, 64LL, 1903313998);
          *(_QWORD *)(v1 + 144) = v9;
          if ( v9 )
          {
            *v9 = v4;
            v2 = 0;
            *(_QWORD *)(*(_QWORD *)(v1 + 144) + 8LL) = *(_QWORD *)(v1 + 40);
            *(_DWORD *)(*(_QWORD *)(v1 + 144) + 16LL) = *(_DWORD *)(v1 + 48);
            *(_DWORD *)(v1 + 32) = 131334;
            *(_QWORD *)(v1 + 40) = Pool2;
            *(_DWORD *)(v1 + 48) = 152;
          }
          else
          {
            *((_DWORD *)a1 + 10) = -1073741670;
            v2 = 1;
            ExFreePoolWithTag(Pool2, 0);
          }
        }
        else
        {
LABEL_44:
          *((_DWORD *)a1 + 10) = -1073741670;
          return 1;
        }
      }
    }
    else if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 3152);
      v7 = 0LL;
      if ( v4 == 131591 )
      {
        v13 = -1LL;
        v11 = 8;
        v12 = -1LL;
LABEL_14:
        if ( ndisMaxNumberOfProcessors )
        {
          v14 = 0LL;
          v15 = v6 + v11;
          v16 = ndisMaxNumberOfProcessors;
          do
          {
            v7 += *(_QWORD *)(v15 + v14);
            if ( v13 >= 0 )
              v7 += *(_QWORD *)(v14 + v13 + v6);
            if ( v12 >= 0 )
              v7 += *(_QWORD *)(v14 + v12 + v6);
            v14 += 112LL;
            --v16;
          }
          while ( v16 );
        }
      }
      else
      {
        switch ( v4 )
        {
          case 131585:
            v13 = -1LL;
            v11 = 88;
            v12 = -1LL;
            goto LABEL_14;
          case 131586:
            v13 = -1LL;
            v11 = 64;
            v12 = -1LL;
            goto LABEL_14;
          case 131587:
            v13 = -1LL;
            v11 = 96;
            v12 = -1LL;
            goto LABEL_14;
          case 131588:
            v13 = -1LL;
            v11 = 72;
            v12 = -1LL;
            goto LABEL_14;
          case 131589:
            v13 = -1LL;
            v11 = 104;
            v12 = -1LL;
            goto LABEL_14;
          case 131590:
            v13 = -1LL;
            v11 = 80;
            v12 = -1LL;
            goto LABEL_14;
          case 131592:
            v13 = -1LL;
            v11 = 32;
            v12 = -1LL;
            goto LABEL_14;
          case 131593:
            v13 = -1LL;
            v11 = 24;
            v12 = -1LL;
            goto LABEL_14;
          case 131594:
            v13 = -1LL;
            v11 = 40;
            v12 = -1LL;
            goto LABEL_14;
          case 131595:
            v13 = -1LL;
            v11 = 16;
            v12 = -1LL;
            goto LABEL_14;
          case 131596:
            v13 = -1LL;
            v11 = 48;
            v12 = -1LL;
            goto LABEL_14;
          case 131609:
            v11 = 8;
            v12 = 24LL;
            v13 = 16LL;
            goto LABEL_14;
          case 131610:
            v11 = 88;
            v12 = 96LL;
            v13 = 104LL;
            goto LABEL_14;
          default:
            if ( v4 != 131611 )
              return v2;
            v18 = *(_QWORD *)(v1 + 144);
            if ( !v18 )
              goto LABEL_44;
            v19 = *(_DWORD *)(v18 + 56);
            if ( v19 )
            {
              *((_DWORD *)a1 + 10) = v19;
              return 1;
            }
            v7 = *(_QWORD *)(v18 + 40);
            break;
        }
      }
      v17 = *(_DWORD *)(v1 + 48);
      if ( v17 < 8 )
      {
        if ( v17 == 4 )
        {
          **(_DWORD **)(v1 + 40) = v7;
          *(_DWORD *)(v1 + 52) = 4;
          *((_DWORD *)a1 + 10) = 0;
        }
        else
        {
          *(_DWORD *)(v1 + 56) = 8;
          *((_DWORD *)a1 + 10) = -1073676268;
        }
      }
      else
      {
        **(_QWORD **)(v1 + 40) = v7;
        *(_DWORD *)(v1 + 52) = 8;
        *((_DWORD *)a1 + 10) = 0;
      }
      return 1;
    }
    return v2;
  }
  return result;
}
