/*
 * XREFs of RtlpStackDbSegmentRemoveRef @ 0x18015E1A4
 * Callers:
 *     RtlpStackDbEntryCleanup @ 0x18015D8EC (RtlpStackDbEntryCleanup.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpStackDbSegmentRemoveRef(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // r8
  volatile signed __int64 *v7; // rsi
  _QWORD *i; // rdx
  __int64 v9; // [rsp+38h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 16);
  v3 = a2;
  LODWORD(result) = v2;
  while ( 1 )
  {
    result &= 0xFFFFFFu;
    if ( (_DWORD)result == 1 )
      break;
    a2 = v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFFu;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v3 + 16), a2, v2);
    if ( v2 == (_DWORD)result )
      break;
    v2 = result;
  }
  v6 = v2 & 0xFFFFFF;
  if ( (unsigned int)v6 <= 1 )
  {
    v7 = (volatile signed __int64 *)(a1 + 40);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 40), (volatile signed __int32 **)a2, v6);
    if ( (_InterlockedDecrement((volatile signed __int32 *)(v3 + 16)) & 0xFFFFFF) != 0 )
    {
      return RtlReleaseSRWLockExclusive(v7);
    }
    else
    {
      v9 = *(_QWORD *)(v3 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8LL
                         * ((37
                           * (BYTE6(v9)
                            + 37
                            * (BYTE5(v9)
                             + 37
                             * (BYTE4(v9)
                              + 37
                              * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                           + HIBYTE(v9)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( *i == v3 )
        {
          *i = *(_QWORD *)v3;
          --*(_DWORD *)a1;
          *(_QWORD *)v3 |= 0x8000000000000002uLL;
          break;
        }
      }
      RtlReleaseSRWLockExclusive(v7);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(v3, *(_QWORD *)(a1 + 64));
    }
  }
  return result;
}
