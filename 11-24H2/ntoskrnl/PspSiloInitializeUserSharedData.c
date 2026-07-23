/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x140773644
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772EA0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     RtlCopyUnicodeString @ 0x1403FA370 (RtlCopyUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     HalPutDmaAdapter @ 0x14047E920 (HalPutDmaAdapter.c)
 *     PsRemoveSiloContext @ 0x140772410 (PsRemoveSiloContext.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1407733E8 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140773484 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     ExGetSuiteMask @ 0x1407B7320 (ExGetSuiteMask.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     MmMapViewInSessionSpace @ 0x1408EB520 (MmMapViewInSessionSpace.c)
 *     MmCreateSection @ 0x14098ADB0 (MmCreateSection.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140A8688C (RtlpGetNtProductTypeFromRegistry.c)
 */

/*
 * Hex-Rays decompilation failed for PspSiloInitializeUserSharedData @ 0x140773644
 * Reason: Hex-Rays returned no pseudocode for 0x140773644
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140773644: mov     rax, rsp
 * 0000000140773647: mov     [rax+8], rbx
 * 000000014077364B: push    rbp
 * 000000014077364C: push    rsi
 * 000000014077364D: push    rdi
 * 000000014077364E: push    r14
 * 0000000140773650: push    r15
 * 0000000140773652: mov     rbp, rsp
 * 0000000140773655: sub     rsp, 50h
 * 0000000140773659: and     qword ptr [rax-40h], 0
 * 000000014077365E: lea     r9, [rbp+ViewSize]
 * 0000000140773662: and     qword ptr [rax-48h], 0
 * 0000000140773667: mov     rsi, rcx
 * 000000014077366A: and     [rbp+MappedBase], 0
 * 000000014077366F: lea     rcx, [rbp+Section]
 * 0000000140773673: and     [rbp+Section], 0
 * 0000000140773678: xor     r8d, r8d
 * 000000014077367B: mov     dword ptr [rax-50h], 8000000h
 * 0000000140773682: mov     edx, 0F001Fh
 * 0000000140773687: mov     dword ptr [rax-58h], 4
 * 000000014077368E: mov     [rbp+ViewSize], 270h
 * 0000000140773696: call    MmCreateSection
 * 000000014077369B: test    eax, eax
 * 000000014077369D: js      loc_1407737EB
 * 00000001407736A3: mov     rbx, [rbp+Section]
 * 00000001407736A7: lea     r8, [rbp+ViewSize]; ViewSize
 * 00000001407736AB: and     [rbp+ViewSize], 0
 * 00000001407736B0: lea     rdx, [rbp+MappedBase]; MappedBase
 * 00000001407736B4: mov     rcx, rbx; Section
 * 00000001407736B7: call    MmMapViewInSessionSpace
 * 00000001407736BC: mov     edi, eax
 * 00000001407736BE: test    eax, eax
 * 00000001407736C0: jns     short loc_1407736D1
 * 00000001407736C2: mov     rcx, rbx; Object
 * 00000001407736C5: call    ObfDereferenceObject
 * 00000001407736CA: mov     eax, edi
 * 00000001407736CC: jmp     loc_1407737EB
 * 00000001407736D1: mov     rcx, rsi
 * 00000001407736D4: call    PsGetServerSiloGlobals
 * 00000001407736D9: mov     rcx, [rbp+MappedBase]
 * 00000001407736DD: mov     rdi, rax
 * 00000001407736E0: mov     [rax+508h], rcx
 * 00000001407736E7: mov     rcx, rsi
 * 00000001407736EA: mov     [rax+510h], rbx
 * 00000001407736F1: call    PsAttachSiloToCurrentThread
 * 00000001407736F6: mov     rcx, [rdi+508h]
 * 00000001407736FD: lea     r8, [rbp+Section]
 * 0000000140773701: and     [rbp+Section], 0
 * 0000000140773706: mov     r15, rax
 * 0000000140773709: or      dword ptr [rcx], 0FFFFFFFFh
 * 000000014077370C: mov     rcx, rsi
 * 000000014077370F: mov     edx, cs:PsSystemRootSiloContextSlot
 * 0000000140773715: call    PsRemoveSiloContext
 * 000000014077371A: mov     ebx, eax
 * 000000014077371C: test    eax, eax
 * 000000014077371E: js      loc_1407737E1
 * 0000000140773724: mov     rax, [rsi+5E0h]
 * 000000014077372B: xorps   xmm0, xmm0
 * 000000014077372E: mov     rdx, [rax+508h]
 * 0000000140773735: lea     rcx, [rax+4D0h]; DestinationString
 * 000000014077373C: add     rdx, 1Eh
 * 0000000140773740: movups  xmmword ptr [rcx], xmm0
 * 0000000140773743: mov     [rcx+8], rdx
 * 0000000140773747: mov     rdx, [rbp+Section]; SourceString
 * 000000014077374B: mov     word ptr [rcx+2], 208h
 * 0000000140773751: call    RtlCopyUnicodeString
 * 0000000140773756: mov     rcx, [rbp+Section]; DmaAdapter
 * 000000014077375A: call    HalPutDmaAdapter
 * 000000014077375F: mov     rsi, [rdi+508h]
 * 0000000140773766: lea     rcx, [rbp+Section]
 * 000000014077376A: and     dword ptr [rbp+Section], 0
 * 000000014077376E: call    RtlpGetNtProductTypeFromRegistry
 * 0000000140773773: mov     ebx, eax
 * 0000000140773775: test    eax, eax
 * 0000000140773777: js      short loc_1407737E1
 * 0000000140773779: mov     eax, dword ptr [rbp+Section]
 * 000000014077377C: lea     rcx, [rbp+UnicodeString]
 * 0000000140773780: xorps   xmm0, xmm0
 * 0000000140773783: mov     [rsi+10h], eax
 * 0000000140773786: mov     r14, [rdi+508h]
 * 000000014077378D: movups  xmmword ptr [rbp+UnicodeString.Length], xmm0
 * 0000000140773791: mov     byte ptr [rbp+Section], 0
 * 0000000140773795: call    PspSiloGetSuiteMaskStringFromRegistry
 * 000000014077379A: mov     ebx, eax
 * 000000014077379C: test    eax, eax
 * 000000014077379E: js      short loc_1407737E1
 * 00000001407737A0: lea     rcx, [rbp+Section]
 * 00000001407737A4: call    PspSiloGetMultiUserTsFromRegistry
 * 00000001407737A9: mov     rsi, [rbp+UnicodeString.Buffer]
 * 00000001407737AD: mov     ebx, eax
 * 00000001407737AF: test    eax, eax
 * 00000001407737B1: js      short loc_1407737C2
 * 00000001407737B3: mov     dl, byte ptr [rbp+Section]
 * 00000001407737B6: mov     rcx, rsi
 * 00000001407737B9: call    ExGetSuiteMask
 * 00000001407737BE: mov     [r14+14h], eax
 * 00000001407737C2: test    rsi, rsi
 * 00000001407737C5: jz      short loc_1407737D0
 * 00000001407737C7: lea     rcx, [rbp+UnicodeString]; UnicodeString
 * 00000001407737CB: call    RtlFreeAnsiString
 * 00000001407737D0: test    ebx, ebx
 * 00000001407737D2: js      short loc_1407737E1
 * 00000001407737D4: mov     rax, [rdi+508h]
 * 00000001407737DB: or      dword ptr [rax+18h], 0FFFFFFFFh
 * 00000001407737DF: xor     ebx, ebx
 * 00000001407737E1: mov     rcx, r15
 * 00000001407737E4: call    PsDetachSiloFromCurrentThread
 * 00000001407737E9: mov     eax, ebx
 * 00000001407737EB: mov     rbx, [rsp+50h+arg_0]
 * 00000001407737F3: add     rsp, 50h
 * 00000001407737F7: pop     r15
 * 00000001407737F9: pop     r14
 * 00000001407737FB: pop     rdi
 * 00000001407737FC: pop     rsi
 * 00000001407737FD: pop     rbp
 * 00000001407737FE: retn
 */
