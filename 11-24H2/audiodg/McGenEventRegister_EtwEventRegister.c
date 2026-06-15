/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x140058434
 * Callers:
 *     wWinMain @ 0x14004AAF4 (wWinMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x140058434
 * Reason: Hex-Rays returned no pseudocode for 0x140058434
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140058434: sub     rsp, 28h
 * 0000000140058438: xor     eax, eax
 * 000000014005843A: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 0000000140058441: jnz     short loc_140058467
 * 0000000140058443: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 000000014005844A: mov     r9, r8
 * 000000014005844D: lea     rdx, McGenControlCallbackV2
 * 0000000140058454: lea     rcx, AUDIO_EVENT_PROVIDER
 * 000000014005845B: call    cs:__imp_EtwEventRegister
 * 0000000140058462: nop     dword ptr [rax+rax+00h]
 * 0000000140058467: add     rsp, 28h
 * 000000014005846B: retn
 */
