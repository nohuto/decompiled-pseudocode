/*
 * XREFs of ??0hresult_canceled@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DECBC
 * Callers:
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DFA20 (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DEDA0 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 */

/*
 * Hex-Rays decompilation failed for ??0hresult_canceled@winrt@@QEAA@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1802DECBC
 * Reason: Hex-Rays returned no pseudocode for 0x1802DECBC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001802DECBC: push    rbx
 * 00000001802DECBE: sub     rsp, 20h
 * 00000001802DECC2: mov     edx, cs:?error_canceled@impl@winrt@@3Uhresult@2@B; winrt::hresult const winrt::impl::error_canceled
 * 00000001802DECC8: mov     r9, r8
 * 00000001802DECCB: mov     rbx, rcx
 * 00000001802DECCE: call    ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z; winrt::hresult_error::hresult_error(winrt::hresult,winrt::take_ownership_from_abi_t,winrt::impl::slim_source_location const &)
 * 00000001802DECD3: mov     rax, rbx
 * 00000001802DECD6: add     rsp, 20h
 * 00000001802DECDA: pop     rbx
 * 00000001802DECDB: retn
 */
