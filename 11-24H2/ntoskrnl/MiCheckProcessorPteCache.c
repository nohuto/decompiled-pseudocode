/*
 * XREFs of MiCheckProcessorPteCache @ 0x1403F6100
 * Callers:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiEmptyPteBins @ 0x1403F67B4 (MiEmptyPteBins.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiCheckProcessorPteCache(unsigned __int64 a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 i; // r9
  __int64 *v12; // r8
  __int64 j; // rcx
  signed __int64 *p_PteBitCache; // r8
  signed __int64 v15; // r9
  signed __int64 *v16; // rdx
  unsigned __int64 v17; // r11
  signed __int64 *v18; // rbp
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  _BYTE *v22; // rbp
  char v23; // al
  __int64 result; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  __int64 v28; // r10
  bool v29; // zf
  __int64 v30; // rcx
  unsigned int v31; // r12d
  unsigned __int64 v32; // r10
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rbp
  volatile signed __int64 *v35; // r12
  signed __int64 v36; // rax
  bool v37; // sf
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  KIRQL v43; // al
  __int128 v44; // [rsp+20h] [rbp-48h] BYREF

  v44 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->PteBitCache == -1LL )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v4 = qword_140E376E8;
    v5 = 0LL;
    v6 = -1LL;
LABEL_7:
    while ( 2 )
    {
      v7 = (unsigned __int64 *)&qword_140E376A8;
      while ( qword_140E376F0 )
      {
        if ( qword_140E376A8 >= (unsigned __int64)qword_140E376F0 )
        {
          v7 = (unsigned __int64 *)&v44;
          *(_QWORD *)&v44 = qword_140E376A8 - qword_140E376F0;
          *((_QWORD *)&v44 + 1) = qword_140E376B0 + 8 * ((unsigned __int64)qword_140E376F0 >> 6);
          if ( v4 )
            v4 -= qword_140E376F0;
          break;
        }
        v43 = ExAcquireSpinLockExclusive(dword_140E376DC);
        MiReleaseSpinLockExclusive(dword_140E376DC, v43);
      }
      v8 = *v7;
      v9 = 0LL;
      v10 = v7[1];
      if ( v4 < v8 )
        v9 = v4;
      for ( i = v8 - 1; ; i = v27 - 1 )
      {
        if ( i - v9 != -1LL )
        {
          v12 = (__int64 *)(v10 + 8 * (v9 >> 6));
          for ( j = ((1LL << (v9 & 0x3F)) - 1) | *v12; j == -1; j = *v12 )
          {
            if ( (unsigned __int64)++v12 > v10 + 8 * (i >> 6) )
              goto LABEL_39;
          }
          _BitScanForward64(&v25, ~j);
          v26 = v25 + ((__int64)((__int64)v12 - v10) >> 3 << 6);
          if ( v26 <= i && v26 != -1LL )
            break;
        }
LABEL_39:
        if ( !v9 )
        {
          result = MiEmptyPteBins(&qword_140E376A8, 0LL, 2LL);
          if ( !result )
            return result;
          v4 = 0LL;
          goto LABEL_7;
        }
        v27 = v4 + 1;
        v9 = 0LL;
        if ( v4 + 1 > v8 )
          v27 = v8;
      }
      v33 = (v26 + qword_140E376F0) & 0xFFFFFFFFFFFFFFC0uLL;
      v34 = *(_QWORD *)(qword_140E376B0 + 8 * (v33 >> 6));
      v35 = (volatile signed __int64 *)(qword_140E376B0 + 8 * (v33 >> 6));
      if ( v34 == -1LL )
      {
LABEL_80:
        v4 = v33 + 64;
        continue;
      }
      break;
    }
    while ( 1 )
    {
      v36 = _InterlockedCompareExchange64(v35, -1LL, v34);
      if ( v34 == v36 )
        break;
      v34 = v36;
      if ( v36 == -1 )
        goto LABEL_80;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( CurrentPrcb->PteBitCache == -1LL )
    {
      CurrentPrcb->PteBitCache = v34;
      CurrentPrcb->PteBitOffset = v33;
      _InterlockedAdd64(&qword_140E37700, -(__int64)(unsigned int)__popcnt(~v34));
      qword_140E376E8 = v33 + 64;
    }
    else
    {
      _InterlockedAnd64(v35, v34);
    }
  }
  else
  {
    v5 = 0LL;
    v6 = -1LL;
  }
  *(_QWORD *)&v44 = 64LL;
  *((_QWORD *)&v44 + 1) = &CurrentPrcb->PteBitCache;
  p_PteBitCache = (signed __int64 *)&CurrentPrcb->PteBitCache;
  if ( !a1 )
    goto LABEL_31;
  if ( a1 <= 0x40 )
  {
    v15 = *p_PteBitCache;
    v16 = (signed __int64 *)&CurrentPrcb->PteBitCache;
    v17 = 63 - a1 + 1;
    v18 = &p_PteBitCache[v17 >> 6];
    if ( a1 >= 0x40 )
    {
      do
      {
LABEL_71:
        v37 = v15 < 0;
        do
        {
          if ( v37 )
          {
            if ( ++v16 > v18 )
              goto LABEL_27;
            v15 = *v16;
            goto LABEL_71;
          }
          v29 = !_BitScanReverse64((unsigned __int64 *)&v38, v15);
          if ( v29 )
            v39 = 64LL;
          else
            v39 = (unsigned int)(63 - v38);
          v20 = ((v16 - p_PteBitCache + 1) << 6) - v39;
          if ( v20 > v17 )
            goto LABEL_27;
          v40 = a1 - v39;
          if ( a1 == v39 )
            goto LABEL_26;
          v15 = v16[1];
          ++v16;
          if ( v40 < 0x40 )
            goto LABEL_89;
          v37 = v15 < 0;
        }
        while ( v15 );
        v40 -= 64LL;
        if ( !v40 )
          goto LABEL_26;
        v15 = v16[1];
        ++v16;
LABEL_89:
        v29 = !_BitScanForward64(&v41, v15);
        if ( v29 )
          v41 = 64LL;
      }
      while ( v41 < v40 );
      goto LABEL_26;
    }
    if ( a1 > 1 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        if ( v15 == -1 )
        {
          while ( 1 )
          {
            if ( ++v16 > v18 )
              goto LABEL_27;
            v15 = *v16;
            if ( *v16 != -1 )
            {
              v28 = 0LL;
              break;
            }
          }
        }
        v29 = !_BitScanForward64((unsigned __int64 *)&v30, v15);
        if ( v29 )
          LODWORD(v30) = 64;
        if ( (unsigned int)(v28 + v30) >= a1 )
          break;
        v31 = a1;
        v32 = ~v15;
        while ( 1 )
        {
          v32 &= v32 >> (v31 >> 1);
          if ( !v32 )
            break;
          v31 -= v31 >> 1;
          if ( v31 <= 1 )
          {
            _BitScanForward64(&v32, v32);
            goto LABEL_60;
          }
        }
        if ( v16 == p_PteBitCache )
          goto LABEL_27;
        v29 = !_BitScanReverse64((unsigned __int64 *)&v42, v15);
        v15 = v16[1];
        if ( v29 )
        {
          ++v16;
          v28 = 64LL;
        }
        else
        {
          v28 = (unsigned int)(63 - v42);
          ++v16;
        }
      }
      v32 = -v28;
LABEL_60:
      v20 = ((v16 - p_PteBitCache) << 6) + v32;
      if ( v20 > v17 )
        goto LABEL_27;
      goto LABEL_26;
    }
    while ( v15 == -1 )
    {
      if ( ++v16 > v18 )
        goto LABEL_27;
      v15 = *v16;
    }
    _BitScanForward64(&v19, ~v15);
    v20 = v19 + ((v16 - p_PteBitCache) << 6);
    if ( v20 <= v17 )
LABEL_26:
      v6 = v20;
  }
LABEL_27:
  if ( v6 != -1LL )
  {
    v21 = v6 & 7;
    v22 = (char *)p_PteBitCache + (v6 >> 3);
    if ( v21 + a1 > 8 )
    {
      if ( (v6 & 7) != 0 )
      {
        *v22++ |= byte_140012870[v21];
        a1 -= (unsigned int)(8 - v21);
      }
      if ( a1 > 8 )
      {
        memset_0(v22, 255, a1 >> 3);
        v22 += a1 >> 3;
        a1 &= 7u;
      }
      v5 = v6;
      if ( !a1 )
        goto LABEL_31;
      v23 = byte_14002BBD0[a1];
    }
    else
    {
      v5 = v6;
      v23 = byte_14002BBD0[a1] << v21;
    }
    *v22 |= v23;
LABEL_31:
    v5 = qword_140E376C8 + 8 * (v5 + CurrentPrcb->PteBitOffset);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v5;
}
