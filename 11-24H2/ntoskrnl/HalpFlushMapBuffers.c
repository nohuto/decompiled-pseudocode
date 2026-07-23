/*
 * XREFs of HalpFlushMapBuffers @ 0x14054D3C8
 * Callers:
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmBuildMdlForNonPagedPool @ 0x140293640 (MmBuildMdlForNonPagedPool.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     KeFlushIoBuffers @ 0x140431710 (KeFlushIoBuffers.c)
 */

void __fastcall HalpFlushMapBuffers(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, char a5, char a6)
{
  __int64 v6; // rsi
  int AdapterCacheAlignment; // eax
  __int16 v10; // r9
  unsigned int v11; // r9d
  __int64 v12; // r8
  __int64 v13; // r11
  unsigned __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned __int8 CurrentIrql; // r15
  KIRQL v18; // r12
  unsigned int v19; // r10d
  unsigned __int64 v20; // rdx
  KSPIN_LOCK *v21; // rcx
  unsigned int v22; // r14d
  __int64 v23; // r13
  unsigned __int64 v24; // rbx
  int v25; // edx
  unsigned int v26; // ecx
  int v27; // r13d
  __int64 v28; // r10
  __int64 v29; // r9
  unsigned __int64 v30; // rbx
  int v31; // edx
  unsigned int v32; // ecx
  __int64 v33; // r9
  __int64 v34; // r9
  int v35; // [rsp+68h] [rbp+20h]

  v6 = a4;
  AdapterCacheAlignment = HalpDmaGetAdapterCacheAlignment(a1);
  v11 = v10 & 0xFFF;
  v35 = AdapterCacheAlignment;
  v13 = v12;
  v14 = 0LL;
  v15 = v6;
  v16 = v11;
  CurrentIrql = KeGetCurrentIrql();
  v18 = CurrentIrql;
  while ( v15 )
  {
    v19 = v15;
    if ( v15 >= 4096 - v16 )
      v19 = 4096 - v16;
    v20 = *(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFF000uLL;
    if ( v14 && v20 != v14 + 4096 )
    {
      if ( (_DWORD)v6 )
      {
        v21 = (KSPIN_LOCK *)(a1 + 312);
        do
        {
          v22 = v6;
          if ( (unsigned int)v6 >= 4096 - v11 )
            v22 = 4096 - v11;
          v23 = v22;
          v24 = v11 + (*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFF000uLL);
          if ( !a5 && !*(_BYTE *)(a1 + 445) )
          {
            v25 = ~(v35 - 1);
            v26 = v24 - (v25 & v24);
            v24 -= v26;
            v27 = v22 + v35 + v26 - 1;
            v21 = (KSPIN_LOCK *)(a1 + 312);
            v23 = v25 & (unsigned int)v27;
          }
          if ( CurrentIrql <= 2u )
            v18 = KeAcquireSpinLockRaiseToDpc(v21);
          v28 = *(_QWORD *)(a1 + 304);
          *(_QWORD *)v28 = 0LL;
          *(_WORD *)(v28 + 10) = 0;
          *(_WORD *)(v28 + 8) = 8 * (((v23 + (v24 & 0xFFF) + 4095) >> 12) + 6);
          *(_QWORD *)(v28 + 32) = v24 & 0xFFFFFFFFFFFFF000uLL;
          *(_DWORD *)(v28 + 44) = v24 & 0xFFF;
          *(_DWORD *)(v28 + 40) = v23;
          MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 304));
          if ( !a6 )
            KeFlushIoBuffers(*(_QWORD *)(a1 + 304), a5 == 0, 1, v29);
          if ( CurrentIrql <= 2u )
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 312), v18);
          a3 = *(_QWORD *)(a3 + 8);
          v21 = (KSPIN_LOCK *)(a1 + 312);
          v11 = 0;
          LODWORD(v6) = v6 - v22;
        }
        while ( (_DWORD)v6 );
      }
      return;
    }
    v13 = *(_QWORD *)(v13 + 8);
    v14 = v20;
    v16 = 0;
    v15 -= v19;
  }
  v30 = v11 + (*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFF000uLL);
  if ( !a5 && !*(_BYTE *)(a1 + 445) )
  {
    v31 = ~(AdapterCacheAlignment - 1);
    v32 = v30 - (v31 & v30);
    v30 -= v32;
    v6 = v31 & (AdapterCacheAlignment + v32 + (_DWORD)v6 - 1);
  }
  if ( CurrentIrql <= 2u )
    v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 312));
  v33 = *(_QWORD *)(a1 + 304);
  *(_QWORD *)v33 = 0LL;
  *(_WORD *)(v33 + 10) = 0;
  *(_WORD *)(v33 + 8) = 8 * (((v6 + (v30 & 0xFFF) + 4095) >> 12) + 6);
  *(_QWORD *)(v33 + 32) = v30 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v33 + 44) = v30 & 0xFFF;
  *(_DWORD *)(v33 + 40) = v6;
  MmBuildMdlForNonPagedPool(*(PMDL *)(a1 + 304));
  if ( !a6 )
    KeFlushIoBuffers(*(_QWORD *)(a1 + 304), a5 == 0, 1, v34);
  if ( CurrentIrql <= 2u )
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 312), v18);
}
