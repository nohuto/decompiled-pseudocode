/*
 * XREFs of ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x14001E9F0
 * Callers:
 *     ?UpdateProcessingStart@CAudioPump@@AEAA_JXZ @ 0x14001F9A0 (-UpdateProcessingStart@CAudioPump@@AEAA_JXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall LinearFitT<256>::RebaseSums(__int64 a1)
{
  int v1; // edi
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // rbx
  __int128 v5; // rax
  bool v6; // zf
  unsigned __int64 v7; // r11
  __int128 v8; // rax
  bool v9; // zf
  unsigned __int64 v10; // r8
  char result; // al

  v1 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 80) = 0LL;
  v2 = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 112);
  while ( v2 < 0x100 )
  {
    v3 = *(_QWORD *)(a1 + 16LL * v2 + 104) - *(_QWORD *)(a1 + 40);
    v4 = *(_QWORD *)(a1 + 16LL * v2 + 112) - *(_QWORD *)(a1 + 48);
    v5 = v3 * (__int128)v3;
    if ( (__int64)v5 < 0 )
      v6 = *((_QWORD *)&v5 + 1) == -1LL;
    else
      v6 = *((_QWORD *)&v5 + 1) == 0LL;
    if ( !v6 )
      goto LABEL_16;
    *((_QWORD *)&v5 + 1) = *(_QWORD *)(a1 + 80);
    v7 = *((_QWORD *)&v5 + 1) + v5;
    *((_QWORD *)&v5 + 1) >>= 63;
    if ( DWORD2(v5) == (unsigned int)((unsigned __int64)(v3 * v3) >> 32) >> 31
      && DWORD2(v5) != v7 > 0x7FFFFFFFFFFFFFFFLL )
    {
      goto LABEL_16;
    }
    v8 = v3 * (__int128)v4;
    v9 = (__int64)v8 < 0 ? *((_QWORD *)&v8 + 1) == -1LL : *((_QWORD *)&v8 + 1) == 0LL;
    if ( !v9
      || (*((_QWORD *)&v8 + 1) = *(_QWORD *)(a1 + 72),
          v10 = *((_QWORD *)&v8 + 1) + v8,
          *((_QWORD *)&v8 + 1) >>= 63,
          DWORD2(v8) == (unsigned int)((unsigned __int64)(v3 * v4) >> 32) >> 31)
      && DWORD2(v8) != v10 > 0x7FFFFFFFFFFFFFFFLL )
    {
LABEL_16:
      result = 0;
      goto LABEL_18;
    }
    *(_QWORD *)(a1 + 56) += v3;
    *(_QWORD *)(a1 + 64) += v4;
    ++*(_DWORD *)(a1 + 8);
    ++v2;
    *(_QWORD *)(a1 + 72) = v10;
    *(_QWORD *)(a1 + 80) = v7;
  }
  result = 1;
LABEL_18:
  *(_DWORD *)(a1 + 8) = v1;
  return result;
}
