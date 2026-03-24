/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1C00061D8
 * Callers:
 *     KeyboardClassServiceCallback @ 0x1C00022E0 (KeyboardClassServiceCallback.c)
 *     KeyboardClassRead @ 0x1C0002920 (KeyboardClassRead.c)
 *     KeyboardClassCreate @ 0x1C00039B0 (KeyboardClassCreate.c)
 *     KeyboardClassCleanup @ 0x1C0004260 (KeyboardClassCleanup.c)
 *     KeyboardClassClose @ 0x1C0004620 (KeyboardClassClose.c)
 *     KbdInitializeDataQueue @ 0x1C0005600 (KbdInitializeDataQueue.c)
 *     KeyboardClassFlush @ 0x1C0005C20 (KeyboardClassFlush.c)
 *     KeyboardClassFindMorePorts @ 0x1C000E010 (KeyboardClassFindMorePorts.c)
 *     KbdDeterminePortsServiced @ 0x1C000E610 (KbdDeterminePortsServiced.c)
 *     KeyboardClassDeviceControl @ 0x1C000EF40 (KeyboardClassDeviceControl.c)
 *     KbdEnableDisablePort @ 0x1C000F5E0 (KbdEnableDisablePort.c)
 *     KbdCreateClassObject @ 0x1C000FD50 (KbdCreateClassObject.c)
 *     KbdSendConnectRequest @ 0x1C0010850 (KbdSendConnectRequest.c)
 *     DriverEntry @ 0x1C0011080 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C00072D0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1C00061D8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00061D8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00061D8: mov     rax, rsp
 * 00000001C00061DB: mov     [rax+8], rbx
 * 00000001C00061DF: mov     [rax+10h], rbp
 * 00000001C00061E3: mov     [rax+18h], rsi
 * 00000001C00061E7: mov     [rax+20h], rdi
 * 00000001C00061EB: push    r14
 * 00000001C00061ED: sub     rsp, 30h
 * 00000001C00061F1: mov     ebp, r8d
 * 00000001C00061F4: mov     r14, rcx
 * 00000001C00061F7: mov     ebx, r8d
 * 00000001C00061FA: shr     rbx, 10h
 * 00000001C00061FE: movzx   esi, r9w
 * 00000001C0006202: lea     r11d, [rbp-1]
 * 00000001C0006206: movzx   edi, dl
 * 00000001C0006209: mov     r10d, r11d
 * 00000001C000620C: and     r11d, 1Fh
 * 00000001C0006210: shr     r10, 5
 * 00000001C0006214: lea     rax, [rbx+rbx*4]
 * 00000001C0006218: and     r10d, 7FFh
 * 00000001C000621F: lea     rax, [r10+rax*4]
 * 00000001C0006223: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000622A: mov     eax, [r10+rax*4+2Ch]
 * 00000001C000622F: bt      eax, r11d
 * 00000001C0006233: jnb     short loc_1C0006269
 * 00000001C0006235: lea     rcx, [rbx+rbx*4]
 * 00000001C0006239: add     rcx, rcx
 * 00000001C000623C: cmp     [r10+rcx*8+29h], dil
 * 00000001C0006241: jb      short loc_1C0006269
 * 00000001C0006243: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000624A: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006251: and     [rsp+38h+var_18], 0
 * 00000001C0006257: mov     r9d, esi
 * 00000001C000625A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C000625F: mov     edx, 2Bh ; '+'
 * 00000001C0006264: call    _guard_dispatch_icall
 * 00000001C0006269: and     [rsp+38h+var_10], 0
 * 00000001C000626F: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0006276: mov     r8d, ebp
 * 00000001C0006279: mov     word ptr [rsp+38h+var_18], si
 * 00000001C000627E: mov     edx, edi
 * 00000001C0006280: mov     rcx, r14
 * 00000001C0006283: call    cs:__imp_WppAutoLogTrace
 * 00000001C000628A: nop     dword ptr [rax+rax+00h]
 * 00000001C000628F: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0006294: mov     rbp, [rsp+38h+arg_8]
 * 00000001C0006299: mov     rsi, [rsp+38h+arg_10]
 * 00000001C000629E: mov     rdi, [rsp+38h+arg_18]
 * 00000001C00062A3: add     rsp, 30h
 * 00000001C00062A7: pop     r14
 * 00000001C00062A9: retn
 */
