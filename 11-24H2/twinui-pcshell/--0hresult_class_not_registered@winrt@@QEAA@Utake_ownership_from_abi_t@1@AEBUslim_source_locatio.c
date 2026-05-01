/*
 * XREFs of ??0hresult_class_not_registered@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DED34
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA20 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DEDA0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_class_not_registered@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DED34
 * Reason: Hex-Rays returned no pseudocode for 0x1802DED34
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802DED34: push    rbx
 * 00000001802DED36: sub     rsp, 20h
 * 00000001802DED3A: mov     edx, cs:?error_class_not_registered@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_class_not_registered
 * 00000001802DED40: mov     r9, r8
 * 00000001802DED43: mov     rbx, rcx
 * 00000001802DED46: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802DED4B: mov     rax, rbx
 * 00000001802DED4E: add     rsp, 20h
 * 00000001802DED52: pop     rbx
 * 00000001802DED53: retn
 */
