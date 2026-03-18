/*
 * XREFs of InbvDriverInitialize @ 0x140C1A1F0
 * Callers:
 *     KiInitializeBootStructures @ 0x140B580C0 (KiInitializeBootStructures.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     _strupr @ 0x1404FD210 (_strupr.c)
 *     strstr @ 0x1404FD9B0 (strstr.c)
 *     InbvDetermineFunction @ 0x14058F2C0 (InbvDetermineFunction.c)
 *     InbvSetFunction @ 0x14058F550 (InbvSetFunction.c)
 *     BvgaDriverInitialize @ 0x140C1A2D0 (BvgaDriverInitialize.c)
 *     BgkInitialize @ 0x140C6FD78 (BgkInitialize.c)
 */

char __fastcall InbvDriverInitialize(unsigned int a1, __int64 a2, unsigned int a3)
{
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  char *v11; // rcx
  char *v12; // rax

  v6 = 1;
  if ( (unsigned int)InbvDetermineFunction(a2) != 2 )
  {
    if ( (int)BgkInitialize(a2, a1) < 0 )
    {
      v6 = 0;
      v10 = 3;
      BvgaDisplayState = 0;
    }
    else
    {
      BvgaDisplayState = 2;
      v10 = 4;
    }
    InbvSetFunction(v10, v7, v8, v9);
  }
  v11 = *(char **)(a2 + 216);
  if ( !v11 )
    return BvgaDriverInitialize(a1, a2, a3);
  v12 = strupr(v11);
  if ( !strstr(v12, "NOVGA") )
    return BvgaDriverInitialize(a1, a2, a3);
  return v6;
}
