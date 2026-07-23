/*
 * XREFs of PopDetectSimulatedHeteroProcessors @ 0x140C32AD8
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14031D920 (KeQueryMaximumProcessorCountEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PopReadSimulatedArchitecturalClasses @ 0x140C32F84 (PopReadSimulatedArchitecturalClasses.c)
 *     PopReadSimulatedHGSClasses @ 0x140C33170 (PopReadSimulatedHGSClasses.c)
 */

void PopDetectSimulatedHeteroProcessors()
{
  unsigned __int8 v0; // bp
  ULONG_PTR MaximumProcessorCount; // rdi
  unsigned int v2; // r14d
  int v3; // ecx
  __int64 Pool2; // rbx
  ULONG_PTR v5; // r13
  void *v6; // rsi
  void *v7; // r15
  __int64 v8; // rax
  void *v9; // r12
  unsigned __int8 *v10; // rdx
  ULONG_PTR v11; // r8
  unsigned __int8 v12; // al
  unsigned __int8 v13; // si
  int v14; // edx
  char v15; // r8
  unsigned __int8 *v16; // rax
  ULONG_PTR v17; // rcx
  unsigned __int8 v18; // cl
  int v19; // eax
  bool *v20; // rcx
  unsigned int v21; // r9d
  _BYTE *v22; // r10
  __int64 v23; // r11
  unsigned int v24; // eax
  __int64 m; // rbp
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 k; // rbp
  __int64 Prcb; // rax
  char v30; // r8
  unsigned int i; // r8d
  unsigned int j; // edx
  __int64 v33; // rax
  void *v34; // rcx

  v0 = -1;
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v2 = 1;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    v3 = PpmHeteroSimulationStateConfig & 0xFFFFFFFE | PopReadSimulatedArchitecturalClasses(
                                                         0LL,
                                                         (unsigned int)MaximumProcessorCount) & 1;
    PpmHeteroSimulationStateConfig = v3;
    if ( PpmHeteroHgsEnabled )
    {
      v2 = PpmHeteroWorkloadClasses;
      v3 = PpmHeteroSimulationStateConfig & 0xFFFFFFFD | (2
                                                        * (PopReadSimulatedHGSClasses(
                                                             0LL,
                                                             0LL,
                                                             (unsigned int)MaximumProcessorCount,
                                                             (unsigned int)PpmHeteroWorkloadClasses) & 1));
      PpmHeteroSimulationStateConfig = v3;
    }
    if ( v3 )
    {
      Pool2 = ExAllocatePool2(0x100uLL, (int)(4 * MaximumProcessorCount * v2) + 24LL, 0x704D5050uLL);
      if ( Pool2 )
      {
        v5 = MaximumProcessorCount;
        v6 = (void *)ExAllocatePool2(0x100uLL, MaximumProcessorCount, 0x704D5050uLL);
        if ( v6 )
        {
          v7 = (void *)ExAllocatePool2(0x100uLL, 2uLL, 0x704D5050uLL);
          if ( v7 )
          {
            v8 = ExAllocatePool2(0x100uLL, MaximumProcessorCount, 0x704D5050uLL);
            v9 = (void *)v8;
            if ( v8 )
            {
              *(_QWORD *)(Pool2 + 16) = v7;
              *(_DWORD *)(Pool2 + 4) = v2;
              *(_DWORD *)Pool2 = MaximumProcessorCount;
              *(_QWORD *)(Pool2 + 8) = v6;
              if ( (PpmHeteroSimulationStateConfig & 1) == 0 )
              {
LABEL_44:
                if ( (PpmHeteroSimulationStateConfig & 2) != 0 )
                {
                  for ( i = 0; i < (unsigned int)MaximumProcessorCount; ++i )
                  {
                    for ( j = 0; j < v2; *(_WORD *)(Pool2 + 4 * v33 + 24) = 257 )
                      v33 = i * v2 + j++;
                  }
                  PopReadSimulatedHGSClasses(Pool2 + 24, v9, (unsigned int)MaximumProcessorCount, v2);
                }
                PpmHeteroCapabilitySimulation = Pool2;
                v34 = v9;
                goto LABEL_54;
              }
              PopReadSimulatedArchitecturalClasses(v8, (unsigned int)MaximumProcessorCount);
              if ( (_DWORD)MaximumProcessorCount )
              {
                v10 = (unsigned __int8 *)v9;
                v11 = MaximumProcessorCount;
                do
                {
                  v12 = v0;
                  if ( v0 >= *v10 )
                    v12 = *v10;
                  ++v10;
                  v0 = v12;
                  --v11;
                }
                while ( v11 );
              }
              v13 = 0;
              v14 = MaximumProcessorCount;
              while ( 1 )
              {
                v15 = 0;
                if ( (_DWORD)MaximumProcessorCount )
                {
                  v16 = (unsigned __int8 *)v9;
                  v17 = MaximumProcessorCount;
                  do
                  {
                    if ( *v16 == v0 )
                    {
                      v15 = 1;
                      *v16 = v13;
                      --v14;
                    }
                    ++v16;
                    --v17;
                  }
                  while ( v17 );
                }
                if ( !v14 )
                  break;
                ++v0;
                v18 = v13 + 1;
                if ( !v15 )
                  v18 = v13;
                v13 = v18;
              }
              v19 = PpmHeteroMultiCoreClassesRegValue;
              if ( PpmHeteroMultiCoreClassesRegValue == -1 )
                v19 = v13 >= 2u;
              PpmHeteroMultiCoreClassesEnabled = v19;
              if ( v19 || (v13 = v13 != 0, !(_DWORD)MaximumProcessorCount) )
              {
                v21 = 0;
                if ( !(_DWORD)MaximumProcessorCount )
                {
LABEL_38:
                  for ( k = 0LL; (unsigned int)k < *(_DWORD *)Pool2; *(_BYTE *)(Prcb + 35405) = v30 )
                  {
                    Prcb = KeGetPrcb(k);
                    v30 = *(_BYTE *)(k + *(_QWORD *)(Pool2 + 8));
                    *(_BYTE *)(Prcb + 35336) = v30;
                    if ( v30 && !PpmHeteroMultiCoreClassesEnabled )
                    {
                      *(_BYTE *)(Prcb + 35336) = 1;
                      v30 = 1;
                    }
                    k = (unsigned int)(k + 1);
                  }
                  PpmMaxCoreClasses = v13 + 1;
                  goto LABEL_44;
                }
              }
              else
              {
                v20 = (bool *)v9;
                do
                {
                  *v20 = *v20;
                  ++v20;
                  --v5;
                }
                while ( v5 );
                v21 = 0;
              }
              v22 = v9;
              v23 = 0LL;
              do
              {
                *(_BYTE *)(v23 + *(_QWORD *)(Pool2 + 8)) = *v22;
                if ( (PpmHeteroSimulationStateConfig & 2) == 0 )
                {
                  v24 = *(_DWORD *)(Pool2 + 4);
                  for ( m = 0LL; (unsigned int)m < v24; v24 = *(_DWORD *)(Pool2 + 4) )
                  {
                    v26 = *(_QWORD *)(Pool2 + 16);
                    v27 = v21 * v24 + (unsigned int)m;
                    *(_BYTE *)(Pool2 + 4 * v27 + 25) = *v22;
                    *(_BYTE *)(Pool2 + 4 * v27 + 24) = v13 - *v22;
                    *(_BYTE *)(v26 + 2 * m) = v13;
                    *(_BYTE *)(v26 + 2 * m + 1) = v13;
                    m = (unsigned int)(m + 1);
                  }
                }
                ++v21;
                ++v23;
                ++v22;
              }
              while ( v21 < (unsigned int)MaximumProcessorCount );
              goto LABEL_38;
            }
            ExFreePoolWithTag(v7, 0x704D5050u);
          }
          ExFreePoolWithTag(v6, 0x704D5050u);
        }
        v34 = (void *)Pool2;
LABEL_54:
        ExFreePoolWithTag(v34, 0x704D5050u);
      }
    }
  }
}
