/*
 * XREFs of RtlpHpStackTraceAllocRemove @ 0x18014BBE4
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x1800E28F0 (RtlpHpStackTraceRemoveStack.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18004EF28 (RtlpHpMetadataFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpStackTraceAllocFindMapping @ 0x18014BB10 (RtlpHpStackTraceAllocFindMapping.c)
 */

__int64 __fastcall RtlpHpStackTraceAllocRemove(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  _QWORD *Mapping; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  _QWORD *i; // rdx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h]

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8), a2, a3);
  *(_DWORD *)a1 = NtCurrentTeb()->ClientId.UniqueThread;
  Mapping = (_QWORD *)RtlpHpStackTraceAllocFindMapping(a1, (__int64)a2);
  v6 = (__int64)Mapping;
  if ( Mapping )
  {
    v11 = Mapping[1] & (-1LL << (*(_DWORD *)(a1 + 20) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 24)
                       + 8LL
                       * ((37
                         * (BYTE6(v11)
                          + 37
                          * (BYTE5(v11)
                           + 37
                           * (BYTE4(v11)
                            + 37
                            * (BYTE3(v11)
                             + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
                         + HIBYTE(v11)) & (unsigned int)((*(_DWORD *)(a1 + 20) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( (_QWORD *)*i == Mapping )
      {
        *i = *Mapping;
        --*(_DWORD *)(a1 + 16);
        *Mapping |= 0x8000000000000002uLL;
        break;
      }
    }
    v7 = Mapping[2];
  }
  else
  {
    v7 = 0LL;
  }
  *(_DWORD *)a1 = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  if ( v6 )
  {
    v10 = RtlpHpEnvHandle;
    RtlpHpMetadataFree(v6, &v10);
  }
  return v7;
}
