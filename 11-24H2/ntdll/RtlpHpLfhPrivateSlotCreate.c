/*
 * XREFs of RtlpHpLfhPrivateSlotCreate @ 0x1800A4664
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18004EB3C (RtlpHpEnvTlsSetValue.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1800A4C3C (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800A4C98 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800A4DB4 (RtlpHpLfhContextMetadataAllocate.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotCreate(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  _OWORD *v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // r14
  _OWORD *v11; // rsi
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  _WORD *v15; // rcx

  v3 = 0LL;
  v7 = RtlpHpLfhContextSlotAllocate(a1, a3);
  if ( !v7 )
    return 0LL;
  LOWORD(v10) = a2;
  v11 = (_OWORD *)(a1 + ((unsigned __int16)a2 << 6));
  if ( (unsigned __int64)v11 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8) + 1472 )
  {
    v12 = (_OWORD *)RtlpHpLfhContextMetadataAllocate(a1, 0LL);
    v3 = v12;
    if ( !v12 )
    {
      v9 = 0LL;
      RtlpHpLfhContextMetadataFree(a1, v7, 2LL);
      return v9;
    }
    v13 = 2LL;
    v6 = 128LL;
    do
    {
      *v12 = *v11;
      v12[1] = v11[1];
      v12[2] = v11[2];
      v12[3] = v11[3];
      v12[4] = v11[4];
      v12[5] = v11[5];
      v12[6] = v11[6];
      v12 += 8;
      v14 = v11[7];
      v11 += 8;
      *(v12 - 1) = v14;
      --v13;
    }
    while ( v13 );
    v11 = v3;
  }
  *((_WORD *)v11 + ((unsigned __int64)*a3 >> 1)) = (unsigned __int64)(v7 - a1) >> 6;
  if ( v3 )
  {
    v10 = ((unsigned __int64)v3 - a1) >> 6;
    LOWORD(a2) = v10;
    RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), a2);
  }
  *(_WORD *)(v7 + 6) = WORD1(a2);
  *(_WORD *)(v7 + 4) = v10;
  *(_DWORD *)(v7 + 20) = NtCurrentTeb()->ClientId.UniqueThread;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)a3 + 20, (volatile signed __int32 **)v6, v8);
  if ( *((_WORD *)a3 + 45) )
    v15 = (_WORD *)(a1 + (*((unsigned __int16 *)a3 + 45) << 6) + 16LL);
  else
    v15 = a3 + 88;
  *v15 = (unsigned __int64)(v7 - a1) >> 6;
  *(_WORD *)(v7 + 16) = 0;
  *(_WORD *)(v7 + 18) = *((_WORD *)a3 + 45);
  *((_WORD *)a3 + 45) = *v15;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a3 + 10);
  return v7;
}
