/*
 * XREFs of ExtEnvClearBits @ 0x14055D368
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140B42B68 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
