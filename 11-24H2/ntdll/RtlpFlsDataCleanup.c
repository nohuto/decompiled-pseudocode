/*
 * XREFs of RtlpFlsDataCleanup @ 0x180064800
 * Callers:
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     RtlpHpEnvFlsCleanup @ 0x1800AB420 (RtlpHpEnvFlsCleanup.c)
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
 *     RtlProcessFlsData @ 0x1800ECF00 (RtlProcessFlsData.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhTlsCleanup @ 0x1800649A0 (RtlpHpLfhTlsCleanup.c)
 *     ?Cleanup@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z @ 0x180064A30 (-Cleanup@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAXPEAU1@@Z.c)
 *     RtlpFlsHeapFree @ 0x180064ABC (RtlpFlsHeapFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpFlsDataCleanup(PRTL_SRWLOCK SRWLock, __int64 *a2, char a3)
{
  char v3; // r12
  unsigned int Value; // eax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ecx
  unsigned __int64 v14; // r8
  _RTL_SRWLOCK *v15; // rbp
  void (*v16)(void); // rax
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx

  v3 = a3;
  if ( (a3 & 1) != 0 )
  {
    Value = SRWLock[11].Value;
    if ( Value )
    {
      v7 = 17;
      v8 = Value;
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
            v14 = SRWLock[(unsigned int)(v13 - 4) + 1].Value;
            if ( v14 )
              v15 = (_RTL_SRWLOCK *)(v14 + 8 * ((v7 ^ (1 << v13)) + 2LL * (v7 ^ (1 << v13)) + 1));
            else
              v15 = 0LL;
            RtlAcquireSRWLockShared(v15);
            v16 = (void (*)(void))v15[1].Value;
            if ( (unsigned __int64)v16 - 1 <= 0xFFFFFFFFFFFFFFFDuLL && *(_QWORD *)(v12 + 8) )
            {
              if ( v15[2].Value )
              {
                v19 = *(_QWORD *)(v12 + 8);
                v20 = v15[2].Value;
                if ( (char *)v16 == (char *)RtlpHpLfhTlsCleanup )
                  RtlpHpLfhTlsCleanup(v20, v19);
                else
                  ((void (__fastcall *)(unsigned __int64, __int64))v16)(v20, v19);
              }
              else
              {
                v16();
              }
              *(_QWORD *)(v12 + 8) = 0LL;
              *((_DWORD *)a2 + 20) &= ~1u;
            }
            RtlReleaseSRWLockShared(v15);
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
      v3 = a3;
    }
    RtlAcquireSRWLockExclusive(SRWLock);
    v17 = (__int64 *)*a2;
    v18 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v18 != a2 )
      __fastfail(3u);
    *v18 = v17;
    v17[1] = (__int64)v18;
    RtlReleaseSRWLockExclusive(SRWLock);
  }
  if ( (v3 & 2) != 0 )
  {
    RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::Cleanup(a2 + 2);
    RtlpFlsHeapFree(a2);
  }
}
