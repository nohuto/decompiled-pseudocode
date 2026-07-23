/*
 * XREFs of MiScanPagefiles @ 0x140353D80
 * Callers:
 *     MiWorkingSetManager @ 0x140354FA0 (MiWorkingSetManager.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     MiSufficientAvailablePages @ 0x1403526D0 (MiSufficientAvailablePages.c)
 *     MiFreePageFileHashPfns @ 0x140353E18 (MiFreePageFileHashPfns.c)
 */

char __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // edx
  __int64 i; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx

  v1 = *(_DWORD *)(a1 + 18520);
  if ( v1 )
  {
    v3 = (_QWORD *)(a1 + 18528);
    v4 = v1;
    do
    {
      MiFreePageFileHashPfns(*v3++);
      --v4;
    }
    while ( v4 );
  }
  v5 = MiSufficientAvailablePages(a1, 0x420uLL);
  if ( !v5 )
  {
    v6 = *(_DWORD *)(a1 + 18520);
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 19616) && !*(_QWORD *)(a1 + 1032) )
      {
        v5 = *(_DWORD *)(a1 + 1040);
        if ( v5 >= 0x1E )
        {
          for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
          {
            v8 = *(_QWORD *)(a1 + 8 * i + 18528);
            if ( (*(_BYTE *)(v8 + 172) & 0x50) == 0 )
            {
              v5 = *(_DWORD *)(v8 + 12);
              if ( v5 )
                return v5;
            }
          }
          if ( *(_BYTE *)(a1 + 723) )
          {
            v9 = *(_QWORD *)(a1 + 184);
            *(_DWORD *)(a1 + 1040) = 0;
            *(_BYTE *)(a1 + 723) = 0;
            LOBYTE(v5) = PsReferencePartitionSafe(v9);
            if ( (_BYTE)v5 )
            {
              *(_QWORD *)(a1 + 1008) = 0LL;
              *(_QWORD *)(a1 + 1024) = MiScanPagefileSpace;
              *(_QWORD *)(a1 + 1032) = a1;
              LOBYTE(v5) = ExQueueWorkItemToPartition(a1 + 1008, 2, 0xFFFFFFFF, *(_QWORD *)(a1 + 184));
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 1040) = ++v5;
        }
      }
    }
  }
  return v5;
}
