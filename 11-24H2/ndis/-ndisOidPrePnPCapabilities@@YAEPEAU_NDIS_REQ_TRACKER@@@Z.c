/*
 * XREFs of ?ndisOidPrePnPCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B3850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisOidPrePnPCapabilities(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  char v2; // dl
  __int64 v3; // r8

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 && (*(_DWORD *)(v1 + 120) & 0x8000) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v3 + 48) >= 0x10u )
    {
      *(_OWORD *)*(_QWORD *)(v3 + 40) = *(_OWORD *)(v1 + 984);
      *(_DWORD *)(v3 + 52) = 16;
      *((_DWORD *)a1 + 10) = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 56) = 16;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    return 1;
  }
  return v2;
}
