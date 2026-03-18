/*
 * XREFs of PiUEventIsClientStuck @ 0x140AC381C
 * Callers:
 *     PiUEventNotifyClient @ 0x1408D2838 (PiUEventNotifyClient.c)
 * Callees:
 *     PiUEventIsProcessFrozen @ 0x140724BE4 (PiUEventIsProcessFrozen.c)
 */

bool __fastcall PiUEventIsClientStuck(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(_DWORD *)(a1 + 128)
    && *(unsigned int *)(a1 + 128)
     * ((MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(a1 + 112) + 16LL))
      / 10000LL) > 600000 )
  {
    return !PiUEventIsProcessFrozen(*(void **)(a1 + 48));
  }
  return v1;
}
