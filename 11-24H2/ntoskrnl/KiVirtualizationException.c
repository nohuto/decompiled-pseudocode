/*
 * XREFs of KiVirtualizationException @ 0x1406BCC00
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140BBDB40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KzLowerIrql @ 0x1403F8C90 (KzLowerIrql.c)
 *     KzRaiseIrql @ 0x1403FC0F0 (KzRaiseIrql.c)
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14040ED30 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x1405C0B20 (KiEpfHandleNotification.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x1406BCC00 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x1406BFB80 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x1406BCC00
 * Reason: Hex-Rays returned no pseudocode for 0x1406BCC00
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BCC00: sub     rsp, 8
 * 00000001406BCC04: push    rbp
 * 00000001406BCC05: sub     rsp, 158h
 * 00000001406BCC0C: lea     rbp, [rsp+80h]
 * 00000001406BCC14: mov     [rbp+0E8h+var_13D], 1
 * 00000001406BCC18: mov     [rbp+0E8h+var_138], rax
 * 00000001406BCC1C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406BCC20: mov     [rbp+0E8h+var_128], rdx
 * 00000001406BCC24: mov     [rbp+0E8h+var_120], r8
 * 00000001406BCC28: mov     [rbp+0E8h+var_118], r9
 * 00000001406BCC2C: mov     [rbp+0E8h+var_110], r10
 * 00000001406BCC30: mov     [rbp+0E8h+var_108], r11
 * 00000001406BCC34: test    [rbp+0E8h+arg_0], 1
 * 00000001406BCC3B: jnz     short loc_1406BCC75
 * 00000001406BCC3D: xor     edx, edx
 * 00000001406BCC3F: rdsspq  rdx
 * 00000001406BCC44: mov     [rbp+0E8h+var_90], rdx
 * 00000001406BCC48: lfence
 * 00000001406BCC4B: test    byte ptr gs:858h, 1
 * 00000001406BCC54: jnz     short loc_1406BCC5E
 * 00000001406BCC56: lfence
 * 00000001406BCC59: jmp     loc_1406BCEE6
 * 00000001406BCC5E: movzx   eax, word ptr gs:866h
 * 00000001406BCC67: mov     ecx, 48h ; 'H'
 * 00000001406BCC6C: xor     edx, edx
 * 00000001406BCC6E: wrmsr
 * 00000001406BCC70: jmp     loc_1406BCEE6
 * 00000001406BCC75: test    cs:KiKvaShadow, 1
 * 00000001406BCC7C: jnz     short loc_1406BCC81
 * 00000001406BCC7E: swapgs
 * 00000001406BCC81: lfence
 * 00000001406BCC84: mov     rcx, gs:9D28h
 * 00000001406BCC8D: test    rcx, rcx
 * 00000001406BCC90: jz      short loc_1406BCCB1
 * 00000001406BCC92: rdsspq  rdx
 * 00000001406BCC97: mov     r10, gs:9D20h
 * 00000001406BCCA0: add     r10, 8
 * 00000001406BCCA4: cmp     rdx, r10
 * 00000001406BCCA7: jnz     short loc_1406BCCB1
 * 00000001406BCCA9: rstorssp qword ptr [rcx]
 * 00000001406BCCAD: saveprevssp
 * 00000001406BCCB1: mov     r10, gs:188h
 * 00000001406BCCBA: mov     rcx, gs:188h
 * 00000001406BCCC3: mov     rcx, [rcx+220h]
 * 00000001406BCCCA: mov     rcx, [rcx+760h]
 * 00000001406BCCD1: mov     gs:850h, rcx
 * 00000001406BCCDA: mov     cx, gs:862h
 * 00000001406BCCE3: mov     gs:864h, cx
 * 00000001406BCCEC: mov     cl, gs:858h
 * 00000001406BCCF4: mov     gs:85Ah, cl
 * 00000001406BCCFC: movzx   eax, word ptr gs:868h
 * 00000001406BCD05: cmp     gs:866h, ax
 * 00000001406BCD0E: jz      short loc_1406BCD22
 * 00000001406BCD10: mov     gs:866h, ax
 * 00000001406BCD19: mov     ecx, 48h ; 'H'
 * 00000001406BCD1E: xor     edx, edx
 * 00000001406BCD20: wrmsr
 * 00000001406BCD22: movzx   edx, byte ptr gs:858h
 * 00000001406BCD2B: test    edx, 8
 * 00000001406BCD31: jz      short loc_1406BCD4A
 * 00000001406BCD33: mov     eax, 1
 * 00000001406BCD38: xor     edx, edx
 * 00000001406BCD3A: mov     ecx, 49h ; 'I'
 * 00000001406BCD3F: wrmsr
 * 00000001406BCD41: movzx   edx, byte ptr gs:858h
 * 00000001406BCD4A: test    edx, 2
 * 00000001406BCD50: jz      loc_1406BCE8D
 * 00000001406BCD56: call    loc_1406BCE69
 * 00000001406BCD5B: add     rsp, 8
 * 00000001406BCD5F: call    loc_1406BCE72
 * 00000001406BCD64: add     rsp, 8
 * 00000001406BCD68: call    loc_1406BCD5B
 * 00000001406BCD6D: add     rsp, 8
 * 00000001406BCD71: call    loc_1406BCD64
 * 00000001406BCD76: add     rsp, 8
 * 00000001406BCD7A: call    loc_1406BCD6D
 * 00000001406BCD7F: add     rsp, 8
 * 00000001406BCD83: call    loc_1406BCD76
 * 00000001406BCD88: add     rsp, 8
 * 00000001406BCD8C: call    loc_1406BCD7F
 * 00000001406BCD91: add     rsp, 8
 * 00000001406BCD95: call    loc_1406BCD88
 * 00000001406BCD9A: add     rsp, 8
 * 00000001406BCD9E: call    loc_1406BCD91
 * 00000001406BCDA3: add     rsp, 8
 * 00000001406BCDA7: call    loc_1406BCD9A
 * 00000001406BCDAC: add     rsp, 8
 * 00000001406BCDB0: call    loc_1406BCDA3
 * 00000001406BCDB5: add     rsp, 8
 * 00000001406BCDB9: call    loc_1406BCDAC
 * 00000001406BCDBE: add     rsp, 8
 * 00000001406BCDC2: call    loc_1406BCDB5
 * 00000001406BCDC7: add     rsp, 8
 * 00000001406BCDCB: call    loc_1406BCDBE
 * 00000001406BCDD0: add     rsp, 8
 * 00000001406BCDD4: call    loc_1406BCDC7
 * 00000001406BCDD9: add     rsp, 8
 * 00000001406BCDDD: call    loc_1406BCDD0
 * 00000001406BCDE2: add     rsp, 8
 * 00000001406BCDE6: call    loc_1406BCDD9
 * 00000001406BCDEB: add     rsp, 8
 * 00000001406BCDEF: call    loc_1406BCDE2
 * 00000001406BCDF4: add     rsp, 8
 * 00000001406BCDF8: call    loc_1406BCDEB
 * 00000001406BCDFD: add     rsp, 8
 * 00000001406BCE01: call    loc_1406BCDF4
 * 00000001406BCE06: add     rsp, 8
 * 00000001406BCE0A: call    loc_1406BCDFD
 * 00000001406BCE0F: add     rsp, 8
 * 00000001406BCE13: call    loc_1406BCE06
 * 00000001406BCE18: add     rsp, 8
 * 00000001406BCE1C: call    loc_1406BCE0F
 * 00000001406BCE21: add     rsp, 8
 * 00000001406BCE25: call    loc_1406BCE18
 * 00000001406BCE2A: add     rsp, 8
 * 00000001406BCE2E: call    loc_1406BCE21
 * 00000001406BCE33: add     rsp, 8
 * 00000001406BCE37: call    loc_1406BCE2A
 * 00000001406BCE3C: add     rsp, 8
 * 00000001406BCE40: call    loc_1406BCE33
 * 00000001406BCE45: add     rsp, 8
 * 00000001406BCE49: call    loc_1406BCE3C
 * 00000001406BCE4E: add     rsp, 8
 * 00000001406BCE52: call    loc_1406BCE45
 * 00000001406BCE57: add     rsp, 8
 * 00000001406BCE5B: call    loc_1406BCE4E
 * 00000001406BCE60: add     rsp, 8
 * 00000001406BCE64: call    loc_1406BCE57
 * 00000001406BCE69: add     rsp, 8
 * 00000001406BCE6D: call    loc_1406BCE60
 * 00000001406BCE72: add     rsp, 8
 * 00000001406BCE76: mov     eax, 0DADAh
 * 00000001406BCE7B: test    byte ptr gs:85Ch, 8
 * 00000001406BCE84: jz      short loc_1406BCE8D
 * 00000001406BCE86: mov     al, 20h ; ' '
 * 00000001406BCE88: incsspq rax
 * 00000001406BCE8D: test    edx, 80h
 * 00000001406BCE93: jz      short loc_1406BCE9D
 * 00000001406BCE95: lfence
 * 00000001406BCE98: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BCE9D: lfence
 * 00000001406BCEA0: mov     byte ptr gs:85Eh, 0
 * 00000001406BCEA9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BCEB0: jz      short loc_1406BCED1
 * 00000001406BCEB2: mov     ecx, 6A7h
 * 00000001406BCEB7: rdmsr
 * 00000001406BCEB9: cmp     edx, 0
 * 00000001406BCEBC: jz      short loc_1406BCED1
 * 00000001406BCEBE: mov     ecx, edx
 * 00000001406BCEC0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BCEC6: cmp     edx, ecx
 * 00000001406BCEC8: jz      short loc_1406BCED1
 * 00000001406BCECA: mov     ecx, 6A7h
 * 00000001406BCECF: wrmsr
 * 00000001406BCED1: test    byte ptr [r10+3], 3
 * 00000001406BCED6: mov     [rbp+0E8h+var_68], 0
 * 00000001406BCEDF: jz      short loc_1406BCEE6
 * 00000001406BCEE1: call    KiSaveDebugRegisterState
 * 00000001406BCEE6: cld
 * 00000001406BCEE7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406BCEEB: ldmxcsr dword ptr gs:180h
 * 00000001406BCEF4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406BCEF8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406BCEFC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406BCF00: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406BCF04: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406BCF08: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406BCF0C: test    [rbp+0E8h+arg_0], 1
 * 00000001406BCF13: jz      short loc_1406BCF1A
 * 00000001406BCF15: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BCF1A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BCF21: jz      short loc_1406BCF2F
 * 00000001406BCF23: test    [rbp+0E8h+arg_0], 1
 * 00000001406BCF2A: jz      short loc_1406BCF2F
 * 00000001406BCF2C: stac
 * 00000001406BCF2F: mov     r9, gs:8D88h
 * 00000001406BCF38: test    r9, r9
 * 00000001406BCF3B: jz      loc_1406BD2EF
 * 00000001406BCF41: cmp     dword ptr [r9+44h], 1
 * 00000001406BCF46: jnz     loc_1406BD2EF
 * 00000001406BCF4C: test    [rbp+0E8h+arg_8], 200h
 * 00000001406BCF56: jz      loc_1406BD2EF
 * 00000001406BCF5C: mov     rax, cr8
 * 00000001406BCF60: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 00000001406BCF63: cmp     al, 2
 * 00000001406BCF65: jge     loc_1406BD2EF
 * 00000001406BCF6B: mov     ecx, 2; NewIrql
 * 00000001406BCF70: call    KzRaiseIrql
 * 00000001406BCF75: sti
 * 00000001406BCF76: mov     r9, gs:8D88h
 * 00000001406BCF7F: mov     rcx, [r9+48h]
 * 00000001406BCF83: mov     dword ptr [r9+44h], 0
 * 00000001406BCF8B: call    KiEpfHandleNotification
 * 00000001406BCF90: cli
 * 00000001406BCF91: lea     rcx, [rbp+0E8h+var_168]
 * 00000001406BCF95: call    KiCheckForSListAddress
 * 00000001406BCF9A: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 00000001406BCF9D: call    KzLowerIrql
 * 00000001406BCFA2: test    [rbp+0E8h+arg_0], 1
 * 00000001406BCFA9: jz      loc_1406BD2A4
 * 00000001406BCFAF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BCFB6: jz      short loc_1406BCFBB
 * 00000001406BCFB8: stac
 * 00000001406BCFBB: mov     rcx, gs:188h
 * 00000001406BCFC4: test    byte ptr [rcx+0C2h], 3
 * 00000001406BCFCB: jz      short loc_1406BCFE8
 * 00000001406BCFCD: mov     ecx, 1
 * 00000001406BCFD2: mov     cr8, rcx
 * 00000001406BCFD6: sti
 * 00000001406BCFD7: call    KiInitiateUserApc
 * 00000001406BCFDC: cli
 * 00000001406BCFDD: mov     ecx, 0
 * 00000001406BCFE2: mov     cr8, rcx
 * 00000001406BCFE6: jmp     short loc_1406BCFBB
 * 00000001406BCFE8: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BCFED: test    eax, eax
 * 00000001406BCFEF: mov     rax, [rbp+0E8h+var_138]
 * 00000001406BCFF3: jnz     short loc_1406BCFBB
 * 00000001406BCFF5: test    byte ptr gs:860h, 2
 * 00000001406BCFFE: jz      short loc_1406BD007
 * 00000001406BD000: xor     ecx, ecx
 * 00000001406BD002: call    KiUpdateStibpPairing
 * 00000001406BD007: mov     rcx, gs:188h
 * 00000001406BD010: test    dword ptr [rcx], 8000000h
 * 00000001406BD016: jz      short loc_1406BD01D
 * 00000001406BD018: call    KiRestoreSetContextState
 * 00000001406BD01D: mov     rcx, gs:188h
 * 00000001406BD026: test    dword ptr [rcx], 10000h
 * 00000001406BD02C: jz      short loc_1406BD042
 * 00000001406BD02E: test    byte ptr [rcx+2], 1
 * 00000001406BD032: jz      short loc_1406BD042
 * 00000001406BD034: call    KiCopyCounters
 * 00000001406BD039: mov     rcx, gs:188h
 * 00000001406BD042: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406BD046: cmp     [rbp+0E8h+var_68], 0
 * 00000001406BD04E: jz      short loc_1406BD055
 * 00000001406BD050: call    KiRestoreDebugRegisterState
 * 00000001406BD055: mov     rcx, gs:188h
 * 00000001406BD05E: bt      dword ptr [rcx+74h], 16h
 * 00000001406BD063: jnb     short loc_1406BD08F
 * 00000001406BD065: xor     ecx, ecx
 * 00000001406BD067: rdsspq  rcx
 * 00000001406BD06C: mov     r8, gs:9D28h
 * 00000001406BD075: add     r8, 8
 * 00000001406BD079: cmp     rcx, r8
 * 00000001406BD07C: jnz     short loc_1406BD08F
 * 00000001406BD07E: mov     rcx, gs:9D20h
 * 00000001406BD087: rstorssp qword ptr [rcx]
 * 00000001406BD08B: saveprevssp
 * 00000001406BD08F: mov     byte ptr gs:85Eh, 0
 * 00000001406BD098: movzx   eax, word ptr gs:86Ch
 * 00000001406BD0A1: cmp     gs:866h, ax
 * 00000001406BD0AA: jz      short loc_1406BD0BE
 * 00000001406BD0AC: mov     gs:866h, ax
 * 00000001406BD0B5: mov     ecx, 48h ; 'H'
 * 00000001406BD0BA: xor     edx, edx
 * 00000001406BD0BC: wrmsr
 * 00000001406BD0BE: btr     word ptr gs:858h, 2
 * 00000001406BD0C9: jnb     short loc_1406BD0D9
 * 00000001406BD0CB: mov     eax, 1
 * 00000001406BD0D0: xor     edx, edx
 * 00000001406BD0D2: mov     ecx, 49h ; 'I'
 * 00000001406BD0D7: wrmsr
 * 00000001406BD0D9: btr     word ptr gs:858h, 5
 * 00000001406BD0E4: jnb     loc_1406BD221
 * 00000001406BD0EA: call    loc_1406BD1FD
 * 00000001406BD0EF: add     rsp, 8
 * 00000001406BD0F3: call    loc_1406BD206
 * 00000001406BD0F8: add     rsp, 8
 * 00000001406BD0FC: call    loc_1406BD0EF
 * 00000001406BD101: add     rsp, 8
 * 00000001406BD105: call    loc_1406BD0F8
 * 00000001406BD10A: add     rsp, 8
 * 00000001406BD10E: call    loc_1406BD101
 * 00000001406BD113: add     rsp, 8
 * 00000001406BD117: call    loc_1406BD10A
 * 00000001406BD11C: add     rsp, 8
 * 00000001406BD120: call    loc_1406BD113
 * 00000001406BD125: add     rsp, 8
 * 00000001406BD129: call    loc_1406BD11C
 * 00000001406BD12E: add     rsp, 8
 * 00000001406BD132: call    loc_1406BD125
 * 00000001406BD137: add     rsp, 8
 * 00000001406BD13B: call    loc_1406BD12E
 * 00000001406BD140: add     rsp, 8
 * 00000001406BD144: call    loc_1406BD137
 * 00000001406BD149: add     rsp, 8
 * 00000001406BD14D: call    loc_1406BD140
 * 00000001406BD152: add     rsp, 8
 * 00000001406BD156: call    loc_1406BD149
 * 00000001406BD15B: add     rsp, 8
 * 00000001406BD15F: call    loc_1406BD152
 * 00000001406BD164: add     rsp, 8
 * 00000001406BD168: call    loc_1406BD15B
 * 00000001406BD16D: add     rsp, 8
 * 00000001406BD171: call    loc_1406BD164
 * 00000001406BD176: add     rsp, 8
 * 00000001406BD17A: call    loc_1406BD16D
 * 00000001406BD17F: add     rsp, 8
 * 00000001406BD183: call    loc_1406BD176
 * 00000001406BD188: add     rsp, 8
 * 00000001406BD18C: call    loc_1406BD17F
 * 00000001406BD191: add     rsp, 8
 * 00000001406BD195: call    loc_1406BD188
 * 00000001406BD19A: add     rsp, 8
 * 00000001406BD19E: call    loc_1406BD191
 * 00000001406BD1A3: add     rsp, 8
 * 00000001406BD1A7: call    loc_1406BD19A
 * 00000001406BD1AC: add     rsp, 8
 * 00000001406BD1B0: call    loc_1406BD1A3
 * 00000001406BD1B5: add     rsp, 8
 * 00000001406BD1B9: call    loc_1406BD1AC
 * 00000001406BD1BE: add     rsp, 8
 * 00000001406BD1C2: call    loc_1406BD1B5
 * 00000001406BD1C7: add     rsp, 8
 * 00000001406BD1CB: call    loc_1406BD1BE
 * 00000001406BD1D0: add     rsp, 8
 * 00000001406BD1D4: call    loc_1406BD1C7
 * 00000001406BD1D9: add     rsp, 8
 * 00000001406BD1DD: call    loc_1406BD1D0
 * 00000001406BD1E2: add     rsp, 8
 * 00000001406BD1E6: call    loc_1406BD1D9
 * 00000001406BD1EB: add     rsp, 8
 * 00000001406BD1EF: call    loc_1406BD1E2
 * 00000001406BD1F4: add     rsp, 8
 * 00000001406BD1F8: call    loc_1406BD1EB
 * 00000001406BD1FD: add     rsp, 8
 * 00000001406BD201: call    loc_1406BD1F4
 * 00000001406BD206: add     rsp, 8
 * 00000001406BD20A: mov     eax, 0DADAh
 * 00000001406BD20F: test    byte ptr gs:85Ch, 8
 * 00000001406BD218: jz      short loc_1406BD221
 * 00000001406BD21A: mov     al, 20h ; ' '
 * 00000001406BD21C: incsspq rax
 * 00000001406BD221: test    word ptr gs:858h, 100h
 * 00000001406BD22C: jz      short loc_1406BD23A
 * 00000001406BD22E: xor     eax, eax
 * 00000001406BD230: xor     edx, edx
 * 00000001406BD232: mov     ecx, 1
 * 00000001406BD237: div     rcx
 * 00000001406BD23A: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406BD23E: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406BD242: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406BD246: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406BD24A: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406BD24E: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406BD252: mov     r11, [rbp+0E8h+var_108]
 * 00000001406BD256: mov     r10, [rbp+0E8h+var_110]
 * 00000001406BD25A: mov     r9, [rbp+0E8h+var_118]
 * 00000001406BD25E: mov     r8, [rbp+0E8h+var_120]
 * 00000001406BD262: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406BD266: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406BD26A: mov     rax, [rbp+0E8h+var_138]
 * 00000001406BD26E: mov     rsp, rbp
 * 00000001406BD271: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406BD278: add     rsp, 0E8h
 * 00000001406BD27F: test    cs:KiKvaShadow, 1
 * 00000001406BD286: jz      short loc_1406BD28D
 * 00000001406BD288: jmp     KiKernelExit
 * 00000001406BD28D: test    word ptr gs:858h, 200h
 * 00000001406BD298: jz      short loc_1406BD29F
 * 00000001406BD29A: verw    [rsp+arg_18]
 * 00000001406BD29F: swapgs
 * 00000001406BD2A2: iretq
 * 00000001406BD2A4: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001406BD2A8: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001406BD2AC: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001406BD2B0: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001406BD2B4: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001406BD2B8: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001406BD2BC: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001406BD2C0: mov     r11, [rbp+0E8h+var_108]
 * 00000001406BD2C4: mov     r10, [rbp+0E8h+var_110]
 * 00000001406BD2C8: mov     r9, [rbp+0E8h+var_118]
 * 00000001406BD2CC: mov     r8, [rbp+0E8h+var_120]
 * 00000001406BD2D0: mov     rdx, [rbp+0E8h+var_128]
 * 00000001406BD2D4: mov     rcx, [rbp+0E8h+var_130]
 * 00000001406BD2D8: mov     rax, [rbp+0E8h+var_138]
 * 00000001406BD2DC: mov     rsp, rbp
 * 00000001406BD2DF: mov     rbp, [rbp+0E8h+var_10]
 * 00000001406BD2E6: add     rsp, 0E8h
 * 00000001406BD2ED: iretq
 * 00000001406BD2EF: mov     r10, [rbp+0E8h]
 * 00000001406BD2F6: mov     r9, gs:8D88h
 * 00000001406BD2FF: movzx   r8, [rbp+0E8h+NewIrql]
 * 00000001406BD304: mov     ecx, 7Fh
 * 00000001406BD309: mov     edx, 20h ; ' '
 * 00000001406BD30E: call    KiBugCheckDispatch
 */
