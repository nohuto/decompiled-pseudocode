/*
 * XREFs of ??0hresult_changed_state@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DECE4
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA20 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DEDA0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_changed_state@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DECE4
 * Reason: Hex-Rays returned no pseudocode for 0x1802DECE4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802DECE4: push    rbx
 * 00000001802DECE6: sub     rsp, 20h
 * 00000001802DECEA: mov     edx, cs:?error_changed_state@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_changed_state
 * 00000001802DECF0: mov     r9, r8
 * 00000001802DECF3: mov     rbx, rcx
 * 00000001802DECF6: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802DECFB: mov     rax, rbx
 * 00000001802DECFE: add     rsp, 20h
 * 00000001802DED02: pop     rbx
 * 00000001802DED03: retn
 */
