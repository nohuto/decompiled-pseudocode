/*
 * XREFs of NvmeControllerDeleteExtendedCommandsInZombieList @ 0x1401292B4
 * Callers:
 *     NvmeAdapterDeleteNvmeController @ 0x1400E141C (NvmeAdapterDeleteNvmeController.c)
 *     NvmeControllerPowerUp @ 0x1400F2E00 (NvmeControllerPowerUp.c)
 *     NvmeControllerReinitialize @ 0x1400F3C7C (NvmeControllerReinitialize.c)
 * Callees:
 *     NvmeControllerFreeExtendedCommand @ 0x1401293D8 (NvmeControllerFreeExtendedCommand.c)
 */

struct _SLIST_ENTRY *__fastcall NvmeControllerDeleteExtendedCommandsInZombieList(__int64 a1)
{
  union _SLIST_HEADER *v1; // rdi
  struct _SLIST_ENTRY *result; // rax
  unsigned int v4; // esi
  union _SLIST_HEADER *v5; // rdi
  struct _SLIST_ENTRY *v6; // rax

  v1 = (union _SLIST_HEADER *)(a1 + 1168);
  for ( result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 1168)); result; result = ExpInterlockedPopEntrySList(v1) )
  {
    if ( ((__int64)result[-1].Next[266].Next & 0x4000) != 0 || !**(_DWORD **)(a1 + 1288) )
      NvmeControllerFreeExtendedCommand(a1, &result[-1]);
    else
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1152), result);
  }
  if ( *(_QWORD *)(a1 + 1184) )
  {
    v4 = 0;
    if ( *(_WORD *)(a1 + 22) )
    {
      do
      {
        v5 = (union _SLIST_HEADER *)(*(_QWORD *)(a1 + 1184) + 16LL * v4);
        if ( v5 )
        {
          while ( 1 )
          {
            v6 = ExpInterlockedPopEntrySList(v5);
            if ( !v6 )
              break;
            if ( ((__int64)v6[-1].Next[266].Next & 0x4000) != 0 || !**(_DWORD **)(a1 + 1288) )
              NvmeControllerFreeExtendedCommand(a1, &v6[-1]);
            else
              ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1152), v6);
          }
        }
        result = (struct _SLIST_ENTRY *)*(unsigned __int16 *)(a1 + 22);
        ++v4;
      }
      while ( v4 < (unsigned int)result );
    }
  }
  return result;
}
