/*
 * XREFs of KiSystemCall64 @ 0x1406BED40
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403C31F0 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x1403C3340 (PerfInfoLogSysCallEntry.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x1406AD550 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x1406BED40 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BFC00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiTrackSystemCallEntry @ 0x14073B390 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x14073B4B0 (KiTrackSystemCallExit.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 *     PsSyscallProviderDispatch @ 0x140A98970 (PsSyscallProviderDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x1406BED40
 * Reason: Hex-Rays returned no pseudocode for 0x1406BED40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BED40: swapgs
 * 00000001406BED43: mov     gs:10h, rsp
 * 00000001406BED4C: mov     rsp, gs:1A8h
 * 00000001406BED55: push    2Bh ; '+'
 * 00000001406BED57: push    qword ptr gs:10h
 * 00000001406BED5F: push    r11
 * 00000001406BED61: push    33h ; '3'
 * 00000001406BED63: push    rcx
 * 00000001406BED64: mov     rcx, gs:9D28h
 * 00000001406BED6D: test    rcx, rcx
 * 00000001406BED70: jz      short loc_1406BED7E
 * 00000001406BED72: setssbsy
 * 00000001406BED76: rstorssp qword ptr [rcx]
 * 00000001406BED7A: saveprevssp
 * 00000001406BED7E: mov     rcx, r10
 * 00000001406BED81: sub     rsp, 8
 * 00000001406BED85: push    rbp
 * 00000001406BED86: sub     rsp, 158h
 * 00000001406BED8D: lea     rbp, [rsp+190h+var_110]
 * 00000001406BED95: mov     [rbp+0C0h], rbx
 * 00000001406BED9C: mov     [rbp+0C8h], rdi
 * 00000001406BEDA3: mov     [rbp+0D0h], rsi
 * 00000001406BEDAA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BEDB1: jz      short loc_1406BEDBF
 * 00000001406BEDB3: test    byte ptr [rbp+0F0h], 1
 * 00000001406BEDBA: jz      short loc_1406BEDBF
 * 00000001406BEDBC: stac
 * 00000001406BEDBF: mov     [rbp-50h], rax
 * 00000001406BEDC3: mov     [rbp-48h], rcx
 * 00000001406BEDC7: mov     [rbp-40h], rdx
 * 00000001406BEDCB: mov     rcx, gs:188h
 * 00000001406BEDD4: mov     rcx, [rcx+220h]
 * 00000001406BEDDB: mov     rcx, [rcx+760h]
 * 00000001406BEDE2: mov     gs:850h, rcx
 * 00000001406BEDEB: mov     cx, gs:862h
 * 00000001406BEDF4: mov     gs:864h, cx
 * 00000001406BEDFD: mov     cl, gs:858h
 * 00000001406BEE05: mov     gs:85Ah, cl
 * 00000001406BEE0D: movzx   eax, word ptr gs:868h
 * 00000001406BEE16: cmp     gs:866h, ax
 * 00000001406BEE1F: jz      short loc_1406BEE33
 * 00000001406BEE21: mov     gs:866h, ax
 * 00000001406BEE2A: mov     ecx, 48h ; 'H'
 * 00000001406BEE2F: xor     edx, edx
 * 00000001406BEE31: wrmsr
 * 00000001406BEE33: movzx   edx, byte ptr gs:858h
 * 00000001406BEE3C: test    edx, 8
 * 00000001406BEE42: jz      short loc_1406BEE5B
 * 00000001406BEE44: mov     eax, 1
 * 00000001406BEE49: xor     edx, edx
 * 00000001406BEE4B: mov     ecx, 49h ; 'I'
 * 00000001406BEE50: wrmsr
 * 00000001406BEE52: movzx   edx, byte ptr gs:858h
 * 00000001406BEE5B: test    edx, 2
 * 00000001406BEE61: jz      loc_1406BEF9E
 * 00000001406BEE67: call    loc_1406BEF7A
 * 00000001406BEE6C: add     rsp, 8
 * 00000001406BEE70: call    loc_1406BEF83
 * 00000001406BEE75: add     rsp, 8
 * 00000001406BEE79: call    loc_1406BEE6C
 * 00000001406BEE7E: add     rsp, 8
 * 00000001406BEE82: call    loc_1406BEE75
 * 00000001406BEE87: add     rsp, 8
 * 00000001406BEE8B: call    loc_1406BEE7E
 * 00000001406BEE90: add     rsp, 8
 * 00000001406BEE94: call    loc_1406BEE87
 * 00000001406BEE99: add     rsp, 8
 * 00000001406BEE9D: call    loc_1406BEE90
 * 00000001406BEEA2: add     rsp, 8
 * 00000001406BEEA6: call    loc_1406BEE99
 * 00000001406BEEAB: add     rsp, 8
 * 00000001406BEEAF: call    loc_1406BEEA2
 * 00000001406BEEB4: add     rsp, 8
 * 00000001406BEEB8: call    loc_1406BEEAB
 * 00000001406BEEBD: add     rsp, 8
 * 00000001406BEEC1: call    loc_1406BEEB4
 * 00000001406BEEC6: add     rsp, 8
 * 00000001406BEECA: call    loc_1406BEEBD
 * 00000001406BEECF: add     rsp, 8
 * 00000001406BEED3: call    loc_1406BEEC6
 * 00000001406BEED8: add     rsp, 8
 * 00000001406BEEDC: call    loc_1406BEECF
 * 00000001406BEEE1: add     rsp, 8
 * 00000001406BEEE5: call    loc_1406BEED8
 * 00000001406BEEEA: add     rsp, 8
 * 00000001406BEEEE: call    loc_1406BEEE1
 * 00000001406BEEF3: add     rsp, 8
 * 00000001406BEEF7: call    loc_1406BEEEA
 * 00000001406BEEFC: add     rsp, 8
 * 00000001406BEF00: call    loc_1406BEEF3
 * 00000001406BEF05: add     rsp, 8
 * 00000001406BEF09: call    loc_1406BEEFC
 * 00000001406BEF0E: add     rsp, 8
 * 00000001406BEF12: call    loc_1406BEF05
 * 00000001406BEF17: add     rsp, 8
 * 00000001406BEF1B: call    loc_1406BEF0E
 * 00000001406BEF20: add     rsp, 8
 * 00000001406BEF24: call    loc_1406BEF17
 * 00000001406BEF29: add     rsp, 8
 * 00000001406BEF2D: call    loc_1406BEF20
 * 00000001406BEF32: add     rsp, 8
 * 00000001406BEF36: call    loc_1406BEF29
 * 00000001406BEF3B: add     rsp, 8
 * 00000001406BEF3F: call    loc_1406BEF32
 * 00000001406BEF44: add     rsp, 8
 * 00000001406BEF48: call    loc_1406BEF3B
 * 00000001406BEF4D: add     rsp, 8
 * 00000001406BEF51: call    loc_1406BEF44
 * 00000001406BEF56: add     rsp, 8
 * 00000001406BEF5A: call    loc_1406BEF4D
 * 00000001406BEF5F: add     rsp, 8
 * 00000001406BEF63: call    loc_1406BEF56
 * 00000001406BEF68: add     rsp, 8
 * 00000001406BEF6C: call    loc_1406BEF5F
 * 00000001406BEF71: add     rsp, 8
 * 00000001406BEF75: call    loc_1406BEF68
 * 00000001406BEF7A: add     rsp, 8
 * 00000001406BEF7E: call    loc_1406BEF71
 * 00000001406BEF83: add     rsp, 8
 * 00000001406BEF87: mov     eax, 0DADAh
 * 00000001406BEF8C: test    byte ptr gs:85Ch, 8
 * 00000001406BEF95: jz      short loc_1406BEF9E
 * 00000001406BEF97: mov     al, 20h ; ' '
 * 00000001406BEF99: incsspq rax
 * 00000001406BEF9E: test    edx, 80h
 * 00000001406BEFA4: jz      short loc_1406BEFAE
 * 00000001406BEFA6: lfence
 * 00000001406BEFA9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BEFAE: lfence
 * 00000001406BEFB1: mov     byte ptr gs:85Eh, 0
 * 00000001406BEFBA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BEFC1: jz      short KiSystemServiceUser
 * 00000001406BEFC3: mov     ecx, 6A7h
 * 00000001406BEFC8: rdmsr
 * 00000001406BEFCA: cmp     edx, 0
 * 00000001406BEFCD: jz      short KiSystemServiceUser
 * 00000001406BEFCF: mov     ecx, edx
 * 00000001406BEFD1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BEFD7: cmp     edx, ecx
 * 00000001406BEFD9: jz      short KiSystemServiceUser
 * 00000001406BEFDB: mov     ecx, 6A7h
 * 00000001406BEFE0: wrmsr
 * 00000001406BEFE2: mov     byte ptr [rbp-55h], 2
 * 00000001406BEFE6: mov     byte ptr [rbp-58h], 1
 * 00000001406BEFEA: mov     rbx, gs:188h
 * 00000001406BEFF3: mov     byte ptr [rbx+232h], 1
 * 00000001406BEFFA: prefetchw byte ptr [rbx+90h]
 * 00000001406BF001: stmxcsr dword ptr [rbp-54h]
 * 00000001406BF005: ldmxcsr dword ptr gs:180h
 * 00000001406BF00E: mov     [rbp-38h], r8
 * 00000001406BF012: mov     [rbp-30h], r9
 * 00000001406BF016: mov     [rbp-20h], r10
 * 00000001406BF01A: mov     [rbp-28h], r10
 * 00000001406BF01E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BF022: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BF026: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BF02A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BF02E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BF032: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BF036: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BF03B: cmp     byte ptr [rbx+3], 0
 * 00000001406BF03F: mov     word ptr [rbp+80h], 0
 * 00000001406BF048: jz      short loc_1406BF098
 * 00000001406BF04A: test    byte ptr [rbx+3], 3
 * 00000001406BF04E: jz      short loc_1406BF055
 * 00000001406BF050: call    KiSaveDebugRegisterState
 * 00000001406BF055: test    byte ptr [rbx+3], 24h
 * 00000001406BF059: jz      short loc_1406BF098
 * 00000001406BF05B: sti
 * 00000001406BF05C: mov     [rbx+90h], rsp
 * 00000001406BF063: mov     rcx, rsp
 * 00000001406BF066: call    PsSyscallProviderDispatch
 * 00000001406BF06B: cmp     al, 1
 * 00000001406BF06D: jz      short loc_1406BF098
 * 00000001406BF06F: mov     rax, [rbp-50h]
 * 00000001406BF073: jl      short loc_1406BF089
 * 00000001406BF075: mov     ecx, 0C000001Ch
 * 00000001406BF07A: xor     edx, edx
 * 00000001406BF07C: mov     r8, [rbp+0E8h]
 * 00000001406BF083: call    KiExceptionDispatch
 * 00000001406BF088: int     3; Trap to Debugger
 * 00000001406BF089: test    byte ptr [rbx+3], 4
 * 00000001406BF08D: jz      KiSystemServiceExit
 * 00000001406BF093: jmp     KiSystemServiceExitPico
 * 00000001406BF098: mov     r8, [rbp-38h]
 * 00000001406BF09C: mov     r9, [rbp-30h]
 * 00000001406BF0A0: mov     rax, [rbp-50h]
 * 00000001406BF0A4: mov     rcx, [rbp-48h]
 * 00000001406BF0A8: mov     rdx, [rbp-40h]
 * 00000001406BF0AC: sti
 * 00000001406BF0AD: mov     [rbx+88h], rcx
 * 00000001406BF0B4: mov     [rbx+80h], eax
 * 00000001406BF0BA: nop     word ptr [rax+rax+00h]
 * 00000001406BF0C0: mov     [rbx+90h], rsp
 * 00000001406BF0C7: mov     edi, eax
 * 00000001406BF0C9: shr     edi, 7
 * 00000001406BF0CC: and     edi, 20h
 * 00000001406BF0CF: and     eax, 0FFFh
 * 00000001406BF0D4: lea     r10, KeServiceDescriptorTable
 * 00000001406BF0DB: lea     r11, KeServiceDescriptorTableShadow
 * 00000001406BF0E2: test    dword ptr [rbx+78h], 80h
 * 00000001406BF0E9: jz      short loc_1406BF0FE
 * 00000001406BF0EB: test    dword ptr [rbx+78h], 200000h
 * 00000001406BF0F2: jz      short loc_1406BF0FB
 * 00000001406BF0F4: lea     r11, KeServiceDescriptorTableFilter
 * 00000001406BF0FB: mov     r10, r11
 * 00000001406BF0FE: cmp     eax, [r10+rdi+10h]
 * 00000001406BF103: jnb     loc_1406BF9C7
 * 00000001406BF109: mov     r10, [r10+rdi]
 * 00000001406BF10D: movsxd  r11, dword ptr [r10+rax*4]
 * 00000001406BF111: mov     rax, r11
 * 00000001406BF114: sar     r11, 4
 * 00000001406BF118: add     r10, r11
 * 00000001406BF11B: cmp     edi, 20h ; ' '
 * 00000001406BF11E: jnz     short loc_1406BF170
 * 00000001406BF120: mov     r11, [rbx+0F0h]
 * 00000001406BF127: cmp     dword ptr [r11+1740h], 0
 * 00000001406BF12F: jz      short loc_1406BF170
 * 00000001406BF131: mov     [rbp-50h], rax
 * 00000001406BF135: mov     [rbp-48h], rcx
 * 00000001406BF139: mov     [rbp-40h], rdx
 * 00000001406BF13D: mov     rbx, r8
 * 00000001406BF140: mov     rdi, r9
 * 00000001406BF143: mov     rsi, r10
 * 00000001406BF146: mov     ecx, 7
 * 00000001406BF14B: xor     edx, edx
 * 00000001406BF14D: xor     r8, r8
 * 00000001406BF150: xor     r9, r9
 * 00000001406BF153: call    PsInvokeWin32Callout
 * 00000001406BF158: mov     rax, [rbp-50h]
 * 00000001406BF15C: mov     rcx, [rbp-48h]
 * 00000001406BF160: mov     rdx, [rbp-40h]
 * 00000001406BF164: mov     r8, rbx
 * 00000001406BF167: mov     r9, rdi
 * 00000001406BF16A: mov     r10, rsi
 * 00000001406BF16D: nop     dword ptr [rax]
 * 00000001406BF170: and     eax, 0Fh
 * 00000001406BF173: jz      KiSystemServiceCopyEnd
 * 00000001406BF179: shl     eax, 3
 * 00000001406BF17C: lea     rsp, [rsp-70h]
 * 00000001406BF181: lea     rdi, [rsp+100h+var_E8]
 * 00000001406BF186: mov     rsi, [rbp+100h]
 * 00000001406BF18D: lea     rsi, [rsi+20h]
 * 00000001406BF191: test    byte ptr [rbp+0F0h], 1
 * 00000001406BF198: jz      short loc_1406BF1B0
 * 00000001406BF19A: cmp     rsi, cs:MmUserProbeAddress
 * 00000001406BF1A1: cmovnb  rsi, cs:MmUserProbeAddress
 * 00000001406BF1A9: nop     dword ptr [rax+00000000h]
 * 00000001406BF1B0: lea     r11, KiSystemServiceCopyEnd
 * 00000001406BF1B7: sub     r11, rax
 * 00000001406BF1BA: jmp     r11
 * 00000001406BF1C0: mov     rax, [rsi+70h]
 * 00000001406BF1C4: mov     [rdi+70h], rax
 * 00000001406BF1C8: mov     rax, [rsi+68h]
 * 00000001406BF1CC: mov     [rdi+68h], rax
 * 00000001406BF1D0: mov     rax, [rsi+60h]
 * 00000001406BF1D4: mov     [rdi+60h], rax
 * 00000001406BF1D8: mov     rax, [rsi+58h]
 * 00000001406BF1DC: mov     [rdi+58h], rax
 * 00000001406BF1E0: mov     rax, [rsi+50h]
 * 00000001406BF1E4: mov     [rdi+50h], rax
 * 00000001406BF1E8: mov     rax, [rsi+48h]
 * 00000001406BF1EC: mov     [rdi+48h], rax
 * 00000001406BF1F0: mov     rax, [rsi+40h]
 * 00000001406BF1F4: mov     [rdi+40h], rax
 * 00000001406BF1F8: mov     rax, [rsi+38h]
 * 00000001406BF1FC: mov     [rdi+38h], rax
 * 00000001406BF200: mov     rax, [rsi+30h]
 * 00000001406BF204: mov     [rdi+30h], rax
 * 00000001406BF208: mov     rax, [rsi+28h]
 * 00000001406BF20C: mov     [rdi+28h], rax
 * 00000001406BF210: mov     rax, [rsi+20h]
 * 00000001406BF214: mov     [rdi+20h], rax
 * 00000001406BF218: mov     rax, [rsi+18h]
 * 00000001406BF21C: mov     [rdi+18h], rax
 * 00000001406BF220: mov     rax, [rsi+10h]
 * 00000001406BF224: mov     [rdi+10h], rax
 * 00000001406BF228: mov     rax, [rsi+8]
 * 00000001406BF22C: mov     [rdi+8], rax
 * 00000001406BF230: test    cs:KiDynamicTraceMask, 1
 * 00000001406BF23A: jnz     loc_1406BFA86
 * 00000001406BF240: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 00000001406BF24A: jnz     loc_1406BFAFA
 * 00000001406BF250: mov     rax, r10
 * 00000001406BF253: call    rax
 * 00000001406BF255: nop     dword ptr [rax]
 * 00000001406BF258: inc     dword ptr gs:2EB8h
 * 00000001406BF260: mov     rbx, [rbp+0C0h]
 * 00000001406BF267: mov     rdi, [rbp+0C8h]
 * 00000001406BF26E: mov     rsi, [rbp+0D0h]
 * 00000001406BF275: mov     r11, gs:188h
 * 00000001406BF27E: test    byte ptr [rbp+0F0h], 1
 * 00000001406BF285: jz      loc_1406BF67E
 * 00000001406BF28B: mov     rcx, cr8
 * 00000001406BF28F: or      cl, [r11+24Ah]
 * 00000001406BF296: or      ecx, [r11+1E4h]
 * 00000001406BF29D: jnz     loc_1406BFA31
 * 00000001406BF2A3: cmp     byte ptr [r11+232h], 1
 * 00000001406BF2AB: jnz     loc_1406BFA66
 * 00000001406BF2B1: cli
 * 00000001406BF2B2: mov     rcx, gs:188h
 * 00000001406BF2BB: test    byte ptr [rcx+0C2h], 3
 * 00000001406BF2C2: jz      short loc_1406BF31D
 * 00000001406BF2C4: mov     [rbp-50h], rax
 * 00000001406BF2C8: xor     eax, eax
 * 00000001406BF2CA: mov     [rbp-48h], rax
 * 00000001406BF2CE: mov     [rbp-40h], rax
 * 00000001406BF2D2: mov     [rbp-38h], rax
 * 00000001406BF2D6: mov     [rbp-30h], rax
 * 00000001406BF2DA: mov     [rbp-28h], rax
 * 00000001406BF2DE: mov     [rbp-20h], rax
 * 00000001406BF2E2: pxor    xmm0, xmm0
 * 00000001406BF2E6: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BF2EA: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001406BF2EE: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001406BF2F2: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001406BF2F6: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001406BF2FA: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001406BF2FE: mov     ecx, 1
 * 00000001406BF303: mov     cr8, rcx
 * 00000001406BF307: sti
 * 00000001406BF308: call    KiInitiateUserApc
 * 00000001406BF30D: cli
 * 00000001406BF30E: mov     ecx, 0
 * 00000001406BF313: mov     cr8, rcx
 * 00000001406BF317: mov     rax, [rbp-50h]
 * 00000001406BF31B: jmp     short loc_1406BF2B2
 * 00000001406BF31D: mov     [rbp-50h], rax
 * 00000001406BF321: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BF326: test    eax, eax
 * 00000001406BF328: mov     rax, [rbp-50h]
 * 00000001406BF32C: jnz     short loc_1406BF2B2
 * 00000001406BF32E: test    byte ptr gs:860h, 2
 * 00000001406BF337: jz      short loc_1406BF348
 * 00000001406BF339: mov     [rbp-50h], rax
 * 00000001406BF33D: xor     ecx, ecx
 * 00000001406BF33F: call    KiUpdateStibpPairing
 * 00000001406BF344: mov     rax, [rbp-50h]
 * 00000001406BF348: mov     rcx, gs:188h
 * 00000001406BF351: test    dword ptr [rcx], 8000000h
 * 00000001406BF357: jz      short loc_1406BF398
 * 00000001406BF359: mov     [rbp-50h], rax
 * 00000001406BF35D: xor     eax, eax
 * 00000001406BF35F: mov     [rbp-48h], rax
 * 00000001406BF363: mov     [rbp-40h], rax
 * 00000001406BF367: mov     [rbp-38h], rax
 * 00000001406BF36B: mov     [rbp-30h], rax
 * 00000001406BF36F: mov     [rbp-28h], rax
 * 00000001406BF373: mov     [rbp-20h], rax
 * 00000001406BF377: pxor    xmm0, xmm0
 * 00000001406BF37B: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BF37F: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001406BF383: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001406BF387: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001406BF38B: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001406BF38F: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001406BF393: call    KiRestoreSetContextState
 * 00000001406BF398: mov     rcx, gs:188h
 * 00000001406BF3A1: test    dword ptr [rcx], 10000h
 * 00000001406BF3A7: jz      short loc_1406BF3C5
 * 00000001406BF3A9: mov     [rbp-50h], rax
 * 00000001406BF3AD: test    byte ptr [rcx+2], 1
 * 00000001406BF3B1: jz      short loc_1406BF3C1
 * 00000001406BF3B3: call    KiCopyCounters
 * 00000001406BF3B8: mov     rcx, gs:188h
 * 00000001406BF3C1: mov     rax, [rbp-50h]
 * 00000001406BF3C5: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BF3C9: xor     r10, r10
 * 00000001406BF3CC: cmp     word ptr [rbp+80h], 0
 * 00000001406BF3D4: jz      short loc_1406BF417
 * 00000001406BF3D6: mov     [rbp-50h], rax
 * 00000001406BF3DA: call    KiRestoreDebugRegisterState
 * 00000001406BF3DF: mov     rax, gs:188h
 * 00000001406BF3E8: mov     rax, [rax+0B8h]
 * 00000001406BF3EF: mov     rax, [rax+168h]
 * 00000001406BF3F6: or      rax, rax
 * 00000001406BF3F9: jz      short loc_1406BF413
 * 00000001406BF3FB: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001406BF403: jnz     short loc_1406BF413
 * 00000001406BF405: mov     r10, [rbp+0E8h]
 * 00000001406BF40C: mov     [rbp+0E8h], rax
 * 00000001406BF413: mov     rax, [rbp-50h]
 * 00000001406BF417: mov     rcx, gs:188h
 * 00000001406BF420: bt      dword ptr [rcx+74h], 16h
 * 00000001406BF425: jnb     short loc_1406BF451
 * 00000001406BF427: xor     ecx, ecx
 * 00000001406BF429: rdsspq  rcx
 * 00000001406BF42E: mov     r8, gs:9D28h
 * 00000001406BF437: add     r8, 8
 * 00000001406BF43B: cmp     rcx, r8
 * 00000001406BF43E: jnz     short loc_1406BF451
 * 00000001406BF440: mov     rcx, gs:9D20h
 * 00000001406BF449: rstorssp qword ptr [rcx]
 * 00000001406BF44D: saveprevssp
 * 00000001406BF451: mov     [rbp-50h], rax
 * 00000001406BF455: mov     byte ptr gs:85Eh, 0
 * 00000001406BF45E: movzx   eax, word ptr gs:86Ch
 * 00000001406BF467: cmp     gs:866h, ax
 * 00000001406BF470: jz      short loc_1406BF484
 * 00000001406BF472: mov     gs:866h, ax
 * 00000001406BF47B: mov     ecx, 48h ; 'H'
 * 00000001406BF480: xor     edx, edx
 * 00000001406BF482: wrmsr
 * 00000001406BF484: btr     word ptr gs:858h, 2
 * 00000001406BF48F: jnb     short loc_1406BF49F
 * 00000001406BF491: mov     eax, 1
 * 00000001406BF496: xor     edx, edx
 * 00000001406BF498: mov     ecx, 49h ; 'I'
 * 00000001406BF49D: wrmsr
 * 00000001406BF49F: btr     word ptr gs:858h, 5
 * 00000001406BF4AA: jnb     loc_1406BF5E7
 * 00000001406BF4B0: call    loc_1406BF5C3
 * 00000001406BF4B5: add     rsp, 8
 * 00000001406BF4B9: call    loc_1406BF5CC
 * 00000001406BF4BE: add     rsp, 8
 * 00000001406BF4C2: call    loc_1406BF4B5
 * 00000001406BF4C7: add     rsp, 8
 * 00000001406BF4CB: call    loc_1406BF4BE
 * 00000001406BF4D0: add     rsp, 8
 * 00000001406BF4D4: call    loc_1406BF4C7
 * 00000001406BF4D9: add     rsp, 8
 * 00000001406BF4DD: call    loc_1406BF4D0
 * 00000001406BF4E2: add     rsp, 8
 * 00000001406BF4E6: call    loc_1406BF4D9
 * 00000001406BF4EB: add     rsp, 8
 * 00000001406BF4EF: call    loc_1406BF4E2
 * 00000001406BF4F4: add     rsp, 8
 * 00000001406BF4F8: call    loc_1406BF4EB
 * 00000001406BF4FD: add     rsp, 8
 * 00000001406BF501: call    loc_1406BF4F4
 * 00000001406BF506: add     rsp, 8
 * 00000001406BF50A: call    loc_1406BF4FD
 * 00000001406BF50F: add     rsp, 8
 * 00000001406BF513: call    loc_1406BF506
 * 00000001406BF518: add     rsp, 8
 * 00000001406BF51C: call    loc_1406BF50F
 * 00000001406BF521: add     rsp, 8
 * 00000001406BF525: call    loc_1406BF518
 * 00000001406BF52A: add     rsp, 8
 * 00000001406BF52E: call    loc_1406BF521
 * 00000001406BF533: add     rsp, 8
 * 00000001406BF537: call    loc_1406BF52A
 * 00000001406BF53C: add     rsp, 8
 * 00000001406BF540: call    loc_1406BF533
 * 00000001406BF545: add     rsp, 8
 * 00000001406BF549: call    loc_1406BF53C
 * 00000001406BF54E: add     rsp, 8
 * 00000001406BF552: call    loc_1406BF545
 * 00000001406BF557: add     rsp, 8
 * 00000001406BF55B: call    loc_1406BF54E
 * 00000001406BF560: add     rsp, 8
 * 00000001406BF564: call    loc_1406BF557
 * 00000001406BF569: add     rsp, 8
 * 00000001406BF56D: call    loc_1406BF560
 * 00000001406BF572: add     rsp, 8
 * 00000001406BF576: call    loc_1406BF569
 * 00000001406BF57B: add     rsp, 8
 * 00000001406BF57F: call    loc_1406BF572
 * 00000001406BF584: add     rsp, 8
 * 00000001406BF588: call    loc_1406BF57B
 * 00000001406BF58D: add     rsp, 8
 * 00000001406BF591: call    loc_1406BF584
 * 00000001406BF596: add     rsp, 8
 * 00000001406BF59A: call    loc_1406BF58D
 * 00000001406BF59F: add     rsp, 8
 * 00000001406BF5A3: call    loc_1406BF596
 * 00000001406BF5A8: add     rsp, 8
 * 00000001406BF5AC: call    loc_1406BF59F
 * 00000001406BF5B1: add     rsp, 8
 * 00000001406BF5B5: call    loc_1406BF5A8
 * 00000001406BF5BA: add     rsp, 8
 * 00000001406BF5BE: call    loc_1406BF5B1
 * 00000001406BF5C3: add     rsp, 8
 * 00000001406BF5C7: call    loc_1406BF5BA
 * 00000001406BF5CC: add     rsp, 8
 * 00000001406BF5D0: mov     eax, 0DADAh
 * 00000001406BF5D5: test    byte ptr gs:85Ch, 8
 * 00000001406BF5DE: jz      short loc_1406BF5E7
 * 00000001406BF5E0: mov     al, 20h ; ' '
 * 00000001406BF5E2: incsspq rax
 * 00000001406BF5E7: test    word ptr gs:858h, 100h
 * 00000001406BF5F2: jz      short loc_1406BF600
 * 00000001406BF5F4: xor     eax, eax
 * 00000001406BF5F6: xor     edx, edx
 * 00000001406BF5F8: mov     ecx, 1
 * 00000001406BF5FD: div     rcx
 * 00000001406BF600: mov     rax, [rbp-50h]
 * 00000001406BF604: mov     r8, [rbp+100h]
 * 00000001406BF60B: mov     r9, [rbp+0D8h]
 * 00000001406BF612: xor     edx, edx
 * 00000001406BF614: pxor    xmm0, xmm0
 * 00000001406BF618: pxor    xmm1, xmm1
 * 00000001406BF61C: pxor    xmm2, xmm2
 * 00000001406BF620: pxor    xmm3, xmm3
 * 00000001406BF624: pxor    xmm4, xmm4
 * 00000001406BF628: pxor    xmm5, xmm5
 * 00000001406BF62C: mov     rcx, [rbp+0E8h]
 * 00000001406BF633: mov     r11, [rbp+0F8h]
 * 00000001406BF63A: test    cs:KiKvaShadow, 1
 * 00000001406BF641: jnz     KiKernelSysretExit
 * 00000001406BF647: mov     rbp, r9
 * 00000001406BF64A: mov     rsp, r8
 * 00000001406BF64D: xor     r9, r9
 * 00000001406BF650: rdsspq  r9
 * 00000001406BF655: test    r9, r9
 * 00000001406BF658: jz      short loc_1406BF662
 * 00000001406BF65A: clrssbsy qword ptr [r9]
 * 00000001406BF65F: xor     r9, r9
 * 00000001406BF662: test    word ptr gs:858h, 200h
 * 00000001406BF66D: jz      short loc_1406BF678
 * 00000001406BF66F: verw    word ptr gs:0B02Ah
 * 00000001406BF678: swapgs
 * 00000001406BF67B: sysret
 * 00000001406BF67E: mov     rdx, [rbp+0B8h]
 * 00000001406BF685: mov     [r11+90h], rdx
 * 00000001406BF68C: mov     dl, [rbp-58h]
 * 00000001406BF68F: mov     [r11+232h], dl
 * 00000001406BF696: cli
 * 00000001406BF697: mov     rsp, rbp
 * 00000001406BF69A: mov     rbp, [rbp+0D8h]
 * 00000001406BF6A1: mov     rsp, [rsp+90h+arg_68]
 * 00000001406BF6A9: sti
 * 00000001406BF6AA: retn
 * 00000001406BF6AB: mov     r11, gs:188h
 * 00000001406BF6B4: mov     rcx, cr8
 * 00000001406BF6B8: or      cl, [r11+24Ah]
 * 00000001406BF6BF: or      ecx, [r11+1E4h]
 * 00000001406BF6C6: jnz     loc_1406BFA31
 * 00000001406BF6CC: cmp     byte ptr [rbx+232h], 1
 * 00000001406BF6D3: jnz     loc_1406BFA66
 * 00000001406BF6D9: cli
 * 00000001406BF6DA: mov     [rbp-50h], rax
 * 00000001406BF6DE: mov     rcx, gs:188h
 * 00000001406BF6E7: test    byte ptr [rcx+0C2h], 3
 * 00000001406BF6EE: jz      short loc_1406BF70B
 * 00000001406BF6F0: mov     ecx, 1
 * 00000001406BF6F5: mov     cr8, rcx
 * 00000001406BF6F9: sti
 * 00000001406BF6FA: call    KiInitiateUserApc
 * 00000001406BF6FF: mov     ecx, 0
 * 00000001406BF704: mov     cr8, rcx
 * 00000001406BF708: cli
 * 00000001406BF709: jmp     short loc_1406BF6DE
 * 00000001406BF70B: test    byte ptr gs:860h, 2
 * 00000001406BF714: jz      short loc_1406BF71D
 * 00000001406BF716: xor     ecx, ecx
 * 00000001406BF718: call    KiUpdateStibpPairing
 * 00000001406BF71D: mov     rcx, gs:188h
 * 00000001406BF726: test    dword ptr [rcx], 8000000h
 * 00000001406BF72C: jz      short loc_1406BF733
 * 00000001406BF72E: call    KiRestoreSetContextState
 * 00000001406BF733: mov     rcx, gs:188h
 * 00000001406BF73C: test    byte ptr [rcx+2], 1
 * 00000001406BF740: jz      short loc_1406BF750
 * 00000001406BF742: call    KiCopyCounters
 * 00000001406BF747: mov     rcx, gs:188h
 * 00000001406BF750: cmp     word ptr [rbp+80h], 0
 * 00000001406BF758: jz      short loc_1406BF75F
 * 00000001406BF75A: call    KiRestoreDebugRegisterState
 * 00000001406BF75F: mov     rcx, gs:188h
 * 00000001406BF768: bt      dword ptr [rcx+74h], 16h
 * 00000001406BF76D: jnb     short loc_1406BF799
 * 00000001406BF76F: xor     ecx, ecx
 * 00000001406BF771: rdsspq  rcx
 * 00000001406BF776: mov     r8, gs:9D28h
 * 00000001406BF77F: add     r8, 8
 * 00000001406BF783: cmp     rcx, r8
 * 00000001406BF786: jnz     short loc_1406BF799
 * 00000001406BF788: mov     rcx, gs:9D20h
 * 00000001406BF791: rstorssp qword ptr [rcx]
 * 00000001406BF795: saveprevssp
 * 00000001406BF799: mov     byte ptr gs:85Eh, 0
 * 00000001406BF7A2: movzx   eax, word ptr gs:86Ch
 * 00000001406BF7AB: cmp     gs:866h, ax
 * 00000001406BF7B4: jz      short loc_1406BF7C8
 * 00000001406BF7B6: mov     gs:866h, ax
 * 00000001406BF7BF: mov     ecx, 48h ; 'H'
 * 00000001406BF7C4: xor     edx, edx
 * 00000001406BF7C6: wrmsr
 * 00000001406BF7C8: btr     word ptr gs:858h, 2
 * 00000001406BF7D3: jnb     short loc_1406BF7E3
 * 00000001406BF7D5: mov     eax, 1
 * 00000001406BF7DA: xor     edx, edx
 * 00000001406BF7DC: mov     ecx, 49h ; 'I'
 * 00000001406BF7E1: wrmsr
 * 00000001406BF7E3: btr     word ptr gs:858h, 5
 * 00000001406BF7EE: jnb     loc_1406BF92B
 * 00000001406BF7F4: call    loc_1406BF907
 * 00000001406BF7F9: add     rsp, 8
 * 00000001406BF7FD: call    loc_1406BF910
 * 00000001406BF802: add     rsp, 8
 * 00000001406BF806: call    loc_1406BF7F9
 * 00000001406BF80B: add     rsp, 8
 * 00000001406BF80F: call    loc_1406BF802
 * 00000001406BF814: add     rsp, 8
 * 00000001406BF818: call    loc_1406BF80B
 * 00000001406BF81D: add     rsp, 8
 * 00000001406BF821: call    loc_1406BF814
 * 00000001406BF826: add     rsp, 8
 * 00000001406BF82A: call    loc_1406BF81D
 * 00000001406BF82F: add     rsp, 8
 * 00000001406BF833: call    loc_1406BF826
 * 00000001406BF838: add     rsp, 8
 * 00000001406BF83C: call    loc_1406BF82F
 * 00000001406BF841: add     rsp, 8
 * 00000001406BF845: call    loc_1406BF838
 * 00000001406BF84A: add     rsp, 8
 * 00000001406BF84E: call    loc_1406BF841
 * 00000001406BF853: add     rsp, 8
 * 00000001406BF857: call    loc_1406BF84A
 * 00000001406BF85C: add     rsp, 8
 * 00000001406BF860: call    loc_1406BF853
 * 00000001406BF865: add     rsp, 8
 * 00000001406BF869: call    loc_1406BF85C
 * 00000001406BF86E: add     rsp, 8
 * 00000001406BF872: call    loc_1406BF865
 * 00000001406BF877: add     rsp, 8
 * 00000001406BF87B: call    loc_1406BF86E
 * 00000001406BF880: add     rsp, 8
 * 00000001406BF884: call    loc_1406BF877
 * 00000001406BF889: add     rsp, 8
 * 00000001406BF88D: call    loc_1406BF880
 * 00000001406BF892: add     rsp, 8
 * 00000001406BF896: call    loc_1406BF889
 * 00000001406BF89B: add     rsp, 8
 * 00000001406BF89F: call    loc_1406BF892
 * 00000001406BF8A4: add     rsp, 8
 * 00000001406BF8A8: call    loc_1406BF89B
 * 00000001406BF8AD: add     rsp, 8
 * 00000001406BF8B1: call    loc_1406BF8A4
 * 00000001406BF8B6: add     rsp, 8
 * 00000001406BF8BA: call    loc_1406BF8AD
 * 00000001406BF8BF: add     rsp, 8
 * 00000001406BF8C3: call    loc_1406BF8B6
 * 00000001406BF8C8: add     rsp, 8
 * 00000001406BF8CC: call    loc_1406BF8BF
 * 00000001406BF8D1: add     rsp, 8
 * 00000001406BF8D5: call    loc_1406BF8C8
 * 00000001406BF8DA: add     rsp, 8
 * 00000001406BF8DE: call    loc_1406BF8D1
 * 00000001406BF8E3: add     rsp, 8
 * 00000001406BF8E7: call    loc_1406BF8DA
 * 00000001406BF8EC: add     rsp, 8
 * 00000001406BF8F0: call    loc_1406BF8E3
 * 00000001406BF8F5: add     rsp, 8
 * 00000001406BF8F9: call    loc_1406BF8EC
 * 00000001406BF8FE: add     rsp, 8
 * 00000001406BF902: call    loc_1406BF8F5
 * 00000001406BF907: add     rsp, 8
 * 00000001406BF90B: call    loc_1406BF8FE
 * 00000001406BF910: add     rsp, 8
 * 00000001406BF914: mov     eax, 0DADAh
 * 00000001406BF919: test    byte ptr gs:85Ch, 8
 * 00000001406BF922: jz      short loc_1406BF92B
 * 00000001406BF924: mov     al, 20h ; ' '
 * 00000001406BF926: incsspq rax
 * 00000001406BF92B: test    word ptr gs:858h, 100h
 * 00000001406BF936: jz      short loc_1406BF944
 * 00000001406BF938: xor     eax, eax
 * 00000001406BF93A: xor     edx, edx
 * 00000001406BF93C: mov     ecx, 1
 * 00000001406BF941: div     rcx
 * 00000001406BF944: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BF948: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BF94C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BF950: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BF954: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BF958: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BF95C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BF960: mov     r11, [rbp-20h]
 * 00000001406BF964: mov     r10, [rbp-28h]
 * 00000001406BF968: mov     r9, [rbp-30h]
 * 00000001406BF96C: mov     r8, [rbp-38h]
 * 00000001406BF970: mov     rdx, [rbp-40h]
 * 00000001406BF974: mov     rcx, [rbp-48h]
 * 00000001406BF978: mov     rax, [rbp-50h]
 * 00000001406BF97C: mov     rsi, [rbp+0D0h]
 * 00000001406BF983: mov     rdi, [rbp+0C8h]
 * 00000001406BF98A: mov     rbx, [rbp+0C0h]
 * 00000001406BF991: mov     rsp, rbp
 * 00000001406BF994: mov     rbp, [rbp+0D8h]
 * 00000001406BF99B: add     rsp, 0E8h
 * 00000001406BF9A2: test    cs:KiKvaShadow, 1
 * 00000001406BF9A9: jz      short loc_1406BF9B0
 * 00000001406BF9AB: jmp     KiKernelExit
 * 00000001406BF9B0: test    word ptr gs:858h, 200h
 * 00000001406BF9BB: jz      short loc_1406BF9C2
 * 00000001406BF9BD: verw    [rsp-158h+arg_170]
 * 00000001406BF9C2: swapgs
 * 00000001406BF9C5: iretq
 * 00000001406BF9C7: cmp     edi, 20h ; ' '
 * 00000001406BF9CA: jnz     short loc_1406BFA27
 * 00000001406BF9CC: mov     [rbp-80h], eax
 * 00000001406BF9CF: mov     [rbp-78h], rcx
 * 00000001406BF9D3: mov     [rbp-70h], rdx
 * 00000001406BF9D7: mov     [rbp-68h], r8
 * 00000001406BF9DB: mov     [rbp-60h], r9
 * 00000001406BF9DF: call    KiConvertToGuiThread
 * 00000001406BF9E4: or      eax, eax
 * 00000001406BF9E6: mov     eax, [rbp-80h]
 * 00000001406BF9E9: mov     rcx, [rbp-78h]
 * 00000001406BF9ED: mov     rdx, [rbp-70h]
 * 00000001406BF9F1: mov     r8, [rbp-68h]
 * 00000001406BF9F5: mov     r9, [rbp-60h]
 * 00000001406BF9F9: mov     [rbx+90h], rsp
 * 00000001406BFA00: jz      KiSystemServiceRepeat
 * 00000001406BFA06: lea     rdi, xmmword_140FC72E0
 * 00000001406BFA0D: mov     esi, [rdi+10h]
 * 00000001406BFA10: mov     rdi, [rdi]
 * 00000001406BFA13: cmp     eax, esi
 * 00000001406BFA15: jnb     short loc_1406BFA27
 * 00000001406BFA17: lea     rdi, [rdi+rsi*4]
 * 00000001406BFA1B: movsx   eax, byte ptr [rdi+rax]
 * 00000001406BFA1F: or      eax, eax
 * 00000001406BFA21: jle     KiSystemServiceExit
 * 00000001406BFA27: mov     eax, 0C000001Ch
 * 00000001406BFA2C: jmp     KiSystemServiceExit
 * 00000001406BFA31: mov     ecx, 4Ah ; 'J'
 * 00000001406BFA36: xor     r9d, r9d
 * 00000001406BFA39: mov     r8, cr8
 * 00000001406BFA3D: or      r8d, r8d
 * 00000001406BFA40: jnz     short loc_1406BFA56
 * 00000001406BFA42: mov     ecx, 1
 * 00000001406BFA47: movzx   r8d, byte ptr [r11+24Ah]
 * 00000001406BFA4F: mov     r9d, [r11+1E4h]
 * 00000001406BFA56: mov     rdx, [rbp+0E8h]
 * 00000001406BFA5D: mov     r10, rbp
 * 00000001406BFA60: call    KiBugCheckDispatch
 * 00000001406BFA66: mov     ecx, 1F9h
 * 00000001406BFA6B: mov     rdx, [rbp+0E8h]
 * 00000001406BFA72: movzx   r8d, byte ptr [r11+232h]
 * 00000001406BFA7A: xor     r9d, r9d
 * 00000001406BFA7D: xor     r10d, r10d
 * 00000001406BFA80: call    KiBugCheckDispatch
 * 00000001406BFA86: sub     rsp, 50h
 * 00000001406BFA8A: mov     [rsp+0E0h+var_C0], rcx
 * 00000001406BFA8F: mov     [rsp+0E0h+var_B8], rdx
 * 00000001406BFA94: mov     [rsp+0E0h+var_B0], r8
 * 00000001406BFA99: mov     [rsp+0E0h+var_A8], r9
 * 00000001406BFA9E: mov     [rsp+0E0h+var_A0], r10
 * 00000001406BFAA3: mov     rcx, r10
 * 00000001406BFAA6: mov     rdx, rsp
 * 00000001406BFAA9: add     rdx, 20h ; ' '
 * 00000001406BFAAD: mov     r8, 4
 * 00000001406BFAB4: mov     r9, rsp
 * 00000001406BFAB7: add     r9, 70h ; 'p'
 * 00000001406BFABB: call    KiTrackSystemCallEntry
 * 00000001406BFAC0: mov     [rbp-60h], rax
 * 00000001406BFAC4: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001406BFAC9: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001406BFACE: mov     r8, [rsp+0E0h+var_B0]
 * 00000001406BFAD3: mov     r9, [rsp+0E0h+var_A8]
 * 00000001406BFAD8: mov     r10, [rsp+0E0h+var_A0]
 * 00000001406BFADD: add     rsp, 50h
 * 00000001406BFAE1: mov     rax, r10
 * 00000001406BFAE4: call    rax
 * 00000001406BFAE6: nop     dword ptr [rax]
 * 00000001406BFAE9: mov     rcx, [rbp-60h]
 * 00000001406BFAED: mov     rdx, rax
 * 00000001406BFAF0: call    KiTrackSystemCallExit
 * 00000001406BFAF5: jmp     loc_1406BF258
 * 00000001406BFAFA: sub     rsp, 50h
 * 00000001406BFAFE: mov     [rsp+0E0h+var_C0], rcx
 * 00000001406BFB03: mov     [rsp+0E0h+var_B8], rdx
 * 00000001406BFB08: mov     [rsp+0E0h+var_B0], r8
 * 00000001406BFB0D: mov     [rsp+0E0h+var_A8], r9
 * 00000001406BFB12: mov     [rsp+0E0h+var_A0], r10
 * 00000001406BFB17: mov     rcx, r10
 * 00000001406BFB1A: call    PerfInfoLogSysCallEntry
 * 00000001406BFB1F: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001406BFB24: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001406BFB29: mov     r8, [rsp+0E0h+var_B0]
 * 00000001406BFB2E: mov     r9, [rsp+0E0h+var_A8]
 * 00000001406BFB33: mov     r10, [rsp+0E0h+var_A0]
 * 00000001406BFB38: add     rsp, 50h
 * 00000001406BFB3C: mov     rax, r10
 * 00000001406BFB3F: call    rax
 * 00000001406BFB41: nop     dword ptr [rax]
 * 00000001406BFB44: mov     rcx, rax
 * 00000001406BFB47: call    PerfInfoLogSysCallExit
 * 00000001406BFB4C: jmp     loc_1406BF258
 * 00000001406BFB51: retn
 */
