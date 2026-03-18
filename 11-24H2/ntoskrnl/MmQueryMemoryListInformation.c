/*
 * XREFs of MmQueryMemoryListInformation @ 0x1403D447C
 * Callers:
 *     EtwpLogMemInfo @ 0x1403D4060 (EtwpLogMemInfo.c)
 *     PfpMemoryListQuery @ 0x1403D4358 (PfpMemoryListQuery.c)
 *     PfpPfnPrioRequest @ 0x1409334C4 (PfpPfnPrioRequest.c)
 *     PfpVolumePrefetchMetadata @ 0x140952BE8 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchPrivatePages @ 0x14095328C (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchDirectoryStream @ 0x140953524 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x140954F78 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1409552C8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfSnCheckActionsNeeded @ 0x140961228 (PfSnCheckActionsNeeded.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MiQueryMemoryListInformation @ 0x1403D46B0 (MiQueryMemoryListInformation.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(
        ULONG **BugCheckParameter2,
        _OWORD *a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  int v8; // edx
  char v9; // si
  ULONG *v10; // rbx
  _OWORD *v11; // r15
  _OWORD v13[11]; // [rsp+50h] [rbp-D8h] BYREF

  memset_0(v13, 0, sizeof(v13));
  *a5 = 0;
  if ( a3 < 0xB0 )
  {
    *a5 = 176;
    return 3221225476LL;
  }
  v8 = 0;
  v9 = 0;
  if ( BugCheckParameter2 )
  {
    if ( BugCheckParameter2 == (ULONG **)-1LL )
    {
      v10 = (ULONG *)*((_QWORD *)qword_140E2FF88
                     + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    }
    else
    {
      if ( BugCheckParameter2 == (ULONG **)-2LL )
      {
        v10 = 0LL;
        goto LABEL_14;
      }
      v10 = *BugCheckParameter2;
      v8 = 1;
    }
  }
  else
  {
    v10 = &MiSystemPartition;
  }
  if ( !v10 || v10[2] != 305535296 )
    goto LABEL_14;
  if ( !v8 )
    goto LABEL_8;
  if ( *((ULONG ***)v10 + 23) != BugCheckParameter2 )
LABEL_14:
    KeBugCheckEx(0x1Au, 0x41001uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v10, 0LL);
  if ( (unsigned __int8)PsReferencePartitionSafe(BugCheckParameter2) )
    v9 = 1;
  else
    v10 = 0LL;
LABEL_8:
  if ( !v10 )
    return 3221226656LL;
  MiQueryMemoryListInformation(v10, v13);
  *a2 = v13[0];
  a2[1] = v13[1];
  a2[2] = v13[2];
  a2[3] = v13[3];
  a2[4] = v13[4];
  a2[5] = v13[5];
  a2[6] = v13[6];
  v11 = a2 + 8;
  *(v11 - 1) = v13[7];
  *v11 = v13[8];
  v11[1] = v13[9];
  v11[2] = v13[10];
  *a5 = 176;
  if ( v9 )
    PsDereferencePartition(*((_QWORD *)v10 + 23));
  return 0LL;
}
