/*
 * XREFs of MiGetOptimalEngineMix @ 0x14048EB84
 * Callers:
 *     MiCreatePageChains @ 0x14048E910 (MiCreatePageChains.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
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
  unsigned __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // r9
  __int64 i; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  int v20; // eax
  _DWORD *v22; // r11
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rax
  __int16 v25; // [rsp+58h] [rbp+10h]

  v3 = 0;
  v25 = 0;
  v5 = 0;
  *(_QWORD *)a3 = 0LL;
  *(_DWORD *)(a3 + 8) = 0;
  v6 = 384LL * a2;
  v7 = *(_QWORD *)(qword_140E2DC38 + v6 + 376);
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
  v12 = 168LL;
  do
  {
    if ( *v11 )
      *((_BYTE *)&v25 + (v10 != 0)) = 1;
    ++v10;
    v11 += 168;
  }
  while ( v10 < 3 );
  v13 = qword_140E2DC38;
  v14 = 0LL;
  for ( i = 0LL; ; i += 168LL )
  {
    if ( i >= 504 )
      goto LABEL_18;
    v16 = *(unsigned int *)(i + *(_QWORD *)(qword_140E2DC38 + v6 + 376) + 172);
    if ( (_DWORD)v16 )
      break;
    v14 = (unsigned int)(v14 + 1);
  }
  *(_DWORD *)(a3 + 4LL * (int)v14) = v16;
  v12 = *(_QWORD *)(168LL * (int)v14 + v7 + 152) * v16;
  if ( !(_BYTE)v25 || (_DWORD)v14 || (v3 = v16, v12 < *(_QWORD *)(v7 + 592)) )
  {
    v17 = *(_QWORD *)(v7 + 600);
    v18 = *(_QWORD *)(v7 + 592);
    if ( HIBYTE(v25) )
    {
      if ( v17 < v18 )
      {
        v24 = v18 - v12;
        if ( (_DWORD)v14 )
          v24 = *(_QWORD *)(v7 + 592);
        if ( v24 > v17 )
          v24 = *(_QWORD *)(v7 + 600);
        v19 = v24;
      }
      else
      {
        v3 = v16;
        if ( v17 <= v12 )
          goto LABEL_18;
        v19 = v17 - v12;
      }
      v3 = v16;
      if ( !v19 )
        goto LABEL_18;
      goto LABEL_17;
    }
    v3 = v16;
    if ( v17 < v18 )
      v17 = *(_QWORD *)(v7 + 592);
    if ( v17 > v12 )
    {
      v5 = 1;
      v19 = v17 - v12;
LABEL_17:
      v20 = v14 + 1;
      v3 = v16;
      v12 = (int)v14 + 1;
      if ( (__int64)v12 >= 3 )
        goto LABEL_18;
      v14 = 168LL * v20;
      v22 = (_DWORD *)(a3 + 4LL * v20);
      do
      {
        v23 = *(_QWORD *)(v7 + v14 + 152);
        if ( v19 < v23 )
          goto LABEL_23;
        v12 = *(unsigned int *)(v14 + *(_QWORD *)(v13 + v6 + 376) + 172);
        if ( !(_DWORD)v12 )
          goto LABEL_23;
        if ( v23 && (unsigned int)v12 > (unsigned int)(v19 / v23) )
          v12 = (unsigned int)(v19 / v23);
        if ( v5 && (unsigned int)v12 > 1 )
        {
          v12 = 1LL;
        }
        else if ( !(_DWORD)v12 )
        {
          goto LABEL_23;
        }
        v3 += v12;
        *v22 = v12;
        v19 -= v23 * (unsigned int)v12;
        if ( v5 )
          break;
LABEL_23:
        v14 += 168LL;
        ++v22;
      }
      while ( v14 < 504 );
    }
  }
LABEL_18:
  MiReleaseSpinLockShared((volatile signed __int32 *)(v7 + 64), v9, v12, v14);
  return v3;
}
