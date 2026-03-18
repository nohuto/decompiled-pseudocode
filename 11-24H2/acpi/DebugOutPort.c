/*
 * XREFs of DebugOutPort @ 0x14006E040
 * Callers:
 *     DebugO @ 0x14006DFE0 (DebugO.c)
 *     DebugOD @ 0x14006E000 (DebugOD.c)
 *     DebugOW @ 0x14006E020 (DebugOW.c)
 * Callees:
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     WriteSystemIO @ 0x140021A80 (WriteSystemIO.c)
 *     _strtoui64_0 @ 0x140056779 (_strtoui64_0.c)
 *     IsNumber @ 0x14006E528 (IsNumber.c)
 */

__int64 __fastcall DebugOutPort(const char *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi

  v2 = 0;
  if ( !a1 )
  {
    if ( dword_1400892E8 == 2 )
    {
LABEL_9:
      dword_1400892E8 = 0;
      return v2;
    }
LABEL_8:
    PrintDebugMessage(0xE0u, 0LL, 0LL, 0LL, 0LL);
    v2 = -2;
    goto LABEL_9;
  }
  v5 = strtoui64_0(a1, 0LL, 16);
  if ( ++dword_1400892E8 > 2 || !(unsigned __int8)IsNumber(a1, 16LL) )
    goto LABEL_8;
  if ( dword_1400892E8 == 1 )
    dword_1400892E4 = v5;
  else
    WriteSystemIO(dword_1400892E4, a2, v5);
  return v2;
}
