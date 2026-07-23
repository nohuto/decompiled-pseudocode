/*
 * XREFs of MiLockMultipleZeroChunks @ 0x140332A40
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiLockHugePfnInternal @ 0x1403EFAE4 (MiLockHugePfnInternal.c)
 *     MiColdPageSizeSupported @ 0x1404444AC (MiColdPageSizeSupported.c)
 *     MiSafeTryLockNestedPageAtDpc @ 0x140485350 (MiSafeTryLockNestedPageAtDpc.c)
 */

__int64 __fastcall MiLockMultipleZeroChunks(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // rbp
  unsigned __int64 i; // r9
  unsigned __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r11
  __int128 v18; // [rsp+20h] [rbp-48h]
  unsigned int v19; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+78h] [rbp+10h]

  v2 = 0LL;
  v3 = *(unsigned int *)(a1 + 12);
  v19 = v3;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 56);
  result = *(_QWORD *)(a1 + 32);
  v20 = v5;
  v8 = *(_QWORD *)(result + 16) + 57216LL * *(unsigned int *)(a1 + 16);
  if ( *(_DWORD *)(v4 + 280) )
  {
    for ( i = 0xFFFFDE0000000000uLL; ; i = 0xFFFFDE0000000000uLL )
    {
      v10 = *(_QWORD *)(v4 + 8 * v2 + 24);
      v11 = v4 + 8 * v2;
      if ( (v10 & 8) != 0 )
        break;
LABEL_15:
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *(_DWORD *)(v4 + 280) )
        return result;
    }
    v12 = *(_QWORD *)(a1 + 56);
    v13 = (v10 >> 12) & 0x3FFFFFFFFFLL;
    v18 = 0LL;
    if ( v12 && *(_BYTE *)(v12 + 324) )
    {
      v14 = qword_140E30100 + 8 * ((v10 >> 12) & 0x3FFFFF);
      v3 = v19;
    }
    else
    {
      BYTE8(v18) = 1;
      v14 = 48 * v13 - 0x220000000000LL;
    }
    if ( *(_QWORD *)(v5 + 672)
      && (unsigned int)MiColdPageSizeSupported(v3, v8)
      && !*(_BYTE *)(*(_QWORD *)(a1 + 24) + 195LL)
      && !*(_BYTE *)(v4 + 324)
      && (v10 & 3) == 0 )
    {
      *(_BYTE *)(a1 + 4) = 1;
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
      result = MiSafeTryLockNestedPageAtDpc(v13, v5, v10, i);
      if ( !(_DWORD)result )
        return result;
      v16 = *(_QWORD *)(v11 + 24);
      if ( (v16 & 1) != 0 )
      {
        result = v14;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), v17);
        goto LABEL_14;
      }
    }
    else
    {
      if ( v6 )
        *(_BYTE *)(a1 + 1) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 15224));
      if ( BYTE8(v18) )
      {
        result = MiSafeLockPage(v13);
        v15 = *(_QWORD *)(v11 + 24);
        *(_BYTE *)a1 = result;
        if ( (v15 & 1) != 0 )
        {
          if ( (_BYTE)result != 17 )
            result = MiUnlockPage(v14, result);
          if ( v6 )
            result = MiReleaseSpinLockExclusive((_DWORD *)(v8 + 15224), *(_BYTE *)(a1 + 1));
          goto LABEL_14;
        }
        v16 = *(_QWORD *)(v11 + 24);
      }
      else
      {
        MiLockHugePfnInternal(v14, v5, v10, i);
        v16 = *(_QWORD *)(v11 + 24);
        if ( (v16 & 1) != 0 )
        {
          _InterlockedAnd(
            (volatile signed __int32 *)(qword_140E30108 + 4 * ((((v14 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
            ~(1 << (((v14 - qword_140E30100) >> 3) & 0x1F)));
          result = MiReleaseSpinLockExclusive((_DWORD *)(v8 + 15224), *(_BYTE *)(a1 + 1));
          goto LABEL_14;
        }
      }
    }
    result = v16 | 0x20;
    ++*(_DWORD *)(a1 + 8);
    *(_QWORD *)(v11 + 24) = result;
LABEL_14:
    v5 = v20;
    v3 = v19;
    goto LABEL_15;
  }
  return result;
}
