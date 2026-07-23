/*
 * XREFs of HalpEfiBugCheckAddPagesCallback @ 0x14054A3E0
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x140375540 (HalQueryMaximumProcessorCount.c)
 */

void __fastcall HalpEfiBugCheckAddPagesCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        unsigned int **ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned int *v5; // rsi
  unsigned int v6; // edi
  unsigned int MaximumProcessorCount; // r9d
  __int64 i; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  if ( HalFirmwareTypeEfi && HalpInterruptProcessorPcr )
  {
    if ( !*ReasonSpecificData )
    {
      *ReasonSpecificData = (unsigned int *)&HalpEfiBugcheckCallbackNextRuntimeServiceIndex;
      HalpEfiBugcheckCallbackNextRuntimeServiceIndex = 0;
    }
    v5 = *ReasonSpecificData;
    v6 = **ReasonSpecificData;
LABEL_6:
    if ( v6 < 9 )
    {
      ++*v5;
      MaximumProcessorCount = HalQueryMaximumProcessorCount();
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        if ( (unsigned int)i >= MaximumProcessorCount )
        {
          ++v6;
          goto LABEL_6;
        }
        v9 = *(_QWORD *)(HalpInterruptProcessorPcr + 8 * i);
        if ( v9 )
        {
          v10 = v9 + 192;
          if ( v10 )
          {
            v11 = *(_DWORD *)(v10 + 32);
            if ( _bittest(&v11, v6) )
            {
              if ( HalEfiRuntimeServicesBlock[0] )
                break;
            }
          }
        }
      }
      *((_DWORD *)ReasonSpecificData + 2) = -2147483647;
      ReasonSpecificData[2] = (unsigned int *)HalEfiRuntimeServicesBlock[v6];
      ReasonSpecificData[3] = (unsigned int *)1;
    }
  }
}
