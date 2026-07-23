/*
 * XREFs of MiFreePageToSlabEntry @ 0x140435E88
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x140250F18 (MiFreePageToSlabAllocator.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

unsigned __int64 __fastcall MiFreePageToSlabEntry(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r10d
  unsigned int v6; // r15d
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // r9
  volatile signed __int32 *v10; // r8
  unsigned int v11; // eax
  unsigned __int64 result; // rax
  int v13; // r15d
  signed __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  int v17; // edi
  volatile LONG *v18; // r12
  unsigned int v19; // r14d
  struct _KEVENT *v20; // rsi
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // r10d
  __int64 v25; // r11
  volatile signed __int32 *v26; // r9
  int v27; // ecx
  unsigned int v28; // [rsp+50h] [rbp+8h]

  v5 = MiPageSizes[(*(_DWORD *)(a3 + 136) >> 4) & 3];
  v28 = v5;
  v6 = -1431655765 * ((a1 + 0x220000000000LL) >> 4) - *(_DWORD *)(a2 + 40);
  _InterlockedAdd((volatile signed __int32 *)(a2 + 84), 1u);
  _InterlockedAdd((volatile signed __int32 *)(a3 + 96), 1u);
  v7 = *(_QWORD *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 128) == 8 )
  {
    v14 = _InterlockedIncrement64((volatile signed __int64 *)(v7 + 18304));
    v15 = v14 == 1;
    v16 = v14 - 1;
    v17 = v15;
    if ( v16 < 1056 && v16 + 1 >= 1056 )
      v17 = v15 | 2;
    if ( v17 )
    {
      v18 = (volatile LONG *)(v7 + 16192);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v7 + 16192));
      v19 = 0;
      v20 = (struct _KEVENT *)(v7 + 18336);
      do
      {
        if ( _bittest(&v17, v19) )
        {
          KeSetEvent(v20 - 1, 0, 0);
          ++v20->Header.LockNV;
        }
        ++v19;
        v20 = (struct _KEVENT *)((char *)v20 + 32);
      }
      while ( v19 < 2 );
      ExReleaseSpinLockExclusiveFromDpcLevel(v18);
      v5 = v28;
    }
  }
  LOBYTE(v8) = 1;
  v9 = v6 & 0x1F;
  v10 = (volatile signed __int32 *)(*(_QWORD *)(a2 + 72) + 4 * ((unsigned __int64)v6 >> 5));
  if ( (unsigned __int64)(v9 + 1) <= 0x20 )
  {
    v11 = ~(1 << v9);
LABEL_4:
    _InterlockedAnd(v10, v11);
    goto LABEL_5;
  }
  v13 = v6 & 0x1F;
  if ( !v13 )
    goto LABEL_9;
  _InterlockedAnd(v10++, ~(((1 << (32 - v13)) - 1) << v9));
  v8 = 1 - (32 - v13);
  if ( v8 >= 0x20 )
  {
    v21 = (unsigned __int64)v8 >> 5;
    do
    {
      *v10 = 0;
      v8 -= 32;
      ++v10;
      --v21;
    }
    while ( v21 );
  }
  if ( v8 )
  {
LABEL_9:
    v11 = -1 << v8;
    goto LABEL_4;
  }
LABEL_5:
  result = (unsigned int)(*(_DWORD *)(a2 + 84) + *(_DWORD *)(a2 + 88));
  if ( (unsigned int)result >= v5 )
  {
    _InterlockedOr((volatile signed __int32 *)(a3 + 136), 1u);
    if ( *(_DWORD *)(a3 + 128) == 8 )
    {
      v22 = *(_DWORD *)(a2 + 92);
      if ( (v22 & 4) != 0 )
        v23 = (v22 >> 3) & 0x3F;
      else
        v23 = 64;
      LOBYTE(v24) = 1;
      v25 = v23 & 0x1F;
      result = v25 + 1;
      v26 = (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 16LL)
                                                              + 57216LL * *(unsigned int *)(a3 + 132)
                                                              + 57008)
                                                  + 314072LL)
                                      + 4 * ((unsigned __int64)v23 >> 5));
      if ( (unsigned __int64)(v25 + 1) > 0x20 )
      {
        v27 = v23 & 0x1F;
        if ( !v27 )
          goto LABEL_34;
        result = (unsigned int)(((1 << (32 - v27)) - 1) << v25);
        _InterlockedOr(v26, result);
        v24 = 1 - (32 - v27);
        ++v26;
        if ( v24 >= 0x20 )
        {
          result = (unsigned __int64)v24 >> 5;
          do
          {
            *v26 = -1;
            v24 -= 32;
            ++v26;
            --result;
          }
          while ( result );
        }
        if ( v24 )
        {
LABEL_34:
          result = (unsigned int)((1 << v24) - 1);
          _InterlockedOr(v26, result);
        }
      }
      else
      {
        _InterlockedOr(v26, 1 << v25);
      }
      *(_QWORD *)(a3 + 176) = 0LL;
    }
  }
  return result;
}
