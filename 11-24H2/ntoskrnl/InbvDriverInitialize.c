/*
 * XREFs of InbvDriverInitialize @ 0x140C1C230
 * Callers:
 *     KiInitializeBootStructures @ 0x140B5A140 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     _strupr @ 0x1404FAAD0 (_strupr.c)
 *     strstr @ 0x1404FB270 (strstr.c)
 *     InbvDetermineFunction @ 0x14058C2E0 (InbvDetermineFunction.c)
 *     InbvSetFunction @ 0x14058C570 (InbvSetFunction.c)
 *     BvgaDriverInitialize @ 0x140C1C310 (BvgaDriverInitialize.c)
 *     BgkInitialize @ 0x140C71ED8 (BgkInitialize.c)
 */

char __fastcall InbvDriverInitialize(unsigned int a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  int v7; // ecx
  char *v8; // rcx
  char *v9; // rax

  v6 = 1;
  if ( (unsigned int)InbvDetermineFunction(a2) != 2 )
  {
    if ( (int)BgkInitialize(a2, a1) < 0 )
    {
      v6 = 0;
      v7 = 3;
      BvgaDisplayState = 0;
    }
    else
    {
      BvgaDisplayState = 2;
      v7 = 4;
    }
    InbvSetFunction(v7);
  }
  v8 = *(char **)(a2 + 216);
  if ( !v8 )
    return BvgaDriverInitialize(a1, a2, a3);
  v9 = strupr(v8);
  if ( !strstr(v9, "NOVGA") )
    return BvgaDriverInitialize(a1, a2, a3);
  return v6;
}
