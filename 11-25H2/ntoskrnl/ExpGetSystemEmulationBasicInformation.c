/*
 * XREFs of ExpGetSystemEmulationBasicInformation @ 0x14046B528
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x1407A7AE0 (ExSystemExceptionFilter.c)
 *     MmGetNumberOfPhysicalPages @ 0x140A0A990 (MmGetNumberOfPhysicalPages.c)
 */

__int64 __fastcall ExpGetSystemEmulationBasicInformation(__int64 a1)
{
  __int64 v2; // r8
  __int64 Blink_high; // rsi
  int AffinityPrimaryGroup; // ecx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 NumberOfPhysicalPages; // rcx
  int v9; // r9d
  int v10; // eax
  int v11; // eax

  v2 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].PrimaryGroup;
  Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
  AffinityPrimaryGroup = KeGetCurrentThread()->AffinityPrimaryGroup;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = KeMaximumIncrement;
  *(_DWORD *)(a1 + 8) = 4096;
  *(_DWORD *)(a1 + 24) = 0x10000;
  if ( (unsigned __int16)AffinityPrimaryGroup >= KeActiveProcessors.Count )
  {
    LODWORD(v5) = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = KeActiveProcessors.Bitmap[AffinityPrimaryGroup];
    v6 = v5;
  }
  v7 = (unsigned int)v5 | HIDWORD(v6);
  *(_QWORD *)(a1 + 48) = v7;
  *(_BYTE *)(a1 + 56) = __popcnt(v7);
  *(_QWORD *)(a1 + 32) = 0x10000LL;
  *(_QWORD *)(a1 + 40) = v2 - 1;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages((unsigned __int16)Blink_high);
  v9 = -1;
  v10 = -1;
  if ( NumberOfPhysicalPages <= 0xFFFFFFFF )
    v10 = NumberOfPhysicalPages;
  *(_DWORD *)(a1 + 12) = v10;
  v11 = -1;
  if ( *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + Blink_high) + 18496LL) <= 0xFFFFFFFFuLL )
    v11 = *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + Blink_high) + 18496LL);
  *(_DWORD *)(a1 + 16) = v11;
  if ( *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + Blink_high) + 18504LL) <= 0xFFFFFFFFuLL )
    v9 = *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + Blink_high) + 18504LL);
  *(_DWORD *)(a1 + 20) = v9;
  return 0LL;
}
