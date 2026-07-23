/*
 * XREFs of RtlpHpLfhBucketGetSlotInfo @ 0x180026DE0
 * Callers:
 *     RtlpHpLfhBucketCleanup @ 0x180026D4C (RtlpHpLfhBucketCleanup.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhBucketGetSlotInfo(__int64 a1, unsigned __int8 *a2, _WORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int16 *v7; // rax
  __int16 v8; // r8
  __int64 v9; // rcx
  _WORD *v10; // r10

  v4 = 0LL;
  if ( *(_BYTE *)(a1 + 64) )
  {
    v5 = *a2;
    v6 = *(unsigned __int8 *)(a1 + 64);
    v7 = (__int16 *)(a1 + 2 * ((v5 >> 1) + 736));
    do
    {
      v8 = *v7;
      v9 = 0LL;
      if ( !(_DWORD)v4 )
        goto LABEL_11;
      v10 = a3;
      while ( *v10 != v8 )
      {
        v9 = (unsigned int)(v9 + 1);
        v10 += 2;
        if ( (unsigned int)v9 >= (unsigned int)v4 )
          goto LABEL_11;
      }
      if ( (unsigned int)v9 < (unsigned int)v4 )
      {
        ++a3[2 * v9 + 1];
      }
      else
      {
LABEL_11:
        a3[2 * v4] = v8;
        a3[2 * v4 + 1] = 1;
        v4 = (unsigned int)(v4 + 1);
      }
      v7 += 128;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)v4;
}
