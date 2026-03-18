/*
 * XREFs of PopDirectedDripsDiagPnpActionQueueAccountingUpdateUnsafe @ 0x14049E4C8
 * Callers:
 *     PopDirectedDripsDiagPnpActionQueueAccountingUpdate @ 0x14049E47C (PopDirectedDripsDiagPnpActionQueueAccountingUpdate.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x1404A4A08 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
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
    if ( dword_140F0609C != 28 )
      qword_140F06128 = MEMORY[0xFFFFF78000000008];
    if ( dword_140F06098 )
      qword_140F06120 = MEMORY[0xFFFFF78000000008];
    v6 = &xmmword_140F06210;
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
    if ( dword_140F0609C != 28 )
    {
      qword_140F06130[dword_140F0609C] += MEMORY[0xFFFFF78000000008] - qword_140F06128;
      qword_140F06128 = 0LL;
    }
    if ( dword_140F06098 )
    {
      qword_140F06118 += v2 - qword_140F06120;
      qword_140F06120 = 0LL;
    }
    v4 = &xmmword_140F06210;
    do
    {
      result = *((unsigned int *)v4 - 92);
      *(_DWORD *)v4 -= result;
      v4 = (__int128 *)((char *)v4 + 4);
      --v3;
    }
    while ( v3 );
  }
  byte_140F06110 = a2;
  return result;
}
