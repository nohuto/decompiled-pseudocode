/*
 * XREFs of NtUserGetSystemDpiForProcess @ 0x1C0145ED0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserGetSystemDpiForProcess @ 0x1C0145ED0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0145ED0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0145ED0: mov     [rsp+arg_8], rbx
 * 00000001C0145ED5: mov     [rsp+arg_10], rsi
 * 00000001C0145EDA: push    rdi
 * 00000001C0145EDB: sub     rsp, 30h
 * 00000001C0145EDF: mov     rsi, rcx
 * 00000001C0145EE2: call    IsEtwUserCritEnabled
 * 00000001C0145EE7: test    eax, eax
 * 00000001C0145EE9: jz      short loc_1C0145F11
 * 00000001C0145EEB: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0145EF2: nop     dword ptr [rax+rax+00h]
 * 00000001C0145EF7: mov     rbx, rax
 * 00000001C0145EFA: test    rax, rax
 * 00000001C0145EFD: jz      short loc_1C0145F11
 * 00000001C0145EFF: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0145F01: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C0145F08: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F0D: mov     [rbx+8], rax
 * 00000001C0145F11: call    cs:__imp_SGDGetUserSessionState
 * 00000001C0145F18: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F1D: mov     rcx, [rax+8]; Resource
 * 00000001C0145F21: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C0145F28: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F2D: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C0145F32: lea     rax, [rsi-1]
 * 00000001C0145F36: xor     edi, edi
 * 00000001C0145F38: cmp     rax, 0FFFFFFFFFFFFFFFDh
 * 00000001C0145F3C: ja      loc_1C0145FDE
 * 00000001C0145F42: mov     rax, cs:__imp_PsProcessType
 * 00000001C0145F49: mov     r9b, 1; AccessMode
 * 00000001C0145F4C: and     [rsp+38h+var_10], rdi
 * 00000001C0145F51: mov     edx, 1000h; DesiredAccess
 * 00000001C0145F56: and     [rsp+38h+arg_0], rdi
 * 00000001C0145F5B: mov     rcx, rsi; Handle
 * 00000001C0145F5E: mov     r8, [rax]; ObjectType
 * 00000001C0145F61: lea     rax, [rsp+38h+arg_0]
 * 00000001C0145F66: mov     [rsp+38h+Object], rax; Object
 * 00000001C0145F6B: call    cs:__imp_ObReferenceObjectByHandle
 * 00000001C0145F72: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F77: mov     rdi, [rsp+38h+arg_0]
 * 00000001C0145F7C: test    eax, eax
 * 00000001C0145F7E: jns     short loc_1C0145F91
 * 00000001C0145F80: mov     ecx, 57h ; 'W'
 * 00000001C0145F85: call    UserSetLastError
 * 00000001C0145F8A: xor     ebx, ebx
 * 00000001C0145F8C: jmp     loc_1C014602D
 * 00000001C0145F91: call    cs:__imp_SGDGetUserSessionState
 * 00000001C0145F98: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F9D: mov     rcx, rdi
 * 00000001C0145FA0: mov     ebx, [rax]
 * 00000001C0145FA2: call    cs:__imp_PsGetProcessSessionId
 * 00000001C0145FA9: nop     dword ptr [rax+rax+00h]
 * 00000001C0145FAE: cmp     eax, ebx
 * 00000001C0145FB0: jz      short loc_1C0145FB9
 * 00000001C0145FB2: mov     ecx, 57h ; 'W'
 * 00000001C0145FB7: jmp     short loc_1C0146012
 * 00000001C0145FB9: mov     rcx, rdi
 * 00000001C0145FBC: call    cs:__imp_PsGetProcessWin32Process
 * 00000001C0145FC3: nop     dword ptr [rax+rax+00h]
 * 00000001C0145FC8: mov     r8, rax
 * 00000001C0145FCB: test    rax, rax
 * 00000001C0145FCE: jz      short loc_1C0145FFE
 * 00000001C0145FD0: mov     rcx, [rax]
 * 00000001C0145FD3: neg     rcx
 * 00000001C0145FD6: sbb     rdx, rdx
 * 00000001C0145FD9: and     r8, rdx
 * 00000001C0145FDC: jmp     short loc_1C0145FFE
 * 00000001C0145FDE: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C0145FE5: nop     dword ptr [rax+rax+00h]
 * 00000001C0145FEA: mov     r8, rax
 * 00000001C0145FED: test    rax, rax
 * 00000001C0145FF0: jz      short loc_1C0145FFE
 * 00000001C0145FF2: mov     rax, [rax]
 * 00000001C0145FF5: neg     rax
 * 00000001C0145FF8: sbb     rcx, rcx
 * 00000001C0145FFB: and     r8, rcx
 * 00000001C0145FFE: test    r8, r8
 * 00000001C0146001: jz      short loc_1C014600D
 * 00000001C0146003: movzx   ebx, word ptr [r8+11Ch]
 * 00000001C014600B: jmp     short loc_1C0146019
 * 00000001C014600D: mov     ecx, 139Fh
 * 00000001C0146012: call    UserSetLastError
 * 00000001C0146017: xor     ebx, ebx
 * 00000001C0146019: test    rdi, rdi
 * 00000001C014601C: jz      short loc_1C014602D
 * 00000001C014601E: mov     rcx, rdi; Object
 * 00000001C0146021: call    cs:__imp_ObfDereferenceObject
 * 00000001C0146028: nop     dword ptr [rax+rax+00h]
 * 00000001C014602D: call    UserSessionSwitchLeaveCrit
 * 00000001C0146032: mov     rsi, [rsp+38h+arg_10]
 * 00000001C0146037: mov     eax, ebx
 * 00000001C0146039: mov     rbx, [rsp+38h+arg_8]
 * 00000001C014603E: add     rsp, 30h
 * 00000001C0146042: pop     rdi
 * 00000001C0146043: retn
 */
