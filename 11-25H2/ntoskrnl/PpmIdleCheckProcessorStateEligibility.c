/*
 * XREFs of PpmIdleCheckProcessorStateEligibility @ 0x1405C9FB4
 * Callers:
 *     PpmIdleSelectStates @ 0x1404B1F28 (PpmIdleSelectStates.c)
 *     PpmIdleSelectCoordinatedProcessorDependency @ 0x1405CA548 (PpmIdleSelectCoordinatedProcessorDependency.c)
 * Callees:
 *     PpmCheckIdleVeto @ 0x1405C97AC (PpmCheckIdleVeto.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmIdleCheckProcessorStateEligibility(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  __int64 v6; // r10
  __int64 result; // rax
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r11

  v6 = *(_QWORD *)(a1 + 34880);
  if ( *(_DWORD *)(v6 + 44) == 3 && PpmIdleVetoBias )
    return 4294967294LL;
  v10 = 344LL * a5;
  if ( *(_BYTE *)(v10 + v6 + 1399) )
    return 2147483658LL;
  if ( a2 != -1 && a5 > a2 )
    return 2147483656LL;
  if ( !*(_BYTE *)(v10 + v6 + 1394) && *(_BYTE *)(v6 + 715) )
    return 2147483655LL;
  if ( a6 )
    goto LABEL_19;
  v11 = PpmCheckIdleVeto(v10 + v6 + 1352);
  if ( v11 )
    return v11 | 0x100000000LL;
  if ( (unsigned int)(a3 + *(_DWORD *)(v12 + v6 + 1336)) > *(_DWORD *)(v13 + 34936) )
    return 2147483650LL;
  if ( *(unsigned int *)(v12 + v6 + 1340) > a4 )
    return 2147483651LL;
LABEL_19:
  result = *(_QWORD *)(v6 + 632);
  if ( result )
    return (unsigned int)guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 664));
  return result;
}
