/*
 * XREFs of ?IsOidTelemetryFilterEnabled@@YA_NKPEAU_NDIS_OID_REQUEST_RESERVED@@@Z @ 0x140024820
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400235C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOidTelemetryFilterEnabled(int a1, struct _NDIS_OID_REQUEST_RESERVED *a2)
{
  unsigned __int64 i; // rax
  int v4; // r8d

  if ( (ndisAzOidTelemetryFilter & 1) != 0 && Ndis::BindEngine::s_NumBindOperationsInProgress )
  {
LABEL_3:
    a2->Flags = (_NDIS_OID_REQUEST_FLAGS)(*(_DWORD *)&a2->Flags & 0xCFFFFFFF | 0x20000000);
    return 1;
  }
  else
  {
    if ( (ndisAzOidTelemetryFilter & 2) != 0 )
    {
      for ( i = 0LL; i < 0x40; i += 4LL )
      {
        v4 = *(_DWORD *)((char *)&ndisAzOidTelemetryList + i);
        if ( !v4 )
          break;
        if ( v4 == a1 )
          goto LABEL_3;
      }
    }
    a2->Flags = (_NDIS_OID_REQUEST_FLAGS)(*(_DWORD *)&a2->Flags & 0xCFFFFFFF | 0x10000000);
    return 0;
  }
}
