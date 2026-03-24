/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x14002AF70
 * Callers:
 *     OSNotifyDeviceEnum @ 0x1400297A0 (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceCheck @ 0x140029BD4 (OSNotifyDeviceCheck.c)
 *     ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1400588D0 (ACPIBuildIssueNotifyInvalidateRelationsForDockDevice.c)
 *     OSNotifyDeviceEject @ 0x140063E20 (OSNotifyDeviceEject.c)
 *     AcpiHandleInternalNotify @ 0x140064954 (AcpiHandleInternalNotify.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qs @ 0x14002AF70
 * Reason: Hex-Rays returned no pseudocode for 0x14002AF70
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014002AF70: mov     rax, rsp
 * 000000014002AF73: mov     [rax+8], rbx
 * 000000014002AF77: mov     [rax+10h], rbp
 * 000000014002AF7B: mov     [rax+18h], rsi
 * 000000014002AF7F: mov     [rax+20h], rdi
 * 000000014002AF83: push    r12
 * 000000014002AF85: push    r14
 * 000000014002AF87: push    r15
 * 000000014002AF89: sub     rsp, 50h
 * 000000014002AF8D: mov     rbx, [rsp+68h+arg_30]
 * 000000014002AF95: mov     r12, rcx
 * 000000014002AF98: mov     r15d, r8d
 * 000000014002AF9B: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014002AF9F: mov     esi, r8d
 * 000000014002AFA2: shr     rsi, 10h
 * 000000014002AFA6: movzx   r14d, r9w
 * 000000014002AFAA: lea     r11d, [r15-1]
 * 000000014002AFAE: movzx   ebp, dl
 * 000000014002AFB1: mov     r10d, r11d
 * 000000014002AFB4: and     r11d, 1Fh
 * 000000014002AFB8: shr     r10, 5
 * 000000014002AFBC: lea     rax, [rsi+rsi*4]
 * 000000014002AFC0: and     r10d, 7FFh
 * 000000014002AFC7: mov     ecx, r11d
 * 000000014002AFCA: mov     r11, cs:WPP_GLOBAL_Control
 * 000000014002AFD1: lea     r8, [r10+rax*4]
 * 000000014002AFD5: mov     eax, [r11+r8*4+2Ch]
 * 000000014002AFDA: bt      eax, ecx
 * 000000014002AFDD: lea     r8, aNull; "NULL"
 * 000000014002AFE4: jnb     loc_14002B06B
 * 000000014002AFEA: lea     r10, [rsi+rsi*4]
 * 000000014002AFEE: add     r10, r10
 * 000000014002AFF1: cmp     [r11+r10*8+29h], bpl
 * 000000014002AFF6: jb      short loc_14002B06B
 * 000000014002AFF8: test    rbx, rbx
 * 000000014002AFFB: jz      short loc_14002B00E
 * 000000014002AFFD: mov     rdx, rdi
 * 000000014002B000: inc     rdx
 * 000000014002B003: cmp     byte ptr [rbx+rdx], 0
 * 000000014002B007: jnz     short loc_14002B000
 * 000000014002B009: inc     rdx
 * 000000014002B00C: jmp     short loc_14002B013
 * 000000014002B00E: mov     edx, 5
 * 000000014002B013: mov     rax, cs:pfnWppTraceMessage
 * 000000014002B01A: test    rbx, rbx
 * 000000014002B01D: mov     rcx, rbx
 * 000000014002B020: mov     r9d, r14d
 * 000000014002B023: cmovz   rcx, r8
 * 000000014002B027: and     [rsp+68h+var_28], 0
 * 000000014002B02D: mov     r8, [rsp+68h+arg_20]
 * 000000014002B035: mov     [rsp+68h+var_30], rdx
 * 000000014002B03A: mov     edx, 2Bh ; '+'
 * 000000014002B03F: mov     [rsp+68h+var_38], rcx
 * 000000014002B044: lea     rcx, [rsp+68h+arg_28]
 * 000000014002B04C: mov     [rsp+68h+var_40], 8
 * 000000014002B055: mov     [rsp+68h+var_48], rcx
 * 000000014002B05A: mov     rcx, [r11+r10*8+18h]
 * 000000014002B05F: call    _guard_dispatch_icall
 * 000000014002B064: lea     r8, aNull; "NULL"
 * 000000014002B06B: test    rbx, rbx
 * 000000014002B06E: jz      short loc_14002B07E
 * 000000014002B070: inc     rdi
 * 000000014002B073: cmp     byte ptr [rbx+rdi], 0
 * 000000014002B077: jnz     short loc_14002B070
 * 000000014002B079: inc     rdi
 * 000000014002B07C: jmp     short loc_14002B083
 * 000000014002B07E: mov     edi, 5
 * 000000014002B083: mov     r9, [rsp+68h+arg_20]
 * 000000014002B08B: lea     rax, [rsp+68h+arg_28]
 * 000000014002B093: test    rbx, rbx
 * 000000014002B096: mov     edx, ebp
 * 000000014002B098: mov     rcx, r12
 * 000000014002B09B: cmovz   rbx, r8
 * 000000014002B09F: and     [rsp+68h+var_20], 0
 * 000000014002B0A5: mov     [rsp+68h+var_28], rdi
 * 000000014002B0AA: mov     r8d, r15d
 * 000000014002B0AD: mov     [rsp+68h+var_30], rbx
 * 000000014002B0B2: mov     [rsp+68h+var_38], 8
 * 000000014002B0BB: mov     [rsp+68h+var_40], rax
 * 000000014002B0C0: mov     word ptr [rsp+68h+var_48], r14w
 * 000000014002B0C6: call    cs:__imp_WppAutoLogTrace
 * 000000014002B0CD: nop     dword ptr [rax+rax+00h]
 * 000000014002B0D2: lea     r11, [rsp+68h+var_18]
 * 000000014002B0D7: mov     rbx, [r11+20h]
 * 000000014002B0DB: mov     rbp, [r11+28h]
 * 000000014002B0DF: mov     rsi, [r11+30h]
 * 000000014002B0E3: mov     rdi, [r11+38h]
 * 000000014002B0E7: mov     rsp, r11
 * 000000014002B0EA: pop     r15
 * 000000014002B0EC: pop     r14
 * 000000014002B0EE: pop     r12
 * 000000014002B0F0: retn
 */
