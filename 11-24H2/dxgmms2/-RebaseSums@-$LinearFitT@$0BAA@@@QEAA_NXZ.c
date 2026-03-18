/*
 * XREFs of ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x1400378C0
 * Callers:
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14000A8F8 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall LinearFitT<256>::RebaseSums(__int64 a1)
{
  int v1; // esi
  __int64 v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // r9
  signed __int64 v5; // rbx
  signed __int64 v6; // rdi
  __int128 v7; // rax
  __int64 v8; // r11
  __int64 v9; // r11
  __int128 v10; // rax
  char result; // al

  v1 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v2 = *(_QWORD *)(a1 + 104);
  v3 = 0;
  *(_QWORD *)(a1 + 40) = v2;
  v4 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 48) = v4;
  while ( v3 < 0x100 )
  {
    v5 = *(_QWORD *)(a1 + 16LL * v3 + 104) - v2;
    v6 = *(_QWORD *)(a1 + 16LL * v3 + 112) - v4;
    v7 = v5 * (__int128)v5;
    v8 = v7;
    if ( (__int64)v7 < 0 )
    {
      if ( *((_QWORD *)&v7 + 1) == -1LL )
      {
        v2 = *(_QWORD *)(a1 + 40);
        v4 = *(_QWORD *)(a1 + 48);
        goto LABEL_5;
      }
    }
    else if ( is_mul_ok(v5, v5) )
    {
      goto LABEL_5;
    }
    v8 = -1LL;
LABEL_5:
    v9 = *(_QWORD *)(a1 + 80) + v8;
    v10 = v5 * (__int128)v6;
    if ( (__int64)v10 < 0 )
    {
      if ( *((_QWORD *)&v10 + 1) == -1LL )
        goto LABEL_7;
    }
    else if ( is_mul_ok(v5, v6) )
    {
      goto LABEL_7;
    }
    *(_QWORD *)&v10 = -1LL;
LABEL_7:
    *(_QWORD *)(a1 + 72) += v10;
    *(_QWORD *)(a1 + 56) += v5;
    *(_QWORD *)(a1 + 64) += v6;
    ++*(_DWORD *)(a1 + 8);
    ++v3;
    *(_QWORD *)(a1 + 80) = v9;
  }
  result = 1;
  *(_DWORD *)(a1 + 8) = v1;
  return result;
}
