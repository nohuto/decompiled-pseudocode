/*
 * XREFs of ExpGetSystemBasicInformation @ 0x140445844
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall ExpGetSystemBasicInformation(__int64 a1)
{
  __int64 Blink_high; // r8
  int AffinityPrimaryGroup; // ecx
  unsigned __int64 v4; // rcx
  int v5; // r9d
  int v6; // eax
  int v7; // eax

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
  v5 = -1;
  v6 = -1;
  if ( *(_QWORD *)(*((_QWORD *)qword_140E300C8 + Blink_high) + 18512LL) <= 0xFFFFFFFFuLL )
    v6 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + Blink_high) + 18512LL);
  *(_DWORD *)(a1 + 12) = v6;
  v7 = -1;
  if ( *(_QWORD *)(*((_QWORD *)qword_140E300C8 + Blink_high) + 18496LL) <= 0xFFFFFFFFuLL )
    v7 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + Blink_high) + 18496LL);
  *(_DWORD *)(a1 + 16) = v7;
  if ( *(_QWORD *)(*((_QWORD *)qword_140E300C8 + Blink_high) + 18504LL) <= 0xFFFFFFFFuLL )
    v5 = *(_QWORD *)(*((_QWORD *)qword_140E300C8 + Blink_high) + 18504LL);
  *(_DWORD *)(a1 + 20) = v5;
  return 0LL;
}
