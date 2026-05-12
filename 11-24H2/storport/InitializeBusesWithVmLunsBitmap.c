/*
 * XREFs of InitializeBusesWithVmLunsBitmap @ 0x14000E3DC
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1400430C0 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall InitializeBusesWithVmLunsBitmap(__int64 a1)
{
  ULONG **v1; // rsi
  unsigned int v2; // ebx
  unsigned int v4; // edi
  ULONG *Pool; // rax

  v1 = (ULONG **)(a1 + 4880);
  v2 = 0;
  v4 = (*(unsigned __int8 *)(a1 + 456) >> 5) + 1;
  if ( (*(_BYTE *)(a1 + 456) & 0x1F) == 0 )
    v4 = *(unsigned __int8 *)(a1 + 456) >> 5;
  if ( *(char *)(a1 + 110) < 0 && (Pool = *v1) != 0LL
    || (Pool = (ULONG *)RaidAllocatePool(64LL, 4LL * v4, 1297506642LL, *(_QWORD *)(a1 + 8)), (*v1 = Pool) != 0LL) )
  {
    RtlInitializeBitMap((PRTL_BITMAP)(a1 + 4864), Pool, 32 * v4);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
