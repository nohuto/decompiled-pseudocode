/*
 * XREFs of ExtEnvClearBits @ 0x14055FC68
 * Callers:
 *     HsaInitializeInterruptRemapping @ 0x140B52B68 (HsaInitializeInterruptRemapping.c)
 * Callees:
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 */

void __fastcall ExtEnvClearBits(RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlClearBits(a1, a2, a3);
}
