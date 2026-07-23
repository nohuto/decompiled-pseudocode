/*
 * XREFs of ExpGetSystemEmulationBasicInformation @ 0x140463660
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemEmulationBasicInformation(__int64 a1)
{
  __int64 v2; // r8
  __int64 Blink_high; // r9
  int AffinityPrimaryGroup; // ecx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int v10; // r9d
  int v11; // eax
  int v12; // eax

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
  v8 = Blink_high;
  v9 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + Blink_high) + 18512LL);
  v10 = -1;
  v11 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v11 = v9;
  *(_DWORD *)(a1 + 12) = v11;
  v12 = -1;
  if ( *(_QWORD *)(*((_QWORD *)qword_140E300C8 + v8) + 18496LL) <= 0xFFFFFFFFuLL )
    v12 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + v8) + 18496LL);
  *(_DWORD *)(a1 + 16) = v12;
  if ( *(_QWORD *)(*((_QWORD *)qword_140E300C8 + v8) + 18504LL) <= 0xFFFFFFFFuLL )
    v10 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + v8) + 18504LL);
  *(_DWORD *)(a1 + 20) = v10;
  return 0LL;
}
