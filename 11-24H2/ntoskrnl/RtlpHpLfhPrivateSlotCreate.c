/*
 * XREFs of RtlpHpLfhPrivateSlotCreate @ 0x140606A80
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B9584 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404B96F4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x1404F5694 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140606834 (RtlpHpLfhContextMetadataFree.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotCreate(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  _OWORD *v3; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  _OWORD *v11; // rsi
  _OWORD *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  char v15; // al
  _WORD *v16; // rcx

  v3 = 0LL;
  v8 = RtlpHpLfhContextSlotAllocate(a1, (__int64)a3, (__int64)a3);
  if ( !v8 )
    return 0LL;
  LOWORD(v10) = a2;
  v11 = (_OWORD *)(a1 + ((unsigned __int16)a2 << 6));
  if ( (unsigned __int64)v11 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8) + 1472 )
  {
    v12 = (_OWORD *)RtlpHpLfhContextMetadataAllocate((_QWORD *)a1, 0, v6, v7);
    v3 = v12;
    if ( !v12 )
    {
      v9 = 0LL;
      RtlpHpLfhContextMetadataFree(a1, v8, 2LL);
      return v9;
    }
    v13 = 2LL;
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
  *((_WORD *)v11 + ((unsigned __int64)*a3 >> 1)) = (unsigned __int64)(v8 - a1) >> 6;
  if ( v3 )
  {
    v10 = ((unsigned __int64)v3 - a1) >> 6;
    LOWORD(a2) = v10;
    RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 76), a2);
  }
  *(_WORD *)(v8 + 6) = WORD1(a2);
  *(_WORD *)(v8 + 4) = v10;
  *(_DWORD *)(v8 + 20) = KeGetCurrentThread()[1].CurrentRunTime;
  v15 = RtlpHpAcquireLockExclusive((int *)a3 + 20, *(unsigned __int8 *)(a1 + 65), v6);
  if ( *((_WORD *)a3 + 45) )
    v16 = (_WORD *)(a1 + (*((unsigned __int16 *)a3 + 45) << 6) + 16LL);
  else
    v16 = a3 + 88;
  *v16 = (unsigned __int64)(v8 - a1) >> 6;
  *(_WORD *)(v8 + 16) = 0;
  *(_WORD *)(v8 + 18) = *((_WORD *)a3 + 45);
  *((_WORD *)a3 + 45) = *v16;
  RtlpHpReleaseLockExclusive((ULONG_PTR)(a3 + 80), *(unsigned __int8 *)(a1 + 65), v15);
  return v8;
}
