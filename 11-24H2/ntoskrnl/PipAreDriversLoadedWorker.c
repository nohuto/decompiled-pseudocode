/*
 * XREFs of PipAreDriversLoadedWorker @ 0x14045B9FC
 * Callers:
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PipAreDriversLoaded @ 0x1404DD238 (PipAreDriversLoaded.c)
 *     PipRestoreDevNodeState @ 0x1404DD2C0 (PipRestoreDevNodeState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipAreDriversLoadedWorker(int a1, int a2)
{
  __int64 result; // rax

  while ( 2 )
  {
    switch ( a1 )
    {
      case 773:
      case 774:
      case 775:
      case 776:
      case 777:
      case 778:
      case 779:
      case 780:
      case 781:
      case 782:
      case 783:
      case 785:
      case 786:
      case 787:
      case 789:
        result = 1LL;
        break;
      case 784:
        a1 = a2;
        a2 = 768;
        continue;
      default:
        result = 0LL;
        break;
    }
    break;
  }
  return result;
}
