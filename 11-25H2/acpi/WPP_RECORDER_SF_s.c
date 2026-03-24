/*
 * XREFs of WPP_RECORDER_SF_s @ 0x140042384
 * Callers:
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053814 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1400A35AC (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400B6E24 (ACPIRegReadAMLRegistryEntry.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400C44E4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x140042384
 * Reason: Hex-Rays returned no pseudocode for 0x140042384
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140042384: mov     rax, rsp
 * 0000000140042387: mov     [rax+8], rbx
 * 000000014004238B: mov     [rax+10h], rbp
 * 000000014004238F: mov     [rax+18h], rsi
 * 0000000140042393: mov     [rax+20h], rdi
 * 0000000140042397: push    r12
 * 0000000140042399: push    r14
 * 000000014004239B: push    r15
 * 000000014004239D: sub     rsp, 40h
 * 00000001400423A1: mov     rbx, [rsp+58h+arg_28]
 * 00000001400423A9: mov     r12, rcx
 * 00000001400423AC: mov     r15d, r8d
 * 00000001400423AF: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001400423B3: mov     esi, r8d
 * 00000001400423B6: shr     rsi, 10h
 * 00000001400423BA: movzx   r14d, r9w
 * 00000001400423BE: lea     r11d, [r15-1]
 * 00000001400423C2: movzx   ebp, dl
 * 00000001400423C5: mov     r10d, r11d
 * 00000001400423C8: and     r11d, 1Fh
 * 00000001400423CC: shr     r10, 5
 * 00000001400423D0: lea     rax, [rsi+rsi*4]
 * 00000001400423D4: and     r10d, 7FFh
 * 00000001400423DB: mov     ecx, r11d
 * 00000001400423DE: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001400423E5: lea     r8, [r10+rax*4]
 * 00000001400423E9: mov     eax, [r11+r8*4+2Ch]
 * 00000001400423EE: bt      eax, ecx
 * 00000001400423F1: lea     r8, aNull; "NULL"
 * 00000001400423F8: jb      short loc_140042468
 * 00000001400423FA: test    rbx, rbx
 * 00000001400423FD: jz      loc_1400424D8
 * 0000000140042403: inc     rdi
 * 0000000140042406: cmp     byte ptr [rbx+rdi], 0
 * 000000014004240A: jnz     short loc_140042403
 * 000000014004240C: inc     rdi
 * 000000014004240F: mov     r9, [rsp+58h+arg_20]
 * 0000000140042417: test    rbx, rbx
 * 000000014004241A: mov     edx, ebp
 * 000000014004241C: mov     rcx, r12
 * 000000014004241F: cmovz   rbx, r8
 * 0000000140042423: and     [rsp+58h+var_20], 0
 * 0000000140042429: mov     [rsp+58h+var_28], rdi
 * 000000014004242E: mov     r8d, r15d
 * 0000000140042431: mov     [rsp+58h+var_30], rbx
 * 0000000140042436: mov     word ptr [rsp+58h+var_38], r14w
 * 000000014004243C: call    cs:__imp_WppAutoLogTrace
 * 0000000140042443: nop     dword ptr [rax+rax+00h]
 * 0000000140042448: mov     rbx, [rsp+58h+arg_0]
 * 000000014004244D: mov     rbp, [rsp+58h+arg_8]
 * 0000000140042452: mov     rsi, [rsp+58h+arg_10]
 * 0000000140042457: mov     rdi, [rsp+58h+arg_18]
 * 000000014004245C: add     rsp, 40h
 * 0000000140042460: pop     r15
 * 0000000140042462: pop     r14
 * 0000000140042464: pop     r12
 * 0000000140042466: retn
 * 0000000140042468: lea     r10, [rsi+rsi*4]
 * 000000014004246C: add     r10, r10
 * 000000014004246F: cmp     [r11+r10*8+29h], bpl
 * 0000000140042474: jb      short loc_1400423FA
 * 0000000140042476: test    rbx, rbx
 * 0000000140042479: jz      short loc_14004248C
 * 000000014004247B: mov     rdx, rdi
 * 000000014004247E: inc     rdx
 * 0000000140042481: cmp     byte ptr [rbx+rdx], 0
 * 0000000140042485: jnz     short loc_14004247E
 * 0000000140042487: inc     rdx
 * 000000014004248A: jmp     short loc_140042491
 * 000000014004248C: mov     edx, 5
 * 0000000140042491: mov     rax, cs:pfnWppTraceMessage
 * 0000000140042498: test    rbx, rbx
 * 000000014004249B: mov     rcx, rbx
 * 000000014004249E: mov     r9d, r14d
 * 00000001400424A1: cmovz   rcx, r8
 * 00000001400424A5: and     [rsp+58h+var_28], 0
 * 00000001400424AB: mov     r8, [rsp+58h+arg_20]
 * 00000001400424B3: mov     [rsp+58h+var_30], rdx
 * 00000001400424B8: mov     edx, 2Bh ; '+'
 * 00000001400424BD: mov     [rsp+58h+var_38], rcx
 * 00000001400424C2: mov     rcx, [r11+r10*8+18h]
 * 00000001400424C7: call    _guard_dispatch_icall
 * 00000001400424CC: lea     r8, aNull; "NULL"
 * 00000001400424D3: jmp     loc_1400423FA
 * 00000001400424D8: mov     edi, 5
 * 00000001400424DD: jmp     loc_14004240F
 */
