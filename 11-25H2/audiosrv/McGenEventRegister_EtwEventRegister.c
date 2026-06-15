/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x180145AC4
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x1801455EC (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x180145AC4
 * Reason: Hex-Rays returned no pseudocode for 0x180145AC4
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180145AC4: sub     rsp, 28h
 * 0000000180145AC8: xor     eax, eax
 * 0000000180145ACA: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 0000000180145AD1: jnz     short loc_180145AF7
 * 0000000180145AD3: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 0000000180145ADA: mov     r9, r8
 * 0000000180145ADD: lea     rdx, McGenControlCallbackV2
 * 0000000180145AE4: lea     rcx, AUDIO_EVENT_PROVIDER
 * 0000000180145AEB: call    cs:__imp_EtwEventRegister
 * 0000000180145AF2: nop     dword ptr [rax+rax+00h]
 * 0000000180145AF7: add     rsp, 28h
 * 0000000180145AFB: retn
 */
