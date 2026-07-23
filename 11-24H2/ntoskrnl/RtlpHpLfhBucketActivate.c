/*
 * XREFs of RtlpHpLfhBucketActivate @ 0x1406038AC
 * Callers:
 *     RtlpHpLfhBucketUpdateStats @ 0x1404BF608 (RtlpHpLfhBucketUpdateStats.c)
 * Callees:
 *     RtlpHpLfhSlotInitialize @ 0x1403D7E64 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhBucketInitialize @ 0x140603ACC (RtlpHpLfhBucketInitialize.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall RtlpHpLfhBucketActivate(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  signed __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned int v9; // r15d
  __int64 v10; // r13
  unsigned __int8 *v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  unsigned __int64 i; // rdx
  signed __int64 v17; // [rsp+50h] [rbp+8h]
  __int64 v18; // [rsp+50h] [rbp+8h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 448);
  LOBYTE(v6) = v5 & 3;
  if ( (v5 & 3) == 1 )
  {
    v17 = *(_QWORD *)(a1 + 8LL * a2 + 448);
    LOWORD(v17) = v5 | 2;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * a2 + 448), v17, v5);
    if ( v6 == v5 )
    {
      v7 = ((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1;
      v8 = (v7 + 2) << 6;
      v9 = (RtlpHpLfhPerfFlags & 0x20) != 0 ? *(unsigned __int8 *)(a1 + 64) : 1;
      v18 = (unsigned int)(((_DWORD)v7 + 1) << 6);
      v10 = v9;
      v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)a1, v8 + v18 * v9);
      v11 = (unsigned __int8 *)v6;
      if ( v6 )
      {
        memset_0((void *)v6, 0, v8 + v18 * v9);
        LOBYTE(v6) = RtlpHpLfhBucketInitialize(v11, a2, a1);
        v12 = (__int64)&v11[v8];
        if ( v9 )
        {
          v13 = a1;
          do
          {
            RtlpHpLfhSlotInitialize(v12, v11, a1);
            ++v11[1];
            v6 = *(unsigned __int8 *)(a1 + 64);
            v14 = (unsigned __int64)(v12 - a1) >> 6;
            if ( v9 == (_DWORD)v6 )
            {
              *(_WORD *)(v13 + 2 * v4 + 1472) = v14;
            }
            else
            {
              for ( i = a1 + 1472; ; i += 256LL )
              {
                v6 = a1 + (v6 << 8) + 1472;
                if ( i >= v6 )
                  break;
                *(_WORD *)(i + 2 * v4) = v14;
                v6 = *(unsigned __int8 *)(a1 + 64);
              }
            }
            v12 += v18;
            v13 += 256LL;
            --v10;
          }
          while ( v10 );
        }
        *(_QWORD *)(a1 + 8 * v4 + 448) = v11;
      }
    }
  }
  return v6;
}
