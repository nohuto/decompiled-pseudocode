/*
 * XREFs of RtlpHpTagQueryTags @ 0x1800A1A5C
 * Callers:
 *     RtlQueryHeapInformation @ 0x18002AB10 (RtlQueryHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x180140600 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpHpTagContextFindMapping @ 0x1800A1F60 (RtlpHpTagContextFindMapping.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x1800A2080 (RtlpHpTagQueryHeapsRemote.c)
 */

__int64 __fastcall RtlpHpTagQueryTags(_QWORD *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // ecx
  __int64 v6; // r8
  unsigned int v7; // edi
  char v8; // al
  __int16 v9; // cx
  char *v10; // r14
  unsigned __int64 v11; // rbx
  char *v12; // r12
  __int64 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int8 *v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 Mapping; // rax
  __int64 v21; // rax

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v5 = *((unsigned __int16 *)a1 + 1);
  if ( (v5 & 0xFFFFFFFD) != 0 )
    return (unsigned int)-1073741811;
  if ( a1[1] == -1LL )
  {
    v6 = 2LL;
    if ( (v5 & 2) != 0 && a2 < 0x30 )
      return (unsigned int)-1073741811;
    v7 = 0;
    v8 = (unsigned __int8)RtlpHpHeapFeatures >> 1;
    a1[2] = 0LL;
    if ( (v8 & 1) != 0 )
    {
      v9 = v5 | 1;
      v10 = (char *)(a1 + 3);
      *((_WORD *)a1 + 1) = v9;
      if ( (v9 & 2) != 0 )
      {
        v17 = (unsigned __int8 *)(a1 + 3);
        v18 = 314159LL;
        do
        {
          v19 = *v17;
          v17 += 8;
          v18 = *(v17 - 1)
              + 37
              * (*(v17 - 2)
               + 37
               * (*(v17 - 3)
                + 37 * (*(v17 - 4) + 37 * (*(v17 - 5) + 37 * (*(v17 - 6) + 37 * (*(v17 - 7) + 37 * (v19 + 37 * v18)))))));
          --v6;
        }
        while ( v6 );
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        Mapping = RtlpHpTagContextFindMapping(&RtlpHpTagContext, a1 + 3, v18);
        a1[2] = 1LL;
        if ( Mapping )
          v21 = *(_QWORD *)(Mapping + 32);
        else
          v21 = 0LL;
        a1[5] = v21;
        RtlReleaseSRWLockShared(&RtlpHpTagContext);
        *a3 = 48LL;
      }
      else
      {
        v11 = (a2 - 24) / 0x18;
        v12 = &v10[24 * v11];
        RtlAcquireSRWLockShared(&RtlpHpTagContext);
        if ( (unsigned int)dword_1801D2C28 > v11 )
        {
          v7 = -1073741789;
          *a3 = 8 * (3LL * (unsigned int)dword_1801D2C28 + 3);
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
        }
        else
        {
          v13 = (__int64 *)qword_1801D2C30;
          v14 = qword_1801D2C30;
          if ( v10 < v12 )
          {
            while ( v14 )
            {
              v14 = *(_QWORD *)v14;
              if ( (v14 & 1) != 0 )
                break;
LABEL_15:
              if ( v14 )
              {
                *(_OWORD *)v10 = *(_OWORD *)(v14 + 16);
                *((_QWORD *)v10 + 2) = *(_QWORD *)(v14 + 32);
                v10 += 24;
                if ( v10 < v12 )
                  continue;
              }
              goto LABEL_17;
            }
            for ( ++v13;
                  (unsigned __int64)v13 < qword_1801D2C30 + 8 * ((unsigned __int64)(unsigned int)dword_1801D2C2C >> 5);
                  ++v13 )
            {
              v14 = *v13;
              if ( (*v13 & 1) == 0 )
                goto LABEL_15;
            }
          }
LABEL_17:
          RtlReleaseSRWLockShared(&RtlpHpTagContext);
          v15 = (v10 - (char *)a1 - 24) / 24;
          a1[2] = v15;
          *a3 = 24 * (v15 + 1);
        }
      }
    }
    else
    {
      *((_WORD *)a1 + 1) = v5 & 0xFFFE;
      *a3 = 24LL;
    }
  }
  else
  {
    return (unsigned int)RtlpHpTagQueryHeapsRemote(a1, a2);
  }
  return v7;
}
