/*
 * XREFs of ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x14001E800
 * Callers:
 *     ?UpdateProcessingStart@CAudioPump@@AEAA_JXZ @ 0x14001F6A0 (-UpdateProcessingStart@CAudioPump@@AEAA_JXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall LinearFitT<256>::AddToSums(__int64 a1, _QWORD *a2)
{
  int v2; // r8d
  __int64 v3; // r10
  __int64 v4; // rbx
  __int128 v5; // rax
  bool v6; // zf
  unsigned __int64 v7; // r11
  __int128 v8; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char result; // al

  v2 = 0;
  v3 = *a2 - *(_QWORD *)(a1 + 40);
  v4 = a2[1] - *(_QWORD *)(a1 + 48);
  v5 = v3 * (__int128)v3;
  if ( (__int64)v5 < 0 )
    v6 = *((_QWORD *)&v5 + 1) == -1LL;
  else
    v6 = *((_QWORD *)&v5 + 1) == 0LL;
  if ( !v6 )
    return 0;
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a1 + 80);
  v7 = *((_QWORD *)&v5 + 1) + v5;
  *((_QWORD *)&v5 + 1) >>= 63;
  if ( DWORD2(v5) == (unsigned int)((unsigned __int64)(v3 * v3) >> 32) >> 31 && DWORD2(v5) != v7 > 0x7FFFFFFFFFFFFFFFLL )
    return 0;
  v8 = v3 * (__int128)v4;
  v9 = v8;
  if ( !((__int64)v8 < 0 ? *((_QWORD *)&v8 + 1) == -1LL : *((_QWORD *)&v8 + 1) == 0LL) )
    return 0;
  v11 = *(_QWORD *)(a1 + 72);
  v12 = v11 + v9;
  v13 = v11 >> 63;
  if ( (_DWORD)v13 == v9 >> 63 )
  {
    LOBYTE(v2) = v12 > 0x7FFFFFFFFFFFFFFFLL;
    if ( (_DWORD)v13 != v2 )
      return 0;
  }
  *(_QWORD *)(a1 + 56) += v3;
  result = 1;
  *(_QWORD *)(a1 + 64) += v4;
  ++*(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = v12;
  *(_QWORD *)(a1 + 80) = v7;
  return result;
}
