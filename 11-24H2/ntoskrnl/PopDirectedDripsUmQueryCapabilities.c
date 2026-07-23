/*
 * XREFs of PopDirectedDripsUmQueryCapabilities @ 0x1407643E0
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1406F6004 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopDirectedDripsQueryMitigationStatus @ 0x140A7D508 (PopDirectedDripsQueryMitigationStatus.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopDirectedDripsUmQueryCapabilities(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _BYTE *Pool2; // rdi
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v7 = 0;
  Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL, 2uLL, 0x206D654Du);
  if ( Pool2 )
  {
    PopDirectedDripsQueryMitigationStatus(&v7, 0LL, 0LL);
    if ( (v7 & 1) != 0 )
      *Pool2 = 1;
    if ( (v7 & 2) != 0 )
      Pool2[1] = 1;
    *a1 = 2;
    *a2 = Pool2;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
