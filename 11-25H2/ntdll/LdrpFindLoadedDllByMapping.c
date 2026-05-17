/*
 * XREFs of LdrpFindLoadedDllByMapping @ 0x18006CE70
 * Callers:
 *     LdrpFindLoadedDllByMappingFile @ 0x1800CBEB8 (LdrpFindLoadedDllByMappingFile.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x18006E750 (LdrpFindLoadedDllByMappingLockHeld.c)
 */

/*
 * Hex-Rays decompilation failed for LdrpFindLoadedDllByMapping @ 0x18006CE70
 * Reason: Hex-Rays returned no pseudocode for 0x18006CE70
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018006CE70: mov     [rsp+arg_0], rbx
 * 000000018006CE75: mov     [rsp+arg_10], rsi
 * 000000018006CE7A: mov     [rsp+arg_18], rdi
 * 000000018006CE7F: push    r14
 * 000000018006CE81: sub     rsp, 20h
 * 000000018006CE85: mov     eax, [rdx+8]
 * 000000018006CE88: mov     rdi, rcx
 * 000000018006CE8B: mov     [rsp+28h+arg_8], eax
 * 000000018006CE8F: lea     rcx, LdrpModuleDatatableLock
 * 000000018006CE96: mov     eax, [rdx+50h]
 * 000000018006CE99: mov     rsi, r9
 * 000000018006CE9C: mov     [rsp+28h+arg_C], eax
 * 000000018006CEA0: mov     r14, r8
 * 000000018006CEA3: mov     rbx, rdx
 * 000000018006CEA6: call    RtlAcquireSRWLockShared
 * 000000018006CEAB: mov     r9, r14
 * 000000018006CEAE: lea     r8, [rsp+28h+arg_8]
 * 000000018006CEB3: mov     rdx, rbx
 * 000000018006CEB6: mov     rcx, rdi
 * 000000018006CEB9: call    LdrpFindLoadedDllByMappingLockHeld
 * 000000018006CEBE: mov     ebx, eax
 * 000000018006CEC0: test    eax, eax
 * 000000018006CEC2: js      short loc_18006CED9
 * 000000018006CEC4: test    rsi, rsi
 * 000000018006CEC7: jz      short loc_18006CED9
 * 000000018006CEC9: mov     rdx, [r14]
 * 000000018006CECC: mov     r8, [rdx+98h]
 * 000000018006CED3: mov     edx, [r8+38h]
 * 000000018006CED7: mov     [rsi], edx
 * 000000018006CED9: lea     rcx, LdrpModuleDatatableLock
 * 000000018006CEE0: call    RtlReleaseSRWLockShared
 * 000000018006CEE5: mov     rsi, [rsp+28h+arg_10]
 * 000000018006CEEA: mov     eax, ebx
 * 000000018006CEEC: mov     rbx, [rsp+28h+arg_0]
 * 000000018006CEF1: mov     rdi, [rsp+28h+arg_18]
 * 000000018006CEF6: add     rsp, 20h
 * 000000018006CEFA: pop     r14
 * 000000018006CEFC: retn
 */
