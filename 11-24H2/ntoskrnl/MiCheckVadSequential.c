/*
 * XREFs of MiCheckVadSequential @ 0x14030A1A0
 * Callers:
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiCheckVadSequential(int *a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v3; // r15d
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // r12
  __int64 *v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  unsigned __int64 v15; // r10
  int v16; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  char v20; // dl
  unsigned int v21; // r11d
  _QWORD *v22; // rsi
  __int64 v23; // r10
  unsigned int v24; // r12d

  v1 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v4 = *((_QWORD *)a1 + 8);
  v5 = v1 & 0x7FFFFFFFFFFFF000LL | 1;
  v6 = *(_DWORD *)(v4 + 48);
  do
  {
    while ( (v6 & 1) != 0 )
    {
      if ( (v6 & 2) != 0 )
      {
        v24 = 0;
        do
        {
          if ( (++v24 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v24);
          }
          else
          {
            _mm_pause();
          }
          v6 = *(_DWORD *)(v4 + 48);
        }
        while ( (v6 & 1) != 0 );
      }
      else
      {
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v6 | 2, v6);
      }
    }
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 48), v6 & 0xFFFFFFFC | 1, v6);
  }
  while ( v7 != v6 );
  v8 = *(_QWORD *)(v4 + 120);
  v9 = 128LL;
  v10 = *a1 | 0x80;
  v11 = v8 & 0xFFF;
  *a1 = v10;
  v12 = *(__int64 **)(v4 + 72);
  v13 = (v8 & 0x7FFFFFFFFFFFF000LL) + (v11 << 12);
  v14 = *v12;
  if ( !*(_QWORD *)(*v12 + 64) || (*(_DWORD *)(v14 + 56) & 0x20) != 0 || (*(_BYTE *)(v14 + 62) & 0xC) != 4 )
    v9 = 8LL;
  if ( (v1 & 0xFFFFFFFFFFFFF000uLL) == v13 )
  {
    if ( v11 == 4095 )
      v5 = ((v8 & 0xFFFFFFFFFFFFF000uLL) + 4096) & 0x7FFFFFFFFFFFF000LL | 0xFFF;
    else
      v5 = v8 & 0x7FFFFFFFFFFFF000LL | ((_WORD)v8 + 1) & 0xFFF;
    LOBYTE(v16) = v10;
  }
  else if ( v1 > v13 && (v15 = (v1 - v13) >> 12, v15 < v9) )
  {
    v20 = v10;
    v21 = (((v1 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF;
    if ( v21 <= v15 )
    {
      if ( v21 )
      {
        v20 = v10 & 0x7F;
        *a1 = v10 & 0xFFFFFF7F;
      }
    }
    else
    {
      v21 = (v1 - v13) >> 12;
    }
    if ( v20 >= 0 )
      goto LABEL_13;
    v22 = (_QWORD *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL);
    if ( v21 )
    {
      while ( (*v22 & 1) != 0 && (*v22 & 0x20) != 0 )
      {
        --v22;
        if ( !--v21 )
          goto LABEL_32;
      }
      *a1 &= ~0x80u;
      v16 = *a1;
    }
    else
    {
LABEL_32:
      v23 = (unsigned int)(v15 + 1);
      if ( (unsigned __int64)(v23 + v11) > 0xFFF )
        v5 = (v8 + ((unsigned __int64)((unsigned int)v23 + (v8 & 0xFFF) - 4095) << 12)) ^ (v8 ^ (v8
                                                                                               + ((unsigned __int64)((unsigned int)v23 + (v8 & 0xFFF) - 4095) << 12))) & 0x8000000000000FFFuLL | 0xFFF;
      else
        v5 = (v23 + v8) ^ ((v23 + v8) ^ v8) & 0xFFFFFFFFFFFFF000uLL;
      v16 = *a1;
    }
  }
  else if ( v13
         || (LOBYTE(v16) = v10,
             v1 >> 12 != (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32))) )
  {
    LOBYTE(v16) = v10 & 0x7F;
    *a1 = v10 & 0xFFFFFF7F;
  }
  if ( (v16 & 0x80u) == 0 )
  {
LABEL_13:
    *(_DWORD *)(v4 + 64) &= ~2u;
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(v4 + 64) & 2) != 0 )
  {
    if ( v13 )
      v19 = v13 - 4096;
    else
      v19 = v1;
    v18 = *(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32);
    if ( (((v19 >> 12) - v18) >> 8) + 1 == ((v1 >> 12) - v18) >> 8 )
      v3 = -1073741280;
  }
LABEL_14:
  *(_QWORD *)(v4 + 120) = v5;
  _InterlockedAnd((volatile signed __int32 *)(v4 + 48), 0x7FFFFFFCu);
  return v3;
}
