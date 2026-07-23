/*
 * XREFs of NtQueryIoRingCapabilities @ 0x14070B830
 * Callers:
 *     <none>
 * Callees:
 *     IopExceptionFilter @ 0x140592C78 (IopExceptionFilter.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtQueryIoRingCapabilities(SIZE_T IoRingCapabilitiesLength, PVOID IoRingCapabilities)
{
  char PreviousMode; // dl

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned int)IoRingCapabilitiesLength < 0x14 )
    return -1073741789;
  if ( PreviousMode )
    ProbeForWrite(IoRingCapabilities, (unsigned int)IoRingCapabilitiesLength, 1u);
  *(_DWORD *)IoRingCapabilities = 400;
  *((_DWORD *)IoRingCapabilities + 1) = 9;
  *((_DWORD *)IoRingCapabilities + 2) = 2;
  *((_DWORD *)IoRingCapabilities + 3) = 0x10000;
  *((_DWORD *)IoRingCapabilities + 4) = 0x20000;
  return 0;
}
