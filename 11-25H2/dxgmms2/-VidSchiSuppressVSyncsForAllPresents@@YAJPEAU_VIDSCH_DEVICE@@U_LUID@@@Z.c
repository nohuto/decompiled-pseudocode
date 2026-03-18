/*
 * XREFs of ?VidSchiSuppressVSyncsForAllPresents@@YAJPEAU_VIDSCH_DEVICE@@U_LUID@@@Z @ 0x140054BE4
 * Callers:
 *     VidSchSubmitCommandToHwQueue @ 0x1400497F0 (VidSchSubmitCommandToHwQueue.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1400408A4 (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     ?VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140054ABC (-VidSchiSuppressVSyncForAllFlipEntries@@YAJPEAU_VIDSCH_GLOBAL@@IU_LUID@@IPEAU_VIDSCH_DEVICE@@PEA.c)
 *     McTemplateK0qqxxxtq_EtwWriteTransfer @ 0x14005524C (McTemplateK0qqxxxtq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiSuppressVSyncsForAllPresents(struct _VIDSCH_DEVICE *a1, struct _LUID a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 **i; // r14
  __int64 *j; // rsi
  __int64 *k; // rdi
  int v10; // eax
  __int64 **m; // rsi
  __int64 *n; // rdi
  int v13; // eax
  __int64 *ii; // rdi
  int v15; // eax
  __int64 v16; // r10
  int v17; // ebp
  __int64 v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int v21; // ecx
  unsigned int v22; // r12d
  __int64 v23; // r15
  struct VIDSCH_FLIP_QUEUE *v24; // r8
  int v25; // eax
  int v26; // edi
  __int64 *v27; // rsi
  __int64 *v28; // rdi
  int v29; // eax
  struct _VIDSCH_DEVICE *v31; // [rsp+20h] [rbp-A8h]
  int v32; // [rsp+30h] [rbp-98h]
  _BYTE v33[4]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-74h]
  unsigned int v35; // [rsp+58h] [rbp-70h]
  __int64 v36; // [rsp+60h] [rbp-68h]
  _BYTE v37[96]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+8h]
  LONG HighPart; // [rsp+DCh] [rbp+14h]

  HighPart = a2.HighPart;
  v38 = *((_QWORD *)a1 + 4);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v37, (unsigned __int64 *)(v38 + 1984), 1, 0);
  for ( i = (__int64 **)*((_QWORD *)a1 + 11); i != (__int64 **)((char *)a1 + 88); i = (__int64 **)*i )
  {
    for ( j = i[4]; j != (__int64 *)(i + 4); j = (__int64 *)*j )
    {
      for ( k = (__int64 *)j[19]; k != j + 19; k = (__int64 *)*k )
      {
        if ( *((_DWORD *)k + 4) == 7 )
        {
          v10 = *((_DWORD *)k + 181);
          if ( (v10 & 0x100) == 0 )
          {
            *((_DWORD *)k + 181) = v10 | 0x100;
            if ( (byte_140081244 & 4) != 0 )
              McTemplateK0qqxxxtq_EtwWriteTransfer(v5, v4, v6, 0, 0, a2.LowPart, v32, *((_DWORD *)k + 208), 0, 3);
          }
        }
      }
    }
  }
  for ( m = (__int64 **)*((_QWORD *)a1 + 9); m != (__int64 **)((char *)a1 + 72); m = (__int64 **)*m )
  {
    for ( n = m[80]; n != (__int64 *)(m + 80); n = (__int64 *)*n )
    {
      if ( *((_DWORD *)n + 4) == 7 )
      {
        v13 = *((_DWORD *)n + 181);
        if ( (v13 & 0x100) == 0 )
        {
          *((_DWORD *)n + 181) = v13 | 0x100;
          if ( (byte_140081244 & 4) != 0 )
            McTemplateK0qqxxxtq_EtwWriteTransfer(v5, v4, v6, 0, 0, a2.LowPart, v32, *((_DWORD *)n + 208), 0, 3);
        }
      }
    }
    for ( ii = m[82]; ii != (__int64 *)(m + 82); ii = (__int64 *)*ii )
    {
      if ( *((_DWORD *)ii + 4) == 7 )
      {
        v15 = *((_DWORD *)ii + 181);
        if ( (v15 & 0x100) == 0 )
        {
          *((_DWORD *)ii + 181) = v15 | 0x100;
          if ( (byte_140081244 & 4) != 0 )
            McTemplateK0qqxxxtq_EtwWriteTransfer(v5, v4, v6, 0, 0, a2.LowPart, v32, *((_DWORD *)ii + 208), 0, 3);
        }
      }
    }
  }
  v16 = v38;
  v17 = 0;
  if ( *(int *)(v38 + 3744) >= 0 )
  {
    v18 = 0LL;
    do
    {
      v19 = v18 + *(_QWORD *)(v16 + 3560);
      if ( *(_QWORD *)v19 != __PAIR64__(HighPart, a2.LowPart) )
        goto LABEL_45;
      if ( (unsigned int)(*(_DWORD *)(v19 + 112) - 1) > 1 )
        goto LABEL_45;
      VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)v33,
        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v19);
      v21 = v35;
      v22 = v34;
      v23 = *(unsigned int *)(v36 + 4LL * v35);
      v24 = *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v16 + 8LL * v34 + 3432) + 8 * v23 + 40);
      if ( !v24 )
        goto LABEL_45;
      v25 = *(_DWORD *)(v20 + 112);
      if ( v25 == 2 )
      {
        v26 = VidSchiSuppressVSyncForAllFlipEntries((struct _VIDSCH_GLOBAL *)v16, v34, a2, v23, v31, v24);
        if ( v26 < 0 )
          goto LABEL_47;
      }
      else
      {
        if ( v25 != 1 )
          goto LABEL_45;
        v27 = (__int64 *)(v20 + 120);
        v28 = *(__int64 **)(v20 + 120);
        if ( v28 == (__int64 *)(v20 + 120) )
          goto LABEL_45;
        do
        {
          v29 = *((_DWORD *)v28 + 13);
          if ( (v29 & 0x100) == 0 )
          {
            *((_DWORD *)v28 + 13) = v29 | 0x100;
            if ( (byte_140081244 & 4) != 0 )
              McTemplateK0qqxxxtq_EtwWriteTransfer(
                v21,
                v20,
                (_DWORD)v24,
                v22,
                v23,
                a2.LowPart,
                v32,
                *((_DWORD *)v28 + 40),
                0,
                4);
          }
          v28 = (__int64 *)*v28;
        }
        while ( v28 != v27 );
      }
      v16 = v38;
LABEL_45:
      ++v17;
      v18 += 160LL;
    }
    while ( v17 <= *(_DWORD *)(v16 + 3744) );
  }
  v26 = 0;
LABEL_47:
  AcquireSpinLock::Release((AcquireSpinLock *)v37);
  return (unsigned int)v26;
}
