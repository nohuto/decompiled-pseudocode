/*
 * XREFs of RtlpHpLfhPrivateSlotCreate @ 0x1406040C0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B4424 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404B4594 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpEnvTlsSetValue @ 0x1404F2F94 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140603E74 (RtlpHpLfhContextMetadataFree.c)
 */

__int64 __fastcall RtlpHpLfhPrivateSlotCreate(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  _OWORD *v3; // rdi
  __int64 v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  _OWORD *v9; // rsi
  _OWORD *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm1
  char v13; // al
  _WORD *v14; // rcx

  v3 = 0LL;
  v6 = RtlpHpLfhContextSlotAllocate(a1, a3);
  if ( !v6 )
    return 0LL;
  LOWORD(v8) = a2;
  v9 = (_OWORD *)(a1 + ((unsigned __int16)a2 << 6));
  if ( (unsigned __int64)v9 < a1 + ((unsigned __int64)*(unsigned __int8 *)(a1 + 64) << 8) + 1472 )
  {
    v10 = (_OWORD *)RtlpHpLfhContextMetadataAllocate((_QWORD *)a1, 0);
    v3 = v10;
    if ( !v10 )
    {
      v7 = 0LL;
      RtlpHpLfhContextMetadataFree(a1, (_QWORD *)v6, 2);
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
  *(_DWORD *)(v6 + 20) = KeGetCurrentThread()[1].CurrentRunTime;
  v13 = RtlpHpAcquireLockExclusive((int *)a3 + 20, *(unsigned __int8 *)(a1 + 65));
  if ( *((_WORD *)a3 + 45) )
    v14 = (_WORD *)(a1 + (*((unsigned __int16 *)a3 + 45) << 6) + 16LL);
  else
    v14 = a3 + 88;
  *v14 = (unsigned __int64)(v6 - a1) >> 6;
  *(_WORD *)(v6 + 16) = 0;
  *(_WORD *)(v6 + 18) = *((_WORD *)a3 + 45);
  *((_WORD *)a3 + 45) = *v14;
  RtlpHpReleaseLockExclusive((ULONG_PTR)(a3 + 80), *(unsigned __int8 *)(a1 + 65), v13);
  return v6;
}
