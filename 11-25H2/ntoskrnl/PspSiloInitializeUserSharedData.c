/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x140763A54
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     RtlCopyUnicodeString @ 0x14036CBB0 (RtlCopyUnicodeString.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     HalPutDmaAdapter @ 0x140482570 (HalPutDmaAdapter.c)
 *     PsRemoveSiloContext @ 0x140762830 (PsRemoveSiloContext.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1407637F8 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x140763894 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     ExGetSuiteMask @ 0x1407A7A30 (ExGetSuiteMask.c)
 *     MmMapViewInSessionSpace @ 0x1408BA360 (MmMapViewInSessionSpace.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     MmCreateSection @ 0x14093C290 (MmCreateSection.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140A85BE4 (RtlpGetNtProductTypeFromRegistry.c)
 */

/*
 * Hex-Rays decompilation failed for PspSiloInitializeUserSharedData @ 0x140763A54
 * Reason: Hex-Rays returned no pseudocode for 0x140763A54
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140763A54: mov     rax, rsp
 * 0000000140763A57: mov     [rax+8], rbx
 * 0000000140763A5B: push    rbp
 * 0000000140763A5C: push    rsi
 * 0000000140763A5D: push    rdi
 * 0000000140763A5E: push    r14
 * 0000000140763A60: push    r15
 * 0000000140763A62: mov     rbp, rsp
 * 0000000140763A65: sub     rsp, 50h
 * 0000000140763A69: and     qword ptr [rax-40h], 0
 * 0000000140763A6E: lea     r9, [rbp+ViewSize]
 * 0000000140763A72: and     qword ptr [rax-48h], 0
 * 0000000140763A77: mov     rsi, rcx
 * 0000000140763A7A: and     [rbp+MappedBase], 0
 * 0000000140763A7F: lea     rcx, [rbp+Section]
 * 0000000140763A83: and     [rbp+Section], 0
 * 0000000140763A88: xor     r8d, r8d
 * 0000000140763A8B: mov     dword ptr [rax-50h], 8000000h
 * 0000000140763A92: mov     edx, 0F001Fh
 * 0000000140763A97: mov     dword ptr [rax-58h], 4
 * 0000000140763A9E: mov     [rbp+ViewSize], 270h
 * 0000000140763AA6: call    MmCreateSection
 * 0000000140763AAB: test    eax, eax
 * 0000000140763AAD: js      loc_140763BFB
 * 0000000140763AB3: mov     rbx, [rbp+Section]
 * 0000000140763AB7: lea     r8, [rbp+ViewSize]; ViewSize
 * 0000000140763ABB: and     [rbp+ViewSize], 0
 * 0000000140763AC0: lea     rdx, [rbp+MappedBase]; MappedBase
 * 0000000140763AC4: mov     rcx, rbx; Section
 * 0000000140763AC7: call    MmMapViewInSessionSpace
 * 0000000140763ACC: mov     edi, eax
 * 0000000140763ACE: test    eax, eax
 * 0000000140763AD0: jns     short loc_140763AE1
 * 0000000140763AD2: mov     rcx, rbx; Object
 * 0000000140763AD5: call    ObfDereferenceObject
 * 0000000140763ADA: mov     eax, edi
 * 0000000140763ADC: jmp     loc_140763BFB
 * 0000000140763AE1: mov     rcx, rsi
 * 0000000140763AE4: call    PsGetServerSiloGlobals
 * 0000000140763AE9: mov     rcx, [rbp+MappedBase]
 * 0000000140763AED: mov     rdi, rax
 * 0000000140763AF0: mov     [rax+508h], rcx
 * 0000000140763AF7: mov     rcx, rsi
 * 0000000140763AFA: mov     [rax+510h], rbx
 * 0000000140763B01: call    PsAttachSiloToCurrentThread
 * 0000000140763B06: mov     rcx, [rdi+508h]
 * 0000000140763B0D: lea     r8, [rbp+Section]
 * 0000000140763B11: and     [rbp+Section], 0
 * 0000000140763B16: mov     r15, rax
 * 0000000140763B19: or      dword ptr [rcx], 0FFFFFFFFh
 * 0000000140763B1C: mov     rcx, rsi
 * 0000000140763B1F: mov     edx, cs:PsSystemRootSiloContextSlot
 * 0000000140763B25: call    PsRemoveSiloContext
 * 0000000140763B2A: mov     ebx, eax
 * 0000000140763B2C: test    eax, eax
 * 0000000140763B2E: js      loc_140763BF1
 * 0000000140763B34: mov     rax, [rsi+5E0h]
 * 0000000140763B3B: xorps   xmm0, xmm0
 * 0000000140763B3E: mov     rdx, [rax+508h]
 * 0000000140763B45: lea     rcx, [rax+4D0h]; DestinationString
 * 0000000140763B4C: add     rdx, 1Eh
 * 0000000140763B50: movups  xmmword ptr [rcx], xmm0
 * 0000000140763B53: mov     [rcx+8], rdx
 * 0000000140763B57: mov     rdx, [rbp+Section]; SourceString
 * 0000000140763B5B: mov     word ptr [rcx+2], 208h
 * 0000000140763B61: call    RtlCopyUnicodeString
 * 0000000140763B66: mov     rcx, [rbp+Section]; DmaAdapter
 * 0000000140763B6A: call    HalPutDmaAdapter
 * 0000000140763B6F: mov     rsi, [rdi+508h]
 * 0000000140763B76: lea     rcx, [rbp+Section]
 * 0000000140763B7A: and     dword ptr [rbp+Section], 0
 * 0000000140763B7E: call    RtlpGetNtProductTypeFromRegistry
 * 0000000140763B83: mov     ebx, eax
 * 0000000140763B85: test    eax, eax
 * 0000000140763B87: js      short loc_140763BF1
 * 0000000140763B89: mov     eax, dword ptr [rbp+Section]
 * 0000000140763B8C: lea     rcx, [rbp+UnicodeString]
 * 0000000140763B90: xorps   xmm0, xmm0
 * 0000000140763B93: mov     [rsi+10h], eax
 * 0000000140763B96: mov     r14, [rdi+508h]
 * 0000000140763B9D: movups  xmmword ptr [rbp+UnicodeString.Length], xmm0
 * 0000000140763BA1: mov     byte ptr [rbp+Section], 0
 * 0000000140763BA5: call    PspSiloGetSuiteMaskStringFromRegistry
 * 0000000140763BAA: mov     ebx, eax
 * 0000000140763BAC: test    eax, eax
 * 0000000140763BAE: js      short loc_140763BF1
 * 0000000140763BB0: lea     rcx, [rbp+Section]
 * 0000000140763BB4: call    PspSiloGetMultiUserTsFromRegistry
 * 0000000140763BB9: mov     rsi, [rbp+UnicodeString.Buffer]
 * 0000000140763BBD: mov     ebx, eax
 * 0000000140763BBF: test    eax, eax
 * 0000000140763BC1: js      short loc_140763BD2
 * 0000000140763BC3: mov     dl, byte ptr [rbp+Section]
 * 0000000140763BC6: mov     rcx, rsi
 * 0000000140763BC9: call    ExGetSuiteMask
 * 0000000140763BCE: mov     [r14+14h], eax
 * 0000000140763BD2: test    rsi, rsi
 * 0000000140763BD5: jz      short loc_140763BE0
 * 0000000140763BD7: lea     rcx, [rbp+UnicodeString]; UnicodeString
 * 0000000140763BDB: call    RtlFreeAnsiString
 * 0000000140763BE0: test    ebx, ebx
 * 0000000140763BE2: js      short loc_140763BF1
 * 0000000140763BE4: mov     rax, [rdi+508h]
 * 0000000140763BEB: or      dword ptr [rax+18h], 0FFFFFFFFh
 * 0000000140763BEF: xor     ebx, ebx
 * 0000000140763BF1: mov     rcx, r15
 * 0000000140763BF4: call    PsDetachSiloFromCurrentThread
 * 0000000140763BF9: mov     eax, ebx
 * 0000000140763BFB: mov     rbx, [rsp+50h+arg_0]
 * 0000000140763C03: add     rsp, 50h
 * 0000000140763C07: pop     r15
 * 0000000140763C09: pop     r14
 * 0000000140763C0B: pop     rdi
 * 0000000140763C0C: pop     rsi
 * 0000000140763C0D: pop     rbp
 * 0000000140763C0E: retn
 */
