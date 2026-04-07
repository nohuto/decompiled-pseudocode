/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x180021F44
 * Callers:
 *     DllMain @ 0x18005F534 (DllMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x180021F44
 * Reason: Hex-Rays returned no pseudocode for 0x180021F44
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180021F44: sub     rsp, 28h
 * 0000000180021F48: xor     eax, eax
 * 0000000180021F4A: cmp     cs:Microsoft_Windows_Dwm_Udwm_Provider_Context, rax
 * 0000000180021F51: jnz     short loc_180021F77
 * 0000000180021F53: lea     r8, Microsoft_Windows_Dwm_Udwm_Provider_Context
 * 0000000180021F5A: mov     r9, r8
 * 0000000180021F5D: lea     rdx, McGenControlCallbackV2
 * 0000000180021F64: lea     rcx, Microsoft_Windows_Dwm_Udwm_Provider
 * 0000000180021F6B: call    cs:__imp_EtwEventRegister
 * 0000000180021F72: nop     dword ptr [rax+rax+00h]
 * 0000000180021F77: add     rsp, 28h
 * 0000000180021F7B: retn
 */
