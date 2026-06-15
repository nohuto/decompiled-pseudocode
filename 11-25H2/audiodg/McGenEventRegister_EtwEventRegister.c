/*
 * XREFs of McGenEventRegister_EtwEventRegister @ 0x140058574
 * Callers:
 *     wWinMain @ 0x14004AF94 (wWinMain.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventRegister_EtwEventRegister @ 0x140058574
 * Reason: Hex-Rays returned no pseudocode for 0x140058574
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140058574: sub     rsp, 28h
 * 0000000140058578: xor     eax, eax
 * 000000014005857A: cmp     cs:AUDIO_EVENT_PROVIDER_Context, rax
 * 0000000140058581: jnz     short loc_1400585A7
 * 0000000140058583: lea     r8, AUDIO_EVENT_PROVIDER_Context
 * 000000014005858A: mov     r9, r8
 * 000000014005858D: lea     rdx, McGenControlCallbackV2
 * 0000000140058594: lea     rcx, AUDIO_EVENT_PROVIDER
 * 000000014005859B: call    cs:__imp_EtwEventRegister
 * 00000001400585A2: nop     dword ptr [rax+rax+00h]
 * 00000001400585A7: add     rsp, 28h
 * 00000001400585AB: retn
 */
