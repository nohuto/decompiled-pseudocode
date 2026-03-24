/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x14004910C
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x14002BA00 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x14004910C
 * Reason: Hex-Rays returned no pseudocode for 0x14004910C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014004910C: mov     r11, rsp
 * 000000014004910F: mov     [r11+8], rbx
 * 0000000140049113: mov     [r11+10h], rsi
 * 0000000140049117: push    rdi
 * 0000000140049118: sub     rsp, 50h
 * 000000014004911C: mov     rbx, rcx
 * 000000014004911F: mov     esi, 0Eh
 * 0000000140049124: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014004912B: lea     edi, [rsi-0Ah]
 * 000000014004912E: mov     eax, [rcx+2Ch]
 * 0000000140049131: test    al, 10h
 * 0000000140049133: jz      short loc_140049175
 * 0000000140049135: cmp     byte ptr [rcx+29h], 3
 * 0000000140049139: jb      short loc_140049175
 * 000000014004913B: and     qword ptr [r11-18h], 0
 * 0000000140049140: lea     rdx, [r11+38h]
 * 0000000140049144: mov     rax, cs:pfnWppTraceMessage
 * 000000014004914B: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 0000000140049152: mov     rcx, [rcx+18h]
 * 0000000140049156: mov     r9d, esi
 * 0000000140049159: mov     [r11-20h], rdi
 * 000000014004915D: mov     [r11-28h], rdx
 * 0000000140049161: lea     rdx, [r11+30h]
 * 0000000140049165: mov     [r11-30h], rdi
 * 0000000140049169: mov     [r11-38h], rdx
 * 000000014004916D: lea     edx, [rsi+1Dh]
 * 0000000140049170: call    _guard_dispatch_icall
 * 0000000140049175: and     [rsp+58h+var_10], 0
 * 000000014004917B: lea     rax, [rsp+58h+arg_30]
 * 0000000140049183: mov     [rsp+58h+var_18], rdi
 * 0000000140049188: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 000000014004918F: mov     [rsp+58h+var_20], rax
 * 0000000140049194: mov     edx, 3
 * 0000000140049199: lea     rax, [rsp+58h+arg_28]
 * 00000001400491A1: mov     [rsp+58h+var_28], rdi
 * 00000001400491A6: mov     [rsp+58h+var_30], rax
 * 00000001400491AB: mov     rcx, rbx
 * 00000001400491AE: mov     [rsp+58h+var_38], si
 * 00000001400491B3: lea     r8d, [rdx+2]
 * 00000001400491B7: call    cs:__imp_WppAutoLogTrace
 * 00000001400491BE: nop     dword ptr [rax+rax+00h]
 * 00000001400491C3: mov     rbx, [rsp+58h+arg_0]
 * 00000001400491C8: mov     rsi, [rsp+58h+arg_8]
 * 00000001400491CD: add     rsp, 50h
 * 00000001400491D1: pop     rdi
 * 00000001400491D2: retn
 */
