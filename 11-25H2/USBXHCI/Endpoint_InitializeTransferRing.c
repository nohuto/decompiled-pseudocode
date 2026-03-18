/*
 * XREFs of Endpoint_InitializeTransferRing @ 0x140010424
 * Callers:
 *     Endpoint_OnResetEndpointConfigure @ 0x14000E2D4 (Endpoint_OnResetEndpointConfigure.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x140010288 (Endpoint_OnCancelSetDequeuePointer.c)
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1400392F0 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1400475E0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 * Callees:
 *     TR_InitializeTransferRing @ 0x1400104C4 (TR_InitializeTransferRing.c)
 */

__int64 __fastcall Endpoint_InitializeTransferRing(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx

  if ( *((_BYTE *)a1 + 37) )
  {
    v3 = *a1;
    if ( _bittest64((const signed __int64 *)(v3 + 736), 0x2Cu) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1[17] + 32) + 16LL) + 16LL * a2;
      v7 = *(_QWORD *)(v3 + 736);
      if ( (v7 & 0x1800000000LL) != 0 )
      {
        if ( (v7 & 0x1000000000LL) != 0 )
        {
          if ( (v7 & 0x800000000LL) == 0 )
            *(_DWORD *)(v6 + 12) &= 0xFF000000;
        }
        else
        {
          *(_DWORD *)(v6 + 8) = (unsigned __int8)*(_DWORD *)(v6 + 8);
        }
      }
      else
      {
        *(_DWORD *)(v6 + 8) &= 0xFF000000;
      }
    }
    v4 = *(_QWORD *)(104LL * (a2 - 1) + a1[17] + 48);
  }
  else
  {
    v4 = a1[11];
  }
  return TR_InitializeTransferRing(v4);
}
