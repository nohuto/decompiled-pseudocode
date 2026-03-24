/*
 * XREFs of AcpiPccRingDoorbell @ 0x140051340
 * Callers:
 *     AcpiPccExecuteCommandAsync @ 0x140051170 (AcpiPccExecuteCommandAsync.c)
 * Callees:
 *     AcpiPccLockSubspace @ 0x140051700 (AcpiPccLockSubspace.c)
 *     AcpiPccUnlockSubspace @ 0x140051A9C (AcpiPccUnlockSubspace.c)
 *     AcpiPccUpdateDoorbellRegister @ 0x140053D60 (AcpiPccUpdateDoorbellRegister.c)
 *     AcpiPccUpdateSciRefCount @ 0x1400643EC (AcpiPccUpdateSciRefCount.c)
 */

/*
 * Hex-Rays decompilation failed for AcpiPccRingDoorbell @ 0x140051340
 * Reason: Hex-Rays returned no pseudocode for 0x140051340
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140051340: push    rbx
 * 0000000140051342: sub     rsp, 20h
 * 0000000140051346: mov     rbx, rdx
 * 0000000140051349: mov     [rsp+28h+arg_8], 0
 * 000000014005134E: mov     rcx, rbx
 * 0000000140051351: lea     rdx, [rsp+28h+arg_8]
 * 0000000140051356: call    AcpiPccLockSubspace
 * 000000014005135B: mov     ecx, [rbx+8]
 * 000000014005135E: mov     r8d, ecx
 * 0000000140051361: and     dword ptr [rbx+308h], 0
 * 0000000140051368: shr     r8d, 1
 * 000000014005136B: mov     edx, r8d
 * 000000014005136E: and     edx, 0Fh
 * 0000000140051371: lea     eax, [rdx-7]
 * 0000000140051374: test    eax, 0FFFFFFF9h
 * 0000000140051379: jnz     short loc_140051392
 * 000000014005137B: cmp     edx, 0Dh
 * 000000014005137E: jz      short loc_140051392
 * 0000000140051380: lea     eax, ds:0FFFFFFFFFFFFFFFEh[r8*2]
 * 0000000140051388: xor     eax, ecx
 * 000000014005138A: and     eax, 1Eh
 * 000000014005138D: xor     eax, ecx
 * 000000014005138F: mov     [rbx+8], eax
 * 0000000140051392: mov     eax, 1
 * 0000000140051397: mov     rcx, rbx
 * 000000014005139A: xchg    eax, [rbx+230h]
 * 00000001400513A0: mov     dl, [rsp+28h+arg_8]
 * 00000001400513A4: call    AcpiPccUnlockSubspace
 * 00000001400513A9: mov     dl, 1
 * 00000001400513AB: mov     rcx, rbx
 * 00000001400513AE: call    AcpiPccUpdateSciRefCount
 * 00000001400513B3: call    AcpiPccUpdateDoorbellRegister
 * 00000001400513B8: mov     eax, [rbx+18h]
 * 00000001400513BB: lea     rcx, [rbx+238h]
 * 00000001400513C2: imul    rdx, rax, -0Ah
 * 00000001400513C6: xor     r9d, r9d
 * 00000001400513C9: xor     r8d, r8d
 * 00000001400513CC: call    cs:__imp_KeSetTimer2
 * 00000001400513D3: nop     dword ptr [rax+rax+00h]
 * 00000001400513D8: add     rsp, 20h
 * 00000001400513DC: pop     rbx
 * 00000001400513DD: retn
 */
