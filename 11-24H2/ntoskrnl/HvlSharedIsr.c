/*
 * XREFs of HvlSharedIsr @ 0x14043CA40
 * Callers:
 *     HvlEnlightenProcessor @ 0x1404CC584 (HvlEnlightenProcessor.c)
 *     KiHvInterruptSubDispatch @ 0x1406B21D0 (KiHvInterruptSubDispatch.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HvlpHandleIommuFaultMessage @ 0x140588140 (HvlpHandleIommuFaultMessage.c)
 */

char HvlSharedIsr()
{
  __int64 v0; // rax
  unsigned int Number; // edx
  __int128 *v2; // rcx
  __int64 v3; // rdi
  _DWORD *v4; // rax
  unsigned int i; // ecx
  unsigned int j; // eax
  unsigned int *v7; // rcx
  __int64 v8; // rcx

  LOBYTE(v0) = HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    Number = KeGetPcr()->Prcb.Number;
    if ( !byte_140E0A8BC )
    {
      v4 = HvlpLogicalProcessorRegions;
      for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
      {
        if ( v4[5] == Number )
        {
          Number = v4[1];
          goto LABEL_3;
        }
        v4 += 26;
      }
      Number = -1;
    }
LABEL_3:
    if ( Number >= (unsigned int)HvlpLogicalProcessorCount
      || (v2 = (__int128 *)((char *)HvlpLogicalProcessorRegions + 104 * Number), *((_DWORD *)v2 + 1) != Number) )
    {
      v2 = (__int128 *)HvlpLogicalProcessorRegions;
      for ( j = 0; j < (unsigned int)HvlpLogicalProcessorCount; ++j )
      {
        if ( *((_DWORD *)v2 + 1) == Number )
          goto LABEL_5;
        v2 = (__int128 *)((char *)v2 + 104);
      }
      v2 = &xmmword_140E3EDA0;
      if ( Number )
        v2 = 0LL;
    }
LABEL_5:
    v3 = *((_QWORD *)v2 + 4);
    _m_prefetchw((const void *)(v3 + 1024));
    LODWORD(v0) = *(_DWORD *)(v3 + 1024);
    if ( (_DWORD)v0 )
    {
      v7 = (unsigned int *)(v3 + 1040);
      if ( *(_DWORD *)(v3 + 1024) == -2147483612 )
      {
        HvlpHandleIommuFaultMessage(v7);
      }
      else
      {
        v8 = qword_140E3EE50 + 104LL * *v7;
        *(_DWORD *)(v8 + 4) = 2;
        KeInsertQueueDpc((PRKDPC)(v8 + 8), 0LL, 0LL);
      }
      *(_DWORD *)(v3 + 1024) = 0;
      LOBYTE(v0) = *(_BYTE *)(v3 + 1029);
      if ( (v0 & 1) != 0 )
      {
        LOBYTE(v0) = 0;
        __writemsr(0x40000084u, 0LL);
      }
    }
  }
  else if ( KiEpfCompletionQueue )
  {
    v0 = *(_QWORD *)(KiEpfCompletionQueue + 8);
    if ( *(_QWORD *)KiEpfCompletionQueue != v0 )
    {
      _InterlockedIncrement(&dword_140F102A8);
      LOBYTE(v0) = KeInsertQueueDpc(&KiEpfCompletionDpc, 0LL, 0LL);
    }
  }
  return v0;
}
