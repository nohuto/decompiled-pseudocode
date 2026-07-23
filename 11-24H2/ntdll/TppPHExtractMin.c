/*
 * XREFs of TppPHExtractMin @ 0x180088F30
 * Callers:
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     TppTimerQueueExpiration @ 0x1800882D0 (TppTimerQueueExpiration.c)
 *     TppCancelTimer @ 0x180088C90 (TppCancelTimer.c)
 *     TppPHDelete @ 0x1800DF1C0 (TppPHDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppPHExtractMin(__int64 *a1)
{
  __int64 v1; // r8
  __int64 *v3; // rax
  __int64 *v4; // rdx
  __int64 **v5; // rcx
  __int64 *v7; // rdx
  __int64 *v8; // rcx
  __int64 **v9; // r10
  __int64 **v10; // rcx
  __int64 v11; // r10

  v1 = *a1;
  if ( !*a1 )
    return v1;
  v3 = *(__int64 **)(v1 + 16);
  v4 = (__int64 *)(v1 + 16);
  if ( v3 != (__int64 *)(v1 + 16) )
  {
    if ( (__int64 *)v3[1] != v4 || (v5 = *(__int64 ***)(v1 + 24), *v5 != v4) )
LABEL_5:
      __fastfail(3u);
    *v5 = v3;
    v3[1] = (__int64)v5;
    *(_QWORD *)(v1 + 24) = v1 + 16;
    *v4 = (__int64)v4;
    while ( 1 )
    {
      v7 = (__int64 *)*v3;
      if ( (__int64 *)*v3 == v3 )
        break;
      if ( v7[4] < v3[4] )
      {
        v7 = v3;
        v3 = (__int64 *)*v3;
      }
      v8 = (__int64 *)*v7;
      if ( *(__int64 **)(*v7 + 8) != v7 )
        goto LABEL_5;
      v9 = (__int64 **)v7[1];
      if ( *v9 != v7 )
        goto LABEL_5;
      *v9 = v8;
      v8[1] = (__int64)v9;
      v10 = (__int64 **)(v3 + 2);
      v11 = v3[2];
      if ( *(__int64 **)(v11 + 8) != v3 + 2 )
        goto LABEL_5;
      *v7 = v11;
      v7[1] = (__int64)v10;
      *(_QWORD *)(v11 + 8) = v7;
      *v10 = v7;
      v3 = (__int64 *)*v3;
    }
    *a1 = (__int64)v3;
    return v1;
  }
  *a1 = 0LL;
  return v1;
}
