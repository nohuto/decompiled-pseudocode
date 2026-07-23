/*
 * XREFs of RtlpHpLfhOwnerCleanup @ 0x180026E6C
 * Callers:
 *     RtlpHpLfhBucketCleanup @ 0x180026D4C (RtlpHpLfhBucketCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFree @ 0x180064EE4 (RtlpHpLfhSubsegmentFree.c)
 */

__int64 __fastcall RtlpHpLfhOwnerCleanup(__int64 a1, unsigned __int8 *a2)
{
  __int64 *v2; // r8
  _QWORD *v3; // rbx
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 *v8; // rdx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = (__int64 *)(a2 + 40);
  v3 = a2 + 24;
  v6 = *(_QWORD *)(a1 + 8 * ((unsigned __int64)*a2 >> 1) + 448);
  result = *((_QWORD *)a2 + 5);
  if ( (unsigned __int8 *)result != a2 + 40 )
  {
    v8 = (__int64 *)*((_QWORD *)a2 + 4);
    *v8 = result;
    v3[1] = v2[1];
    *(_QWORD *)v2[1] = v3;
    result = *v2;
    *(_QWORD *)(*v2 + 8) = v8;
  }
  while ( 1 )
  {
    v9 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    if ( (_QWORD *)v9[1] != v3 || (v10 = *v9, *(_QWORD **)(*v9 + 8LL) != v9) )
      __fastfail(3u);
    *v3 = v10;
    *(_QWORD *)(v10 + 8) = v3;
    if ( (*a2 & 1) == 0 && !*((_BYTE *)v9 + 22) )
      --a2[1];
    *((_WORD *)v9 + 16) = *((_WORD *)v9 + 17);
    v11 = *((unsigned __int8 *)v9 + 24);
    *((_BYTE *)v9 + 22) = 3;
    LOWORD(v9[v11]) = 1;
    result = RtlpHpLfhSubsegmentFree(a1, v9, v6);
  }
  return result;
}
