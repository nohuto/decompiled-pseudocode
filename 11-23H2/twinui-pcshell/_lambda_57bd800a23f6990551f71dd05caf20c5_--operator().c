/*
 * XREFs of _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x180024DA0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___::Run @ 0x180024D90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___--Run.c)
 * Callees:
 *     McTemplateU0dd_EventWriteTransfer @ 0x180024EF8 (McTemplateU0dd_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180024F70 (McTemplateU0q_EventWriteTransfer.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180024FD4 (McTemplateU0qq_EventWriteTransfer.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x180024DA0
 * Reason: Hex-Rays returned no pseudocode for 0x180024DA0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180024DA0: mov     [rsp+arg_10], rbx
 * 0000000180024DA5: push    rdi
 * 0000000180024DA6: sub     rsp, 30h
 * 0000000180024DAA: mov     rax, [rcx]
 * 0000000180024DAD: mov     rdi, [rax+8]
 * 0000000180024DB1: mov     rcx, [rdi+8]
 * 0000000180024DB5: test    rcx, rcx
 * 0000000180024DB8: jz      loc_180024EE3
 * 0000000180024DBE: mov     rax, [rcx]
 * 0000000180024DC1: mov     r10, 0CAF0BF6E14DCC170h
 * 0000000180024DCB: lea     rdx, [rsp+38h+arg_0]
 * 0000000180024DD0: mov     rax, [rax+18h]
 * 0000000180024DD4: call    cs:__guard_xfg_dispatch_icall_fptr
 * 0000000180024DDA: test    eax, eax
 * 0000000180024DDC: js      loc_180024EE3
 * 0000000180024DE2: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180024DE9: jz      short loc_180024DFE
 * 0000000180024DEB: mov     r9d, [rdi]
 * 0000000180024DEE: mov     r8d, [rdi+4]
 * 0000000180024DF2: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Start
 * 0000000180024DF9: call    McTemplateU0dd_EventWriteTransfer
 * 0000000180024DFE: xor     ebx, ebx
 * 0000000180024E00: cmp     [rsp+38h+arg_0], ebx
 * 0000000180024E04: jbe     loc_180024EC7
 * 0000000180024E0A: and     [rsp+38h+arg_8], 0
 * 0000000180024E10: mov     rcx, [rdi+8]
 * 0000000180024E14: mov     rax, [rcx]
 * 0000000180024E17: mov     r10, 0AF61275D14581070h
 * 0000000180024E21: lea     r9, [rsp+38h+arg_8]
 * 0000000180024E26: lea     r8, _GUID_0c40987c_7026_499e_adad_c164c0ffee84
 * 0000000180024E2D: mov     edx, ebx
 * 0000000180024E2F: mov     rax, [rax+20h]
 * 0000000180024E33: call    cs:__guard_xfg_dispatch_icall_fptr
 * 0000000180024E39: test    eax, eax
 * 0000000180024E3B: js      short loc_180024E93
 * 0000000180024E3D: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180024E44: jz      short loc_180024E55
 * 0000000180024E46: mov     r8d, ebx
 * 0000000180024E49: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Start
 * 0000000180024E50: call    McTemplateU0q_EventWriteTransfer
 * 0000000180024E55: mov     rcx, [rsp+38h+arg_8]
 * 0000000180024E5A: mov     rax, [rcx]
 * 0000000180024E5D: mov     r10, 0C02007395ADC3870h
 * 0000000180024E67: mov     r8d, [rdi]
 * 0000000180024E6A: mov     edx, [rdi+4]
 * 0000000180024E6D: mov     rax, [rax+18h]
 * 0000000180024E71: call    cs:__guard_xfg_dispatch_icall_fptr
 * 0000000180024E77: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180024E7E: jz      short loc_180024E93
 * 0000000180024E80: mov     r9d, eax
 * 0000000180024E83: mov     r8d, ebx
 * 0000000180024E86: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Stop
 * 0000000180024E8D: call    McTemplateU0qq_EventWriteTransfer
 * 0000000180024E92: nop
 * 0000000180024E93: mov     rcx, [rsp+38h+arg_8]
 * 0000000180024E98: test    rcx, rcx
 * 0000000180024E9B: jz      short loc_180024EBB
 * 0000000180024E9D: and     [rsp+38h+arg_8], 0
 * 0000000180024EA3: mov     rax, [rcx]
 * 0000000180024EA6: mov     r10, 0BAAC1F10365EB170h
 * 0000000180024EB0: mov     rax, [rax+10h]
 * 0000000180024EB4: call    cs:__guard_xfg_dispatch_icall_fptr
 * 0000000180024EBA: nop
 * 0000000180024EBB: inc     ebx
 * 0000000180024EBD: cmp     ebx, [rsp+38h+arg_0]
 * 0000000180024EC1: jb      loc_180024E0A
 * 0000000180024EC7: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180024ECE: jz      short loc_180024EE3
 * 0000000180024ED0: mov     r9d, [rdi]
 * 0000000180024ED3: mov     r8d, [rdi+4]
 * 0000000180024ED7: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Stop
 * 0000000180024EDE: call    McTemplateU0dd_EventWriteTransfer
 * 0000000180024EE3: mov     rbx, [rsp+38h+arg_10]
 * 0000000180024EE8: add     rsp, 30h
 * 0000000180024EEC: pop     rdi
 * 0000000180024EED: retn
 */
