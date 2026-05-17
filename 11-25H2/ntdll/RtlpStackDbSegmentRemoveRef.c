/*
 * XREFs of RtlpStackDbSegmentRemoveRef @ 0x18015F668
 * Callers:
 *     RtlpStackDbEntryCleanup @ 0x18015EDB0 (RtlpStackDbEntryCleanup.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpStackDbSegmentRemoveRef(__int64 a1, __int64 a2)
{
  signed __int32 v2; // r8d
  __int64 result; // rax
  volatile signed __int64 *v6; // rsi
  _QWORD *i; // rdx
  __int64 v8; // [rsp+38h] [rbp+10h]

  v2 = *(_DWORD *)(a2 + 16);
  LODWORD(result) = v2;
  while ( 1 )
  {
    result &= 0xFFFFFFu;
    if ( (_DWORD)result == 1 )
      break;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)(a2 + 16),
                             v2 ^ (v2 ^ (v2 - 1)) & 0xFFFFFF,
                             v2);
    if ( v2 == (_DWORD)result )
      break;
    v2 = result;
  }
  if ( (v2 & 0xFFFFFFu) <= 1 )
  {
    v6 = (volatile signed __int64 *)(a1 + 40);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 40));
    if ( (_InterlockedDecrement((volatile signed __int32 *)(a2 + 16)) & 0xFFFFFF) != 0 )
    {
      return RtlReleaseSRWLockExclusive(v6);
    }
    else
    {
      v8 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
      for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                         + 8LL
                         * ((37
                           * (BYTE6(v8)
                            + 37
                            * (BYTE5(v8)
                             + 37
                             * (BYTE4(v8)
                              + 37
                              * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
                           + HIBYTE(v8)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))); (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( *i == a2 )
        {
          *i = *(_QWORD *)a2;
          --*(_DWORD *)a1;
          *(_QWORD *)a2 |= 0x8000000000000002uLL;
          break;
        }
      }
      RtlReleaseSRWLockExclusive(v6);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 56))(a2, *(_QWORD *)(a1 + 64));
    }
  }
  return result;
}
