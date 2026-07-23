/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x1404983A8
 * Callers:
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14049835C (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x14049FCC8 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe(__int64 a1, char a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int128 *v4; // rcx
  __int64 result; // rax
  __int128 *v6; // rcx

  v2 = MEMORY[0xFFFFF78000000008];
  v3 = 28LL;
  if ( a2 )
  {
    if ( dword_140F0695C != 28 )
      qword_140F069E8 = MEMORY[0xFFFFF78000000008];
    if ( dword_140F06958 )
      qword_140F069E0 = MEMORY[0xFFFFF78000000008];
    v6 = &xmmword_140F06AD0;
    do
    {
      result = *((unsigned int *)v6 - 92);
      *(_DWORD *)v6 += result;
      v6 = (__int128 *)((char *)v6 + 4);
      --v3;
    }
    while ( v3 );
  }
  else
  {
    if ( dword_140F0695C != 28 )
    {
      qword_140F069F0[dword_140F0695C] += MEMORY[0xFFFFF78000000008] - qword_140F069E8;
      qword_140F069E8 = 0LL;
    }
    if ( dword_140F06958 )
    {
      qword_140F069D8 += v2 - qword_140F069E0;
      qword_140F069E0 = 0LL;
    }
    v4 = &xmmword_140F06AD0;
    do
    {
      result = *((unsigned int *)v4 - 92);
      *(_DWORD *)v4 -= result;
      v4 = (__int128 *)((char *)v4 + 4);
      --v3;
    }
    while ( v3 );
  }
  byte_140F069D0 = a2;
  return result;
}
