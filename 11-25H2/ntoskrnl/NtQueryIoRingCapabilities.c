/*
 * XREFs of NtQueryIoRingCapabilities @ 0x14070B830
 * Callers:
 *     <none>
 * Callees:
 *     IopExceptionFilter @ 0x140592C78 (IopExceptionFilter.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

__int64 __fastcall NtQueryIoRingCapabilities(SIZE_T Length, _DWORD *Address)
{
  char PreviousMode; // dl

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)Length < 0x14 )
    return 3221225507LL;
  if ( PreviousMode )
    ProbeForWrite(Address, (unsigned int)Length, 1u);
  *Address = 400;
  Address[1] = 9;
  Address[2] = 2;
  Address[3] = 0x10000;
  Address[4] = 0x20000;
  return 0LL;
}
