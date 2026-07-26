/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1400A21BC
 * Callers:
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x14018C098 (-ndisNblTrackerInitialize@@YAXXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1400A21BC
 * Reason: Hex-Rays returned no pseudocode for 0x1400A21BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400A21BC: mov     [rsp+arg_0], rbx
 * 00000001400A21C1: push    rsi
 * 00000001400A21C2: sub     rsp, 40h
 * 00000001400A21C6: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001400A21CD: mov     rbx, rcx
 * 00000001400A21D0: mov     esi, 0Eh
 * 00000001400A21D5: mov     eax, [rdx+2Ch]
 * 00000001400A21D8: test    al, 1
 * 00000001400A21DA: jz      short loc_1400A21FF
 * 00000001400A21DC: cmp     byte ptr [rdx+29h], 3
 * 00000001400A21E0: jb      short loc_1400A21FF
 * 00000001400A21E2: and     [rsp+48h+var_28], 0
 * 00000001400A21E8: lea     r9d, [rsi-6]
 * 00000001400A21EC: lea     r8, [rsp+48h+arg_28]
 * 00000001400A21F1: mov     edx, esi; unsigned __int16
 * 00000001400A21F3: lea     rcx, WPP_9b060fe0224b38c36bb70306e6018616_Traceguids; struct _GUID *
 * 00000001400A21FA: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001400A21FF: and     [rsp+48h+var_10], 0
 * 00000001400A2205: lea     rax, [rsp+48h+arg_28]
 * 00000001400A220A: mov     edx, 3
 * 00000001400A220F: mov     [rsp+48h+var_18], 8
 * 00000001400A2218: mov     [rsp+48h+var_20], rax
 * 00000001400A221D: lea     r9, WPP_9b060fe0224b38c36bb70306e6018616_Traceguids
 * 00000001400A2224: mov     rcx, rbx
 * 00000001400A2227: mov     word ptr [rsp+48h+var_28], si
 * 00000001400A222C: lea     r8d, [rdx-2]
 * 00000001400A2230: call    cs:__imp_WppAutoLogTrace
 * 00000001400A2237: nop     dword ptr [rax+rax+00h]
 * 00000001400A223C: mov     rbx, [rsp+48h+arg_0]
 * 00000001400A2241: add     rsp, 40h
 * 00000001400A2245: pop     rsi
 * 00000001400A2246: retn
 */
