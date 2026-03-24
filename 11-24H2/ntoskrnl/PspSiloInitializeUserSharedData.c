/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x140773424
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140772C80 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     RtlCopyUnicodeString @ 0x1403FFE80 (RtlCopyUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     HalPutDmaAdapter @ 0x1404833B0 (HalPutDmaAdapter.c)
 *     PsRemoveSiloContext @ 0x1407721F0 (PsRemoveSiloContext.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1407731C8 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140773264 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     ExGetSuiteMask @ 0x1407B6ED0 (ExGetSuiteMask.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     MmCreateSection @ 0x140940B50 (MmCreateSection.c)
 *     MmMapViewInSessionSpace @ 0x140946C00 (MmMapViewInSessionSpace.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140A8A54C (RtlpGetNtProductTypeFromRegistry.c)
 */

/*
 * Hex-Rays decompilation failed for PspSiloInitializeUserSharedData @ 0x140773424
 * Reason: Hex-Rays returned no pseudocode for 0x140773424
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140773424: mov     rax, rsp
 * 0000000140773427: mov     [rax+8], rbx
 * 000000014077342B: push    rbp
 * 000000014077342C: push    rsi
 * 000000014077342D: push    rdi
 * 000000014077342E: push    r14
 * 0000000140773430: push    r15
 * 0000000140773432: mov     rbp, rsp
 * 0000000140773435: sub     rsp, 50h
 * 0000000140773439: and     qword ptr [rax-40h], 0
 * 000000014077343E: lea     r9, [rbp+ViewSize]
 * 0000000140773442: and     qword ptr [rax-48h], 0
 * 0000000140773447: mov     rsi, rcx
 * 000000014077344A: and     [rbp+MappedBase], 0
 * 000000014077344F: lea     rcx, [rbp+Section]
 * 0000000140773453: and     [rbp+Section], 0
 * 0000000140773458: xor     r8d, r8d
 * 000000014077345B: mov     dword ptr [rax-50h], 8000000h
 * 0000000140773462: mov     edx, 0F001Fh
 * 0000000140773467: mov     dword ptr [rax-58h], 4
 * 000000014077346E: mov     [rbp+ViewSize], 270h
 * 0000000140773476: call    MmCreateSection
 * 000000014077347B: test    eax, eax
 * 000000014077347D: js      loc_1407735CB
 * 0000000140773483: mov     rbx, [rbp+Section]
 * 0000000140773487: lea     r8, [rbp+ViewSize]; ViewSize
 * 000000014077348B: and     [rbp+ViewSize], 0
 * 0000000140773490: lea     rdx, [rbp+MappedBase]; MappedBase
 * 0000000140773494: mov     rcx, rbx; Section
 * 0000000140773497: call    MmMapViewInSessionSpace
 * 000000014077349C: mov     edi, eax
 * 000000014077349E: test    eax, eax
 * 00000001407734A0: jns     short loc_1407734B1
 * 00000001407734A2: mov     rcx, rbx; Object
 * 00000001407734A5: call    ObfDereferenceObject
 * 00000001407734AA: mov     eax, edi
 * 00000001407734AC: jmp     loc_1407735CB
 * 00000001407734B1: mov     rcx, rsi
 * 00000001407734B4: call    PsGetServerSiloGlobals
 * 00000001407734B9: mov     rcx, [rbp+MappedBase]
 * 00000001407734BD: mov     rdi, rax
 * 00000001407734C0: mov     [rax+508h], rcx
 * 00000001407734C7: mov     rcx, rsi
 * 00000001407734CA: mov     [rax+510h], rbx
 * 00000001407734D1: call    PsAttachSiloToCurrentThread
 * 00000001407734D6: mov     rcx, [rdi+508h]
 * 00000001407734DD: lea     r8, [rbp+Section]
 * 00000001407734E1: and     [rbp+Section], 0
 * 00000001407734E6: mov     r15, rax
 * 00000001407734E9: or      dword ptr [rcx], 0FFFFFFFFh
 * 00000001407734EC: mov     rcx, rsi
 * 00000001407734EF: mov     edx, cs:PsSystemRootSiloContextSlot
 * 00000001407734F5: call    PsRemoveSiloContext
 * 00000001407734FA: mov     ebx, eax
 * 00000001407734FC: test    eax, eax
 * 00000001407734FE: js      loc_1407735C1
 * 0000000140773504: mov     rax, [rsi+5E0h]
 * 000000014077350B: xorps   xmm0, xmm0
 * 000000014077350E: mov     rdx, [rax+508h]
 * 0000000140773515: lea     rcx, [rax+4D0h]; DestinationString
 * 000000014077351C: add     rdx, 1Eh
 * 0000000140773520: movups  xmmword ptr [rcx], xmm0
 * 0000000140773523: mov     [rcx+8], rdx
 * 0000000140773527: mov     rdx, [rbp+Section]; SourceString
 * 000000014077352B: mov     word ptr [rcx+2], 208h
 * 0000000140773531: call    RtlCopyUnicodeString
 * 0000000140773536: mov     rcx, [rbp+Section]; DmaAdapter
 * 000000014077353A: call    HalPutDmaAdapter
 * 000000014077353F: mov     rsi, [rdi+508h]
 * 0000000140773546: lea     rcx, [rbp+Section]
 * 000000014077354A: and     dword ptr [rbp+Section], 0
 * 000000014077354E: call    RtlpGetNtProductTypeFromRegistry
 * 0000000140773553: mov     ebx, eax
 * 0000000140773555: test    eax, eax
 * 0000000140773557: js      short loc_1407735C1
 * 0000000140773559: mov     eax, dword ptr [rbp+Section]
 * 000000014077355C: lea     rcx, [rbp+UnicodeString]
 * 0000000140773560: xorps   xmm0, xmm0
 * 0000000140773563: mov     [rsi+10h], eax
 * 0000000140773566: mov     r14, [rdi+508h]
 * 000000014077356D: movups  xmmword ptr [rbp+UnicodeString.Length], xmm0
 * 0000000140773571: mov     byte ptr [rbp+Section], 0
 * 0000000140773575: call    PspSiloGetSuiteMaskStringFromRegistry
 * 000000014077357A: mov     ebx, eax
 * 000000014077357C: test    eax, eax
 * 000000014077357E: js      short loc_1407735C1
 * 0000000140773580: lea     rcx, [rbp+Section]
 * 0000000140773584: call    PspSiloGetMultiUserTsFromRegistry
 * 0000000140773589: mov     rsi, [rbp+UnicodeString.Buffer]
 * 000000014077358D: mov     ebx, eax
 * 000000014077358F: test    eax, eax
 * 0000000140773591: js      short loc_1407735A2
 * 0000000140773593: mov     dl, byte ptr [rbp+Section]
 * 0000000140773596: mov     rcx, rsi
 * 0000000140773599: call    ExGetSuiteMask
 * 000000014077359E: mov     [r14+14h], eax
 * 00000001407735A2: test    rsi, rsi
 * 00000001407735A5: jz      short loc_1407735B0
 * 00000001407735A7: lea     rcx, [rbp+UnicodeString]; UnicodeString
 * 00000001407735AB: call    RtlFreeAnsiString
 * 00000001407735B0: test    ebx, ebx
 * 00000001407735B2: js      short loc_1407735C1
 * 00000001407735B4: mov     rax, [rdi+508h]
 * 00000001407735BB: or      dword ptr [rax+18h], 0FFFFFFFFh
 * 00000001407735BF: xor     ebx, ebx
 * 00000001407735C1: mov     rcx, r15
 * 00000001407735C4: call    PsDetachSiloFromCurrentThread
 * 00000001407735C9: mov     eax, ebx
 * 00000001407735CB: mov     rbx, [rsp+50h+arg_0]
 * 00000001407735D3: add     rsp, 50h
 * 00000001407735D7: pop     r15
 * 00000001407735D9: pop     r14
 * 00000001407735DB: pop     rdi
 * 00000001407735DC: pop     rsi
 * 00000001407735DD: pop     rbp
 * 00000001407735DE: retn
 */
