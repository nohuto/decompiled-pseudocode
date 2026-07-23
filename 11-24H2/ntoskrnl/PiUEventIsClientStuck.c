/*
 * XREFs of PiUEventIsClientStuck @ 0x140ABF1A0
 * Callers:
 *     PiUEventNotifyClient @ 0x1408D0228 (PiUEventNotifyClient.c)
 * Callees:
 *     PiUEventIsProcessFrozen @ 0x140722774 (PiUEventIsProcessFrozen.c)
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
