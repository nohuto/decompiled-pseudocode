/*
 * XREFs of PpmHeteroComputeRelativePerformance @ 0x140A65B9C
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 */

char PpmHeteroComputeRelativePerformance()
{
  __int64 *v0; // rcx
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // rax
  char v3; // di
  char v4; // cl
  unsigned __int64 v5; // rbx
  __int64 Prcb; // rax
  __int64 v7; // r8
  __int64 v8; // rsi
  int v9; // edx
  unsigned __int64 v10; // r9
  unsigned __int8 j; // r8
  char v12; // r9
  unsigned __int8 v13; // dl
  unsigned __int64 v14; // r10
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned __int64 v17; // r11
  __int64 v18; // rax
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // r10d
  unsigned __int64 i; // r11
  __int64 v25; // rax
  __int64 *v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r10
  __int64 v29; // rax
  unsigned int v30; // edi

  if ( !(unsigned int)KeIsEmptyAffinityEx(&PpmCheckRegistered.Count) )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(&PpmPerfStatesRegistered.Count, &PpmCheckRegistered.Count) )
    {
      if ( PpmPerfDomainCount != 1 )
      {
        v0 = (__int64 *)PpmPerfDomainHead;
        v1 = 0LL;
        if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
        {
          do
          {
            v2 = v0[60];
            v0 = (__int64 *)*v0;
            if ( v1 > v2 )
              v2 = v1;
            v1 = v2;
          }
          while ( v0 != &PpmPerfDomainHead );
          if ( v2 )
          {
            v3 = 0;
            v4 = 0;
            if ( v2 >= 0x7FFFFFFFFFFFLL )
            {
              _BitScanReverse(&v30, HIDWORD(v2) + 0xFFFF);
              v3 = v30 - 14;
              v4 = v3;
            }
            v5 = v2 >> v4;
            Prcb = KeGetPrcb(0);
            v7 = PpmPerfDomainHead;
            v8 = *(_QWORD *)(Prcb + 35248);
            while ( (__int64 *)v7 != &PpmPerfDomainHead )
            {
              v20 = *(_QWORD *)(v7 + 480);
              *(_BYTE *)(v7 + 488) = 100 * (v20 >> v3) / v5;
              if ( v20 >> v3 == v5 )
              {
                LODWORD(v21) = 0x10000;
              }
              else
              {
                v21 = ((v20 >> v3 << 16) + (v5 >> 1)) / v5;
                if ( v21 <= 1 )
                  LODWORD(v21) = 1;
              }
              v22 = v20 * *(unsigned int *)(v8 + 448);
              v23 = 0;
              for ( i = (v22 << 16) / (*(_QWORD *)(v8 + 480) * (unsigned __int64)*(unsigned int *)(v7 + 448));
                    v23 < *(_DWORD *)(v7 + 296);
                    ++v23 )
              {
                v25 = *(_QWORD *)(1192LL * v23 + *(_QWORD *)(v7 + 312));
                if ( v25 )
                {
                  if ( *(_BYTE *)(v25 + 68) )
                    *(_DWORD *)(v25 - 760) = i;
                  *(_DWORD *)(v25 + 64) = v21;
                }
              }
              v7 = *(_QWORD *)v7;
            }
            v9 = PpmPerfDomainCount;
            v10 = 0LL;
            for ( j = 0; v9; ++j )
            {
              v26 = (__int64 *)PpmPerfDomainHead;
              v27 = -1LL;
              if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
              {
                v10 = -1LL;
              }
              else
              {
                do
                {
                  v28 = v26[60];
                  if ( v28 > v10 && v27 >= v28 )
                    v27 = v26[60];
                  v26 = (__int64 *)*v26;
                }
                while ( v26 != &PpmPerfDomainHead );
                v29 = PpmPerfDomainHead;
                v10 = v27;
                do
                {
                  if ( *(_QWORD *)(v29 + 480) == v27 )
                  {
                    *(_BYTE *)(v29 + 301) = j;
                    --v9;
                  }
                  v29 = *(_QWORD *)v29;
                }
                while ( (__int64 *)v29 != &PpmPerfDomainHead );
              }
            }
            v12 = 0;
            PpmHeteroNominalPerformanceClasses = j;
            v13 = 0;
            v14 = 0LL;
            if ( j )
            {
              while ( v13 < j )
              {
                v15 = PpmPerfDomainHead;
                v16 = -1;
                if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
                  goto LABEL_29;
                do
                {
                  if ( *(_BYTE *)(v15 + 301) == v13 )
                  {
                    v17 = *(unsigned int *)(v15 + 452);
                    if ( v17 > v14 && v16 >= (unsigned int)v17 )
                      v16 = *(_DWORD *)(v15 + 452);
                  }
                  v15 = *(_QWORD *)v15;
                }
                while ( (__int64 *)v15 != &PpmPerfDomainHead );
                if ( v16 == -1 )
                {
LABEL_29:
                  ++v13;
                  v14 = 0LL;
                }
                else
                {
                  v18 = PpmPerfDomainHead;
                  do
                  {
                    if ( *(_BYTE *)(v18 + 301) == v13 && *(_DWORD *)(v18 + 452) == v16 )
                      *(_BYTE *)(v18 + 302) = v12;
                    v18 = *(_QWORD *)v18;
                  }
                  while ( (__int64 *)v18 != &PpmPerfDomainHead );
                  v14 = v16;
                  ++v12;
                }
              }
            }
            PpmHeteroPerformanceClasses = v12;
          }
        }
      }
    }
  }
  return 0;
}
