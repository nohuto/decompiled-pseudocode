/*
 * XREFs of RtlpHpLfhPrivateSlotCreate @ 0x180114104
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpLfhContextMetadataFree @ 0x180009A2C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x180009AA4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x18000A3CC (RtlpHpEnvTlsSetValue.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800B810C (RtlpHpLfhContextSlotAllocate.c)
 */

unsigned __int64 *__fastcall RtlpHpLfhPrivateSlotCreate(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  _OWORD *v3; // rdi
  unsigned __int64 *v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  _OWORD *v9; // rsi
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  _WORD *v13; // rcx

  v3 = 0LL;
  v6 = (unsigned __int64 *)RtlpHpLfhContextSlotAllocate((_RTL_SRWLOCK *)a1, a3);
  if ( !v6 )
    return 0LL;
  LOWORD(v8) = a2;
  v9 = (_OWORD *)(a1 + ((unsigned __int16)a2 << 6));
  if ( (unsigned __int64)v9 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8) + 1472 )
  {
    v10 = (_OWORD *)RtlpHpLfhContextMetadataAllocate((_RTL_SRWLOCK *)a1, 0);
    v3 = v10;
    if ( !v10 )
    {
      v7 = 0LL;
      RtlpHpLfhContextMetadataFree((_RTL_SRWLOCK *)a1, v6, 2);
      return (unsigned __int64 *)v7;
    }
    v11 = 2LL;
    do
    {
      *v10 = *v9;
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      v10[5] = v9[5];
      v10[6] = v9[6];
      v10 += 8;
      v12 = v9[7];
      v9 += 8;
      *(v10 - 1) = v12;
      --v11;
    }
    while ( v11 );
    v9 = v3;
  }
  *((_WORD *)v9 + ((unsigned __int64)*a3 >> 1)) = ((unsigned __int64)v6 - a1) >> 6;
  if ( v3 )
  {
    v8 = ((unsigned __int64)v3 - a1) >> 6;
    LOWORD(a2) = v8;
    RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), a2);
  }
  *((_WORD *)v6 + 3) = WORD1(a2);
  *((_WORD *)v6 + 2) = v8;
  *((_DWORD *)v6 + 5) = NtCurrentTeb()->ClientId.UniqueThread;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a3 + 10);
  if ( *((_WORD *)a3 + 45) )
    v13 = (_WORD *)(a1 + (*((unsigned __int16 *)a3 + 45) << 6) + 16LL);
  else
    v13 = a3 + 88;
  *v13 = ((unsigned __int64)v6 - a1) >> 6;
  *((_WORD *)v6 + 8) = 0;
  *((_WORD *)v6 + 9) = *((_WORD *)a3 + 45);
  *((_WORD *)a3 + 45) = *v13;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a3 + 10);
  return v6;
}
