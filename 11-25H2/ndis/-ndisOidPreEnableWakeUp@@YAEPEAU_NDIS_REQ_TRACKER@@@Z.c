/*
 * XREFs of ?ndisOidPreEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB090
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisQueryOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400BC4BC (-ndisQueryOpenEnableWakeUp@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BD204 (-ndisSetEnableWakeUp@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

unsigned __int8 __fastcall ndisOidPreEnableWakeUp(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  unsigned __int8 result; // al
  struct _NDIS_OPEN_BLOCK *v5; // rcx
  char v6; // r8
  __int64 v7; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_DWORD *)(v1 + 4);
  if ( (v3 & 0xFFFFFFFD) == 0 )
  {
    v5 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
    v6 = 0;
    v7 = *(_QWORD *)a1;
    if ( v5 )
    {
      *((_DWORD *)a1 + 10) = ndisQueryOpenEnableWakeUp(v5, (struct _NDIS_OID_REQUEST *)v1);
    }
    else
    {
      if ( !v7 )
        return v6;
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) >= 4u )
      {
        **(_DWORD **)(v1 + 40) = *(_DWORD *)(v7 + 1292);
        *(_QWORD *)(v1 + 52) = 4LL;
      }
      else
      {
        *(_DWORD *)(v1 + 56) = 4;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
    }
    return 1;
  }
  result = 1;
  if ( v3 == 1 )
    return ndisSetEnableWakeUp(a1);
  *((_DWORD *)a1 + 10) = -1073676267;
  return result;
}
