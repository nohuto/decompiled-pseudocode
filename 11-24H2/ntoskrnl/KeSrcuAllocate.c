/*
 * XREFs of KeSrcuAllocate @ 0x1405BDE00
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuInitializeTopology @ 0x1405BE5C8 (KiSrcuInitializeTopology.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeSrcuAllocate(int a1)
{
  unsigned __int8 v2; // di
  char *v3; // rbp
  unsigned int v4; // r8d
  __int64 v5; // rsi
  unsigned __int8 v6; // dl
  char *v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // r14
  unsigned int v12; // ecx
  __int64 v13; // r15
  __int64 Pool2; // rax
  __int64 v15; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 *v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // esi
  int v22; // r9d
  __int64 v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // r10
  __int64 v26; // r11
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int8 v29; // dl
  int v30; // r11d
  unsigned int v31; // ebp
  _QWORD *v32; // r9
  __int64 v33; // rsi
  unsigned int v34; // r12d
  __int64 i; // r10
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // edx
  __int64 v40; // rax
  KIRQL v41; // al
  __int64 *v42; // rdx
  unsigned int v43; // [rsp+68h] [rbp+10h]
  unsigned int v44; // [rsp+70h] [rbp+18h]
  unsigned __int64 v45; // [rsp+78h] [rbp+20h]

  while ( !byte_140F10320 )
  {
    if ( !(unsigned int)KiSrcuInitializeTopology() )
      return 0LL;
  }
  v2 = byte_140F10321;
  v3 = &byte_140F10324;
  v4 = 0;
  v5 = (unsigned __int8)byte_140F10321;
  v6 = byte_140F10321 - 1;
  if ( byte_140F10321 )
  {
    v7 = &byte_140F10324;
    v8 = (unsigned __int8)byte_140F10321;
    do
    {
      v9 = (unsigned __int8)*v7++;
      v4 += v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = (unsigned int)KeMaximumProcessors;
  v11 = v6;
  v12 = *((unsigned __int8 *)&KiSrcuState[4] + v6 + 2);
  if ( v12 > 0x20 )
    v12 = 32;
  v44 = v12;
  v13 = (v12 + KeMaximumProcessors - 1) / v12;
  v43 = (v12 + KeMaximumProcessors - 1) / v12;
  v45 = (unsigned __int64)(unsigned int)KeMaximumProcessors << 6;
  Pool2 = ExAllocatePool2(0x40uLL, v45 + 56 * (v4 + 3LL) + 80 * v13, 0x75635253u);
  v15 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_DWORD *)(Pool2 + 160) = a1;
  v17 = Pool2 + 168;
  v18 = v17 + v45;
  *(_QWORD *)(v15 + 32) = v17;
  if ( v2 )
  {
    v19 = (unsigned __int64 *)(v15 + 16);
    do
    {
      *v19++ = v18;
      v20 = (unsigned __int8)*v3++;
      v18 += 56 * v20;
      --v5;
    }
    while ( v5 );
  }
  v21 = *((unsigned __int8 *)&KiSrcuState[4] + v11 + 2);
  v22 = 0;
  v23 = *(_QWORD *)(v15 + 8 * v11 + 16);
  if ( (_DWORD)v10 )
  {
    v24 = (_QWORD *)(*(_QWORD *)(v15 + 32) + 40LL);
    v25 = 0LL;
    v26 = v10;
    do
    {
      *v24 = v23;
      v27 = v23 + 56;
      v24[2] = v15;
      v24 += 8;
      v28 = v25 + qword_140F10328;
      v25 += 8LL;
      *(v24 - 7) = v28;
      if ( v22 + 1 < v21 )
        v27 = v23;
      v22 = v22 + 1 < v21 ? v22 + 1 : 0;
      v23 = v27;
      --v26;
    }
    while ( v26 );
  }
  v29 = 1;
  *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8LL) = qword_140F10330;
  if ( v2 > 1u )
  {
    do
    {
      v30 = 0;
      v31 = 0;
      v32 = *(_QWORD **)(v15 + 8LL * v29 + 16);
      v33 = KiSrcuState[v29 + 6];
      v34 = *((unsigned __int8 *)&KiSrcuState[4] + v29 + 1);
      for ( i = *(_QWORD *)(v15 + 8LL * v29 + 8);
            v31 < *((unsigned __int8 *)&KiSrcuState[4] + v29 + 4);
            v30 = v30 + 1 < v34 ? v30 + 1 : 0 )
      {
        v32[1] = v33;
        *v32 = i;
        v36 = i + 56;
        v33 += 16LL;
        v32 += 7;
        ++v31;
        if ( v30 + 1 < v34 )
          v36 = i;
        i = v36;
      }
      ++v29;
    }
    while ( v29 < v2 );
    LODWORD(v13) = v43;
  }
  *(_QWORD *)(v15 + 72) = v15 + 64;
  *(_QWORD *)(v15 + 64) = v15 + 64;
  *(_QWORD *)(v15 + 104) = KiSrcuFlushCompletedDpcRoutine;
  *(_DWORD *)(v15 + 80) = 282;
  *(_QWORD *)(v15 + 112) = v15;
  *(_QWORD *)(v15 + 136) = 0LL;
  *(_QWORD *)(v15 + 96) = 0LL;
  *(_DWORD *)(v15 + 144) = v13;
  *(_DWORD *)(v15 + 148) = v44;
  *(_QWORD *)(v15 + 152) = *(_QWORD *)(v15 + 8 * v11 + 16) + 56LL * *((unsigned __int8 *)&KiSrcuState[4] + v11 + 4);
  if ( (_DWORD)v13 )
  {
    v37 = 0LL;
    v38 = (unsigned int)v13;
    v39 = 0;
    do
    {
      *(_DWORD *)(*(_QWORD *)(v15 + 152) + v37 + 64) = v39;
      v39 += v44;
      v40 = *(_QWORD *)(v15 + 152);
      *(_DWORD *)(v37 + v40) = 275;
      *(_QWORD *)(v37 + v40 + 24) = &KiSrcuNotifyWorkerDpcRoutine;
      *(_QWORD *)(v37 + v40 + 32) = v15;
      *(_QWORD *)(v37 + v40 + 56) = 0LL;
      *(_QWORD *)(v37 + v40 + 16) = 0LL;
      v37 += 80LL;
      --v38;
    }
    while ( v38 );
  }
  v41 = KeAcquireSpinLockRaiseToDpc(&qword_140F10310);
  if ( !KiSrcuState[0] )
  {
    qword_140F10308 = (__int64)KiSrcuState;
    KiSrcuState[0] = (__int64)KiSrcuState;
  }
  v42 = (__int64 *)qword_140F10308;
  if ( *(__int64 **)qword_140F10308 != KiSrcuState )
    __fastfail(3u);
  *(_QWORD *)(v15 + 8) = qword_140F10308;
  *(_QWORD *)v15 = KiSrcuState;
  *v42 = v15;
  qword_140F10308 = v15;
  KeReleaseSpinLock(&qword_140F10310, v41);
  return v15;
}
