/*
 * XREFs of ??0hresult_access_denied@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DEC94
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA20 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DEDA0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_access_denied@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DEC94
 * Reason: Hex-Rays returned no pseudocode for 0x1802DEC94
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802DEC94: push    rbx
 * 00000001802DEC96: sub     rsp, 20h
 * 00000001802DEC9A: mov     edx, cs:?error_access_denied@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_access_denied
 * 00000001802DECA0: mov     r9, r8
 * 00000001802DECA3: mov     rbx, rcx
 * 00000001802DECA6: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802DECAB: mov     rax, rbx
 * 00000001802DECAE: add     rsp, 20h
 * 00000001802DECB2: pop     rbx
 * 00000001802DECB3: retn
 */
