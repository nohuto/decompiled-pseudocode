/*
 * XREFs of KiFlushCurrentRsb @ 0x1406C0840
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1403DEE10 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14043CDE0 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x1404CADA0 (KiFlushRsbTarget.c)
 *     KiHandleMcheck @ 0x1405B4BE0 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x1405B4C40 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x1405BAB10 (KeFlushRsb.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1406C0840 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x1406C0840
 * Reason: Hex-Rays returned no pseudocode for 0x1406C0840
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406C0840: sub     rsp, 8
 * 00000001406C0844: pushfq
 * 00000001406C0845: cli
 * 00000001406C0846: call    loc_1406C0959
 * 00000001406C084B: add     rsp, 8
 * 00000001406C084F: call    loc_1406C0962
 * 00000001406C0854: add     rsp, 8
 * 00000001406C0858: call    loc_1406C084B
 * 00000001406C085D: add     rsp, 8
 * 00000001406C0861: call    loc_1406C0854
 * 00000001406C0866: add     rsp, 8
 * 00000001406C086A: call    loc_1406C085D
 * 00000001406C086F: add     rsp, 8
 * 00000001406C0873: call    loc_1406C0866
 * 00000001406C0878: add     rsp, 8
 * 00000001406C087C: call    loc_1406C086F
 * 00000001406C0881: add     rsp, 8
 * 00000001406C0885: call    loc_1406C0878
 * 00000001406C088A: add     rsp, 8
 * 00000001406C088E: call    loc_1406C0881
 * 00000001406C0893: add     rsp, 8
 * 00000001406C0897: call    loc_1406C088A
 * 00000001406C089C: add     rsp, 8
 * 00000001406C08A0: call    loc_1406C0893
 * 00000001406C08A5: add     rsp, 8
 * 00000001406C08A9: call    loc_1406C089C
 * 00000001406C08AE: add     rsp, 8
 * 00000001406C08B2: call    loc_1406C08A5
 * 00000001406C08B7: add     rsp, 8
 * 00000001406C08BB: call    loc_1406C08AE
 * 00000001406C08C0: add     rsp, 8
 * 00000001406C08C4: call    loc_1406C08B7
 * 00000001406C08C9: add     rsp, 8
 * 00000001406C08CD: call    loc_1406C08C0
 * 00000001406C08D2: add     rsp, 8
 * 00000001406C08D6: call    loc_1406C08C9
 * 00000001406C08DB: add     rsp, 8
 * 00000001406C08DF: call    loc_1406C08D2
 * 00000001406C08E4: add     rsp, 8
 * 00000001406C08E8: call    loc_1406C08DB
 * 00000001406C08ED: add     rsp, 8
 * 00000001406C08F1: call    loc_1406C08E4
 * 00000001406C08F6: add     rsp, 8
 * 00000001406C08FA: call    loc_1406C08ED
 * 00000001406C08FF: add     rsp, 8
 * 00000001406C0903: call    loc_1406C08F6
 * 00000001406C0908: add     rsp, 8
 * 00000001406C090C: call    loc_1406C08FF
 * 00000001406C0911: add     rsp, 8
 * 00000001406C0915: call    loc_1406C0908
 * 00000001406C091A: add     rsp, 8
 * 00000001406C091E: call    loc_1406C0911
 * 00000001406C0923: add     rsp, 8
 * 00000001406C0927: call    loc_1406C091A
 * 00000001406C092C: add     rsp, 8
 * 00000001406C0930: call    loc_1406C0923
 * 00000001406C0935: add     rsp, 8
 * 00000001406C0939: call    loc_1406C092C
 * 00000001406C093E: add     rsp, 8
 * 00000001406C0942: call    loc_1406C0935
 * 00000001406C0947: add     rsp, 8
 * 00000001406C094B: call    loc_1406C093E
 * 00000001406C0950: add     rsp, 8
 * 00000001406C0954: call    loc_1406C0947
 * 00000001406C0959: add     rsp, 8
 * 00000001406C095D: call    loc_1406C0950
 * 00000001406C0962: add     rsp, 8
 * 00000001406C0966: mov     eax, 0DADAh
 * 00000001406C096B: test    byte ptr gs:85Ch, 8
 * 00000001406C0974: jz      short loc_1406C097D
 * 00000001406C0976: mov     al, 20h ; ' '
 * 00000001406C0978: incsspq rax
 * 00000001406C097D: lfence
 * 00000001406C0980: bt      [rsp-0F0h+arg_E8], 9
 * 00000001406C0986: jnb     short loc_1406C0989
 * 00000001406C0988: sti
 * 00000001406C0989: add     rsp, 10h
 * 00000001406C098D: retn
 */
