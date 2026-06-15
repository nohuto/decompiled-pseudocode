/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0
 * Callers:
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x14001E984 (McTemplateU0pi_EtwEventWriteTransfer.c)
 *     ?SignalWorkStarted@CAudioPump@@AEAAXXZ @ 0x14001E9FC (-SignalWorkStarted@CAudioPump@@AEAAXXZ.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001ED50 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ @ 0x14001F380 (-SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0pxx_EtwEventWriteTransfer @ 0x14001F610 (McTemplateU0pxx_EtwEventWriteTransfer.c)
 *     ?UpdateProcessingStart@CAudioPump@@AEAA_JXZ @ 0x14001F6A0 (-UpdateProcessingStart@CAudioPump@@AEAA_JXZ.c)
 *     McTemplateU0pqit_EtwEventWriteTransfer @ 0x14001FC40 (McTemplateU0pqit_EtwEventWriteTransfer.c)
 *     McTemplateU0pqq_EtwEventWriteTransfer @ 0x14001FCE0 (McTemplateU0pqq_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x14001FD60 (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x14001FDD0 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001FE30 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x1400209C0 (-Yield@CAudioPump@@AEAA-AW4TEventType@1@PEA_K@Z.c)
 *     ?SignalWorkCompleted@CAudioPump@@AEAAXXZ @ 0x140020F80 (-SignalWorkCompleted@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x14002117C (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___ @ 0x1400486B8 (wil--details--lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___--_lambda_call__lambda_c4ca.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1400495FC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     McTemplateU0jjt_EtwEventWriteTransfer @ 0x140049EAC (McTemplateU0jjt_EtwEventWriteTransfer.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400500D8 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     McTemplateU0pqx_EtwEventWriteTransfer @ 0x140066974 (McTemplateU0pqx_EtwEventWriteTransfer.c)
 *     McTemplateU0qq_EtwEventWriteTransfer @ 0x140066A00 (McTemplateU0qq_EtwEventWriteTransfer.c)
 *     McTemplateU0pqqq_EtwEventWriteTransfer @ 0x14006DDC8 (McTemplateU0pqqq_EtwEventWriteTransfer.c)
 *     McTemplateU0pqtqqqq_EtwEventWriteTransfer @ 0x14006DE64 (McTemplateU0pqtqqqq_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventWrite_EtwEventWriteTransfer @ 0x1400210E0
 * Reason: Hex-Rays returned no pseudocode for 0x1400210E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400210E0: sub     rsp, 38h
 * 00000001400210E4: mov     r8, cs:qword_1400C33E8
 * 00000001400210EB: mov     rcx, [rsp+38h+arg_20]
 * 00000001400210F0: test    r8, r8
 * 00000001400210F3: jnz     short loc_14002112D
 * 00000001400210F5: xor     eax, eax
 * 00000001400210F7: mov     [rcx], rax
 * 00000001400210FA: mov     r8d, eax
 * 00000001400210FD: mov     [rcx+8], r8d
 * 0000000140021101: xor     r8d, r8d
 * 0000000140021104: mov     [rsp+38h+var_10], rcx
 * 0000000140021109: mov     [rcx+0Ch], eax
 * 000000014002110C: mov     rcx, cs:AUDIO_EVENT_PROVIDER_Context
 * 0000000140021113: mov     [rsp+38h+var_18], r9d
 * 0000000140021118: xor     r9d, r9d
 * 000000014002111B: call    cs:__imp_EtwEventWriteTransfer
 * 0000000140021122: nop     dword ptr [rax+rax+00h]
 * 0000000140021127: add     rsp, 38h
 * 000000014002112B: retn
 * 000000014002112D: mov     [rcx], r8
 * 0000000140021130: mov     eax, 2
 * 0000000140021135: movzx   r8d, word ptr [r8]
 * 0000000140021139: jmp     short loc_1400210FD
 */
