/*
 * XREFs of ?ndisOidPostCurrentLookahead@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140083DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisOidPostCurrentLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // ecx
  int v5; // ecx

  v1 = *((_QWORD *)a1 + 4);
  v2 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      if ( v3 )
      {
        v5 = *(_DWORD *)(v1 + 160);
        if ( v5 )
        {
          *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 152);
          *(_DWORD *)(v1 + 48) = v5;
          *(_QWORD *)(v1 + 152) = 0LL;
          *(_DWORD *)(v1 + 160) = 0;
        }
      }
    }
    else
    {
      *(_DWORD *)(v1 + 52) = 4;
      if ( *(_QWORD *)a1 )
        *(_DWORD *)(v2 + 592) = **(_DWORD **)(v1 + 40);
      if ( *((_QWORD *)a1 + 3) )
      {
        v4 = *(_DWORD *)(v1 + 160);
        if ( v4 )
        {
          *(_QWORD *)(v1 + 40) = *(_QWORD *)(v1 + 152);
          *(_DWORD *)(v1 + 48) = v4;
          *(_QWORD *)(v1 + 152) = 0LL;
          *(_DWORD *)(v1 + 160) = 0;
        }
        *(_DWORD *)(v3 + 264) = **(_DWORD **)(v1 + 40);
      }
    }
  }
}
