/*
 * XREFs of MiScanPagefiles @ 0x1402D2B08
 * Callers:
 *     MiWorkingSetManager @ 0x1402D3D20 (MiWorkingSetManager.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     MiSufficientAvailablePages @ 0x1402AA420 (MiSufficientAvailablePages.c)
 *     MiFreePageFileHashPfns @ 0x1402D2BA0 (MiFreePageFileHashPfns.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiScanPagefiles(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 result; // rax
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
  result = MiSufficientAvailablePages(a1, 0x420uLL);
  if ( !(_DWORD)result )
  {
    v6 = *(_DWORD *)(a1 + 18520);
    if ( v6 )
    {
      if ( *(_QWORD *)(a1 + 19616) && !*(_QWORD *)(a1 + 1032) )
      {
        result = *(unsigned int *)(a1 + 1040);
        if ( (unsigned int)result >= 0x1E )
        {
          for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
          {
            v8 = *(_QWORD *)(a1 + 8 * i + 18528);
            if ( (*(_BYTE *)(v8 + 172) & 0x50) == 0 )
            {
              result = *(unsigned int *)(v8 + 12);
              if ( (_DWORD)result )
                return result;
            }
          }
          if ( *(_BYTE *)(a1 + 723) )
          {
            v9 = *(_QWORD *)(a1 + 184);
            *(_DWORD *)(a1 + 1040) = 0;
            *(_BYTE *)(a1 + 723) = 0;
            result = PsReferencePartitionSafe(v9);
            if ( (_BYTE)result )
            {
              *(_QWORD *)(a1 + 1008) = 0LL;
              *(_QWORD *)(a1 + 1024) = MiScanPagefileSpace;
              *(_QWORD *)(a1 + 1032) = a1;
              return ExQueueWorkItemToPartition(a1 + 1008, 2, 0xFFFFFFFF, *(_QWORD *)(a1 + 184));
            }
          }
        }
        else
        {
          result = (unsigned int)(result + 1);
          *(_DWORD *)(a1 + 1040) = result;
        }
      }
    }
  }
  return result;
}
