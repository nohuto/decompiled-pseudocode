/*
 * XREFs of HalpConstructScatterGatherListDmaThin @ 0x1403FA980
 * Callers:
 *     HalGetScatterGatherListDmaThin @ 0x1403FA7B0 (HalGetScatterGatherListDmaThin.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpConstructScatterGatherListDmaThin(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  unsigned int v3; // r8d
  __int64 v4; // r10
  int v5; // edx
  unsigned int v6; // r11d
  __int64 v7; // r12
  void *v8; // r13
  __int64 v9; // r14
  __int64 *v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // edx
  unsigned int v13; // edi
  __int64 *v14; // r15
  __int64 v15; // r10
  __int64 v16; // rbp
  unsigned int v17; // ecx
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 v23; // [rsp+78h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 56);
  v4 = a1;
  v5 = *(_DWORD *)(a1 + 60);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = *(void **)(a1 + 88);
  v9 = v1 + 16;
  v10 = *(__int64 **)(a1 + 48);
  *(_QWORD *)(v1 + 8) = a1;
  v23 = 0LL;
  if ( v3 )
  {
    while ( v10 )
    {
      v11 = v3;
      if ( *((_DWORD *)v10 + 10) - v5 <= v3 )
        v11 = *((_DWORD *)v10 + 10) - v5;
      v12 = *((_DWORD *)v10 + 11) + v5;
      v3 -= v11;
      v13 = v12 & 0xFFF;
      v14 = &v10[((unsigned __int64)v12 >> 12) + 6];
      if ( v11 )
      {
        v15 = v23;
        do
        {
          v16 = v13 + (*v14 << 12);
          v17 = 4096 - v13;
          v18 = v11;
          if ( v17 <= v11 )
            v18 = v17;
          if ( v16 != v15 + 1 || !v6 )
          {
            v19 = v6++;
            v9 = v1 + 8 * (v19 + 2 * (v19 + 1));
            *(_QWORD *)v9 = v16;
            *(_DWORD *)(v9 + 8) = 0;
            *(_QWORD *)(v9 + 16) = 0LL;
          }
          *(_DWORD *)(v9 + 8) += v18;
          v11 -= v18;
          ++v14;
          v20 = v18 - 1LL;
          v13 = 0;
          v15 = v16 + v20;
        }
        while ( v11 );
        v23 = v15;
        v4 = a1;
      }
      v10 = (__int64 *)*v10;
      v5 = 0;
      if ( !v3 )
        goto LABEL_14;
    }
    if ( v6 )
      *(_DWORD *)(v1 + 24 * (v6 - 1 + 1LL)) += v3;
  }
LABEL_14:
  *(_DWORD *)v1 = v6;
  if ( v8 )
  {
    _m_prefetchw(v8);
    if ( (_InterlockedOr((volatile signed __int32 *)v8, 1u) & 2) != 0 )
      v2 = -1073741536;
  }
  if ( v7 )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 32), *(_QWORD *)(v4 + 40));
  return v2;
}
