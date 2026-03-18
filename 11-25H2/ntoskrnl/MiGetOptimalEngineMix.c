/*
 * XREFs of MiGetOptimalEngineMix @ 0x14049F7F8
 * Callers:
 *     MiCreatePageChains @ 0x14038D9F0 (MiCreatePageChains.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 */

__int64 __fastcall MiGetOptimalEngineMix(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // r12d
  __int64 v6; // rbp
  __int64 v7; // rdi
  volatile LONG *v8; // rcx
  KIRQL v9; // r15
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 v12; // r13
  int v13; // r9d
  __int64 i; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // eax
  __int64 v22; // r9
  unsigned int *v23; // r11
  unsigned __int64 v24; // r10
  unsigned int v25; // r8d
  unsigned __int64 v26; // rax
  __int16 v27; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v27 = 0;
  v5 = 0;
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 8) = 0;
  v6 = 384LL * a2;
  v7 = *(_QWORD *)(qword_140E2D8B8 + v6 + 376);
  v8 = (volatile LONG *)(v7 + 64);
  if ( KeGetCurrentIrql() == 2 )
  {
    v9 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v8);
  }
  else
  {
    v9 = ExAcquireSpinLockShared(v8);
  }
  v10 = 0LL;
  v11 = (_BYTE *)(v7 + 135);
  do
  {
    if ( *v11 )
      *((_BYTE *)&v27 + (v10 != 0)) = 1;
    ++v10;
    v11 += 168;
  }
  while ( v10 < 3 );
  v12 = qword_140E2D8B8;
  v13 = 0;
  for ( i = 0LL; ; i += 168LL )
  {
    if ( i >= 504 )
      goto LABEL_18;
    v15 = *(unsigned int *)(i + *(_QWORD *)(qword_140E2D8B8 + v6 + 376) + 172);
    if ( (_DWORD)v15 )
      break;
    ++v13;
  }
  *(_DWORD *)(a3 + 4LL * v13) = v15;
  v16 = *(_QWORD *)(168LL * v13 + v7 + 152) * v15;
  if ( !(_BYTE)v27 || v13 || (v3 = v15, v16 < *(_QWORD *)(v7 + 592)) )
  {
    v17 = *(_QWORD *)(v7 + 600);
    v18 = *(_QWORD *)(v7 + 592);
    if ( HIBYTE(v27) )
    {
      if ( v17 < v18 )
      {
        v26 = v18 - v16;
        if ( v13 )
          v26 = *(_QWORD *)(v7 + 592);
        if ( v26 > v17 )
          v26 = *(_QWORD *)(v7 + 600);
        v19 = v26;
      }
      else
      {
        v3 = v15;
        if ( v17 <= v16 )
          goto LABEL_18;
        v19 = v17 - v16;
      }
      v3 = v15;
      if ( !v19 )
        goto LABEL_18;
      goto LABEL_17;
    }
    v3 = v15;
    if ( v17 < v18 )
      v17 = *(_QWORD *)(v7 + 592);
    if ( v17 > v16 )
    {
      v5 = 1;
      v19 = v17 - v16;
LABEL_17:
      v20 = v13 + 1;
      v3 = v15;
      if ( v13 + 1 >= 3LL )
        goto LABEL_18;
      v22 = 168LL * v20;
      v23 = (unsigned int *)(a3 + 4LL * v20);
      do
      {
        v24 = *(_QWORD *)(v7 + v22 + 152);
        if ( v19 < v24 )
          goto LABEL_23;
        v25 = *(_DWORD *)(v22 + *(_QWORD *)(v12 + v6 + 376) + 172);
        if ( !v25 )
          goto LABEL_23;
        if ( v24 && v25 > (unsigned int)(v19 / v24) )
          v25 = v19 / v24;
        if ( v5 && v25 > 1 )
        {
          v25 = 1;
        }
        else if ( !v25 )
        {
          goto LABEL_23;
        }
        v3 += v25;
        *v23 = v25;
        v19 -= v24 * v25;
        if ( v5 )
          break;
LABEL_23:
        v22 += 168LL;
        ++v23;
      }
      while ( v22 < 504 );
    }
  }
LABEL_18:
  MiReleaseSpinLockShared((volatile signed __int32 *)(v7 + 64), v9);
  return v3;
}
