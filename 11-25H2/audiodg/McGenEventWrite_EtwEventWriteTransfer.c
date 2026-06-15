/*
 * XREFs of McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0
 * Callers:
 *     McTemplateU0pi_EtwEventWriteTransfer @ 0x14001EC84 (McTemplateU0pi_EtwEventWriteTransfer.c)
 *     ?SignalWorkStarted@CAudioPump@@AEAAXXZ @ 0x14001ECFC (-SignalWorkStarted@CAudioPump@@AEAAXXZ.c)
 *     ?InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x14001F050 (-InputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ @ 0x14001F680 (-SetDeadlineForNextProcessingPass@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0pxx_EtwEventWriteTransfer @ 0x14001F910 (McTemplateU0pxx_EtwEventWriteTransfer.c)
 *     ?UpdateProcessingStart@CAudioPump@@AEAA_JXZ @ 0x14001F9A0 (-UpdateProcessingStart@CAudioPump@@AEAA_JXZ.c)
 *     McTemplateU0pqit_EtwEventWriteTransfer @ 0x14001FF40 (McTemplateU0pqit_EtwEventWriteTransfer.c)
 *     McTemplateU0pqq_EtwEventWriteTransfer @ 0x14001FFE0 (McTemplateU0pqq_EtwEventWriteTransfer.c)
 *     McTemplateU0pq_EtwEventWriteTransfer @ 0x140020060 (McTemplateU0pq_EtwEventWriteTransfer.c)
 *     McTemplateU0p_EtwEventWriteTransfer @ 0x1400200D0 (McTemplateU0p_EtwEventWriteTransfer.c)
 *     ?OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z @ 0x140020130 (-OutputPumpWorkRoutine@CAudioPump@@CAKPEAX@Z.c)
 *     ?Yield@CAudioPump@@AEAA?AW4TEventType@1@PEA_K@Z @ 0x140020CC0 (-Yield@CAudioPump@@AEAA-AW4TEventType@1@PEA_K@Z.c)
 *     ?SignalWorkCompleted@CAudioPump@@AEAAXXZ @ 0x140021280 (-SignalWorkCompleted@CAudioPump@@AEAAXXZ.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x14002147C (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___ @ 0x1400489B8 (wil--details--lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___--_lambda_call__lambda_c4ca.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1400498FC (McTemplateU0q_EtwEventWriteTransfer.c)
 *     McTemplateU0jjt_EtwEventWriteTransfer @ 0x14004A1AC (McTemplateU0jjt_EtwEventWriteTransfer.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140050178 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     McTemplateU0pqx_EtwEventWriteTransfer @ 0x1400669E4 (McTemplateU0pqx_EtwEventWriteTransfer.c)
 *     McTemplateU0qq_EtwEventWriteTransfer @ 0x140066A70 (McTemplateU0qq_EtwEventWriteTransfer.c)
 *     McTemplateU0pqqq_EtwEventWriteTransfer @ 0x14006DE38 (McTemplateU0pqqq_EtwEventWriteTransfer.c)
 *     McTemplateU0pqtqqqq_EtwEventWriteTransfer @ 0x14006DED4 (McTemplateU0pqtqqqq_EtwEventWriteTransfer.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for McGenEventWrite_EtwEventWriteTransfer @ 0x1400213E0
 * Reason: Hex-Rays returned no pseudocode for 0x1400213E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400213E0: sub     rsp, 38h
 * 00000001400213E4: mov     r8, cs:qword_1400C33E8
 * 00000001400213EB: mov     rcx, [rsp+38h+arg_20]
 * 00000001400213F0: test    r8, r8
 * 00000001400213F3: jnz     short loc_14002142D
 * 00000001400213F5: xor     eax, eax
 * 00000001400213F7: mov     [rcx], rax
 * 00000001400213FA: mov     r8d, eax
 * 00000001400213FD: mov     [rcx+8], r8d
 * 0000000140021401: xor     r8d, r8d
 * 0000000140021404: mov     [rsp+38h+var_10], rcx
 * 0000000140021409: mov     [rcx+0Ch], eax
 * 000000014002140C: mov     rcx, cs:AUDIO_EVENT_PROVIDER_Context
 * 0000000140021413: mov     [rsp+38h+var_18], r9d
 * 0000000140021418: xor     r9d, r9d
 * 000000014002141B: call    cs:__imp_EtwEventWriteTransfer
 * 0000000140021422: nop     dword ptr [rax+rax+00h]
 * 0000000140021427: add     rsp, 38h
 * 000000014002142B: retn
 * 000000014002142D: mov     [rcx], r8
 * 0000000140021430: mov     eax, 2
 * 0000000140021435: movzx   r8d, word ptr [r8]
 * 0000000140021439: jmp     short loc_1400213FD
 */
