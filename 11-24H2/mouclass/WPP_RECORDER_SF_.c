/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C0002770
 * Callers:
 *     MouseClassServiceCallback @ 0x1C00018A0 (MouseClassServiceCallback.c)
 *     MouseClassRead @ 0x1C0001ED0 (MouseClassRead.c)
 *     MouseClassCreate @ 0x1C00037F0 (MouseClassCreate.c)
 *     MouseClassCleanup @ 0x1C0004070 (MouseClassCleanup.c)
 *     MouseClassClose @ 0x1C00042B0 (MouseClassClose.c)
 *     MouInitializeDataQueue @ 0x1C00055D0 (MouInitializeDataQueue.c)
 *     MouseClassFlush @ 0x1C00057F0 (MouseClassFlush.c)
 *     MouDeterminePortsServiced @ 0x1C000E010 (MouDeterminePortsServiced.c)
 *     MouseClassFindMorePorts @ 0x1C000E190 (MouseClassFindMorePorts.c)
 *     MouEnableDisablePort @ 0x1C000EFB0 (MouEnableDisablePort.c)
 *     MouseClassDeviceControl @ 0x1C000F310 (MouseClassDeviceControl.c)
 *     MouCreateClassObject @ 0x1C000F950 (MouCreateClassObject.c)
 *     MouSendConnectRequest @ 0x1C00101F0 (MouSendConnectRequest.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 *     MouConfiguration @ 0x1C0011A90 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0006B20 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C0002770
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002770
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002770: mov     [rsp+arg_0], rbx
 * 00000001C0002775: mov     [rsp+arg_8], rbp
 * 00000001C000277A: mov     [rsp+arg_10], rsi
 * 00000001C000277F: mov     [rsp+arg_18], rdi
 * 00000001C0002784: push    r14
 * 00000001C0002786: sub     rsp, 30h
 * 00000001C000278A: mov     r14, rcx
 * 00000001C000278D: mov     ebp, r8d
 * 00000001C0002790: mov     eax, r8d
 * 00000001C0002793: shr     rax, 10h
 * 00000001C0002797: movzx   edi, dl
 * 00000001C000279A: lea     ebx, [rbp-1]
 * 00000001C000279D: movzx   esi, r9w
 * 00000001C00027A1: mov     r11d, ebx
 * 00000001C00027A4: and     ebx, 1Fh
 * 00000001C00027A7: shr     r11, 5
 * 00000001C00027AB: lea     r10, [rax+rax*4]
 * 00000001C00027AF: and     r11d, 7FFh
 * 00000001C00027B6: mov     edx, ebx
 * 00000001C00027B8: xor     ebx, ebx
 * 00000001C00027BA: lea     rcx, [r11+r10*4]
 * 00000001C00027BE: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00027C5: mov     ecx, [r10+rcx*4+2Ch]
 * 00000001C00027CA: bt      ecx, edx
 * 00000001C00027CD: jnb     short loc_1C0002800
 * 00000001C00027CF: lea     rcx, [rax+rax*4]
 * 00000001C00027D3: add     rcx, rcx
 * 00000001C00027D6: cmp     [r10+rcx*8+29h], dil
 * 00000001C00027DB: jb      short loc_1C0002800
 * 00000001C00027DD: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00027E4: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00027EB: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00027F0: lea     edx, [rbx+2Bh]
 * 00000001C00027F3: mov     r9d, esi
 * 00000001C00027F6: mov     [rsp+38h+var_18], rbx
 * 00000001C00027FB: call    _guard_dispatch_icall
 * 00000001C0002800: mov     [rsp+38h+var_10], rbx
 * 00000001C0002805: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C000280C: mov     r8d, ebp
 * 00000001C000280F: mov     word ptr [rsp+38h+var_18], si
 * 00000001C0002814: mov     edx, edi
 * 00000001C0002816: mov     rcx, r14
 * 00000001C0002819: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002820: nop     dword ptr [rax+rax+00h]
 * 00000001C0002825: mov     rbx, [rsp+38h+arg_0]
 * 00000001C000282A: mov     rbp, [rsp+38h+arg_8]
 * 00000001C000282F: mov     rsi, [rsp+38h+arg_10]
 * 00000001C0002834: mov     rdi, [rsp+38h+arg_18]
 * 00000001C0002839: add     rsp, 30h
 * 00000001C000283D: pop     r14
 * 00000001C000283F: retn
 */
