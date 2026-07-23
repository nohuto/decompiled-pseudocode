/*
 * XREFs of KiCallUserMode @ 0x1406AC440
 * Callers:
 *     KeUserModeCallback @ 0x1408BCB10 (KeUserModeCallback.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1406AC440 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1406AC440
 * Reason: Hex-Rays returned no pseudocode for 0x1406AC440
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AC440: sub     rsp, 138h
 * 00000001406AC447: lea     rax, [rsp+138h+var_38]
 * 00000001406AC44F: movaps  [rsp+138h+var_108], xmm6
 * 00000001406AC454: movaps  [rsp+138h+var_F8], xmm7
 * 00000001406AC459: movaps  [rsp+138h+var_E8], xmm8
 * 00000001406AC45F: movaps  [rsp+138h+var_D8], xmm9
 * 00000001406AC465: movaps  [rsp+138h+var_C8], xmm10
 * 00000001406AC46B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001406AC470: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001406AC475: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001406AC47A: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001406AC47F: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001406AC484: mov     [rax-8], rbp
 * 00000001406AC488: mov     rbp, rsp
 * 00000001406AC48B: mov     [rax], rbx
 * 00000001406AC48E: mov     [rax+8], rdi
 * 00000001406AC492: mov     [rax+10h], rsi
 * 00000001406AC496: mov     [rax+18h], r12
 * 00000001406AC49A: mov     [rax+20h], r13
 * 00000001406AC49E: mov     [rax+28h], r14
 * 00000001406AC4A2: mov     [rax+30h], r15
 * 00000001406AC4A6: xor     r10, r10
 * 00000001406AC4A9: xor     r12, r12
 * 00000001406AC4AC: xor     r13, r13
 * 00000001406AC4AF: xor     r14, r14
 * 00000001406AC4B2: xor     r15, r15
 * 00000001406AC4B5: pxor    xmm6, xmm6
 * 00000001406AC4B9: pxor    xmm7, xmm7
 * 00000001406AC4BD: pxor    xmm8, xmm8
 * 00000001406AC4C2: pxor    xmm9, xmm9
 * 00000001406AC4C7: pxor    xmm10, xmm10
 * 00000001406AC4CC: pxor    xmm11, xmm11
 * 00000001406AC4D1: pxor    xmm12, xmm12
 * 00000001406AC4D6: pxor    xmm13, xmm13
 * 00000001406AC4DB: pxor    xmm14, xmm14
 * 00000001406AC4E0: pxor    xmm15, xmm15
 * 00000001406AC4E5: mov     [rbp+0D8h], rcx
 * 00000001406AC4EC: mov     [rbp+0E0h], rdx
 * 00000001406AC4F3: mov     rbx, gs:188h
 * 00000001406AC4FC: mov     [r8+20h], rsp
 * 00000001406AC500: mov     rsi, [rbx+90h]
 * 00000001406AC507: mov     [rbp+0D0h], rsi
 * 00000001406AC50E: cli
 * 00000001406AC50F: mov     [rbx+28h], r8
 * 00000001406AC513: mov     [rbx+38h], r9
 * 00000001406AC517: test    cs:KiKvaShadow, 1
 * 00000001406AC51E: jnz     short loc_1406AC52F
 * 00000001406AC520: mov     rdi, gs:8
 * 00000001406AC529: mov     [rdi+4], r8
 * 00000001406AC52D: jmp     short loc_1406AC538
 * 00000001406AC52F: mov     gs:0B008h, r8
 * 00000001406AC538: mov     ecx, cs:KeKernelStackSize
 * 00000001406AC53E: sub     r9, rcx
 * 00000001406AC541: mov     gs:1A8h, r8
 * 00000001406AC54A: mov     [rbx+30h], r9
 * 00000001406AC54E: mov     rcx, [rsp+138h+arg_20]
 * 00000001406AC556: test    rcx, rcx
 * 00000001406AC559: jz      short loc_1406AC5A5
 * 00000001406AC55B: mov     [rbx+418h], rcx
 * 00000001406AC562: sub     rcx, 3000h
 * 00000001406AC569: mov     [rbx+420h], rcx
 * 00000001406AC570: or      qword ptr [rbx+420h], 2
 * 00000001406AC578: mov     rcx, [rsp+138h+arg_28]
 * 00000001406AC580: mov     [rbx+410h], rcx
 * 00000001406AC587: mov     gs:9D28h, rcx
 * 00000001406AC590: rdsspq  rdx
 * 00000001406AC595: rstorssp qword ptr [rcx]
 * 00000001406AC599: saveprevssp
 * 00000001406AC59D: sub     rdx, 8
 * 00000001406AC5A1: mov     [r8+40h], rdx
 * 00000001406AC5A5: lea     rsp, [r8-190h]
 * 00000001406AC5AC: mov     rdi, rsp
 * 00000001406AC5AF: mov     ecx, 32h ; '2'
 * 00000001406AC5B4: rep movsq
 * 00000001406AC5B7: xor     edi, edi
 * 00000001406AC5B9: test    byte ptr [rbx+0C2h], 3
 * 00000001406AC5C0: jnz     loc_1406AC896
 * 00000001406AC5C6: test    dword ptr [rbx], 8010000h
 * 00000001406AC5CC: jnz     loc_1406AC896
 * 00000001406AC5D2: test    byte ptr gs:860h, 2
 * 00000001406AC5DB: jnz     loc_1406AC896
 * 00000001406AC5E1: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AC5E6: test    eax, eax
 * 00000001406AC5E8: jnz     loc_1406AC896
 * 00000001406AC5EE: lea     rbp, [rsi-110h]
 * 00000001406AC5F5: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AC5F9: xor     esi, esi
 * 00000001406AC5FB: test    byte ptr [rbx+3], 3
 * 00000001406AC5FF: jnz     loc_1406AC86B
 * 00000001406AC605: mov     r9, cs:qword_140FC74E0
 * 00000001406AC60C: mov     rcx, gs:188h
 * 00000001406AC615: bt      dword ptr [rcx+74h], 16h
 * 00000001406AC61A: jnb     short loc_1406AC646
 * 00000001406AC61C: xor     ecx, ecx
 * 00000001406AC61E: rdsspq  rcx
 * 00000001406AC623: mov     r8, gs:9D28h
 * 00000001406AC62C: add     r8, 8
 * 00000001406AC630: cmp     rcx, r8
 * 00000001406AC633: jnz     short loc_1406AC646
 * 00000001406AC635: mov     rcx, gs:9D20h
 * 00000001406AC63E: rstorssp qword ptr [rcx]
 * 00000001406AC642: saveprevssp
 * 00000001406AC646: mov     byte ptr gs:85Eh, 0
 * 00000001406AC64F: movzx   eax, word ptr gs:86Ch
 * 00000001406AC658: cmp     gs:866h, ax
 * 00000001406AC661: jz      short loc_1406AC675
 * 00000001406AC663: mov     gs:866h, ax
 * 00000001406AC66C: mov     ecx, 48h ; 'H'
 * 00000001406AC671: xor     edx, edx
 * 00000001406AC673: wrmsr
 * 00000001406AC675: btr     word ptr gs:858h, 2
 * 00000001406AC680: jnb     short loc_1406AC690
 * 00000001406AC682: mov     eax, 1
 * 00000001406AC687: xor     edx, edx
 * 00000001406AC689: mov     ecx, 49h ; 'I'
 * 00000001406AC68E: wrmsr
 * 00000001406AC690: btr     word ptr gs:858h, 5
 * 00000001406AC69B: jnb     loc_1406AC7D8
 * 00000001406AC6A1: call    loc_1406AC7B4
 * 00000001406AC6A6: add     rsp, 8
 * 00000001406AC6AA: call    loc_1406AC7BD
 * 00000001406AC6AF: add     rsp, 8
 * 00000001406AC6B3: call    loc_1406AC6A6
 * 00000001406AC6B8: add     rsp, 8
 * 00000001406AC6BC: call    loc_1406AC6AF
 * 00000001406AC6C1: add     rsp, 8
 * 00000001406AC6C5: call    loc_1406AC6B8
 * 00000001406AC6CA: add     rsp, 8
 * 00000001406AC6CE: call    loc_1406AC6C1
 * 00000001406AC6D3: add     rsp, 8
 * 00000001406AC6D7: call    loc_1406AC6CA
 * 00000001406AC6DC: add     rsp, 8
 * 00000001406AC6E0: call    loc_1406AC6D3
 * 00000001406AC6E5: add     rsp, 8
 * 00000001406AC6E9: call    loc_1406AC6DC
 * 00000001406AC6EE: add     rsp, 8
 * 00000001406AC6F2: call    loc_1406AC6E5
 * 00000001406AC6F7: add     rsp, 8
 * 00000001406AC6FB: call    loc_1406AC6EE
 * 00000001406AC700: add     rsp, 8
 * 00000001406AC704: call    loc_1406AC6F7
 * 00000001406AC709: add     rsp, 8
 * 00000001406AC70D: call    loc_1406AC700
 * 00000001406AC712: add     rsp, 8
 * 00000001406AC716: call    loc_1406AC709
 * 00000001406AC71B: add     rsp, 8
 * 00000001406AC71F: call    loc_1406AC712
 * 00000001406AC724: add     rsp, 8
 * 00000001406AC728: call    loc_1406AC71B
 * 00000001406AC72D: add     rsp, 8
 * 00000001406AC731: call    loc_1406AC724
 * 00000001406AC736: add     rsp, 8
 * 00000001406AC73A: call    loc_1406AC72D
 * 00000001406AC73F: add     rsp, 8
 * 00000001406AC743: call    loc_1406AC736
 * 00000001406AC748: add     rsp, 8
 * 00000001406AC74C: call    loc_1406AC73F
 * 00000001406AC751: add     rsp, 8
 * 00000001406AC755: call    loc_1406AC748
 * 00000001406AC75A: add     rsp, 8
 * 00000001406AC75E: call    loc_1406AC751
 * 00000001406AC763: add     rsp, 8
 * 00000001406AC767: call    loc_1406AC75A
 * 00000001406AC76C: add     rsp, 8
 * 00000001406AC770: call    loc_1406AC763
 * 00000001406AC775: add     rsp, 8
 * 00000001406AC779: call    loc_1406AC76C
 * 00000001406AC77E: add     rsp, 8
 * 00000001406AC782: call    loc_1406AC775
 * 00000001406AC787: add     rsp, 8
 * 00000001406AC78B: call    loc_1406AC77E
 * 00000001406AC790: add     rsp, 8
 * 00000001406AC794: call    loc_1406AC787
 * 00000001406AC799: add     rsp, 8
 * 00000001406AC79D: call    loc_1406AC790
 * 00000001406AC7A2: add     rsp, 8
 * 00000001406AC7A6: call    loc_1406AC799
 * 00000001406AC7AB: add     rsp, 8
 * 00000001406AC7AF: call    loc_1406AC7A2
 * 00000001406AC7B4: add     rsp, 8
 * 00000001406AC7B8: call    loc_1406AC7AB
 * 00000001406AC7BD: add     rsp, 8
 * 00000001406AC7C1: mov     eax, 0DADAh
 * 00000001406AC7C6: test    byte ptr gs:85Ch, 8
 * 00000001406AC7CF: jz      short loc_1406AC7D8
 * 00000001406AC7D1: mov     al, 20h ; ' '
 * 00000001406AC7D3: incsspq rax
 * 00000001406AC7D8: test    word ptr gs:858h, 100h
 * 00000001406AC7E3: jz      short loc_1406AC7F1
 * 00000001406AC7E5: xor     eax, eax
 * 00000001406AC7E7: xor     edx, edx
 * 00000001406AC7E9: mov     ecx, 1
 * 00000001406AC7EE: div     rcx
 * 00000001406AC7F1: mov     rcx, r9
 * 00000001406AC7F4: xor     eax, eax
 * 00000001406AC7F6: xor     edx, edx
 * 00000001406AC7F8: mov     r8, [rbp+100h]
 * 00000001406AC7FF: mov     r9, [rbp+0D8h]
 * 00000001406AC806: pxor    xmm0, xmm0
 * 00000001406AC80A: pxor    xmm1, xmm1
 * 00000001406AC80E: pxor    xmm2, xmm2
 * 00000001406AC812: pxor    xmm3, xmm3
 * 00000001406AC816: pxor    xmm4, xmm4
 * 00000001406AC81A: pxor    xmm5, xmm5
 * 00000001406AC81E: mov     r11, [rbp+0F8h]
 * 00000001406AC825: xor     ebx, ebx
 * 00000001406AC827: test    cs:KiKvaShadow, 1
 * 00000001406AC82E: jnz     KiKernelSysretExit
 * 00000001406AC834: mov     rbp, r9
 * 00000001406AC837: mov     rsp, r8
 * 00000001406AC83A: xor     r9, r9
 * 00000001406AC83D: rdsspq  r9
 * 00000001406AC842: test    r9, r9
 * 00000001406AC845: jz      short loc_1406AC84F
 * 00000001406AC847: clrssbsy qword ptr [r9]
 * 00000001406AC84C: xor     r9, r9
 * 00000001406AC84F: test    word ptr gs:858h, 200h
 * 00000001406AC85A: jz      short loc_1406AC865
 * 00000001406AC85C: verw    word ptr gs:0B02Ah
 * 00000001406AC865: swapgs
 * 00000001406AC868: sysret
 * 00000001406AC86B: call    KiRestoreDebugRegisterState
 * 00000001406AC870: mov     r10, cs:qword_140FC74E0
 * 00000001406AC877: mov     r9, [rbx+0B8h]
 * 00000001406AC87E: mov     r9, [r9+168h]
 * 00000001406AC885: or      r9, r9
 * 00000001406AC888: jnz     loc_1406AC60C
 * 00000001406AC88E: xchg    r9, r10
 * 00000001406AC891: jmp     loc_1406AC60C
 * 00000001406AC896: lea     rbp, [rsp+138h+var_B8]
 * 00000001406AC89E: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 00000001406AC8A7: mov     rax, cs:qword_140FC74E0
 * 00000001406AC8AE: mov     [rbp+0E8h], rax
 * 00000001406AC8B5: lea     rcx, KiSystemServiceExit
 * 00000001406AC8BC: jmp     rcx
 * 00000001406AC8C2: retn
 */
