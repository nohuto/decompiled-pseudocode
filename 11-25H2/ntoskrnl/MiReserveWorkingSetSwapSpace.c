/*
 * XREFs of MiReserveWorkingSetSwapSpace @ 0x140A6A128
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403D8A60 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiFreeReservationRuns @ 0x140A393FC (MiFreeReservationRuns.c)
 *     MiReserveWorkingSetSwapSpaceRuns @ 0x140A6A1E8 (MiReserveWorkingSetSwapSpaceRuns.c)
 */

__int64 __fastcall MiReserveWorkingSetSwapSpace(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  unsigned int *v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // r9d
  int v11; // r9d
  __int64 result; // rax

  v8 = *(unsigned int **)(a1 + 8LL * a4 + 18528);
  v9 = a4;
  if ( a4 == a5 )
    goto LABEL_11;
  v9 = a4;
  if ( a5 == 16 )
    goto LABEL_11;
  v10 = *v8;
  if ( (v8[43] & 0x20) != 0 )
    v11 = v10 >> 1;
  else
    v11 = v10 - (v10 >> 6);
  while ( 1 )
  {
    result = MiReserveWorkingSetSwapSpaceRuns(a1, a6, v9, v11, (__int64)a2);
    if ( !result )
      break;
    MiFreeReservationRuns(a1, (unsigned __int64)a2);
    memset_0(a2, 0, 0x50uLL);
    if ( v9 == a5 || a5 >= 0x10 )
      return 3221226021LL;
    v9 = a5;
LABEL_11:
    v11 = 1;
  }
  return result;
}
