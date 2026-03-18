/*
 * XREFs of ExpGetSystemBasicInformation @ 0x14044DD04
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x1407A7AE0 (ExSystemExceptionFilter.c)
 *     MmGetNumberOfPhysicalPages @ 0x140A0A990 (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall ExpGetSystemBasicInformation(__int64 a1)
{
  __int64 Blink_high; // rsi
  int AffinityPrimaryGroup; // ecx
  unsigned __int64 v4; // rcx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  int v6; // r9d
  int v7; // eax
  int v8; // eax

  Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
  AffinityPrimaryGroup = KeGetCurrentThread()->AffinityPrimaryGroup;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = 0x7FFFFFFEFFFFLL;
  if ( (unsigned __int16)AffinityPrimaryGroup >= KeActiveProcessors.Count )
    v4 = 0LL;
  else
    v4 = KeActiveProcessors.Bitmap[AffinityPrimaryGroup];
  *(_QWORD *)(a1 + 48) = v4;
  *(_BYTE *)(a1 + 56) = __popcnt(v4);
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages((unsigned __int16)Blink_high);
  v6 = -1;
  v7 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v7 = NumberOfPhysicalPages;
  *(_DWORD *)(a1 + 12) = v7;
  v8 = -1;
  if ( *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + Blink_high) + 18496LL) <= 0xFFFFFFFFuLL )
    v8 = *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + Blink_high) + 18496LL);
  *(_DWORD *)(a1 + 16) = v8;
  if ( *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + Blink_high) + 18504LL) <= 0xFFFFFFFFuLL )
    v6 = *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + Blink_high) + 18504LL);
  *(_DWORD *)(a1 + 20) = v6;
  return 0LL;
}
