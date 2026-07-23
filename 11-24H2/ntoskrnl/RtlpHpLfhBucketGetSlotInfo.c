/*
 * XREFs of RtlpHpLfhBucketGetSlotInfo @ 0x1404324D0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketCleanup @ 0x140603A3C (RtlpHpLfhBucketCleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhBucketGetSlotInfo(__int64 a1, unsigned __int8 *a2, _WORD *a3)
{
  __int64 v3; // r9
  __int64 v4; // r11
  __int16 *v5; // rdx
  __int16 v6; // r10
  __int64 v7; // rax
  _WORD *v8; // rcx

  v3 = 0LL;
  if ( *(_BYTE *)(a1 + 64) )
  {
    v4 = *(unsigned __int8 *)(a1 + 64);
    v5 = (__int16 *)(a1 + 2 * (((unsigned __int64)*a2 >> 1) + 736));
    do
    {
      v6 = *v5;
      v7 = 0LL;
      if ( !(_DWORD)v3 )
        goto LABEL_11;
      v8 = a3;
      do
      {
        if ( *v8 == v6 )
          break;
        v7 = (unsigned int)(v7 + 1);
        v8 += 2;
      }
      while ( (unsigned int)v7 < (unsigned int)v3 );
      if ( (unsigned int)v7 < (unsigned int)v3 )
      {
        ++a3[2 * v7 + 1];
      }
      else
      {
LABEL_11:
        a3[2 * v3] = v6;
        a3[2 * v3 + 1] = 1;
        v3 = (unsigned int)(v3 + 1);
      }
      v5 += 128;
      --v4;
    }
    while ( v4 );
  }
  return (unsigned int)v3;
}
