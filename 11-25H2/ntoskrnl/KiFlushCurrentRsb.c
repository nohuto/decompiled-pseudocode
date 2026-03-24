/*
 * XREFs of KiFlushCurrentRsb @ 0x1406B4640
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1403E3170 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x1404434F0 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x1404D1E10 (KiFlushRsbTarget.c)
 *     KiHandleMcheck @ 0x1405B3750 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x1405B37B0 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x1405B9694 (KeFlushRsb.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1406B4640 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x1406B4640
 * Reason: Hex-Rays returned no pseudocode for 0x1406B4640
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B4640: sub     rsp, 8
 * 00000001406B4644: pushfq
 * 00000001406B4645: cli
 * 00000001406B4646: call    loc_1406B4759
 * 00000001406B464B: add     rsp, 8
 * 00000001406B464F: call    loc_1406B4762
 * 00000001406B4654: add     rsp, 8
 * 00000001406B4658: call    loc_1406B464B
 * 00000001406B465D: add     rsp, 8
 * 00000001406B4661: call    loc_1406B4654
 * 00000001406B4666: add     rsp, 8
 * 00000001406B466A: call    loc_1406B465D
 * 00000001406B466F: add     rsp, 8
 * 00000001406B4673: call    loc_1406B4666
 * 00000001406B4678: add     rsp, 8
 * 00000001406B467C: call    loc_1406B466F
 * 00000001406B4681: add     rsp, 8
 * 00000001406B4685: call    loc_1406B4678
 * 00000001406B468A: add     rsp, 8
 * 00000001406B468E: call    loc_1406B4681
 * 00000001406B4693: add     rsp, 8
 * 00000001406B4697: call    loc_1406B468A
 * 00000001406B469C: add     rsp, 8
 * 00000001406B46A0: call    loc_1406B4693
 * 00000001406B46A5: add     rsp, 8
 * 00000001406B46A9: call    loc_1406B469C
 * 00000001406B46AE: add     rsp, 8
 * 00000001406B46B2: call    loc_1406B46A5
 * 00000001406B46B7: add     rsp, 8
 * 00000001406B46BB: call    loc_1406B46AE
 * 00000001406B46C0: add     rsp, 8
 * 00000001406B46C4: call    loc_1406B46B7
 * 00000001406B46C9: add     rsp, 8
 * 00000001406B46CD: call    loc_1406B46C0
 * 00000001406B46D2: add     rsp, 8
 * 00000001406B46D6: call    loc_1406B46C9
 * 00000001406B46DB: add     rsp, 8
 * 00000001406B46DF: call    loc_1406B46D2
 * 00000001406B46E4: add     rsp, 8
 * 00000001406B46E8: call    loc_1406B46DB
 * 00000001406B46ED: add     rsp, 8
 * 00000001406B46F1: call    loc_1406B46E4
 * 00000001406B46F6: add     rsp, 8
 * 00000001406B46FA: call    loc_1406B46ED
 * 00000001406B46FF: add     rsp, 8
 * 00000001406B4703: call    loc_1406B46F6
 * 00000001406B4708: add     rsp, 8
 * 00000001406B470C: call    loc_1406B46FF
 * 00000001406B4711: add     rsp, 8
 * 00000001406B4715: call    loc_1406B4708
 * 00000001406B471A: add     rsp, 8
 * 00000001406B471E: call    loc_1406B4711
 * 00000001406B4723: add     rsp, 8
 * 00000001406B4727: call    loc_1406B471A
 * 00000001406B472C: add     rsp, 8
 * 00000001406B4730: call    loc_1406B4723
 * 00000001406B4735: add     rsp, 8
 * 00000001406B4739: call    loc_1406B472C
 * 00000001406B473E: add     rsp, 8
 * 00000001406B4742: call    loc_1406B4735
 * 00000001406B4747: add     rsp, 8
 * 00000001406B474B: call    loc_1406B473E
 * 00000001406B4750: add     rsp, 8
 * 00000001406B4754: call    loc_1406B4747
 * 00000001406B4759: add     rsp, 8
 * 00000001406B475D: call    loc_1406B4750
 * 00000001406B4762: add     rsp, 8
 * 00000001406B4766: mov     eax, 0DADAh
 * 00000001406B476B: test    byte ptr gs:85Ch, 8
 * 00000001406B4774: jz      short loc_1406B477D
 * 00000001406B4776: mov     al, 20h ; ' '
 * 00000001406B4778: incsspq rax
 * 00000001406B477D: lfence
 * 00000001406B4780: bt      [rsp-0F0h+arg_E8], 9
 * 00000001406B4786: jnb     short loc_1406B4789
 * 00000001406B4788: sti
 * 00000001406B4789: add     rsp, 10h
 * 00000001406B478D: retn
 */
