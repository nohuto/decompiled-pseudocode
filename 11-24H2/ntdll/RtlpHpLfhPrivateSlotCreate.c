/*
 * XREFs of RtlpHpLfhPrivateSlotCreate @ 0x1800D6160
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18006471C (RtlpHpEnvTlsSetValue.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800D65B0 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800D660C (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800D6728 (RtlpHpLfhContextMetadataAllocate.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotCreate(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  _OWORD *v3; // rdi
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  _OWORD *v9; // rsi
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  _WORD *v13; // rcx

  v3 = 0LL;
  v6 = RtlpHpLfhContextSlotAllocate(a1, a3);
  if ( !v6 )
    return 0LL;
  LOWORD(v8) = a2;
  v9 = (_OWORD *)(a1 + ((unsigned __int16)a2 << 6));
  if ( (unsigned __int64)v9 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8) + 1472 )
  {
    v10 = (_OWORD *)RtlpHpLfhContextMetadataAllocate(a1, 0LL);
    v3 = v10;
    if ( !v10 )
    {
      v7 = 0LL;
      RtlpHpLfhContextMetadataFree(a1, v6, 2LL);
      return v7;
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
  *((_WORD *)v9 + ((unsigned __int64)*a3 >> 1)) = (unsigned __int64)(v6 - a1) >> 6;
  if ( v3 )
  {
    v8 = ((unsigned __int64)v3 - a1) >> 6;
    LOWORD(a2) = v8;
    RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), a2);
  }
  *(_WORD *)(v6 + 6) = WORD1(a2);
  *(_WORD *)(v6 + 4) = v8;
  *(_DWORD *)(v6 + 20) = NtCurrentTeb()->ClientId.UniqueThread;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)a3 + 10);
  if ( *((_WORD *)a3 + 45) )
    v13 = (_WORD *)(a1 + (*((unsigned __int16 *)a3 + 45) << 6) + 16LL);
  else
    v13 = a3 + 88;
  *v13 = (unsigned __int64)(v6 - a1) >> 6;
  *(_WORD *)(v6 + 16) = 0;
  *(_WORD *)(v6 + 18) = *((_WORD *)a3 + 45);
  *((_WORD *)a3 + 45) = *v13;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)a3 + 10);
  return v6;
}
