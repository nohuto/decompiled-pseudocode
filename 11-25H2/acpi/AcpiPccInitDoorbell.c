/*
 * XREFs of AcpiPccInitDoorbell @ 0x1400A0018
 * Callers:
 *     AcpiPccInitType0Subspace @ 0x1400A0370 (AcpiPccInitType0Subspace.c)
 *     AcpiPccInitType1Subspace @ 0x1400A04A0 (AcpiPccInitType1Subspace.c)
 *     AcpiPccInitType2Subspace @ 0x1400A05E0 (AcpiPccInitType2Subspace.c)
 *     AcpiPccInitType34Subspace @ 0x1400A0780 (AcpiPccInitType34Subspace.c)
 * Callees:
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 *     AcpiPccInitMapRegister @ 0x1400A010C (AcpiPccInitMapRegister.c)
 */

__int64 __fastcall AcpiPccInitDoorbell(char *DeferredContext, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned int inited; // ecx
  int v10; // eax
  int v12; // eax
  PKDEFERRED_ROUTINE DeferredRoutine[5]; // [rsp+20h] [rbp-28h] BYREF

  DeferredRoutine[0] = 0LL;
  if ( DeferredContext )
  {
    if ( (unsigned __int8)RtlIsZeroMemory(a2, 12LL) )
    {
      v10 = (a5 != 0) - 1;
      inited = v10 & 0xC000000D;
      if ( v10 >= 0 )
        return inited;
    }
    else if ( (a3 & a4) != 0 )
    {
      inited = -1073741811;
    }
    else
    {
      v12 = *(_DWORD *)(a2 + 8);
      *((_QWORD *)DeferredContext + 13) = *(_QWORD *)a2;
      *((_DWORD *)DeferredContext + 28) = v12;
      *((_QWORD *)DeferredContext + 11) = a3;
      *((_QWORD *)DeferredContext + 10) = a4;
      inited = AcpiPccInitMapRegister(DeferredContext + 104, DeferredContext + 96);
      if ( (inited & 0x80000000) == 0 )
      {
        AcpiGetDriverProxyEndpoint(DeferredRoutine, (__int64)AcpiPccRingDoorbell);
        KeInitializeDpc((PRKDPC)(DeferredContext + 496), DeferredRoutine[0], DeferredContext);
        KeSetImportanceDpc((PRKDPC)(DeferredContext + 496), MediumHighImportance);
        return 0;
      }
    }
    *((_DWORD *)DeferredContext + 204) = 3;
    return inited;
  }
  return (unsigned int)-1073741811;
}
