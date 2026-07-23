/*
 * XREFs of RtlpHpLfhBucketActivate @ 0x1800D68F0
 * Callers:
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800D6820 (RtlpHpLfhBucketCheckAndUpdate.c)
 * Callees:
 *     RtlpHpSegLfhExtendContext @ 0x1800D6AA0 (RtlpHpSegLfhExtendContext.c)
 *     RtlpHpLfhSlotInitialize @ 0x1800D6AB0 (RtlpHpLfhSlotInitialize.c)
 *     RtlpHpLfhBucketInitialize @ 0x1800D6B18 (RtlpHpLfhBucketInitialize.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlpHpLfhBucketActivate(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  signed __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, __int64); // rax
  __int64 v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r14
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 i; // rcx
  signed __int64 v20; // [rsp+50h] [rbp+8h]
  __int64 v21; // [rsp+50h] [rbp+8h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 448);
  LOBYTE(v6) = v5 & 3;
  if ( (v5 & 3) == 1 )
  {
    v20 = *(_QWORD *)(a1 + 8LL * a2 + 448);
    LOWORD(v20) = v5 | 2;
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * a2 + 448), v20, v5);
    if ( v6 == v5 )
    {
      v7 = ((unsigned int)RtlpHpLfhPerfFlags >> 7) & 1;
      v8 = (v7 + 2) << 6;
      v9 = (RtlpHpLfhPerfFlags & 0x20) != 0 ? *(unsigned __int8 *)(a1 + 64) : 1;
      v21 = (unsigned int)(((_DWORD)v7 + 1) << 6);
      v10 = v8 + v21 * v9;
      v11 = (__int64 (__fastcall *)(__int64, __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40));
      v12 = v9;
      v13 = *(_QWORD *)a1;
      v6 = v11 == RtlpHpSegLfhExtendContext ? RtlpHpSegLfhExtendContext(v13, v10) : v11(v13, v10);
      v14 = v6;
      if ( v6 )
      {
        memset_thunk_772440563353939046((void *)v6, 0, v8 + v21 * v9);
        LOBYTE(v6) = RtlpHpLfhBucketInitialize(v14, a2);
        v15 = v14 + v8;
        if ( v9 )
        {
          v16 = a1;
          do
          {
            RtlpHpLfhSlotInitialize(v15, v14, a1);
            ++*(_BYTE *)(v14 + 1);
            v6 = *(unsigned __int8 *)(a1 + 64);
            v17 = (v15 - a1) >> 6;
            if ( v9 == (_DWORD)v6 )
            {
              *(_WORD *)(v16 + 2 * v4 + 1472) = v17;
            }
            else
            {
              for ( i = a1 + 1472; ; i += 256LL )
              {
                v6 = a1 + (v6 << 8) + 1472;
                if ( i >= v6 )
                  break;
                *(_WORD *)(i + 2 * v4) = v17;
                v6 = *(unsigned __int8 *)(a1 + 64);
              }
            }
            v15 += v21;
            v16 += 256LL;
            --v12;
          }
          while ( v12 );
        }
        *(_QWORD *)(a1 + 8 * v4 + 448) = v14;
      }
    }
  }
  return v6;
}
