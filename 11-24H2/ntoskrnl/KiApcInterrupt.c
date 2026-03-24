/*
 * XREFs of KiApcInterrupt @ 0x1406AF140
 * Callers:
 *     KiApcInterruptShadow @ 0x140BBBC40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     HalPerformEndOfInterrupt @ 0x140418370 (HalPerformEndOfInterrupt.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x1406AF140 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x1406AF140
 * Reason: Hex-Rays returned no pseudocode for 0x1406AF140
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AF140: sub     rsp, 8
 * 00000001406AF144: push    rbp
 * 00000001406AF145: push    rsi
 * 00000001406AF146: sub     rsp, 150h
 * 00000001406AF14D: lea     rbp, [rsp+80h]
 * 00000001406AF155: mov     [rbp+0E8h+var_13D], 0
 * 00000001406AF159: mov     [rbp+0E8h+var_138], rax
 * 00000001406AF15D: mov     [rbp+0E8h+var_130], rcx
 * 00000001406AF161: mov     [rbp+0E8h+var_128], rdx
 * 00000001406AF165: mov     [rbp+0E8h+var_120], r8
 * 00000001406AF169: mov     [rbp+0E8h+var_118], r9
 * 00000001406AF16D: mov     [rbp+0E8h+var_110], r10
 * 00000001406AF171: mov     [rbp+0E8h+var_108], r11
 * 00000001406AF175: test    [rbp+0E8h+arg_0], 1
 * 00000001406AF17C: jnz     short loc_1406AF1B6
 * 00000001406AF17E: xor     edx, edx
 * 00000001406AF180: rdsspq  rdx
 * 00000001406AF185: mov     [rbp+0E8h+var_90], rdx
 * 00000001406AF189: lfence
 * 00000001406AF18C: test    byte ptr gs:858h, 1
 * 00000001406AF195: jnz     short loc_1406AF19F
 * 00000001406AF197: lfence
 * 00000001406AF19A: jmp     loc_1406AF427
 * 00000001406AF19F: movzx   eax, word ptr gs:866h
 * 00000001406AF1A8: mov     ecx, 48h ; 'H'
 * 00000001406AF1AD: xor     edx, edx
 * 00000001406AF1AF: wrmsr
 * 00000001406AF1B1: jmp     loc_1406AF427
 * 00000001406AF1B6: test    cs:KiKvaShadow, 1
 * 00000001406AF1BD: jnz     short loc_1406AF1C2
 * 00000001406AF1BF: swapgs
 * 00000001406AF1C2: lfence
 * 00000001406AF1C5: mov     rcx, gs:9D28h
 * 00000001406AF1CE: test    rcx, rcx
 * 00000001406AF1D1: jz      short loc_1406AF1F2
 * 00000001406AF1D3: rdsspq  rdx
 * 00000001406AF1D8: mov     r10, gs:9D20h
 * 00000001406AF1E1: add     r10, 8
 * 00000001406AF1E5: cmp     rdx, r10
 * 00000001406AF1E8: jnz     short loc_1406AF1F2
 * 00000001406AF1EA: rstorssp qword ptr [rcx]
 * 00000001406AF1EE: saveprevssp
 * 00000001406AF1F2: mov     r10, gs:188h
 * 00000001406AF1FB: mov     rcx, gs:188h
 * 00000001406AF204: mov     rcx, [rcx+220h]
 * 00000001406AF20B: mov     rcx, [rcx+760h]
 * 00000001406AF212: mov     gs:850h, rcx
 * 00000001406AF21B: mov     cx, gs:862h
 * 00000001406AF224: mov     gs:864h, cx
 * 00000001406AF22D: mov     cl, gs:858h
 * 00000001406AF235: mov     gs:85Ah, cl
 * 00000001406AF23D: movzx   eax, word ptr gs:868h
 * 00000001406AF246: cmp     gs:866h, ax
 * 00000001406AF24F: jz      short loc_1406AF263
 * 00000001406AF251: mov     gs:866h, ax
 * 00000001406AF25A: mov     ecx, 48h ; 'H'
 * 00000001406AF25F: xor     edx, edx
 * 00000001406AF261: wrmsr
 * 00000001406AF263: movzx   edx, byte ptr gs:858h
 * 00000001406AF26C: test    edx, 8
 * 00000001406AF272: jz      short loc_1406AF28B
 * 00000001406AF274: mov     eax, 1
 * 00000001406AF279: xor     edx, edx
 * 00000001406AF27B: mov     ecx, 49h ; 'I'
 * 00000001406AF280: wrmsr
 * 00000001406AF282: movzx   edx, byte ptr gs:858h
 * 00000001406AF28B: test    edx, 2
 * 00000001406AF291: jz      loc_1406AF3CE
 * 00000001406AF297: call    loc_1406AF3AA
 * 00000001406AF29C: add     rsp, 8
 * 00000001406AF2A0: call    loc_1406AF3B3
 * 00000001406AF2A5: add     rsp, 8
 * 00000001406AF2A9: call    loc_1406AF29C
 * 00000001406AF2AE: add     rsp, 8
 * 00000001406AF2B2: call    loc_1406AF2A5
 * 00000001406AF2B7: add     rsp, 8
 * 00000001406AF2BB: call    loc_1406AF2AE
 * 00000001406AF2C0: add     rsp, 8
 * 00000001406AF2C4: call    loc_1406AF2B7
 * 00000001406AF2C9: add     rsp, 8
 * 00000001406AF2CD: call    loc_1406AF2C0
 * 00000001406AF2D2: add     rsp, 8
 * 00000001406AF2D6: call    loc_1406AF2C9
 * 00000001406AF2DB: add     rsp, 8
 * 00000001406AF2DF: call    loc_1406AF2D2
 * 00000001406AF2E4: add     rsp, 8
 * 00000001406AF2E8: call    loc_1406AF2DB
 * 00000001406AF2ED: add     rsp, 8
 * 00000001406AF2F1: call    loc_1406AF2E4
 * 00000001406AF2F6: add     rsp, 8
 * 00000001406AF2FA: call    loc_1406AF2ED
 * 00000001406AF2FF: add     rsp, 8
 * 00000001406AF303: call    loc_1406AF2F6
 * 00000001406AF308: add     rsp, 8
 * 00000001406AF30C: call    loc_1406AF2FF
 * 00000001406AF311: add     rsp, 8
 * 00000001406AF315: call    loc_1406AF308
 * 00000001406AF31A: add     rsp, 8
 * 00000001406AF31E: call    loc_1406AF311
 * 00000001406AF323: add     rsp, 8
 * 00000001406AF327: call    loc_1406AF31A
 * 00000001406AF32C: add     rsp, 8
 * 00000001406AF330: call    loc_1406AF323
 * 00000001406AF335: add     rsp, 8
 * 00000001406AF339: call    loc_1406AF32C
 * 00000001406AF33E: add     rsp, 8
 * 00000001406AF342: call    loc_1406AF335
 * 00000001406AF347: add     rsp, 8
 * 00000001406AF34B: call    loc_1406AF33E
 * 00000001406AF350: add     rsp, 8
 * 00000001406AF354: call    loc_1406AF347
 * 00000001406AF359: add     rsp, 8
 * 00000001406AF35D: call    loc_1406AF350
 * 00000001406AF362: add     rsp, 8
 * 00000001406AF366: call    loc_1406AF359
 * 00000001406AF36B: add     rsp, 8
 * 00000001406AF36F: call    loc_1406AF362
 * 00000001406AF374: add     rsp, 8
 * 00000001406AF378: call    loc_1406AF36B
 * 00000001406AF37D: add     rsp, 8
 * 00000001406AF381: call    loc_1406AF374
 * 00000001406AF386: add     rsp, 8
 * 00000001406AF38A: call    loc_1406AF37D
 * 00000001406AF38F: add     rsp, 8
 * 00000001406AF393: call    loc_1406AF386
 * 00000001406AF398: add     rsp, 8
 * 00000001406AF39C: call    loc_1406AF38F
 * 00000001406AF3A1: add     rsp, 8
 * 00000001406AF3A5: call    loc_1406AF398
 * 00000001406AF3AA: add     rsp, 8
 * 00000001406AF3AE: call    loc_1406AF3A1
 * 00000001406AF3B3: add     rsp, 8
 * 00000001406AF3B7: mov     eax, 0DADAh
 * 00000001406AF3BC: test    byte ptr gs:85Ch, 8
 * 00000001406AF3C5: jz      short loc_1406AF3CE
 * 00000001406AF3C7: mov     al, 20h ; ' '
 * 00000001406AF3C9: incsspq rax
 * 00000001406AF3CE: test    edx, 80h
 * 00000001406AF3D4: jz      short loc_1406AF3DE
 * 00000001406AF3D6: lfence
 * 00000001406AF3D9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AF3DE: lfence
 * 00000001406AF3E1: mov     byte ptr gs:85Eh, 0
 * 00000001406AF3EA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AF3F1: jz      short loc_1406AF412
 * 00000001406AF3F3: mov     ecx, 6A7h
 * 00000001406AF3F8: rdmsr
 * 00000001406AF3FA: cmp     edx, 0
 * 00000001406AF3FD: jz      short loc_1406AF412
 * 00000001406AF3FF: mov     ecx, edx
 * 00000001406AF401: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AF407: cmp     edx, ecx
 * 00000001406AF409: jz      short loc_1406AF412
 * 00000001406AF40B: mov     ecx, 6A7h
 * 00000001406AF410: wrmsr
 * 00000001406AF412: test    byte ptr [r10+3], 3
 * 00000001406AF417: mov     [rbp+0E8h+var_68], 0
 * 00000001406AF420: jz      short loc_1406AF427
 * 00000001406AF422: call    KiSaveDebugRegisterState
 * 00000001406AF427: cld
 * 00000001406AF428: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406AF42C: ldmxcsr dword ptr gs:180h
 * 00000001406AF435: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406AF439: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406AF43D: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406AF441: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406AF445: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406AF449: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406AF44D: test    [rbp+0E8h+arg_0], 1
 * 00000001406AF454: jz      short loc_1406AF45B
 * 00000001406AF456: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AF45B: xor     esi, esi
 * 00000001406AF45D: inc     dword ptr gs:87C0h
 * 00000001406AF465: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AF46C: jz      short loc_1406AF47A
 * 00000001406AF46E: test    [rbp+0E8h+arg_0], 1
 * 00000001406AF475: jz      short loc_1406AF47A
 * 00000001406AF477: stac
 * 00000001406AF47A: test    cs:KiAmdTprLowerInterruptDelayDynamicWorkaround, 1
 * 00000001406AF481: jz      short loc_1406AF4A7
 * 00000001406AF483: btr     dword ptr gs:228h, 1
 * 00000001406AF48D: cmp     dword ptr gs:228h, 0
 * 00000001406AF496: jnz     short loc_1406AF4A7
 * 00000001406AF498: mov     ecx, 0C0010015h
 * 00000001406AF49D: rdmsr
 * 00000001406AF49F: btr     edx, 0
 * 00000001406AF4A3: jnb     short loc_1406AF4A7
 * 00000001406AF4A5: wrmsr
 * 00000001406AF4A7: mov     ecx, 1
 * 00000001406AF4AC: cmp     cs:KiIrqlFlags, 0
 * 00000001406AF4B3: jz      short loc_1406AF4BC
 * 00000001406AF4B5: call    KzSetIrqlUnsafe
 * 00000001406AF4BA: jmp     short loc_1406AF4C4
 * 00000001406AF4BC: mov     rax, cr8
 * 00000001406AF4C0: mov     cr8, rcx
 * 00000001406AF4C4: mov     [rbp+0E8h+var_13F], al
 * 00000001406AF4C7: mov     rcx, rsi
 * 00000001406AF4CA: call    HalPerformEndOfInterrupt
 * 00000001406AF4CF: sti
 * 00000001406AF4D0: cmp     byte ptr gs:187h, 0
 * 00000001406AF4D9: jnz     short loc_1406AF4EB
 * 00000001406AF4DB: mov     ecx, 0
 * 00000001406AF4E0: xor     edx, edx
 * 00000001406AF4E2: lea     r8, [rbp+0E8h+var_168]
 * 00000001406AF4E6: call    KiDeliverApc
 * 00000001406AF4EB: cli
 * 00000001406AF4EC: movzx   ecx, [rbp+0E8h+var_13F]
 * 00000001406AF4F0: cmp     cs:KiIrqlFlags, 0
 * 00000001406AF4F7: jz      short loc_1406AF500
 * 00000001406AF4F9: call    KzSetIrqlUnsafe
 * 00000001406AF4FE: jmp     short loc_1406AF504
 * 00000001406AF500: mov     cr8, rcx
 * 00000001406AF504: mov     rsi, [rbp+0E8h+var_18]
 * 00000001406AF50B: cli
 * 00000001406AF50C: test    [rbp+0E8h+arg_0], 1
 * 00000001406AF513: jz      loc_1406AF80E
 * 00000001406AF519: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AF520: jz      short loc_1406AF525
 * 00000001406AF522: stac
 * 00000001406AF525: mov     rcx, gs:188h
 * 00000001406AF52E: test    byte ptr [rcx+0C2h], 3
 * 00000001406AF535: jz      short loc_1406AF552
 * 00000001406AF537: mov     ecx, 1
 * 00000001406AF53C: mov     cr8, rcx
 * 00000001406AF540: sti
 * 00000001406AF541: call    KiInitiateUserApc
 * 00000001406AF546: cli
 * 00000001406AF547: mov     ecx, 0
 * 00000001406AF54C: mov     cr8, rcx
 * 00000001406AF550: jmp     short loc_1406AF525
 * 00000001406AF552: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AF557: test    eax, eax
 * 00000001406AF559: mov     rax, [rbp+0E8h+var_138]
 * 00000001406AF55D: jnz     short loc_1406AF525
 * 00000001406AF55F: test    byte ptr gs:860h, 2
 * 00000001406AF568: jz      short loc_1406AF571
 * 00000001406AF56A: xor     ecx, ecx
 * 00000001406AF56C: call    KiUpdateStibpPairing
 * 00000001406AF571: mov     rcx, gs:188h
 * 00000001406AF57A: test    dword ptr [rcx], 8000000h
 * 00000001406AF580: jz      short loc_1406AF587
 * 00000001406AF582: call    KiRestoreSetContextState
 * 00000001406AF587: mov     rcx, gs:188h
 * 00000001406AF590: test    dword ptr [rcx], 10000h
 * 00000001406AF596: jz      short loc_1406AF5AC
 * 00000001406AF598: test    byte ptr [rcx+2], 1
 * 00000001406AF59C: jz      short loc_1406AF5AC
 * 00000001406AF59E: call    KiCopyCounters
 * 00000001406AF5A3: mov     rcx, gs:188h
 * 00000001406AF5AC: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406AF5B0: cmp     [rbp+0E8h+var_68], 0
 * 00000001406AF5B8: jz      short loc_1406AF5BF
 * 00000001406AF5BA: call    KiRestoreDebugRegisterState
 * 00000001406AF5BF: mov     rcx, gs:188h
 * 00000001406AF5C8: bt      dword ptr [rcx+74h], 16h
 * 00000001406AF5CD: jnb     short loc_1406AF5F9
 * 00000001406AF5CF: xor     ecx, ecx
 * 00000001406AF5D1: rdsspq  rcx
 * 00000001406AF5D6: mov     r8, gs:9D28h
 * 00000001406AF5DF: add     r8, 8
 * 00000001406AF5E3: cmp     rcx, r8
 * 00000001406AF5E6: jnz     short loc_1406AF5F9
 * 00000001406AF5E8: mov     rcx, gs:9D20h
 * 00000001406AF5F1: rstorssp qword ptr [rcx]
 * 00000001406AF5F5: saveprevssp
 * 00000001406AF5F9: mov     byte ptr gs:85Eh, 0
 * 00000001406AF602: movzx   eax, word ptr gs:86Ch
 * 00000001406AF60B: cmp     gs:866h, ax
 * 00000001406AF614: jz      short loc_1406AF628
 * 00000001406AF616: mov     gs:866h, ax
 * 00000001406AF61F: mov     ecx, 48h ; 'H'
 * 00000001406AF624: xor     edx, edx
 * 00000001406AF626: wrmsr
 * 00000001406AF628: btr     word ptr gs:858h, 2
 * 00000001406AF633: jnb     short loc_1406AF643
 * 00000001406AF635: mov     eax, 1
 * 00000001406AF63A: xor     edx, edx
 * 00000001406AF63C: mov     ecx, 49h ; 'I'
 * 00000001406AF641: wrmsr
 * 00000001406AF643: btr     word ptr gs:858h, 5
 * 00000001406AF64E: jnb     loc_1406AF78B
 * 00000001406AF654: call    loc_1406AF767
 * 00000001406AF659: add     rsp, 8
 * 00000001406AF65D: call    loc_1406AF770
 * 00000001406AF662: add     rsp, 8
 * 00000001406AF666: call    loc_1406AF659
 * 00000001406AF66B: add     rsp, 8
 * 00000001406AF66F: call    loc_1406AF662
 * 00000001406AF674: add     rsp, 8
 * 00000001406AF678: call    loc_1406AF66B
 * 00000001406AF67D: add     rsp, 8
 * 00000001406AF681: call    loc_1406AF674
 * 00000001406AF686: add     rsp, 8
 * 00000001406AF68A: call    loc_1406AF67D
 * 00000001406AF68F: add     rsp, 8
 * 00000001406AF693: call    loc_1406AF686
 * 00000001406AF698: add     rsp, 8
 * 00000001406AF69C: call    loc_1406AF68F
 * 00000001406AF6A1: add     rsp, 8
 * 00000001406AF6A5: call    loc_1406AF698
 * 00000001406AF6AA: add     rsp, 8
 * 00000001406AF6AE: call    loc_1406AF6A1
 * 00000001406AF6B3: add     rsp, 8
 * 00000001406AF6B7: call    loc_1406AF6AA
 * 00000001406AF6BC: add     rsp, 8
 * 00000001406AF6C0: call    loc_1406AF6B3
 * 00000001406AF6C5: add     rsp, 8
 * 00000001406AF6C9: call    loc_1406AF6BC
 * 00000001406AF6CE: add     rsp, 8
 * 00000001406AF6D2: call    loc_1406AF6C5
 * 00000001406AF6D7: add     rsp, 8
 * 00000001406AF6DB: call    loc_1406AF6CE
 * 00000001406AF6E0: add     rsp, 8
 * 00000001406AF6E4: call    loc_1406AF6D7
 * 00000001406AF6E9: add     rsp, 8
 * 00000001406AF6ED: call    loc_1406AF6E0
 * 00000001406AF6F2: add     rsp, 8
 * 00000001406AF6F6: call    loc_1406AF6E9
 * 00000001406AF6FB: add     rsp, 8
 * 00000001406AF6FF: call    loc_1406AF6F2
 * 00000001406AF704: add     rsp, 8
 * 00000001406AF708: call    loc_1406AF6FB
 * 00000001406AF70D: add     rsp, 8
 * 00000001406AF711: call    loc_1406AF704
 * 00000001406AF716: add     rsp, 8
 * 00000001406AF71A: call    loc_1406AF70D
 * 00000001406AF71F: add     rsp, 8
 * 00000001406AF723: call    loc_1406AF716
 * 00000001406AF728: add     rsp, 8
 * 00000001406AF72C: call    loc_1406AF71F
 * 00000001406AF731: add     rsp, 8
 * 00000001406AF735: call    loc_1406AF728
 * 00000001406AF73A: add     rsp, 8
 * 00000001406AF73E: call    loc_1406AF731
 * 00000001406AF743: add     rsp, 8
 * 00000001406AF747: call    loc_1406AF73A
 * 00000001406AF74C: add     rsp, 8
 * 00000001406AF750: call    loc_1406AF743
 * 00000001406AF755: add     rsp, 8
 * 00000001406AF759: call    loc_1406AF74C
 * 00000001406AF75E: add     rsp, 8
 * 00000001406AF762: call    loc_1406AF755
 * 00000001406AF767: add     rsp, 8
 * 00000001406AF76B: call    loc_1406AF75E
 * 00000001406AF770: add     rsp, 8
 * 00000001406AF774: mov     eax, 0DADAh
 * 00000001406AF779: test    byte ptr gs:85Ch, 8
 * 00000001406AF782: jz      short loc_1406AF78B
 * 00000001406AF784: mov     al, 20h ; ' '
 * 00000001406AF786: incsspq rax
 * 00000001406AF78B: test    word ptr gs:858h, 100h
 * 00000001406AF796: jz      short loc_1406AF7A4
 * 00000001406AF798: xor     eax, eax
 * 00000001406AF79A: xor     edx, edx
 * 00000001406AF79C: mov     ecx, 1
 * 00000001406AF7A1: div     rcx
 * 00000001406AF7A4: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406AF7A8: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406AF7AC: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406AF7B0: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406AF7B4: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406AF7B8: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406AF7BC: mov     r11, [rbp+0E8h+var_108]
 * 00000001406AF7C0: mov     r10, [rbp+0E8h+var_110]
 * 00000001406AF7C4: mov     r9, [rbp+0E8h+var_118]
 * 00000001406AF7C8: mov     r8, [rbp+0E8h+var_120]
 * 00000001406AF7CC: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406AF7D0: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406AF7D4: mov     rax, [rbp+0E8h+var_138]
 * 00000001406AF7D8: mov     rsp, rbp
 * 00000001406AF7DB: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406AF7E2: add     rsp, 0E8h
 * 00000001406AF7E9: test    cs:KiKvaShadow, 1
 * 00000001406AF7F0: jz      short loc_1406AF7F7
 * 00000001406AF7F2: jmp     KiKernelExit
 * 00000001406AF7F7: test    word ptr gs:858h, 200h
 * 00000001406AF802: jz      short loc_1406AF809
 * 00000001406AF804: verw    [rsp+arg_18]
 * 00000001406AF809: swapgs
 * 00000001406AF80C: iretq
 * 00000001406AF80E: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406AF812: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406AF816: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406AF81A: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406AF81E: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406AF822: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406AF826: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406AF82A: mov     r11, [rbp+0E8h+var_108]
 * 00000001406AF82E: mov     r10, [rbp+0E8h+var_110]
 * 00000001406AF832: mov     r9, [rbp+0E8h+var_118]
 * 00000001406AF836: mov     r8, [rbp+0E8h+var_120]
 * 00000001406AF83A: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406AF83E: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406AF842: mov     rax, [rbp+0E8h+var_138]
 * 00000001406AF846: mov     rsp, rbp
 * 00000001406AF849: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406AF850: add     rsp, 0E8h
 * 00000001406AF857: iretq
 */
