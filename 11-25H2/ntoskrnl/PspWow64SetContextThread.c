/*
 * XREFs of PspWow64SetContextThread @ 0x1408B96E4
 * Callers:
 *     NtSetInformationThread @ 0x1408B7970 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x14090A858 (WbSetWowTrapFrame.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlGetExtendedContextLength2 @ 0x14025D850 (RtlGetExtendedContextLength2.c)
 *     IoThreadToProcess @ 0x140442EB0 (IoThreadToProcess.c)
 *     PsGetThreadTeb @ 0x140456940 (PsGetThreadTeb.c)
 *     PsMultiResumeThread @ 0x140462278 (PsMultiResumeThread.c)
 *     Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContextSilent__private_IsEnabledNoReportingNoInline @ 0x1405DAD6C (Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContextSilent__private_IsEnabledNoRepo.c)
 *     Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledNoReportingNoInline @ 0x1405DADC0 (Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledNoReportingN.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     RtlpReadExtendedContext @ 0x140859000 (RtlpReadExtendedContext.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     PspSetContextThreadInternal @ 0x1409095F0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140909940 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x14090AD80 (RtlCopyContext.c)
 *     PsSuspendThread @ 0x1409BA290 (PsSuspendThread.c)
 *     RtlWow64GetCpuAreaEnabledFeatures @ 0x1409EBAB0 (RtlWow64GetCpuAreaEnabledFeatures.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1409EBC24 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1409EBFD0 (RtlpWow64SanitizeContextFlags.c)
 *     RtlpWow64CtxFromAmd64 @ 0x140A02040 (RtlpWow64CtxFromAmd64.c)
 *     EtwTiLogSetContextThread @ 0x140A1A8D4 (EtwTiLogSetContextThread.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140A42694 (RtlGuardIsValidWow64StackPointer.c)
 *     RtlpWow64CtxToAmd64 @ 0x140A51994 (RtlpWow64CtxToAmd64.c)
 */

/*
 * Hex-Rays decompilation failed for PspWow64SetContextThread @ 0x1408B96E4
 * Reason: Hex-Rays returned no pseudocode for 0x1408B96E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408B96E4: mov     [rsp-8+arg_0], rcx
 * 00000001408B96E9: push    rbp
 * 00000001408B96EA: push    r12
 * 00000001408B96EC: push    r13
 * 00000001408B96EE: push    r14
 * 00000001408B96F0: push    r15
 * 00000001408B96F2: sub     rsp, 90h
 * 00000001408B96F9: lea     rbp, [rsp+50h]
 * 00000001408B96FE: mov     [rbp+60h+arg_8], rbx
 * 00000001408B9702: mov     [rbp+60h+arg_10], rsi
 * 00000001408B9709: mov     rax, cs:RtlCopyFromUser_$fo$
 * 00000001408B9710: xor     rax, rbp
 * 00000001408B9713: mov     [rbp+60h+var_28], rax
 * 00000001408B9717: mov     r13b, r9b
 * 00000001408B971A: mov     [rbp+60h+var_54], r9b
 * 00000001408B971E: mov     ebx, r8d
 * 00000001408B9721: mov     r15, rdx
 * 00000001408B9724: mov     r14, rcx
 * 00000001408B9727: call    Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContext__private_IsEnabledNoReportingNoInline
 * 00000001408B972C: test    eax, eax
 * 00000001408B972E: jnz     short loc_1408B9746
 * 00000001408B9730: mov     r9b, r13b
 * 00000001408B9733: mov     r8d, ebx
 * 00000001408B9736: mov     rdx, r15
 * 00000001408B9739: mov     rcx, r14; Thread
 * 00000001408B973C: call    PspWow64SetContextThread_BeforeFix
 * 00000001408B9741: jmp     loc_1408B9BF7
 * 00000001408B9746: xor     sil, sil
 * 00000001408B9749: mov     [rbp+60h+var_60], sil
 * 00000001408B974D: mov     [rbp+60h+var_5F], sil
 * 00000001408B9751: cmp     ebx, 2CCh
 * 00000001408B9757: jz      short loc_1408B9766
 * 00000001408B9759: mov     ebx, 0C0000004h
 * 00000001408B975E: mov     al, sil
 * 00000001408B9761: jmp     loc_1408B9BDE
 * 00000001408B9766: mov     rax, gs:188h
 * 00000001408B976F: mov     [rbp+60h+Thread], rax
 * 00000001408B9773: mov     rax, [r14+220h]
 * 00000001408B977A: mov     [rbp+60h+BugCheckParameter1], rax
 * 00000001408B977E: mov     rcx, rax
 * 00000001408B9781: call    PsWow64GetProcessMachine
 * 00000001408B9786: mov     ecx, 14Ch
 * 00000001408B978B: cmp     ax, cx
 * 00000001408B978E: jz      short loc_1408B9797
 * 00000001408B9790: mov     ebx, 0C000000Dh
 * 00000001408B9795: jmp     short loc_1408B975E
 * 00000001408B9797: mov     dword ptr [rbp+60h+var_5F+3], 10000h
 * 00000001408B979E: lea     rcx, [rbp+60h+var_5F+3]
 * 00000001408B97A2: call    RtlWow64GetCpuAreaEnabledFeatures
 * 00000001408B97A7: mov     r12, rax
 * 00000001408B97AA: mov     [rbp+60h+EnabledExtendedFeatures], rax
 * 00000001408B97AE: test    r13b, r13b
 * 00000001408B97B1: jz      short loc_1408B97DA
 * 00000001408B97B3: mov     rax, 7FFFFFFF0000h
 * 00000001408B97BD: cmp     r15, rax
 * 00000001408B97C0: cmovb   rax, r15
 * 00000001408B97C4: nop
 * 00000001408B97C5: mov     eax, [rax]
 * 00000001408B97C7: mov     dword ptr [rbp+60h+var_5F+3], eax
 * 00000001408B97CA: jmp     short loc_1408B97E0
 * 00000001408B97CC: mov     ebx, eax
 * 00000001408B97CE: mov     r14, [rbp+60h+arg_0]
 * 00000001408B97D2: mov     al, [rbp+60h+var_5F]
 * 00000001408B97D5: jmp     loc_1408B9BDE
 * 00000001408B97DA: mov     eax, [r15]
 * 00000001408B97DD: mov     dword ptr [rbp+60h+var_5F+3], eax
 * 00000001408B97E0: mov     dl, r13b
 * 00000001408B97E3: lea     rcx, [rbp+60h+var_5F+3]
 * 00000001408B97E7: call    RtlpWow64SanitizeContextFlags
 * 00000001408B97EC: mov     ebx, eax
 * 00000001408B97EE: test    eax, eax
 * 00000001408B97F0: js      loc_1408B9BDB
 * 00000001408B97F6: mov     esi, dword ptr [rbp+60h+var_5F+3]
 * 00000001408B97F9: and     esi, 37FFFFFFh
 * 00000001408B97FF: mov     dword ptr [rbp+60h+var_5F+3], esi
 * 00000001408B9802: and     dword ptr [rbp+60h+var_5F+7], 0
 * 00000001408B9806: and     [rbp+60h+ContextEx], 0
 * 00000001408B980B: test    r13b, r13b
 * 00000001408B980E: jz      loc_1408B989E
 * 00000001408B9814: mov     r8, r12; EnabledExtendedFeatures
 * 00000001408B9817: lea     rdx, [rbp+60h+var_5F+7]; ContextLength
 * 00000001408B981B: mov     ecx, esi; ContextFlags
 * 00000001408B981D: call    RtlGetExtendedContextLength2
 * 00000001408B9822: mov     ebx, eax
 * 00000001408B9824: test    eax, eax
 * 00000001408B9826: js      loc_1408B9BDB
 * 00000001408B982C: mov     eax, dword ptr [rbp+60h+var_5F+7]
 * 00000001408B982F: lea     rcx, [rax+0Fh]
 * 00000001408B9833: mov     r12, 0FFFFFFFFFFFFFF0h
 * 00000001408B983D: cmp     rcx, rax
 * 00000001408B9840: ja      short loc_1408B9845
 * 00000001408B9842: mov     rcx, r12
 * 00000001408B9845: and     rcx, 0FFFFFFFFFFFFFFF0h
 * 00000001408B9849: mov     rax, rcx
 * 00000001408B984C: call    _alloca_probe
 * 00000001408B9851: sub     rsp, rcx
 * 00000001408B9854: lea     r13, [rsp+0B0h+var_60]
 * 00000001408B9859: mov     [rbp+60h+Source], r13
 * 00000001408B985D: mov     r9, [rbp+60h+EnabledExtendedFeatures]; EnabledExtendedFeatures
 * 00000001408B9861: lea     r8, [rbp+60h+ContextEx]; ContextEx
 * 00000001408B9865: mov     edx, esi; ContextFlags
 * 00000001408B9867: mov     rcx, r13; Context
 * 00000001408B986A: call    RtlInitializeExtendedContext2
 * 00000001408B986F: mov     ebx, eax
 * 00000001408B9871: test    eax, eax
 * 00000001408B9873: js      loc_1408B9BDB
 * 00000001408B9879: and     [rsp+0B0h+var_88], 0
 * 00000001408B987F: mov     [rsp+0B0h+Length], r15
 * 00000001408B9884: mov     r9d, esi
 * 00000001408B9887: mov     r8, [rbp+60h+ContextEx]
 * 00000001408B988B: mov     dl, 1
 * 00000001408B988D: call    RtlpReadExtendedContext
 * 00000001408B9892: mov     ebx, eax
 * 00000001408B9894: test    eax, eax
 * 00000001408B9896: js      loc_1408B9BDB
 * 00000001408B989C: jmp     short loc_1408B98AF
 * 00000001408B989E: mov     r13, r15
 * 00000001408B98A1: mov     [rbp+60h+Source], r15
 * 00000001408B98A5: mov     r12, 0FFFFFFFFFFFFFF0h
 * 00000001408B98AF: mov     rcx, [rbp+60h+Thread]; Thread
 * 00000001408B98B3: call    IoThreadToProcess
 * 00000001408B98B8: mov     rbx, rax
 * 00000001408B98BB: mov     rcx, r14; Thread
 * 00000001408B98BE: call    IoThreadToProcess
 * 00000001408B98C3: cmp     rax, rbx
 * 00000001408B98C6: jnz     short loc_1408B9906
 * 00000001408B98C8: mov     rax, [rbp+60h+BugCheckParameter1]
 * 00000001408B98CC: mov     eax, [rax+88h]
 * 00000001408B98D2: test    al, 20h
 * 00000001408B98D4: jz      short loc_1408B9906
 * 00000001408B98D6: mov     eax, 10001h
 * 00000001408B98DB: and     esi, eax
 * 00000001408B98DD: cmp     esi, eax
 * 00000001408B98DF: jnz     short loc_1408B9906
 * 00000001408B98E1: mov     rcx, r14
 * 00000001408B98E4: call    PsGetThreadTeb
 * 00000001408B98E9: mov     rdx, rax
 * 00000001408B98EC: mov     ecx, [r13+0C4h]
 * 00000001408B98F3: call    RtlGuardIsValidWow64StackPointer
 * 00000001408B98F8: test    eax, eax
 * 00000001408B98FA: jnz     short loc_1408B9906
 * 00000001408B98FC: mov     ebx, 0C000000Dh
 * 00000001408B9901: jmp     loc_1408B9BDB
 * 00000001408B9906: mov     r13, [rbp+60h+EnabledExtendedFeatures]
 * 00000001408B990A: mov     rax, r13
 * 00000001408B990D: neg     rax
 * 00000001408B9910: sbb     esi, esi
 * 00000001408B9912: and     esi, 40h
 * 00000001408B9915: and     dword ptr [rbp+60h+var_5F+7], 0
 * 00000001408B9919: mov     r8, r13; EnabledExtendedFeatures
 * 00000001408B991C: lea     rdx, [rbp+60h+var_5F+7]; ContextLength
 * 00000001408B9920: lea     ecx, [rsi+10001Fh]; ContextFlags
 * 00000001408B9926: call    RtlGetExtendedContextLength2
 * 00000001408B992B: mov     ebx, eax
 * 00000001408B992D: test    eax, eax
 * 00000001408B992F: js      loc_1408B9BDB
 * 00000001408B9935: mov     eax, dword ptr [rbp+60h+var_5F+7]
 * 00000001408B9938: lea     rcx, [rax+0Fh]
 * 00000001408B993C: cmp     rcx, rax
 * 00000001408B993F: ja      short loc_1408B9944
 * 00000001408B9941: mov     rcx, r12
 * 00000001408B9944: and     rcx, 0FFFFFFFFFFFFFFF0h
 * 00000001408B9948: mov     rax, rcx
 * 00000001408B994B: call    _alloca_probe
 * 00000001408B9950: sub     rsp, rcx
 * 00000001408B9953: lea     r15, [rsp+0B0h+var_60]
 * 00000001408B9958: mov     r9, r13; EnabledExtendedFeatures
 * 00000001408B995B: lea     r8, [rbp+60h+Thread]; ContextEx
 * 00000001408B995F: lea     edx, [rsi+10001Fh]; ContextFlags
 * 00000001408B9965: mov     rcx, r15; Context
 * 00000001408B9968: call    RtlInitializeExtendedContext2
 * 00000001408B996D: mov     ebx, eax
 * 00000001408B996F: test    eax, eax
 * 00000001408B9971: js      loc_1408B9BDB
 * 00000001408B9977: call    Feature_Servicing_Wow64HwAmd64X86SuspendBeforeGetSetThreadContextSilent__private_IsEnabledNoReportingNoInline
 * 00000001408B997C: mov     rcx, gs:188h
 * 00000001408B9985: cmp     r14, rcx
 * 00000001408B9988: jz      short loc_1408B99D5
 * 00000001408B998A: xor     edx, edx
 * 00000001408B998C: mov     rcx, r14
 * 00000001408B998F: test    eax, eax
 * 00000001408B9991: mov     rax, gs:188h
 * 00000001408B999A: jz      short loc_1408B99B4
 * 00000001408B999C: dec     word ptr [rax+1E4h]
 * 00000001408B99A3: nop
 * 00000001408B99A4: call    PsSuspendThread
 * 00000001408B99A9: test    eax, eax
 * 00000001408B99AB: jns     short loc_1408B99D1
 * 00000001408B99AD: call    KeLeaveCriticalRegion
 * 00000001408B99B2: jmp     short loc_1408B99D5
 * 00000001408B99B4: dec     word ptr [rax+1E4h]
 * 00000001408B99BB: nop
 * 00000001408B99BC: call    PsSuspendThread
 * 00000001408B99C1: mov     ebx, eax
 * 00000001408B99C3: test    eax, eax
 * 00000001408B99C5: jns     short loc_1408B99D1
 * 00000001408B99C7: call    KeLeaveCriticalRegion
 * 00000001408B99CC: jmp     loc_1408B9BDB
 * 00000001408B99D1: mov     [rbp+60h+var_60], 1
 * 00000001408B99D5: mov     dword ptr [rsp+0B0h+Length], 1
 * 00000001408B99DD: mov     r9b, 1
 * 00000001408B99E0: xor     r8d, r8d
 * 00000001408B99E3: mov     rdx, r15
 * 00000001408B99E6: mov     rcx, r14
 * 00000001408B99E9: call    PspGetContextThreadInternal
 * 00000001408B99EE: mov     ebx, eax
 * 00000001408B99F0: test    eax, eax
 * 00000001408B99F2: js      loc_1408B9BDB
 * 00000001408B99F8: and     dword ptr [rbp+60h+var_5F+7], 0
 * 00000001408B99FC: mov     rax, r13
 * 00000001408B99FF: neg     rax
 * 00000001408B9A02: sbb     ecx, ecx
 * 00000001408B9A04: and     ecx, 40h
 * 00000001408B9A07: add     ecx, 1003Fh; ContextFlags
 * 00000001408B9A0D: mov     r8, r13; EnabledExtendedFeatures
 * 00000001408B9A10: lea     rdx, [rbp+60h+var_5F+7]; ContextLength
 * 00000001408B9A14: call    RtlGetExtendedContextLength2
 * 00000001408B9A19: mov     ebx, eax
 * 00000001408B9A1B: test    eax, eax
 * 00000001408B9A1D: js      loc_1408B9BDB
 * 00000001408B9A23: mov     [rbp+60h+var_5F], 0
 * 00000001408B9A27: and     dword ptr [rbp+60h+ContextEx], 0
 * 00000001408B9A2B: mov     edx, dword ptr [rbp+60h+var_5F+7]
 * 00000001408B9A2E: lea     rcx, [rdx+0Fh]
 * 00000001408B9A32: cmp     rcx, rdx
 * 00000001408B9A35: ja      short loc_1408B9A3A
 * 00000001408B9A37: mov     rcx, r12
 * 00000001408B9A3A: and     rcx, 0FFFFFFFFFFFFFFF0h
 * 00000001408B9A3E: mov     rax, rcx
 * 00000001408B9A41: call    _alloca_probe
 * 00000001408B9A46: sub     rsp, rcx
 * 00000001408B9A49: lea     r13, [rsp+0B0h+var_60]
 * 00000001408B9A4E: lea     rax, [rbp+60h+var_5F]
 * 00000001408B9A52: mov     [rsp+0B0h+var_78], rax; __int64
 * 00000001408B9A57: lea     rax, [rbp+60h+ContextEx]
 * 00000001408B9A5B: mov     [rsp+0B0h+var_80], rax; __int64
 * 00000001408B9A60: mov     dword ptr [rsp+0B0h+Length], edx; Length
 * 00000001408B9A64: mov     r9, r13
 * 00000001408B9A67: mov     r8b, 1
 * 00000001408B9A6A: mov     rdx, r14
 * 00000001408B9A6D: mov     rcx, [rbp+60h+BugCheckParameter1]; BugCheckParameter1
 * 00000001408B9A71: call    PspWow64ReadOrWriteThreadCpuArea
 * 00000001408B9A76: mov     ebx, eax
 * 00000001408B9A78: test    eax, eax
 * 00000001408B9A7A: js      loc_1408B9BDB
 * 00000001408B9A80: xor     r12b, r12b
 * 00000001408B9A83: cmp     [rbp+60h+var_5F], r12b
 * 00000001408B9A87: jnz     loc_1408B9B4D
 * 00000001408B9A8D: cmp     word ptr [r15+38h], 23h ; '#'
 * 00000001408B9A93: jnz     short loc_1408B9AB9
 * 00000001408B9A95: mov     r8, r15
 * 00000001408B9A98: mov     rsi, [rbp+60h+Source]
 * 00000001408B9A9C: mov     rdx, rsi
 * 00000001408B9A9F: mov     ecx, dword ptr [rbp+60h+var_5F+3]
 * 00000001408B9AA2: call    RtlpWow64CtxToAmd64
 * 00000001408B9AA7: mov     ebx, eax
 * 00000001408B9AA9: test    eax, eax
 * 00000001408B9AAB: js      loc_1408B9BDB
 * 00000001408B9AB1: mov     r12b, 1
 * 00000001408B9AB4: jmp     loc_1408B9B93
 * 00000001408B9AB9: mov     esi, dword ptr [rbp+60h+ContextEx]
 * 00000001408B9ABC: test    sil, 1
 * 00000001408B9AC0: jnz     short loc_1408B9B01
 * 00000001408B9AC2: mov     rax, [rbp+60h+EnabledExtendedFeatures]
 * 00000001408B9AC6: neg     rax
 * 00000001408B9AC9: sbb     ecx, ecx
 * 00000001408B9ACB: and     ecx, 40h
 * 00000001408B9ACE: add     ecx, 10038h
 * 00000001408B9AD4: mov     r8, r13
 * 00000001408B9AD7: mov     rdx, r15
 * 00000001408B9ADA: call    RtlpWow64CtxFromAmd64
 * 00000001408B9ADF: mov     ebx, eax
 * 00000001408B9AE1: test    eax, eax
 * 00000001408B9AE3: js      loc_1408B9BDB
 * 00000001408B9AE9: lea     rcx, [r13+16Ch]; void *
 * 00000001408B9AF0: xor     edx, edx; Val
 * 00000001408B9AF2: lea     r8d, [rdx+60h]; Size
 * 00000001408B9AF6: call    memset_0
 * 00000001408B9AFB: or      esi, 1
 * 00000001408B9AFE: mov     dword ptr [rbp+60h+ContextEx], esi
 * 00000001408B9B01: mov     r8, [rbp+60h+Source]; Source
 * 00000001408B9B05: mov     esi, dword ptr [rbp+60h+var_5F+3]
 * 00000001408B9B08: mov     edx, esi; ContextFlags
 * 00000001408B9B0A: mov     rcx, r13; Context
 * 00000001408B9B0D: call    RtlCopyContext
 * 00000001408B9B12: mov     ebx, eax
 * 00000001408B9B14: test    eax, eax
 * 00000001408B9B16: js      loc_1408B9BDB
 * 00000001408B9B1C: mov     ecx, 10010h
 * 00000001408B9B21: and     esi, ecx
 * 00000001408B9B23: cmp     esi, ecx
 * 00000001408B9B25: mov     rsi, [rbp+60h+Source]
 * 00000001408B9B29: jnz     short loc_1408B9B65
 * 00000001408B9B2B: mov     r8, r15
 * 00000001408B9B2E: mov     rdx, rsi
 * 00000001408B9B31: call    RtlpWow64CtxToAmd64
 * 00000001408B9B36: mov     ebx, eax
 * 00000001408B9B38: test    eax, eax
 * 00000001408B9B3A: js      loc_1408B9BDB
 * 00000001408B9B40: mov     r12b, 1
 * 00000001408B9B43: mov     dword ptr [r15+30h], 100010h
 * 00000001408B9B4B: jmp     short loc_1408B9B65
 * 00000001408B9B4D: mov     rsi, [rbp+60h+Source]
 * 00000001408B9B51: mov     r8, rsi; Source
 * 00000001408B9B54: mov     edx, dword ptr [rbp+60h+var_5F+3]; ContextFlags
 * 00000001408B9B57: mov     rcx, r13; Context
 * 00000001408B9B5A: call    RtlCopyContext
 * 00000001408B9B5F: mov     ebx, eax
 * 00000001408B9B61: test    eax, eax
 * 00000001408B9B63: js      short loc_1408B9BDB
 * 00000001408B9B65: and     [rsp+0B0h+var_78], 0
 * 00000001408B9B6B: lea     rax, [rbp+60h+ContextEx]
 * 00000001408B9B6F: mov     [rsp+0B0h+var_80], rax; __int64
 * 00000001408B9B74: mov     eax, dword ptr [rbp+60h+var_5F+7]
 * 00000001408B9B77: mov     dword ptr [rsp+0B0h+Length], eax; Length
 * 00000001408B9B7B: mov     r9, r13
 * 00000001408B9B7E: xor     r8d, r8d
 * 00000001408B9B81: mov     rdx, r14
 * 00000001408B9B84: mov     rcx, [rbp+60h+BugCheckParameter1]; BugCheckParameter1
 * 00000001408B9B88: call    PspWow64ReadOrWriteThreadCpuArea
 * 00000001408B9B8D: mov     ebx, eax
 * 00000001408B9B8F: test    eax, eax
 * 00000001408B9B91: js      short loc_1408B9BDB
 * 00000001408B9B93: test    r12b, r12b
 * 00000001408B9B96: jz      short loc_1408B9BB7
 * 00000001408B9B98: mov     dword ptr [rsp+0B0h+Length], 1; int
 * 00000001408B9BA0: mov     r9b, 1
 * 00000001408B9BA3: xor     r8d, r8d
 * 00000001408B9BA6: mov     rdx, r15
 * 00000001408B9BA9: mov     rcx, r14; Thread
 * 00000001408B9BAC: call    PspSetContextThreadInternal
 * 00000001408B9BB1: mov     ebx, eax
 * 00000001408B9BB3: test    eax, eax
 * 00000001408B9BB5: js      short loc_1408B9BDB
 * 00000001408B9BB7: cmp     [rbp+60h+var_54], 0
 * 00000001408B9BBB: jz      short loc_1408B9BDB
 * 00000001408B9BBD: mov     rcx, gs:188h
 * 00000001408B9BC6: mov     r9d, dword ptr [rbp+60h+var_5F+3]
 * 00000001408B9BCA: mov     r8, rsi
 * 00000001408B9BCD: mov     rdx, r14
 * 00000001408B9BD0: mov     cl, [rcx+232h]
 * 00000001408B9BD6: call    EtwTiLogSetContextThread
 * 00000001408B9BDB: mov     al, [rbp+60h+var_60]
 * 00000001408B9BDE: test    al, al
 * 00000001408B9BE0: jz      short loc_1408B9BF5
 * 00000001408B9BE2: xor     edx, edx
 * 00000001408B9BE4: lea     r8d, [rdx+1]
 * 00000001408B9BE8: mov     rcx, r14
 * 00000001408B9BEB: call    PsMultiResumeThread
 * 00000001408B9BF0: call    KeLeaveCriticalRegion
 * 00000001408B9BF5: mov     eax, ebx
 * 00000001408B9BF7: mov     rcx, [rbp+60h+var_28]
 * 00000001408B9BFB: xor     rcx, rbp; StackCookie
 * 00000001408B9BFE: call    __security_check_cookie
 * 00000001408B9C03: mov     rbx, [rbp+60h+arg_8]
 * 00000001408B9C07: mov     rsi, [rbp+60h+arg_10]
 * 00000001408B9C0E: lea     rsp, [rbp+40h]
 * 00000001408B9C12: pop     r15
 * 00000001408B9C14: pop     r14
 * 00000001408B9C16: pop     r13
 * 00000001408B9C18: pop     r12
 * 00000001408B9C1A: pop     rbp
 * 00000001408B9C1B: retn
 */
