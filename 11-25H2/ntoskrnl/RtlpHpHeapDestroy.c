/*
 * XREFs of RtlpHpHeapDestroy @ 0x1405F8D9C
 * Callers:
 *     RtlpHpHeapCreate @ 0x1405F89CC (RtlpHpHeapCreate.c)
 *     ExpPrivatePoolDestroy @ 0x1407B699C (ExpPrivatePoolDestroy.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x1402FA99C (RtlpHpFreeVA.c)
 *     ExSaFree @ 0x14036D37C (ExSaFree.c)
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404A0110 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpRegisterEnvironment @ 0x1405F90B0 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpSegContextCleanup @ 0x1405F9BAC (RtlpHpSegContextCleanup.c)
 *     RtlpHpLfhBucketCleanup @ 0x1405FA0BC (RtlpHpLfhBucketCleanup.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1405FAED4 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpVsContextCleanup @ 0x1405FB040 (RtlpHpVsContextCleanup.c)
 */

__int64 __fastcall RtlpHpHeapDestroy(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  bool v3; // zf
  unsigned __int64 v4; // rcx
  int v5; // esi
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rdi
  char v9; // al
  unsigned int v10; // eax
  __int64 *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // rax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v19 = a1;
  v1 = a1 + 72;
  v3 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)v4;
      if ( *(_QWORD *)v4 )
        break;
      v7 = (_QWORD *)(v4 + 8);
      v6 = *(_QWORD *)(v4 + 8);
      if ( v6 )
      {
LABEL_8:
        if ( v5 )
          v4 ^= v6;
        else
          v4 = v6;
        *v7 = 0LL;
      }
      else
      {
        v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v5 && v8 )
          v8 ^= v4;
        RtlpHpLargeAllocationDestroy(v4, a1);
        if ( !v8 )
          goto LABEL_17;
        v4 = v8;
      }
    }
    v7 = (_QWORD *)v4;
    goto LABEL_8;
  }
LABEL_17:
  v9 = *(_BYTE *)(v1 + 8);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v9 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  RtlpHpVsContextCleanup(a1 + 704);
  v10 = *(_DWORD *)(a1 + 908);
  if ( v10 )
    ExSaFree(v10, 8u);
  RtlpHpLfhContextSlotStandbyProcess(a1 + 832, 1);
  v11 = (__int64 *)(a1 + 1280);
  v12 = 128LL;
  do
  {
    v13 = 0LL;
    if ( (*v11 & 1) == 0 )
      v13 = *v11;
    if ( v13 )
      RtlpHpLfhBucketCleanup(a1 + 832);
    ++v11;
    --v12;
  }
  while ( v12 );
  v14 = v19;
  RtlpHpSegContextCleanup(v19 + 320);
  RtlpHpSegContextCleanup(v14 + 512);
  v15 = *(_QWORD *)(v14 + 264) - v14;
  v3 = (*(_BYTE *)(v14 + 30) & 1) == 0;
  v18 = *(_OWORD *)v14;
  v20 = v15;
  v17 = v18;
  if ( v3 )
    RtlpHpFreeVA(&v19, &v20, 0x8000LL, &v17);
  else
    RtlpHpMetadataFree(v14, &v17);
  return RtlpHpRegisterEnvironment(&v18, 0LL);
}
