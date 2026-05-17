/*
 * XREFs of RtlpFlsDataCleanup @ 0x18004EC20
 * Callers:
 *     LdrShutdownProcess @ 0x180002B70 (LdrShutdownProcess.c)
 *     RtlpHpEnvFlsCleanup @ 0x1800041C8 (RtlpHpEnvFlsCleanup.c)
 *     LdrShutdownThread @ 0x1800045E0 (LdrShutdownThread.c)
 *     RtlProcessFlsData @ 0x1800F2280 (RtlProcessFlsData.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhTlsCleanup @ 0x18004EDC0 (RtlpHpLfhTlsCleanup.c)
 *     ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x18004EE50 (-Cleanup@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z.c)
 *     RtlpFlsHeapFree @ 0x18004EEDC (RtlpFlsHeapFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpFlsDataCleanup(__int64 a1, __int64 *a2, char a3)
{
  char v3; // r12
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rbp
  void (*v16)(void); // rax
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx

  v3 = a3;
  if ( (a3 & 1) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 88);
    if ( v6 )
    {
      v7 = 17;
      v8 = v6;
      do
      {
        _BitScanReverse(&v9, v7);
        v10 = v7 ^ (1 << v9);
        v11 = a2[v9 - 2];
        if ( v11 )
        {
          v12 = v11 + 8 * v10;
          if ( *(_QWORD *)(v12 + 8) )
          {
            _BitScanReverse((unsigned int *)&v13, v7);
            v14 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v13 - 4) + 8);
            if ( v14 )
              v15 = v14 + 8 * ((v7 ^ (1 << v13)) + 2LL * (v7 ^ (1 << v13)) + 1);
            else
              v15 = 0LL;
            RtlAcquireSRWLockShared((volatile signed __int64 *)v15);
            v16 = *(void (**)(void))(v15 + 8);
            if ( (unsigned __int64)v16 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *(_QWORD *)(v12 + 8) )
            {
              if ( *(_QWORD *)(v15 + 16) )
              {
                v19 = *(_QWORD *)(v12 + 8);
                v20 = *(_QWORD *)(v15 + 16);
                if ( (char *)v16 == (char *)RtlpHpLfhTlsCleanup )
                  RtlpHpLfhTlsCleanup(v20, v19);
                else
                  ((void (__fastcall *)(__int64, __int64))v16)(v20, v19);
              }
              else
              {
                v16();
              }
              *(_QWORD *)(v12 + 8) = 0LL;
              *((_DWORD *)a2 + 20) &= ~1u;
            }
            RtlReleaseSRWLockShared((volatile signed __int64 *)v15);
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
      v3 = a3;
    }
    RtlAcquireSRWLockExclusive(a1);
    v17 = (__int64 *)*a2;
    v18 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v18 != a2 )
      __fastfail(3u);
    *v18 = v17;
    v17[1] = (__int64)v18;
    RtlReleaseSRWLockExclusive(a1);
  }
  if ( (v3 & 2) != 0 )
  {
    RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::Cleanup(a2 + 2);
    RtlpFlsHeapFree(a2);
  }
}
