/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x18014E564
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x18014E08C (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x18014E564
 * Reason: Hex-Rays returned no pseudocode for 0x18014E564
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018014E564: sub     rsp, 28h
 * 000000018014E568: xor     eax, eax
 * 000000018014E56A: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 000000018014E571: jnz     short loc_18014E597
 * 000000018014E573: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 000000018014E57A: mov     r9, r8
 * 000000018014E57D: lea     rdx, McGenControlCallbackV2
 * 000000018014E584: lea     rcx, AUDIO_EVENT_PROVIDER
 * 000000018014E58B: call    cs:__imp_EtwEventRegister
 * 000000018014E592: nop     dword ptr [rax+rax+00h]
 * 000000018014E597: add     rsp, 28h
 * 000000018014E59B: retn
 */
