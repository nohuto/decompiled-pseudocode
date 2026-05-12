/*
 * XREFs of NvmeAdapterDeleteAsyncCallbacks @ 0x1400CE3F0
 * Callers:
 *     NvmeAdapterReleaseResources @ 0x14019B0CC (NvmeAdapterReleaseResources.c)
 *     NvmeAdapterStopDeviceIrp @ 0x14019C384 (NvmeAdapterStopDeviceIrp.c)
 * Callees:
 *     NvmeAdapterDisConnectMSIInterrupt @ 0x14019646C (NvmeAdapterDisConnectMSIInterrupt.c)
 *     NvmeAdapterDisConnectNonMSIInterrupt @ 0x1401964BC (NvmeAdapterDisConnectNonMSIInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for NvmeAdapterDeleteAsyncCallbacks @ 0x1400CE3F0
 * Reason: Hex-Rays returned no pseudocode for 0x1400CE3F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400CE3F0: push    rbx
 * 00000001400CE3F2: sub     rsp, 20h
 * 00000001400CE3F6: mov     eax, [rcx+90h]
 * 00000001400CE3FC: mov     rbx, rcx
 * 00000001400CE3FF: bt      rax, 0Bh
 * 00000001400CE404: jnb     short loc_1400CE422
 * 00000001400CE406: call    NvmeAdapterDisConnectMSIInterrupt
 * 00000001400CE40B: mov     rax, [rbx+248h]
 * 00000001400CE412: btr     qword ptr [rbx+90h], 0Bh
 * 00000001400CE41B: and     qword ptr [rax+78h], 0
 * 00000001400CE420: jmp     short loc_1400CE439
 * 00000001400CE422: mov     rax, [rcx+248h]
 * 00000001400CE429: test    rax, rax
 * 00000001400CE42C: jz      short loc_1400CE439
 * 00000001400CE42E: cmp     qword ptr [rax], 0
 * 00000001400CE432: jz      short loc_1400CE439
 * 00000001400CE434: call    NvmeAdapterDisConnectNonMSIInterrupt
 * 00000001400CE439: mov     rax, [rbx+0A0h]
 * 00000001400CE440: mov     rcx, [rax+118h]; Handle
 * 00000001400CE447: test    rcx, rcx
 * 00000001400CE44A: jz      short loc_1400CE467
 * 00000001400CE44C: call    cs:__imp_PoUnregisterPowerSettingCallback
 * 00000001400CE453: nop     dword ptr [rax+rax+00h]
 * 00000001400CE458: mov     rax, [rbx+0A0h]
 * 00000001400CE45F: and     qword ptr [rax+118h], 0
 * 00000001400CE467: mov     rax, [rbx+0A0h]
 * 00000001400CE46E: mov     rcx, [rax+120h]
 * 00000001400CE475: test    rcx, rcx
 * 00000001400CE478: jz      short loc_1400CE495
 * 00000001400CE47A: call    cs:__imp_PoUnregisterCoalescingCallback
 * 00000001400CE481: nop     dword ptr [rax+rax+00h]
 * 00000001400CE486: mov     rax, [rbx+0A0h]
 * 00000001400CE48D: and     qword ptr [rax+120h], 0
 * 00000001400CE495: mov     rax, [rbx+0A0h]
 * 00000001400CE49C: mov     rcx, [rax+128h]; Handle
 * 00000001400CE4A3: test    rcx, rcx
 * 00000001400CE4A6: jz      short loc_1400CE4C3
 * 00000001400CE4A8: call    cs:__imp_PoUnregisterPowerSettingCallback
 * 00000001400CE4AF: nop     dword ptr [rax+rax+00h]
 * 00000001400CE4B4: mov     rax, [rbx+0A0h]
 * 00000001400CE4BB: and     qword ptr [rax+128h], 0
 * 00000001400CE4C3: mov     rax, [rbx+0A0h]
 * 00000001400CE4CA: mov     rcx, [rax+130h]; Handle
 * 00000001400CE4D1: test    rcx, rcx
 * 00000001400CE4D4: jz      short loc_1400CE4F1
 * 00000001400CE4D6: call    cs:__imp_PoUnregisterPowerSettingCallback
 * 00000001400CE4DD: nop     dword ptr [rax+rax+00h]
 * 00000001400CE4E2: mov     rax, [rbx+0A0h]
 * 00000001400CE4E9: and     qword ptr [rax+130h], 0
 * 00000001400CE4F1: mov     rcx, [rbx+0A0h]
 * 00000001400CE4F8: mov     eax, [rcx+0B0h]
 * 00000001400CE4FE: bt      eax, 10h
 * 00000001400CE502: jnb     short loc_1400CE544
 * 00000001400CE504: btr     eax, 10h
 * 00000001400CE508: xor     edx, edx; Enable
 * 00000001400CE50A: mov     [rcx+0B0h], eax
 * 00000001400CE510: mov     rcx, [rbx+0A0h]
 * 00000001400CE517: add     rcx, 140h; SymbolicLinkName
 * 00000001400CE51E: call    cs:__imp_IoSetDeviceInterfaceState
 * 00000001400CE525: nop     dword ptr [rax+rax+00h]
 * 00000001400CE52A: mov     rcx, [rbx+0A0h]
 * 00000001400CE531: add     rcx, 140h; UnicodeString
 * 00000001400CE538: call    cs:__imp_RtlFreeUnicodeString
 * 00000001400CE53F: nop     dword ptr [rax+rax+00h]
 * 00000001400CE544: add     rsp, 20h
 * 00000001400CE548: pop     rbx
 * 00000001400CE549: retn
 */
