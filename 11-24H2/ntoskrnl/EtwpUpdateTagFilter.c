/*
 * XREFs of EtwpUpdateTagFilter @ 0x1407A9564
 * Callers:
 *     EtwpEnableMetaProviderGuid @ 0x1404233C0 (EtwpEnableMetaProviderGuid.c)
 *     EtwpCheckForPoolTagFilterExtension @ 0x1409D12AC (EtwpCheckForPoolTagFilterExtension.c)
 *     EtwSetPerformanceTraceInformation @ 0x140A39934 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpUpdateTagFilter(_BYTE *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // r10d

  v3 = 0LL;
  if ( a2 )
  {
    while ( (unsigned int)v3 < a2 )
    {
      if ( *a1 == 42 )
        goto LABEL_6;
      v4 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 == 1061109567 )
        goto LABEL_6;
      a1 += 4;
      *(_DWORD *)(a3 + 4 * v3 + 4) = v4;
      v3 = (unsigned int)(v3 + 1);
    }
  }
  else
  {
LABEL_6:
    *(_DWORD *)(a3 + 4) = 42;
    a2 = 1;
  }
  *(_WORD *)a3 = a2;
}
