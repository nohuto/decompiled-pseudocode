/*
 * XREFs of KiFlushCurrentRsb @ 0x1406BF940
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1403EA960 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140444B20 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x1404D1D60 (KiFlushRsbTarget.c)
 *     KiHandleMcheck @ 0x1405B7610 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x1405B7670 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x1405BD4E0 (KeFlushRsb.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1406BF940 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x1406BF940
 * Reason: Hex-Rays returned no pseudocode for 0x1406BF940
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BF940: sub     rsp, 8
 * 00000001406BF944: pushfq
 * 00000001406BF945: cli
 * 00000001406BF946: call    loc_1406BFA59
 * 00000001406BF94B: add     rsp, 8
 * 00000001406BF94F: call    loc_1406BFA62
 * 00000001406BF954: add     rsp, 8
 * 00000001406BF958: call    loc_1406BF94B
 * 00000001406BF95D: add     rsp, 8
 * 00000001406BF961: call    loc_1406BF954
 * 00000001406BF966: add     rsp, 8
 * 00000001406BF96A: call    loc_1406BF95D
 * 00000001406BF96F: add     rsp, 8
 * 00000001406BF973: call    loc_1406BF966
 * 00000001406BF978: add     rsp, 8
 * 00000001406BF97C: call    loc_1406BF96F
 * 00000001406BF981: add     rsp, 8
 * 00000001406BF985: call    loc_1406BF978
 * 00000001406BF98A: add     rsp, 8
 * 00000001406BF98E: call    loc_1406BF981
 * 00000001406BF993: add     rsp, 8
 * 00000001406BF997: call    loc_1406BF98A
 * 00000001406BF99C: add     rsp, 8
 * 00000001406BF9A0: call    loc_1406BF993
 * 00000001406BF9A5: add     rsp, 8
 * 00000001406BF9A9: call    loc_1406BF99C
 * 00000001406BF9AE: add     rsp, 8
 * 00000001406BF9B2: call    loc_1406BF9A5
 * 00000001406BF9B7: add     rsp, 8
 * 00000001406BF9BB: call    loc_1406BF9AE
 * 00000001406BF9C0: add     rsp, 8
 * 00000001406BF9C4: call    loc_1406BF9B7
 * 00000001406BF9C9: add     rsp, 8
 * 00000001406BF9CD: call    loc_1406BF9C0
 * 00000001406BF9D2: add     rsp, 8
 * 00000001406BF9D6: call    loc_1406BF9C9
 * 00000001406BF9DB: add     rsp, 8
 * 00000001406BF9DF: call    loc_1406BF9D2
 * 00000001406BF9E4: add     rsp, 8
 * 00000001406BF9E8: call    loc_1406BF9DB
 * 00000001406BF9ED: add     rsp, 8
 * 00000001406BF9F1: call    loc_1406BF9E4
 * 00000001406BF9F6: add     rsp, 8
 * 00000001406BF9FA: call    loc_1406BF9ED
 * 00000001406BF9FF: add     rsp, 8
 * 00000001406BFA03: call    loc_1406BF9F6
 * 00000001406BFA08: add     rsp, 8
 * 00000001406BFA0C: call    loc_1406BF9FF
 * 00000001406BFA11: add     rsp, 8
 * 00000001406BFA15: call    loc_1406BFA08
 * 00000001406BFA1A: add     rsp, 8
 * 00000001406BFA1E: call    loc_1406BFA11
 * 00000001406BFA23: add     rsp, 8
 * 00000001406BFA27: call    loc_1406BFA1A
 * 00000001406BFA2C: add     rsp, 8
 * 00000001406BFA30: call    loc_1406BFA23
 * 00000001406BFA35: add     rsp, 8
 * 00000001406BFA39: call    loc_1406BFA2C
 * 00000001406BFA3E: add     rsp, 8
 * 00000001406BFA42: call    loc_1406BFA35
 * 00000001406BFA47: add     rsp, 8
 * 00000001406BFA4B: call    loc_1406BFA3E
 * 00000001406BFA50: add     rsp, 8
 * 00000001406BFA54: call    loc_1406BFA47
 * 00000001406BFA59: add     rsp, 8
 * 00000001406BFA5D: call    loc_1406BFA50
 * 00000001406BFA62: add     rsp, 8
 * 00000001406BFA66: mov     eax, 0DADAh
 * 00000001406BFA6B: test    byte ptr gs:85Ch, 8
 * 00000001406BFA74: jz      short loc_1406BFA7D
 * 00000001406BFA76: mov     al, 20h ; ' '
 * 00000001406BFA78: incsspq rax
 * 00000001406BFA7D: lfence
 * 00000001406BFA80: bt      [rsp-0F0h+arg_E8], 9
 * 00000001406BFA86: jnb     short loc_1406BFA89
 * 00000001406BFA88: sti
 * 00000001406BFA89: add     rsp, 10h
 * 00000001406BFA8D: retn
 */
