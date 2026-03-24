/*
 * XREFs of GetData @ 0x1C0131E20
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

/*
 * Hex-Rays decompilation failed for GetData @ 0x1C0131E20
 * Reason: Hex-Rays returned no pseudocode for 0x1C0131E20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0131E20: push    rbx
 * 00000001C0131E22: sub     rsp, 50h
 * 00000001C0131E26: mov     rax, cs:gpxsGlobals
 * 00000001C0131E2D: lea     rdx, [rsp+58h+arg_8]
 * 00000001C0131E32: xor     ebx, ebx
 * 00000001C0131E34: mov     [rsp+58h+arg_8], rbx
 * 00000001C0131E39: mov     ecx, [rax+20h]
 * 00000001C0131E3C: call    cs:__imp_PsTlsGetValue
 * 00000001C0131E43: nop     dword ptr [rax+rax+00h]
 * 00000001C0131E48: test    eax, eax
 * 00000001C0131E4A: jns     short loc_1C0131E6C
 * 00000001C0131E4C: mov     [rsp+58h+arg_0], 20000h
 * 00000001C0131E54: lea     rcx, aIxptelassert; "IXPTelAssert"
 * 00000001C0131E5B: mov     edx, [rsp+58h+arg_0]
 * 00000001C0131E5F: mov     r8d, 895h
 * 00000001C0131E65: call    MicrosoftTelemetryAssertTriggeredArgsKM
 * 00000001C0131E6A: jmp     short loc_1C0131E84
 * 00000001C0131E6C: cmp     [rsp+58h+arg_8], rbx
 * 00000001C0131E71: jnz     short loc_1C0131EE5
 * 00000001C0131E73: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0131E7A: nop     dword ptr [rax+rax+00h]
 * 00000001C0131E7F: test    rax, rax
 * 00000001C0131E82: jz      short loc_1C0131EE5
 * 00000001C0131E84: mov     eax, cs:gdwExtraInstrumentations
 * 00000001C0131E8A: xor     r9d, r9d; BugCheckParameter3
 * 00000001C0131E8D: test    al, 1
 * 00000001C0131E8F: jz      short loc_1C0131EAF
 * 00000001C0131E91: xor     r8d, r8d; BugCheckParameter2
 * 00000001C0131E94: mov     [rsp+58h+BugCheckParameter4], rbx; BugCheckParameter4
 * 00000001C0131E99: lea     edx, [r9+2Ch]; BugCheckParameter1
 * 00000001C0131E9D: mov     ecx, 164h; BugCheckCode
 * 00000001C0131EA2: call    cs:__imp_KeBugCheckEx
 * 00000001C0131EAF: mov     [rsp+58h+var_18], ebx
 * 00000001C0131EB3: lea     rcx, aNtuser; "NTUSER"
 * 00000001C0131EBA: mov     [rsp+58h+var_20], rbx
 * 00000001C0131EBF: mov     edx, 190h
 * 00000001C0131EC4: mov     [rsp+58h+var_28], rbx
 * 00000001C0131EC9: mov     r8d, 2Ch ; ','
 * 00000001C0131ECF: mov     [rsp+58h+var_30], rbx
 * 00000001C0131ED4: mov     [rsp+58h+BugCheckParameter4], rbx
 * 00000001C0131ED9: call    cs:__imp_DbgkWerCaptureLiveKernelDump
 * 00000001C0131EE0: nop     dword ptr [rax+rax+00h]
 * 00000001C0131EE5: mov     rax, [rsp+58h+arg_8]
 * 00000001C0131EEA: add     rsp, 50h
 * 00000001C0131EEE: pop     rbx
 * 00000001C0131EEF: retn
 */
