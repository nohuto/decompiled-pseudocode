/*
 * XREFs of KiSystemCall64 @ 0x1406BDE40
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1403497B0 (PerfInfoLogSysCallExit.c)
 *     PerfInfoLogSysCallEntry @ 0x140349900 (PerfInfoLogSysCallEntry.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x1406AC5B0 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x1406BDE40 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x1406BEC80 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1406BED00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiTrackSystemCallEntry @ 0x14073D460 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x14073D580 (KiTrackSystemCallExit.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 *     PsSyscallProviderDispatch @ 0x140A9D400 (PsSyscallProviderDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x1406BDE40
 * Reason: Hex-Rays returned no pseudocode for 0x1406BDE40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406BDE40: swapgs
 * 00000001406BDE43: mov     gs:10h, rsp
 * 00000001406BDE4C: mov     rsp, gs:1A8h
 * 00000001406BDE55: push    2Bh ; '+'
 * 00000001406BDE57: push    qword ptr gs:10h
 * 00000001406BDE5F: push    r11
 * 00000001406BDE61: push    33h ; '3'
 * 00000001406BDE63: push    rcx
 * 00000001406BDE64: mov     rcx, gs:9D28h
 * 00000001406BDE6D: test    rcx, rcx
 * 00000001406BDE70: jz      short loc_1406BDE7E
 * 00000001406BDE72: setssbsy
 * 00000001406BDE76: rstorssp qword ptr [rcx]
 * 00000001406BDE7A: saveprevssp
 * 00000001406BDE7E: mov     rcx, r10
 * 00000001406BDE81: sub     rsp, 8
 * 00000001406BDE85: push    rbp
 * 00000001406BDE86: sub     rsp, 158h
 * 00000001406BDE8D: lea     rbp, [rsp+190h+var_110]
 * 00000001406BDE95: mov     [rbp+0C0h], rbx
 * 00000001406BDE9C: mov     [rbp+0C8h], rdi
 * 00000001406BDEA3: mov     [rbp+0D0h], rsi
 * 00000001406BDEAA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406BDEB1: jz      short loc_1406BDEBF
 * 00000001406BDEB3: test    byte ptr [rbp+0F0h], 1
 * 00000001406BDEBA: jz      short loc_1406BDEBF
 * 00000001406BDEBC: stac
 * 00000001406BDEBF: mov     [rbp-50h], rax
 * 00000001406BDEC3: mov     [rbp-48h], rcx
 * 00000001406BDEC7: mov     [rbp-40h], rdx
 * 00000001406BDECB: mov     rcx, gs:188h
 * 00000001406BDED4: mov     rcx, [rcx+220h]
 * 00000001406BDEDB: mov     rcx, [rcx+760h]
 * 00000001406BDEE2: mov     gs:850h, rcx
 * 00000001406BDEEB: mov     cx, gs:862h
 * 00000001406BDEF4: mov     gs:864h, cx
 * 00000001406BDEFD: mov     cl, gs:858h
 * 00000001406BDF05: mov     gs:85Ah, cl
 * 00000001406BDF0D: movzx   eax, word ptr gs:868h
 * 00000001406BDF16: cmp     gs:866h, ax
 * 00000001406BDF1F: jz      short loc_1406BDF33
 * 00000001406BDF21: mov     gs:866h, ax
 * 00000001406BDF2A: mov     ecx, 48h ; 'H'
 * 00000001406BDF2F: xor     edx, edx
 * 00000001406BDF31: wrmsr
 * 00000001406BDF33: movzx   edx, byte ptr gs:858h
 * 00000001406BDF3C: test    edx, 8
 * 00000001406BDF42: jz      short loc_1406BDF5B
 * 00000001406BDF44: mov     eax, 1
 * 00000001406BDF49: xor     edx, edx
 * 00000001406BDF4B: mov     ecx, 49h ; 'I'
 * 00000001406BDF50: wrmsr
 * 00000001406BDF52: movzx   edx, byte ptr gs:858h
 * 00000001406BDF5B: test    edx, 2
 * 00000001406BDF61: jz      loc_1406BE09E
 * 00000001406BDF67: call    loc_1406BE07A
 * 00000001406BDF6C: add     rsp, 8
 * 00000001406BDF70: call    loc_1406BE083
 * 00000001406BDF75: add     rsp, 8
 * 00000001406BDF79: call    loc_1406BDF6C
 * 00000001406BDF7E: add     rsp, 8
 * 00000001406BDF82: call    loc_1406BDF75
 * 00000001406BDF87: add     rsp, 8
 * 00000001406BDF8B: call    loc_1406BDF7E
 * 00000001406BDF90: add     rsp, 8
 * 00000001406BDF94: call    loc_1406BDF87
 * 00000001406BDF99: add     rsp, 8
 * 00000001406BDF9D: call    loc_1406BDF90
 * 00000001406BDFA2: add     rsp, 8
 * 00000001406BDFA6: call    loc_1406BDF99
 * 00000001406BDFAB: add     rsp, 8
 * 00000001406BDFAF: call    loc_1406BDFA2
 * 00000001406BDFB4: add     rsp, 8
 * 00000001406BDFB8: call    loc_1406BDFAB
 * 00000001406BDFBD: add     rsp, 8
 * 00000001406BDFC1: call    loc_1406BDFB4
 * 00000001406BDFC6: add     rsp, 8
 * 00000001406BDFCA: call    loc_1406BDFBD
 * 00000001406BDFCF: add     rsp, 8
 * 00000001406BDFD3: call    loc_1406BDFC6
 * 00000001406BDFD8: add     rsp, 8
 * 00000001406BDFDC: call    loc_1406BDFCF
 * 00000001406BDFE1: add     rsp, 8
 * 00000001406BDFE5: call    loc_1406BDFD8
 * 00000001406BDFEA: add     rsp, 8
 * 00000001406BDFEE: call    loc_1406BDFE1
 * 00000001406BDFF3: add     rsp, 8
 * 00000001406BDFF7: call    loc_1406BDFEA
 * 00000001406BDFFC: add     rsp, 8
 * 00000001406BE000: call    loc_1406BDFF3
 * 00000001406BE005: add     rsp, 8
 * 00000001406BE009: call    loc_1406BDFFC
 * 00000001406BE00E: add     rsp, 8
 * 00000001406BE012: call    loc_1406BE005
 * 00000001406BE017: add     rsp, 8
 * 00000001406BE01B: call    loc_1406BE00E
 * 00000001406BE020: add     rsp, 8
 * 00000001406BE024: call    loc_1406BE017
 * 00000001406BE029: add     rsp, 8
 * 00000001406BE02D: call    loc_1406BE020
 * 00000001406BE032: add     rsp, 8
 * 00000001406BE036: call    loc_1406BE029
 * 00000001406BE03B: add     rsp, 8
 * 00000001406BE03F: call    loc_1406BE032
 * 00000001406BE044: add     rsp, 8
 * 00000001406BE048: call    loc_1406BE03B
 * 00000001406BE04D: add     rsp, 8
 * 00000001406BE051: call    loc_1406BE044
 * 00000001406BE056: add     rsp, 8
 * 00000001406BE05A: call    loc_1406BE04D
 * 00000001406BE05F: add     rsp, 8
 * 00000001406BE063: call    loc_1406BE056
 * 00000001406BE068: add     rsp, 8
 * 00000001406BE06C: call    loc_1406BE05F
 * 00000001406BE071: add     rsp, 8
 * 00000001406BE075: call    loc_1406BE068
 * 00000001406BE07A: add     rsp, 8
 * 00000001406BE07E: call    loc_1406BE071
 * 00000001406BE083: add     rsp, 8
 * 00000001406BE087: mov     eax, 0DADAh
 * 00000001406BE08C: test    byte ptr gs:85Ch, 8
 * 00000001406BE095: jz      short loc_1406BE09E
 * 00000001406BE097: mov     al, 20h ; ' '
 * 00000001406BE099: incsspq rax
 * 00000001406BE09E: test    edx, 80h
 * 00000001406BE0A4: jz      short loc_1406BE0AE
 * 00000001406BE0A6: lfence
 * 00000001406BE0A9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406BE0AE: lfence
 * 00000001406BE0B1: mov     byte ptr gs:85Eh, 0
 * 00000001406BE0BA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406BE0C1: jz      short KiSystemServiceUser
 * 00000001406BE0C3: mov     ecx, 6A7h
 * 00000001406BE0C8: rdmsr
 * 00000001406BE0CA: cmp     edx, 0
 * 00000001406BE0CD: jz      short KiSystemServiceUser
 * 00000001406BE0CF: mov     ecx, edx
 * 00000001406BE0D1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406BE0D7: cmp     edx, ecx
 * 00000001406BE0D9: jz      short KiSystemServiceUser
 * 00000001406BE0DB: mov     ecx, 6A7h
 * 00000001406BE0E0: wrmsr
 * 00000001406BE0E2: mov     byte ptr [rbp-55h], 2
 * 00000001406BE0E6: mov     byte ptr [rbp-58h], 1
 * 00000001406BE0EA: mov     rbx, gs:188h
 * 00000001406BE0F3: mov     byte ptr [rbx+232h], 1
 * 00000001406BE0FA: prefetchw byte ptr [rbx+90h]
 * 00000001406BE101: stmxcsr dword ptr [rbp-54h]
 * 00000001406BE105: ldmxcsr dword ptr gs:180h
 * 00000001406BE10E: mov     [rbp-38h], r8
 * 00000001406BE112: mov     [rbp-30h], r9
 * 00000001406BE116: mov     [rbp-20h], r10
 * 00000001406BE11A: mov     [rbp-28h], r10
 * 00000001406BE11E: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BE122: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001406BE126: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001406BE12A: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001406BE12E: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001406BE132: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001406BE136: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406BE13B: cmp     byte ptr [rbx+3], 0
 * 00000001406BE13F: mov     word ptr [rbp+80h], 0
 * 00000001406BE148: jz      short loc_1406BE198
 * 00000001406BE14A: test    byte ptr [rbx+3], 3
 * 00000001406BE14E: jz      short loc_1406BE155
 * 00000001406BE150: call    KiSaveDebugRegisterState
 * 00000001406BE155: test    byte ptr [rbx+3], 24h
 * 00000001406BE159: jz      short loc_1406BE198
 * 00000001406BE15B: sti
 * 00000001406BE15C: mov     [rbx+90h], rsp
 * 00000001406BE163: mov     rcx, rsp
 * 00000001406BE166: call    PsSyscallProviderDispatch
 * 00000001406BE16B: cmp     al, 1
 * 00000001406BE16D: jz      short loc_1406BE198
 * 00000001406BE16F: mov     rax, [rbp-50h]
 * 00000001406BE173: jl      short loc_1406BE189
 * 00000001406BE175: mov     ecx, 0C000001Ch
 * 00000001406BE17A: xor     edx, edx
 * 00000001406BE17C: mov     r8, [rbp+0E8h]
 * 00000001406BE183: call    KiExceptionDispatch
 * 00000001406BE188: int     3; Trap to Debugger
 * 00000001406BE189: test    byte ptr [rbx+3], 4
 * 00000001406BE18D: jz      KiSystemServiceExit
 * 00000001406BE193: jmp     KiSystemServiceExitPico
 * 00000001406BE198: mov     r8, [rbp-38h]
 * 00000001406BE19C: mov     r9, [rbp-30h]
 * 00000001406BE1A0: mov     rax, [rbp-50h]
 * 00000001406BE1A4: mov     rcx, [rbp-48h]
 * 00000001406BE1A8: mov     rdx, [rbp-40h]
 * 00000001406BE1AC: sti
 * 00000001406BE1AD: mov     [rbx+88h], rcx
 * 00000001406BE1B4: mov     [rbx+80h], eax
 * 00000001406BE1BA: nop     word ptr [rax+rax+00h]
 * 00000001406BE1C0: mov     [rbx+90h], rsp
 * 00000001406BE1C7: mov     edi, eax
 * 00000001406BE1C9: shr     edi, 7
 * 00000001406BE1CC: and     edi, 20h
 * 00000001406BE1CF: and     eax, 0FFFh
 * 00000001406BE1D4: lea     r10, KeServiceDescriptorTable
 * 00000001406BE1DB: lea     r11, KeServiceDescriptorTableShadow
 * 00000001406BE1E2: test    dword ptr [rbx+78h], 80h
 * 00000001406BE1E9: jz      short loc_1406BE1FE
 * 00000001406BE1EB: test    dword ptr [rbx+78h], 200000h
 * 00000001406BE1F2: jz      short loc_1406BE1FB
 * 00000001406BE1F4: lea     r11, KeServiceDescriptorTableFilter
 * 00000001406BE1FB: mov     r10, r11
 * 00000001406BE1FE: cmp     eax, [r10+rdi+10h]
 * 00000001406BE203: jnb     loc_1406BEAC7
 * 00000001406BE209: mov     r10, [r10+rdi]
 * 00000001406BE20D: movsxd  r11, dword ptr [r10+rax*4]
 * 00000001406BE211: mov     rax, r11
 * 00000001406BE214: sar     r11, 4
 * 00000001406BE218: add     r10, r11
 * 00000001406BE21B: cmp     edi, 20h ; ' '
 * 00000001406BE21E: jnz     short loc_1406BE270
 * 00000001406BE220: mov     r11, [rbx+0F0h]
 * 00000001406BE227: cmp     dword ptr [r11+1740h], 0
 * 00000001406BE22F: jz      short loc_1406BE270
 * 00000001406BE231: mov     [rbp-50h], rax
 * 00000001406BE235: mov     [rbp-48h], rcx
 * 00000001406BE239: mov     [rbp-40h], rdx
 * 00000001406BE23D: mov     rbx, r8
 * 00000001406BE240: mov     rdi, r9
 * 00000001406BE243: mov     rsi, r10
 * 00000001406BE246: mov     ecx, 7
 * 00000001406BE24B: xor     edx, edx
 * 00000001406BE24D: xor     r8, r8
 * 00000001406BE250: xor     r9, r9
 * 00000001406BE253: call    PsInvokeWin32Callout
 * 00000001406BE258: mov     rax, [rbp-50h]
 * 00000001406BE25C: mov     rcx, [rbp-48h]
 * 00000001406BE260: mov     rdx, [rbp-40h]
 * 00000001406BE264: mov     r8, rbx
 * 00000001406BE267: mov     r9, rdi
 * 00000001406BE26A: mov     r10, rsi
 * 00000001406BE26D: nop     dword ptr [rax]
 * 00000001406BE270: and     eax, 0Fh
 * 00000001406BE273: jz      KiSystemServiceCopyEnd
 * 00000001406BE279: shl     eax, 3
 * 00000001406BE27C: lea     rsp, [rsp-70h]
 * 00000001406BE281: lea     rdi, [rsp+100h+var_E8]
 * 00000001406BE286: mov     rsi, [rbp+100h]
 * 00000001406BE28D: lea     rsi, [rsi+20h]
 * 00000001406BE291: test    byte ptr [rbp+0F0h], 1
 * 00000001406BE298: jz      short loc_1406BE2B0
 * 00000001406BE29A: cmp     rsi, cs:MmUserProbeAddress
 * 00000001406BE2A1: cmovnb  rsi, cs:MmUserProbeAddress
 * 00000001406BE2A9: nop     dword ptr [rax+00000000h]
 * 00000001406BE2B0: lea     r11, KiSystemServiceCopyEnd
 * 00000001406BE2B7: sub     r11, rax
 * 00000001406BE2BA: jmp     r11
 * 00000001406BE2C0: mov     rax, [rsi+70h]
 * 00000001406BE2C4: mov     [rdi+70h], rax
 * 00000001406BE2C8: mov     rax, [rsi+68h]
 * 00000001406BE2CC: mov     [rdi+68h], rax
 * 00000001406BE2D0: mov     rax, [rsi+60h]
 * 00000001406BE2D4: mov     [rdi+60h], rax
 * 00000001406BE2D8: mov     rax, [rsi+58h]
 * 00000001406BE2DC: mov     [rdi+58h], rax
 * 00000001406BE2E0: mov     rax, [rsi+50h]
 * 00000001406BE2E4: mov     [rdi+50h], rax
 * 00000001406BE2E8: mov     rax, [rsi+48h]
 * 00000001406BE2EC: mov     [rdi+48h], rax
 * 00000001406BE2F0: mov     rax, [rsi+40h]
 * 00000001406BE2F4: mov     [rdi+40h], rax
 * 00000001406BE2F8: mov     rax, [rsi+38h]
 * 00000001406BE2FC: mov     [rdi+38h], rax
 * 00000001406BE300: mov     rax, [rsi+30h]
 * 00000001406BE304: mov     [rdi+30h], rax
 * 00000001406BE308: mov     rax, [rsi+28h]
 * 00000001406BE30C: mov     [rdi+28h], rax
 * 00000001406BE310: mov     rax, [rsi+20h]
 * 00000001406BE314: mov     [rdi+20h], rax
 * 00000001406BE318: mov     rax, [rsi+18h]
 * 00000001406BE31C: mov     [rdi+18h], rax
 * 00000001406BE320: mov     rax, [rsi+10h]
 * 00000001406BE324: mov     [rdi+10h], rax
 * 00000001406BE328: mov     rax, [rsi+8]
 * 00000001406BE32C: mov     [rdi+8], rax
 * 00000001406BE330: test    cs:KiDynamicTraceMask, 1
 * 00000001406BE33A: jnz     loc_1406BEB86
 * 00000001406BE340: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 00000001406BE34A: jnz     loc_1406BEBFA
 * 00000001406BE350: mov     rax, r10
 * 00000001406BE353: call    rax
 * 00000001406BE355: nop     dword ptr [rax]
 * 00000001406BE358: inc     dword ptr gs:2EB8h
 * 00000001406BE360: mov     rbx, [rbp+0C0h]
 * 00000001406BE367: mov     rdi, [rbp+0C8h]
 * 00000001406BE36E: mov     rsi, [rbp+0D0h]
 * 00000001406BE375: mov     r11, gs:188h
 * 00000001406BE37E: test    byte ptr [rbp+0F0h], 1
 * 00000001406BE385: jz      loc_1406BE77E
 * 00000001406BE38B: mov     rcx, cr8
 * 00000001406BE38F: or      cl, [r11+24Ah]
 * 00000001406BE396: or      ecx, [r11+1E4h]
 * 00000001406BE39D: jnz     loc_1406BEB31
 * 00000001406BE3A3: cmp     byte ptr [r11+232h], 1
 * 00000001406BE3AB: jnz     loc_1406BEB66
 * 00000001406BE3B1: cli
 * 00000001406BE3B2: mov     rcx, gs:188h
 * 00000001406BE3BB: test    byte ptr [rcx+0C2h], 3
 * 00000001406BE3C2: jz      short loc_1406BE41D
 * 00000001406BE3C4: mov     [rbp-50h], rax
 * 00000001406BE3C8: xor     eax, eax
 * 00000001406BE3CA: mov     [rbp-48h], rax
 * 00000001406BE3CE: mov     [rbp-40h], rax
 * 00000001406BE3D2: mov     [rbp-38h], rax
 * 00000001406BE3D6: mov     [rbp-30h], rax
 * 00000001406BE3DA: mov     [rbp-28h], rax
 * 00000001406BE3DE: mov     [rbp-20h], rax
 * 00000001406BE3E2: pxor    xmm0, xmm0
 * 00000001406BE3E6: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BE3EA: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001406BE3EE: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001406BE3F2: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001406BE3F6: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001406BE3FA: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001406BE3FE: mov     ecx, 1
 * 00000001406BE403: mov     cr8, rcx
 * 00000001406BE407: sti
 * 00000001406BE408: call    KiInitiateUserApc
 * 00000001406BE40D: cli
 * 00000001406BE40E: mov     ecx, 0
 * 00000001406BE413: mov     cr8, rcx
 * 00000001406BE417: mov     rax, [rbp-50h]
 * 00000001406BE41B: jmp     short loc_1406BE3B2
 * 00000001406BE41D: mov     [rbp-50h], rax
 * 00000001406BE421: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406BE426: test    eax, eax
 * 00000001406BE428: mov     rax, [rbp-50h]
 * 00000001406BE42C: jnz     short loc_1406BE3B2
 * 00000001406BE42E: test    byte ptr gs:860h, 2
 * 00000001406BE437: jz      short loc_1406BE448
 * 00000001406BE439: mov     [rbp-50h], rax
 * 00000001406BE43D: xor     ecx, ecx
 * 00000001406BE43F: call    KiUpdateStibpPairing
 * 00000001406BE444: mov     rax, [rbp-50h]
 * 00000001406BE448: mov     rcx, gs:188h
 * 00000001406BE451: test    dword ptr [rcx], 8000000h
 * 00000001406BE457: jz      short loc_1406BE498
 * 00000001406BE459: mov     [rbp-50h], rax
 * 00000001406BE45D: xor     eax, eax
 * 00000001406BE45F: mov     [rbp-48h], rax
 * 00000001406BE463: mov     [rbp-40h], rax
 * 00000001406BE467: mov     [rbp-38h], rax
 * 00000001406BE46B: mov     [rbp-30h], rax
 * 00000001406BE46F: mov     [rbp-28h], rax
 * 00000001406BE473: mov     [rbp-20h], rax
 * 00000001406BE477: pxor    xmm0, xmm0
 * 00000001406BE47B: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406BE47F: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001406BE483: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001406BE487: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001406BE48B: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001406BE48F: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001406BE493: call    KiRestoreSetContextState
 * 00000001406BE498: mov     rcx, gs:188h
 * 00000001406BE4A1: test    dword ptr [rcx], 10000h
 * 00000001406BE4A7: jz      short loc_1406BE4C5
 * 00000001406BE4A9: mov     [rbp-50h], rax
 * 00000001406BE4AD: test    byte ptr [rcx+2], 1
 * 00000001406BE4B1: jz      short loc_1406BE4C1
 * 00000001406BE4B3: call    KiCopyCounters
 * 00000001406BE4B8: mov     rcx, gs:188h
 * 00000001406BE4C1: mov     rax, [rbp-50h]
 * 00000001406BE4C5: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BE4C9: xor     r10, r10
 * 00000001406BE4CC: cmp     word ptr [rbp+80h], 0
 * 00000001406BE4D4: jz      short loc_1406BE517
 * 00000001406BE4D6: mov     [rbp-50h], rax
 * 00000001406BE4DA: call    KiRestoreDebugRegisterState
 * 00000001406BE4DF: mov     rax, gs:188h
 * 00000001406BE4E8: mov     rax, [rax+0B8h]
 * 00000001406BE4EF: mov     rax, [rax+168h]
 * 00000001406BE4F6: or      rax, rax
 * 00000001406BE4F9: jz      short loc_1406BE513
 * 00000001406BE4FB: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001406BE503: jnz     short loc_1406BE513
 * 00000001406BE505: mov     r10, [rbp+0E8h]
 * 00000001406BE50C: mov     [rbp+0E8h], rax
 * 00000001406BE513: mov     rax, [rbp-50h]
 * 00000001406BE517: mov     rcx, gs:188h
 * 00000001406BE520: bt      dword ptr [rcx+74h], 16h
 * 00000001406BE525: jnb     short loc_1406BE551
 * 00000001406BE527: xor     ecx, ecx
 * 00000001406BE529: rdsspq  rcx
 * 00000001406BE52E: mov     r8, gs:9D28h
 * 00000001406BE537: add     r8, 8
 * 00000001406BE53B: cmp     rcx, r8
 * 00000001406BE53E: jnz     short loc_1406BE551
 * 00000001406BE540: mov     rcx, gs:9D20h
 * 00000001406BE549: rstorssp qword ptr [rcx]
 * 00000001406BE54D: saveprevssp
 * 00000001406BE551: mov     [rbp-50h], rax
 * 00000001406BE555: mov     byte ptr gs:85Eh, 0
 * 00000001406BE55E: movzx   eax, word ptr gs:86Ch
 * 00000001406BE567: cmp     gs:866h, ax
 * 00000001406BE570: jz      short loc_1406BE584
 * 00000001406BE572: mov     gs:866h, ax
 * 00000001406BE57B: mov     ecx, 48h ; 'H'
 * 00000001406BE580: xor     edx, edx
 * 00000001406BE582: wrmsr
 * 00000001406BE584: btr     word ptr gs:858h, 2
 * 00000001406BE58F: jnb     short loc_1406BE59F
 * 00000001406BE591: mov     eax, 1
 * 00000001406BE596: xor     edx, edx
 * 00000001406BE598: mov     ecx, 49h ; 'I'
 * 00000001406BE59D: wrmsr
 * 00000001406BE59F: btr     word ptr gs:858h, 5
 * 00000001406BE5AA: jnb     loc_1406BE6E7
 * 00000001406BE5B0: call    loc_1406BE6C3
 * 00000001406BE5B5: add     rsp, 8
 * 00000001406BE5B9: call    loc_1406BE6CC
 * 00000001406BE5BE: add     rsp, 8
 * 00000001406BE5C2: call    loc_1406BE5B5
 * 00000001406BE5C7: add     rsp, 8
 * 00000001406BE5CB: call    loc_1406BE5BE
 * 00000001406BE5D0: add     rsp, 8
 * 00000001406BE5D4: call    loc_1406BE5C7
 * 00000001406BE5D9: add     rsp, 8
 * 00000001406BE5DD: call    loc_1406BE5D0
 * 00000001406BE5E2: add     rsp, 8
 * 00000001406BE5E6: call    loc_1406BE5D9
 * 00000001406BE5EB: add     rsp, 8
 * 00000001406BE5EF: call    loc_1406BE5E2
 * 00000001406BE5F4: add     rsp, 8
 * 00000001406BE5F8: call    loc_1406BE5EB
 * 00000001406BE5FD: add     rsp, 8
 * 00000001406BE601: call    loc_1406BE5F4
 * 00000001406BE606: add     rsp, 8
 * 00000001406BE60A: call    loc_1406BE5FD
 * 00000001406BE60F: add     rsp, 8
 * 00000001406BE613: call    loc_1406BE606
 * 00000001406BE618: add     rsp, 8
 * 00000001406BE61C: call    loc_1406BE60F
 * 00000001406BE621: add     rsp, 8
 * 00000001406BE625: call    loc_1406BE618
 * 00000001406BE62A: add     rsp, 8
 * 00000001406BE62E: call    loc_1406BE621
 * 00000001406BE633: add     rsp, 8
 * 00000001406BE637: call    loc_1406BE62A
 * 00000001406BE63C: add     rsp, 8
 * 00000001406BE640: call    loc_1406BE633
 * 00000001406BE645: add     rsp, 8
 * 00000001406BE649: call    loc_1406BE63C
 * 00000001406BE64E: add     rsp, 8
 * 00000001406BE652: call    loc_1406BE645
 * 00000001406BE657: add     rsp, 8
 * 00000001406BE65B: call    loc_1406BE64E
 * 00000001406BE660: add     rsp, 8
 * 00000001406BE664: call    loc_1406BE657
 * 00000001406BE669: add     rsp, 8
 * 00000001406BE66D: call    loc_1406BE660
 * 00000001406BE672: add     rsp, 8
 * 00000001406BE676: call    loc_1406BE669
 * 00000001406BE67B: add     rsp, 8
 * 00000001406BE67F: call    loc_1406BE672
 * 00000001406BE684: add     rsp, 8
 * 00000001406BE688: call    loc_1406BE67B
 * 00000001406BE68D: add     rsp, 8
 * 00000001406BE691: call    loc_1406BE684
 * 00000001406BE696: add     rsp, 8
 * 00000001406BE69A: call    loc_1406BE68D
 * 00000001406BE69F: add     rsp, 8
 * 00000001406BE6A3: call    loc_1406BE696
 * 00000001406BE6A8: add     rsp, 8
 * 00000001406BE6AC: call    loc_1406BE69F
 * 00000001406BE6B1: add     rsp, 8
 * 00000001406BE6B5: call    loc_1406BE6A8
 * 00000001406BE6BA: add     rsp, 8
 * 00000001406BE6BE: call    loc_1406BE6B1
 * 00000001406BE6C3: add     rsp, 8
 * 00000001406BE6C7: call    loc_1406BE6BA
 * 00000001406BE6CC: add     rsp, 8
 * 00000001406BE6D0: mov     eax, 0DADAh
 * 00000001406BE6D5: test    byte ptr gs:85Ch, 8
 * 00000001406BE6DE: jz      short loc_1406BE6E7
 * 00000001406BE6E0: mov     al, 20h ; ' '
 * 00000001406BE6E2: incsspq rax
 * 00000001406BE6E7: test    word ptr gs:858h, 100h
 * 00000001406BE6F2: jz      short loc_1406BE700
 * 00000001406BE6F4: xor     eax, eax
 * 00000001406BE6F6: xor     edx, edx
 * 00000001406BE6F8: mov     ecx, 1
 * 00000001406BE6FD: div     rcx
 * 00000001406BE700: mov     rax, [rbp-50h]
 * 00000001406BE704: mov     r8, [rbp+100h]
 * 00000001406BE70B: mov     r9, [rbp+0D8h]
 * 00000001406BE712: xor     edx, edx
 * 00000001406BE714: pxor    xmm0, xmm0
 * 00000001406BE718: pxor    xmm1, xmm1
 * 00000001406BE71C: pxor    xmm2, xmm2
 * 00000001406BE720: pxor    xmm3, xmm3
 * 00000001406BE724: pxor    xmm4, xmm4
 * 00000001406BE728: pxor    xmm5, xmm5
 * 00000001406BE72C: mov     rcx, [rbp+0E8h]
 * 00000001406BE733: mov     r11, [rbp+0F8h]
 * 00000001406BE73A: test    cs:KiKvaShadow, 1
 * 00000001406BE741: jnz     KiKernelSysretExit
 * 00000001406BE747: mov     rbp, r9
 * 00000001406BE74A: mov     rsp, r8
 * 00000001406BE74D: xor     r9, r9
 * 00000001406BE750: rdsspq  r9
 * 00000001406BE755: test    r9, r9
 * 00000001406BE758: jz      short loc_1406BE762
 * 00000001406BE75A: clrssbsy qword ptr [r9]
 * 00000001406BE75F: xor     r9, r9
 * 00000001406BE762: test    word ptr gs:858h, 200h
 * 00000001406BE76D: jz      short loc_1406BE778
 * 00000001406BE76F: verw    word ptr gs:0B02Ah
 * 00000001406BE778: swapgs
 * 00000001406BE77B: sysret
 * 00000001406BE77E: mov     rdx, [rbp+0B8h]
 * 00000001406BE785: mov     [r11+90h], rdx
 * 00000001406BE78C: mov     dl, [rbp-58h]
 * 00000001406BE78F: mov     [r11+232h], dl
 * 00000001406BE796: cli
 * 00000001406BE797: mov     rsp, rbp
 * 00000001406BE79A: mov     rbp, [rbp+0D8h]
 * 00000001406BE7A1: mov     rsp, [rsp+90h+arg_68]
 * 00000001406BE7A9: sti
 * 00000001406BE7AA: retn
 * 00000001406BE7AB: mov     r11, gs:188h
 * 00000001406BE7B4: mov     rcx, cr8
 * 00000001406BE7B8: or      cl, [r11+24Ah]
 * 00000001406BE7BF: or      ecx, [r11+1E4h]
 * 00000001406BE7C6: jnz     loc_1406BEB31
 * 00000001406BE7CC: cmp     byte ptr [rbx+232h], 1
 * 00000001406BE7D3: jnz     loc_1406BEB66
 * 00000001406BE7D9: cli
 * 00000001406BE7DA: mov     [rbp-50h], rax
 * 00000001406BE7DE: mov     rcx, gs:188h
 * 00000001406BE7E7: test    byte ptr [rcx+0C2h], 3
 * 00000001406BE7EE: jz      short loc_1406BE80B
 * 00000001406BE7F0: mov     ecx, 1
 * 00000001406BE7F5: mov     cr8, rcx
 * 00000001406BE7F9: sti
 * 00000001406BE7FA: call    KiInitiateUserApc
 * 00000001406BE7FF: mov     ecx, 0
 * 00000001406BE804: mov     cr8, rcx
 * 00000001406BE808: cli
 * 00000001406BE809: jmp     short loc_1406BE7DE
 * 00000001406BE80B: test    byte ptr gs:860h, 2
 * 00000001406BE814: jz      short loc_1406BE81D
 * 00000001406BE816: xor     ecx, ecx
 * 00000001406BE818: call    KiUpdateStibpPairing
 * 00000001406BE81D: mov     rcx, gs:188h
 * 00000001406BE826: test    dword ptr [rcx], 8000000h
 * 00000001406BE82C: jz      short loc_1406BE833
 * 00000001406BE82E: call    KiRestoreSetContextState
 * 00000001406BE833: mov     rcx, gs:188h
 * 00000001406BE83C: test    byte ptr [rcx+2], 1
 * 00000001406BE840: jz      short loc_1406BE850
 * 00000001406BE842: call    KiCopyCounters
 * 00000001406BE847: mov     rcx, gs:188h
 * 00000001406BE850: cmp     word ptr [rbp+80h], 0
 * 00000001406BE858: jz      short loc_1406BE85F
 * 00000001406BE85A: call    KiRestoreDebugRegisterState
 * 00000001406BE85F: mov     rcx, gs:188h
 * 00000001406BE868: bt      dword ptr [rcx+74h], 16h
 * 00000001406BE86D: jnb     short loc_1406BE899
 * 00000001406BE86F: xor     ecx, ecx
 * 00000001406BE871: rdsspq  rcx
 * 00000001406BE876: mov     r8, gs:9D28h
 * 00000001406BE87F: add     r8, 8
 * 00000001406BE883: cmp     rcx, r8
 * 00000001406BE886: jnz     short loc_1406BE899
 * 00000001406BE888: mov     rcx, gs:9D20h
 * 00000001406BE891: rstorssp qword ptr [rcx]
 * 00000001406BE895: saveprevssp
 * 00000001406BE899: mov     byte ptr gs:85Eh, 0
 * 00000001406BE8A2: movzx   eax, word ptr gs:86Ch
 * 00000001406BE8AB: cmp     gs:866h, ax
 * 00000001406BE8B4: jz      short loc_1406BE8C8
 * 00000001406BE8B6: mov     gs:866h, ax
 * 00000001406BE8BF: mov     ecx, 48h ; 'H'
 * 00000001406BE8C4: xor     edx, edx
 * 00000001406BE8C6: wrmsr
 * 00000001406BE8C8: btr     word ptr gs:858h, 2
 * 00000001406BE8D3: jnb     short loc_1406BE8E3
 * 00000001406BE8D5: mov     eax, 1
 * 00000001406BE8DA: xor     edx, edx
 * 00000001406BE8DC: mov     ecx, 49h ; 'I'
 * 00000001406BE8E1: wrmsr
 * 00000001406BE8E3: btr     word ptr gs:858h, 5
 * 00000001406BE8EE: jnb     loc_1406BEA2B
 * 00000001406BE8F4: call    loc_1406BEA07
 * 00000001406BE8F9: add     rsp, 8
 * 00000001406BE8FD: call    loc_1406BEA10
 * 00000001406BE902: add     rsp, 8
 * 00000001406BE906: call    loc_1406BE8F9
 * 00000001406BE90B: add     rsp, 8
 * 00000001406BE90F: call    loc_1406BE902
 * 00000001406BE914: add     rsp, 8
 * 00000001406BE918: call    loc_1406BE90B
 * 00000001406BE91D: add     rsp, 8
 * 00000001406BE921: call    loc_1406BE914
 * 00000001406BE926: add     rsp, 8
 * 00000001406BE92A: call    loc_1406BE91D
 * 00000001406BE92F: add     rsp, 8
 * 00000001406BE933: call    loc_1406BE926
 * 00000001406BE938: add     rsp, 8
 * 00000001406BE93C: call    loc_1406BE92F
 * 00000001406BE941: add     rsp, 8
 * 00000001406BE945: call    loc_1406BE938
 * 00000001406BE94A: add     rsp, 8
 * 00000001406BE94E: call    loc_1406BE941
 * 00000001406BE953: add     rsp, 8
 * 00000001406BE957: call    loc_1406BE94A
 * 00000001406BE95C: add     rsp, 8
 * 00000001406BE960: call    loc_1406BE953
 * 00000001406BE965: add     rsp, 8
 * 00000001406BE969: call    loc_1406BE95C
 * 00000001406BE96E: add     rsp, 8
 * 00000001406BE972: call    loc_1406BE965
 * 00000001406BE977: add     rsp, 8
 * 00000001406BE97B: call    loc_1406BE96E
 * 00000001406BE980: add     rsp, 8
 * 00000001406BE984: call    loc_1406BE977
 * 00000001406BE989: add     rsp, 8
 * 00000001406BE98D: call    loc_1406BE980
 * 00000001406BE992: add     rsp, 8
 * 00000001406BE996: call    loc_1406BE989
 * 00000001406BE99B: add     rsp, 8
 * 00000001406BE99F: call    loc_1406BE992
 * 00000001406BE9A4: add     rsp, 8
 * 00000001406BE9A8: call    loc_1406BE99B
 * 00000001406BE9AD: add     rsp, 8
 * 00000001406BE9B1: call    loc_1406BE9A4
 * 00000001406BE9B6: add     rsp, 8
 * 00000001406BE9BA: call    loc_1406BE9AD
 * 00000001406BE9BF: add     rsp, 8
 * 00000001406BE9C3: call    loc_1406BE9B6
 * 00000001406BE9C8: add     rsp, 8
 * 00000001406BE9CC: call    loc_1406BE9BF
 * 00000001406BE9D1: add     rsp, 8
 * 00000001406BE9D5: call    loc_1406BE9C8
 * 00000001406BE9DA: add     rsp, 8
 * 00000001406BE9DE: call    loc_1406BE9D1
 * 00000001406BE9E3: add     rsp, 8
 * 00000001406BE9E7: call    loc_1406BE9DA
 * 00000001406BE9EC: add     rsp, 8
 * 00000001406BE9F0: call    loc_1406BE9E3
 * 00000001406BE9F5: add     rsp, 8
 * 00000001406BE9F9: call    loc_1406BE9EC
 * 00000001406BE9FE: add     rsp, 8
 * 00000001406BEA02: call    loc_1406BE9F5
 * 00000001406BEA07: add     rsp, 8
 * 00000001406BEA0B: call    loc_1406BE9FE
 * 00000001406BEA10: add     rsp, 8
 * 00000001406BEA14: mov     eax, 0DADAh
 * 00000001406BEA19: test    byte ptr gs:85Ch, 8
 * 00000001406BEA22: jz      short loc_1406BEA2B
 * 00000001406BEA24: mov     al, 20h ; ' '
 * 00000001406BEA26: incsspq rax
 * 00000001406BEA2B: test    word ptr gs:858h, 100h
 * 00000001406BEA36: jz      short loc_1406BEA44
 * 00000001406BEA38: xor     eax, eax
 * 00000001406BEA3A: xor     edx, edx
 * 00000001406BEA3C: mov     ecx, 1
 * 00000001406BEA41: div     rcx
 * 00000001406BEA44: ldmxcsr dword ptr [rbp-54h]
 * 00000001406BEA48: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406BEA4C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406BEA50: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406BEA54: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406BEA58: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406BEA5C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406BEA60: mov     r11, [rbp-20h]
 * 00000001406BEA64: mov     r10, [rbp-28h]
 * 00000001406BEA68: mov     r9, [rbp-30h]
 * 00000001406BEA6C: mov     r8, [rbp-38h]
 * 00000001406BEA70: mov     rdx, [rbp-40h]
 * 00000001406BEA74: mov     rcx, [rbp-48h]
 * 00000001406BEA78: mov     rax, [rbp-50h]
 * 00000001406BEA7C: mov     rsi, [rbp+0D0h]
 * 00000001406BEA83: mov     rdi, [rbp+0C8h]
 * 00000001406BEA8A: mov     rbx, [rbp+0C0h]
 * 00000001406BEA91: mov     rsp, rbp
 * 00000001406BEA94: mov     rbp, [rbp+0D8h]
 * 00000001406BEA9B: add     rsp, 0E8h
 * 00000001406BEAA2: test    cs:KiKvaShadow, 1
 * 00000001406BEAA9: jz      short loc_1406BEAB0
 * 00000001406BEAAB: jmp     KiKernelExit
 * 00000001406BEAB0: test    word ptr gs:858h, 200h
 * 00000001406BEABB: jz      short loc_1406BEAC2
 * 00000001406BEABD: verw    [rsp-158h+arg_170]
 * 00000001406BEAC2: swapgs
 * 00000001406BEAC5: iretq
 * 00000001406BEAC7: cmp     edi, 20h ; ' '
 * 00000001406BEACA: jnz     short loc_1406BEB27
 * 00000001406BEACC: mov     [rbp-80h], eax
 * 00000001406BEACF: mov     [rbp-78h], rcx
 * 00000001406BEAD3: mov     [rbp-70h], rdx
 * 00000001406BEAD7: mov     [rbp-68h], r8
 * 00000001406BEADB: mov     [rbp-60h], r9
 * 00000001406BEADF: call    KiConvertToGuiThread
 * 00000001406BEAE4: or      eax, eax
 * 00000001406BEAE6: mov     eax, [rbp-80h]
 * 00000001406BEAE9: mov     rcx, [rbp-78h]
 * 00000001406BEAED: mov     rdx, [rbp-70h]
 * 00000001406BEAF1: mov     r8, [rbp-68h]
 * 00000001406BEAF5: mov     r9, [rbp-60h]
 * 00000001406BEAF9: mov     [rbx+90h], rsp
 * 00000001406BEB00: jz      KiSystemServiceRepeat
 * 00000001406BEB06: lea     rdi, xmmword_140FC62A0
 * 00000001406BEB0D: mov     esi, [rdi+10h]
 * 00000001406BEB10: mov     rdi, [rdi]
 * 00000001406BEB13: cmp     eax, esi
 * 00000001406BEB15: jnb     short loc_1406BEB27
 * 00000001406BEB17: lea     rdi, [rdi+rsi*4]
 * 00000001406BEB1B: movsx   eax, byte ptr [rdi+rax]
 * 00000001406BEB1F: or      eax, eax
 * 00000001406BEB21: jle     KiSystemServiceExit
 * 00000001406BEB27: mov     eax, 0C000001Ch
 * 00000001406BEB2C: jmp     KiSystemServiceExit
 * 00000001406BEB31: mov     ecx, 4Ah ; 'J'
 * 00000001406BEB36: xor     r9d, r9d
 * 00000001406BEB39: mov     r8, cr8
 * 00000001406BEB3D: or      r8d, r8d
 * 00000001406BEB40: jnz     short loc_1406BEB56
 * 00000001406BEB42: mov     ecx, 1
 * 00000001406BEB47: movzx   r8d, byte ptr [r11+24Ah]
 * 00000001406BEB4F: mov     r9d, [r11+1E4h]
 * 00000001406BEB56: mov     rdx, [rbp+0E8h]
 * 00000001406BEB5D: mov     r10, rbp
 * 00000001406BEB60: call    KiBugCheckDispatch
 * 00000001406BEB66: mov     ecx, 1F9h
 * 00000001406BEB6B: mov     rdx, [rbp+0E8h]
 * 00000001406BEB72: movzx   r8d, byte ptr [r11+232h]
 * 00000001406BEB7A: xor     r9d, r9d
 * 00000001406BEB7D: xor     r10d, r10d
 * 00000001406BEB80: call    KiBugCheckDispatch
 * 00000001406BEB86: sub     rsp, 50h
 * 00000001406BEB8A: mov     [rsp+0E0h+var_C0], rcx
 * 00000001406BEB8F: mov     [rsp+0E0h+var_B8], rdx
 * 00000001406BEB94: mov     [rsp+0E0h+var_B0], r8
 * 00000001406BEB99: mov     [rsp+0E0h+var_A8], r9
 * 00000001406BEB9E: mov     [rsp+0E0h+var_A0], r10
 * 00000001406BEBA3: mov     rcx, r10
 * 00000001406BEBA6: mov     rdx, rsp
 * 00000001406BEBA9: add     rdx, 20h ; ' '
 * 00000001406BEBAD: mov     r8, 4
 * 00000001406BEBB4: mov     r9, rsp
 * 00000001406BEBB7: add     r9, 70h ; 'p'
 * 00000001406BEBBB: call    KiTrackSystemCallEntry
 * 00000001406BEBC0: mov     [rbp-60h], rax
 * 00000001406BEBC4: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001406BEBC9: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001406BEBCE: mov     r8, [rsp+0E0h+var_B0]
 * 00000001406BEBD3: mov     r9, [rsp+0E0h+var_A8]
 * 00000001406BEBD8: mov     r10, [rsp+0E0h+var_A0]
 * 00000001406BEBDD: add     rsp, 50h
 * 00000001406BEBE1: mov     rax, r10
 * 00000001406BEBE4: call    rax
 * 00000001406BEBE6: nop     dword ptr [rax]
 * 00000001406BEBE9: mov     rcx, [rbp-60h]
 * 00000001406BEBED: mov     rdx, rax
 * 00000001406BEBF0: call    KiTrackSystemCallExit
 * 00000001406BEBF5: jmp     loc_1406BE358
 * 00000001406BEBFA: sub     rsp, 50h
 * 00000001406BEBFE: mov     [rsp+0E0h+var_C0], rcx
 * 00000001406BEC03: mov     [rsp+0E0h+var_B8], rdx
 * 00000001406BEC08: mov     [rsp+0E0h+var_B0], r8
 * 00000001406BEC0D: mov     [rsp+0E0h+var_A8], r9
 * 00000001406BEC12: mov     [rsp+0E0h+var_A0], r10
 * 00000001406BEC17: mov     rcx, r10
 * 00000001406BEC1A: call    PerfInfoLogSysCallEntry
 * 00000001406BEC1F: mov     rcx, [rsp+0E0h+var_C0]
 * 00000001406BEC24: mov     rdx, [rsp+0E0h+var_B8]
 * 00000001406BEC29: mov     r8, [rsp+0E0h+var_B0]
 * 00000001406BEC2E: mov     r9, [rsp+0E0h+var_A8]
 * 00000001406BEC33: mov     r10, [rsp+0E0h+var_A0]
 * 00000001406BEC38: add     rsp, 50h
 * 00000001406BEC3C: mov     rax, r10
 * 00000001406BEC3F: call    rax
 * 00000001406BEC41: nop     dword ptr [rax]
 * 00000001406BEC44: mov     rcx, rax
 * 00000001406BEC47: call    PerfInfoLogSysCallExit
 * 00000001406BEC4C: jmp     loc_1406BE358
 * 00000001406BEC51: retn
 */
