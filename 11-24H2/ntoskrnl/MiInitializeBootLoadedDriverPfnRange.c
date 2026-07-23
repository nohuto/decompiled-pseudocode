/*
 * XREFs of MiInitializeBootLoadedDriverPfnRange @ 0x140691820
 * Callers:
 *     MiInitializeBootLoadedDriverPfns @ 0x140C5D2DC (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 */

__int64 __fastcall MiInitializeBootLoadedDriverPfnRange(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  _QWORD *i; // rdi
  __int64 v7; // rbx
  int PfnSlabType; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  bool v12; // zf

  v3 = 0LL;
  v4 = (unsigned __int64)&a1[a2];
  for ( i = a1; (unsigned __int64)i < v4; ++i )
  {
    v7 = 48 * ((*i >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    PfnSlabType = MiGetPfnSlabType(v7);
    v11 = v3 + 1;
    if ( PfnSlabType == 9 )
      v11 = v3;
    v3 = v11;
    if ( a3 && (MiFlags & 0x4000) != 0 )
    {
      *(_QWORD *)(v7 + 16) = (32 * (((v9 >> 63) & 0xFFFFFFFFFFFFFFFEuLL) + 3)) ^ (*(_QWORD *)(v7 + 16) ^ (32 * (((v9 >> 63) & 0xFFFFFFFFFFFFFFFEuLL) + 3))) & 0xFFFFFFFFFFFFFC1FuLL;
    }
    else
    {
      if ( v9 >= 0 )
      {
        v12 = (MiFlags & 0x8000) == 0;
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFC1FuLL | ((-(__int64)((MiFlags & 0x8000) != 0) & 0xFFFFFFFFFFFFFFA0uLL)
                                                                             + 192);
        if ( !v12 && ((*(_QWORD *)(v7 + 40) >> 60) & 7) != 3 )
          MiMarkPfnVerified(v7, 0LL, v9, v10);
      }
      *(_BYTE *)(v7 + 35) |= 8u;
    }
  }
  return v3;
}
