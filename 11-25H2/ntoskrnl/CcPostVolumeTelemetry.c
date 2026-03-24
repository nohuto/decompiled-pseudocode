/*
 * XREFs of CcPostVolumeTelemetry @ 0x140421068
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140A6F330 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     CcHasVolumeCumulativeTelemetryChanged @ 0x140200444 (CcHasVolumeCumulativeTelemetryChanged.c)
 *     KeRcuReadUnlock @ 0x1403A5890 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x1403A59C0 (KeRcuReadLock.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x140423854 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteT.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x140423F80 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140426678 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     CcHasVolumeTelemetryChanged @ 0x1404B954C (CcHasVolumeTelemetryChanged.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1404C4828 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     CcAggregateCumulativeVolumeTelemetry @ 0x1404DF570 (CcAggregateCumulativeVolumeTelemetry.c)
 *     McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer @ 0x1404F3E88 (McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CcAggregateCumulativeGlobalTelemetry @ 0x140AAC008 (CcAggregateCumulativeGlobalTelemetry.c)
 *     CcResetGlobalTelemetry @ 0x140AB2D8C (CcResetGlobalTelemetry.c)
 *     ExAllocatePoolWithTag @ 0x140B62010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for CcPostVolumeTelemetry @ 0x140421068
 * Reason: Hex-Rays returned no pseudocode for 0x140421068
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421068: mov     rax, rsp
 * 000000014042106B: mov     [rax+8], rbx
 * 000000014042106F: mov     [rax+10h], rsi
 * 0000000140421073: mov     [rax+18h], rdi
 * 0000000140421077: mov     [rax+20h], r12
 * 000000014042107B: push    r13
 * 000000014042107D: push    r14
 * 000000014042107F: push    r15
 * 0000000140421081: sub     rsp, 960h
 * 0000000140421088: mov     rax, cs:RtlCopyFromUser_$fo$
 * 000000014042108F: xor     rax, rsp
 * 0000000140421092: mov     [rsp+978h+var_28], rax
 * 000000014042109A: xor     r14b, r14b
 * 000000014042109D: mov     [rsp+978h+var_708], r14b
 * 00000001404210A5: and     [rsp+978h+var_6D4], 0
 * 00000001404210AD: and     [rsp+978h+var_6D0], 0
 * 00000001404210B5: mov     rsi, 0FFFFF78000000014h
 * 00000001404210BF: mov     rsi, [rsi]
 * 00000001404210C2: mov     rbx, rsi
 * 00000001404210C5: sub     rbx, cs:qword_140F8DD10
 * 00000001404210CC: mov     rdi, rsi
 * 00000001404210CF: sub     rdi, cs:qword_140F8DD18
 * 00000001404210D6: cmp     rbx, qword ptr cs:unk_140F8DD28
 * 00000001404210DD: jge     short loc_1404210EF
 * 00000001404210DF: mov     rax, cs:qword_140F8DD38
 * 00000001404210E6: test    rax, rax
 * 00000001404210E9: jg      loc_140423103
 * 00000001404210EF: cmp     rdi, cs:qword_140F8DD30
 * 00000001404210F6: jge     short loc_140421102
 * 00000001404210F8: cmp     cs:qword_140F8DD38, 0
 * 0000000140421100: jnz     short loc_14042110D
 * 0000000140421102: mov     r14b, 1
 * 0000000140421105: mov     [rsp+978h+var_708], r14b
 * 000000014042110D: inc     cs:qword_140F8DD38
 * 0000000140421114: mov     rax, cs:qword_140F8DD48
 * 000000014042111B: add     rax, 0Ah
 * 000000014042111F: mov     [rsp+978h+var_6C0], rax
 * 0000000140421127: imul    rdx, rax, 9B0h; NumberOfBytes
 * 000000014042112E: mov     ecx, 600h; PoolType
 * 0000000140421133: mov     r8d, 65546343h; Tag
 * 0000000140421139: call    ExAllocatePoolWithTag
 * 000000014042113E: mov     r15, rax
 * 0000000140421141: mov     [rsp+978h+P], rax
 * 0000000140421149: test    rax, rax
 * 000000014042114C: jz      loc_140423103
 * 0000000140421152: call    KeRcuReadLock
 * 0000000140421157: mov     r12, cs:CcVolumeCacheMapList
 * 000000014042115E: mov     [rsp+978h+var_580], r12
 * 0000000140421166: mov     r13d, [rsp+978h+var_6D4]
 * 000000014042116E: mov     edx, [rsp+978h+var_6D0]
 * 0000000140421175: lea     rax, CcVolumeCacheMapList
 * 000000014042117C: cmp     r12, rax
 * 000000014042117F: jz      loc_140421241
 * 0000000140421185: mov     eax, edx
 * 0000000140421187: cmp     rax, [rsp+978h+var_6C0]
 * 000000014042118F: jnb     loc_140421241
 * 0000000140421195: lea     rcx, [r12-18h]
 * 000000014042119A: inc     edx
 * 000000014042119C: mov     [rsp+978h+var_6D0], edx
 * 00000001404211A3: call    CcHasVolumeTelemetryChanged
 * 00000001404211A8: test    al, al
 * 00000001404211AA: jnz     short loc_1404211BC
 * 00000001404211AC: test    r14b, r14b
 * 00000001404211AF: jz      short loc_1404211BA
 * 00000001404211B1: call    CcHasVolumeCumulativeTelemetryChanged
 * 00000001404211B6: test    al, al
 * 00000001404211B8: jnz     short loc_1404211BC
 * 00000001404211BA: jmp     short loc_140421175
 * 00000001404211BC: lea     r14, [rcx+0E8h]
 * 00000001404211C3: mov     rcx, r14
 * 00000001404211C6: call    CcAggregateCumulativeVolumeTelemetry
 * 00000001404211CB: mov     eax, r13d
 * 00000001404211CE: imul    rcx, rax, 9B0h
 * 00000001404211D5: add     rcx, r15; void *
 * 00000001404211D8: mov     rdx, r14; Src
 * 00000001404211DB: mov     r8d, 9B0h; Size
 * 00000001404211E1: call    memmove
 * 00000001404211E6: lea     rcx, [r12+0E0h]; void *
 * 00000001404211EE: mov     r13d, 4D0h
 * 00000001404211F4: mov     r8d, r13d; Size
 * 00000001404211F7: xor     edx, edx; Val
 * 00000001404211F9: call    memset_0
 * 00000001404211FE: mov     r14b, [rsp+978h+var_708]
 * 0000000140421206: test    r14b, r14b
 * 0000000140421209: jz      short loc_14042121D
 * 000000014042120B: lea     rcx, [r12+5B0h]; void *
 * 0000000140421213: mov     r8d, r13d; Size
 * 0000000140421216: xor     edx, edx; Val
 * 0000000140421218: call    memset_0
 * 000000014042121D: mov     r12, [r12]
 * 0000000140421221: mov     [rsp+978h+var_580], r12
 * 0000000140421229: mov     r13d, [rsp+978h+var_6D4]
 * 0000000140421231: inc     r13d
 * 0000000140421234: mov     [rsp+978h+var_6D4], r13d
 * 000000014042123C: jmp     loc_14042116E
 * 0000000140421241: call    KeRcuReadUnlock
 * 0000000140421246: call    CcAggregateCumulativeGlobalTelemetry
 * 000000014042124B: mov     ecx, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 0000000140421251: mov     r12, 6666666666666667h
 * 000000014042125B: test    cl, 1
 * 000000014042125E: jz      loc_140421358
 * 0000000140421264: mov     rax, r12
 * 0000000140421267: imul    rbx
 * 000000014042126A: sar     rdx, 2
 * 000000014042126E: mov     r9, rdx
 * 0000000140421271: shr     r9, 3Fh
 * 0000000140421275: add     r9, rdx
 * 0000000140421278: mov     rax, cs:qword_140F8DD80
 * 000000014042127F: mov     [rsp+978h+var_8D8], rax
 * 0000000140421287: mov     rax, cs:qword_140F8DD78
 * 000000014042128E: mov     [rsp+978h+var_8E0], rax
 * 0000000140421296: mov     rax, cs:qword_140F8DD70
 * 000000014042129D: mov     [rsp+978h+var_8E8], rax
 * 00000001404212A5: mov     rax, cs:qword_140F8DD68
 * 00000001404212AC: mov     [rsp+978h+var_8F0], rax
 * 00000001404212B4: mov     rax, cs:qword_140F8DD60
 * 00000001404212BB: mov     [rsp+978h+var_8F8], rax
 * 00000001404212C3: mov     rax, cs:qword_140F8DDD0
 * 00000001404212CA: mov     [rsp+978h+var_900], rax
 * 00000001404212CF: mov     rax, cs:qword_140F8DDC8
 * 00000001404212D6: mov     [rsp+978h+var_908], rax
 * 00000001404212DB: mov     rax, cs:qword_140F8DDC0
 * 00000001404212E2: mov     [rsp+978h+var_910], rax
 * 00000001404212E7: mov     rax, cs:qword_140F8DDB8
 * 00000001404212EE: mov     [rsp+978h+var_918], rax
 * 00000001404212F3: mov     rax, cs:qword_140F8DDB0
 * 00000001404212FA: mov     [rsp+978h+var_920], rax
 * 00000001404212FF: mov     rax, cs:qword_140F8DDA8
 * 0000000140421306: mov     [rsp+978h+var_928], rax
 * 000000014042130B: mov     rax, cs:qword_140F8DDA0
 * 0000000140421312: mov     [rsp+978h+var_930], rax
 * 0000000140421317: mov     rax, cs:qword_140F8DD98
 * 000000014042131E: mov     [rsp+978h+var_938], rax
 * 0000000140421323: mov     rax, cs:qword_140F8DD90
 * 000000014042132A: mov     [rsp+978h+var_940], rax
 * 000000014042132F: mov     rax, cs:qword_140F8DD88
 * 0000000140421336: mov     [rsp+978h+var_948], rax
 * 000000014042133B: mov     rax, cs:qword_140F8DD58
 * 0000000140421342: mov     [rsp+978h+var_950], rax
 * 0000000140421347: mov     rax, cs:qword_140F8DD50
 * 000000014042134E: mov     [rsp+978h+var_958], rax
 * 0000000140421353: call    McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer
 * 0000000140421358: call    CcResetGlobalTelemetry
 * 000000014042135D: xor     r11d, r11d
 * 0000000140421360: test    r14b, r14b
 * 0000000140421363: jz      loc_140421792
 * 0000000140421369: lea     r8d, [r11+5]
 * 000000014042136D: cmp     cs:dword_140E06BF8, r8d
 * 0000000140421374: jbe     loc_14042170C
 * 000000014042137A: mov     rdx, 400000000000h
 * 0000000140421384: lea     rcx, dword_140E06BF8
 * 000000014042138B: call    _tlgKeywordOn
 * 0000000140421390: test    al, al
 * 0000000140421392: jz      loc_14042170C
 * 0000000140421398: mov     [rsp+978h+var_6C0], 1000000h
 * 00000001404213A4: lea     rax, [rsp+978h+var_6C0]
 * 00000001404213AC: mov     [rsp+978h+var_418], rax
 * 00000001404213B4: lea     r15d, [r11+8]
 * 00000001404213B8: mov     [rsp+978h+var_410], r15
 * 00000001404213C0: mov     [rsp+978h+var_704], r8w
 * 00000001404213C9: lea     rax, [rsp+978h+var_704]
 * 00000001404213D1: mov     [rsp+978h+var_408], rax
 * 00000001404213D9: mov     [rsp+978h+var_400], 2
 * 00000001404213E5: mov     rax, r12
 * 00000001404213E8: imul    rdi
 * 00000001404213EB: sar     rdx, 2
 * 00000001404213EF: mov     rax, rdx
 * 00000001404213F2: shr     rax, 3Fh
 * 00000001404213F6: add     rdx, rax
 * 00000001404213F9: mov     [rsp+978h+var_6C8], rdx
 * 0000000140421401: lea     rax, [rsp+978h+var_6C8]
 * 0000000140421409: mov     [rsp+978h+var_3F8], rax
 * 0000000140421411: mov     [rsp+978h+var_3F0], r15
 * 0000000140421419: mov     eax, cs:CcNumberNumaNodes
 * 000000014042141F: mov     [rsp+978h+var_700], eax
 * 0000000140421426: lea     rax, [rsp+978h+var_700]
 * 000000014042142E: mov     [rsp+978h+var_3E8], rax
 * 0000000140421436: mov     [rsp+978h+var_3E0], 4
 * 0000000140421442: mov     rax, cs:qword_140F8DDD8
 * 0000000140421449: mov     [rsp+978h+var_6A8], rax
 * 0000000140421451: lea     rax, [rsp+978h+var_6A8]
 * 0000000140421459: mov     [rsp+978h+var_3D8], rax
 * 0000000140421461: mov     [rsp+978h+var_3D0], r15
 * 0000000140421469: mov     rax, cs:qword_140F8DDE0
 * 0000000140421470: mov     [rsp+978h+var_6A0], rax
 * 0000000140421478: lea     rax, [rsp+978h+var_6A0]
 * 0000000140421480: mov     [rsp+978h+var_3C8], rax
 * 0000000140421488: mov     [rsp+978h+var_3C0], r15
 * 0000000140421490: mov     rax, cs:qword_140F8DE10
 * 0000000140421497: mov     [rsp+978h+var_698], rax
 * 000000014042149F: lea     rax, [rsp+978h+var_698]
 * 00000001404214A7: mov     [rsp+978h+var_3B8], rax
 * 00000001404214AF: mov     [rsp+978h+var_3B0], r15
 * 00000001404214B7: mov     rax, cs:qword_140F8DE18
 * 00000001404214BE: mov     [rsp+978h+var_690], rax
 * 00000001404214C6: lea     rax, [rsp+978h+var_690]
 * 00000001404214CE: mov     [rsp+978h+var_3A8], rax
 * 00000001404214D6: mov     [rsp+978h+var_3A0], r15
 * 00000001404214DE: mov     rax, cs:qword_140F8DE20
 * 00000001404214E5: mov     [rsp+978h+var_688], rax
 * 00000001404214ED: lea     rax, [rsp+978h+var_688]
 * 00000001404214F5: mov     [rsp+978h+var_398], rax
 * 00000001404214FD: mov     [rsp+978h+var_390], r15
 * 0000000140421505: mov     rax, cs:qword_140F8DE28
 * 000000014042150C: mov     [rsp+978h+var_680], rax
 * 0000000140421514: lea     rax, [rsp+978h+var_680]
 * 000000014042151C: mov     [rsp+978h+var_388], rax
 * 0000000140421524: mov     [rsp+978h+var_380], r15
 * 000000014042152C: mov     rax, cs:qword_140F8DE30
 * 0000000140421533: mov     [rsp+978h+var_678], rax
 * 000000014042153B: lea     rax, [rsp+978h+var_678]
 * 0000000140421543: mov     [rsp+978h+var_378], rax
 * 000000014042154B: mov     [rsp+978h+var_370], r15
 * 0000000140421553: mov     rax, cs:qword_140F8DE38
 * 000000014042155A: mov     [rsp+978h+var_670], rax
 * 0000000140421562: lea     rax, [rsp+978h+var_670]
 * 000000014042156A: mov     [rsp+978h+var_368], rax
 * 0000000140421572: mov     [rsp+978h+var_360], r15
 * 000000014042157A: mov     rax, cs:qword_140F8DE40
 * 0000000140421581: mov     [rsp+978h+var_668], rax
 * 0000000140421589: lea     rax, [rsp+978h+var_668]
 * 0000000140421591: mov     [rsp+978h+var_358], rax
 * 0000000140421599: mov     [rsp+978h+var_350], r15
 * 00000001404215A1: mov     rax, cs:qword_140F8DE48
 * 00000001404215A8: mov     [rsp+978h+var_660], rax
 * 00000001404215B0: lea     rax, [rsp+978h+var_660]
 * 00000001404215B8: mov     [rsp+978h+var_348], rax
 * 00000001404215C0: mov     [rsp+978h+var_340], r15
 * 00000001404215C8: mov     rax, cs:qword_140F8DE50
 * 00000001404215CF: mov     [rsp+978h+var_658], rax
 * 00000001404215D7: lea     rax, [rsp+978h+var_658]
 * 00000001404215DF: mov     [rsp+978h+var_338], rax
 * 00000001404215E7: mov     [rsp+978h+var_330], r15
 * 00000001404215EF: mov     rax, cs:qword_140F8DE58
 * 00000001404215F6: mov     [rsp+978h+var_650], rax
 * 00000001404215FE: lea     rax, [rsp+978h+var_650]
 * 0000000140421606: mov     [rsp+978h+var_328], rax
 * 000000014042160E: mov     [rsp+978h+var_320], r15
 * 0000000140421616: mov     rax, cs:qword_140F8DDE8
 * 000000014042161D: mov     [rsp+978h+var_648], rax
 * 0000000140421625: lea     rax, [rsp+978h+var_648]
 * 000000014042162D: mov     [rsp+978h+var_318], rax
 * 0000000140421635: mov     [rsp+978h+var_310], r15
 * 000000014042163D: mov     rax, cs:qword_140F8DDF0
 * 0000000140421644: mov     [rsp+978h+var_640], rax
 * 000000014042164C: lea     rax, [rsp+978h+var_640]
 * 0000000140421654: mov     [rsp+978h+var_308], rax
 * 000000014042165C: mov     [rsp+978h+var_300], r15
 * 0000000140421664: mov     rax, cs:qword_140F8DDF8
 * 000000014042166B: mov     [rsp+978h+var_638], rax
 * 0000000140421673: lea     rax, [rsp+978h+var_638]
 * 000000014042167B: mov     [rsp+978h+var_2F8], rax
 * 0000000140421683: mov     [rsp+978h+var_2F0], r15
 * 000000014042168B: mov     rax, cs:qword_140F8DE00
 * 0000000140421692: mov     [rsp+978h+var_630], rax
 * 000000014042169A: lea     rax, [rsp+978h+var_630]
 * 00000001404216A2: mov     [rsp+978h+var_2E8], rax
 * 00000001404216AA: mov     [rsp+978h+var_2E0], r15
 * 00000001404216B2: mov     rax, cs:qword_140F8DE08
 * 00000001404216B9: mov     [rsp+978h+var_6B0], rax
 * 00000001404216C1: lea     rax, [rsp+978h+var_6B0]
 * 00000001404216C9: mov     [rsp+978h+var_2D8], rax
 * 00000001404216D1: mov     [rsp+978h+var_2D0], r15
 * 00000001404216D9: lea     rax, [rsp+978h+var_438]
 * 00000001404216E1: mov     [rsp+978h+var_950], rax
 * 00000001404216E6: mov     dword ptr [rsp+978h+var_958], 17h
 * 00000001404216EE: xor     r9d, r9d
 * 00000001404216F1: xor     r8d, r8d
 * 00000001404216F4: lea     rdx, word_140043052
 * 00000001404216FB: lea     rcx, dword_140E06BF8
 * 0000000140421702: call    _tlgWriteTransfer_EtwWriteTransfer
 * 0000000140421707: xor     r11d, r11d
 * 000000014042170A: jmp     short loc_140421712
 * 000000014042170C: mov     r15d, 8
 * 0000000140421712: mov     cs:qword_140F8DDD8, r11
 * 0000000140421719: mov     cs:qword_140F8DDE0, r11
 * 0000000140421720: mov     cs:qword_140F8DDE8, r11
 * 0000000140421727: mov     cs:qword_140F8DDF0, r11
 * 000000014042172E: mov     cs:qword_140F8DDF8, r11
 * 0000000140421735: mov     cs:qword_140F8DE00, r11
 * 000000014042173C: mov     cs:qword_140F8DE08, r11
 * 0000000140421743: mov     cs:qword_140F8DE10, r11
 * 000000014042174A: mov     cs:qword_140F8DE18, r11
 * 0000000140421751: mov     cs:qword_140F8DE20, r11
 * 0000000140421758: mov     cs:qword_140F8DE28, r11
 * 000000014042175F: mov     cs:qword_140F8DE30, r11
 * 0000000140421766: mov     cs:qword_140F8DE38, r11
 * 000000014042176D: mov     cs:qword_140F8DE40, r11
 * 0000000140421774: mov     cs:qword_140F8DE48, r11
 * 000000014042177B: mov     cs:qword_140F8DE50, r11
 * 0000000140421782: mov     cs:qword_140F8DE58, r11
 * 0000000140421789: mov     cs:qword_140F8DD18, rsi
 * 0000000140421790: jmp     short loc_140421798
 * 0000000140421792: mov     r15d, 8
 * 0000000140421798: mov     eax, r13d
 * 000000014042179B: mov     [rsp+978h+var_440], rax
 * 00000001404217A3: mov     [rsp+978h+var_700], r11d
 * 00000001404217AB: mov     r14, [rsp+978h+P]
 * 00000001404217B3: test    r13d, r13d
 * 00000001404217B6: jz      loc_1404230F2
 * 00000001404217BC: mov     r13, r11
 * 00000001404217BF: mov     [rsp+978h+var_6C8], r11
 * 00000001404217C7: imul    rdi, r13, 9B0h
 * 00000001404217CE: add     rdi, r14
 * 00000001404217D1: mov     r8, [rdi+70h]
 * 00000001404217D5: test    r8, r8
 * 00000001404217D8: jz      short loc_1404217EF
 * 00000001404217DA: mov     rax, r8
 * 00000001404217DD: sub     rax, [rdi+78h]
 * 00000001404217E1: imul    rax, 64h ; 'd'
 * 00000001404217E5: xor     edx, edx
 * 00000001404217E7: div     r8
 * 00000001404217EA: mov     r9, rax
 * 00000001404217ED: jmp     short loc_1404217F2
 * 00000001404217EF: mov     r9, r11
 * 00000001404217F2: mov     [rsp+978h+var_6C0], r9
 * 00000001404217FA: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 0000000140421800: test    al, 1
 * 0000000140421802: jz      loc_1404219E0
 * 0000000140421808: mov     rax, r12
 * 000000014042180B: imul    rbx
 * 000000014042180E: sar     rdx, 2
 * 0000000140421812: mov     rax, rdx
 * 0000000140421815: shr     rax, 3Fh
 * 0000000140421819: add     rdx, rax
 * 000000014042181C: mov     rax, [rdi+418h]
 * 0000000140421823: mov     [rsp+978h+var_840], rax
 * 000000014042182B: mov     rax, [rdi+410h]
 * 0000000140421832: mov     [rsp+978h+var_848], rax
 * 000000014042183A: mov     rax, [rdi+288h]
 * 0000000140421841: mov     [rsp+978h+var_850], rax
 * 0000000140421849: mov     rax, [rdi+280h]
 * 0000000140421850: mov     [rsp+978h+var_858], rax
 * 0000000140421858: mov     rax, [rdi+278h]
 * 000000014042185F: mov     [rsp+978h+var_860], rax
 * 0000000140421867: mov     rax, [rdi+270h]
 * 000000014042186E: mov     [rsp+978h+var_868], rax
 * 0000000140421876: mov     rax, [rdi+268h]
 * 000000014042187D: mov     [rsp+978h+var_870], rax
 * 0000000140421885: mov     rax, [rdi+0E0h]
 * 000000014042188C: mov     [rsp+978h+var_878], rax
 * 0000000140421894: mov     rax, [rdi+0D8h]
 * 000000014042189B: mov     [rsp+978h+var_880], rax
 * 00000001404218A3: mov     rax, [rdi+98h]
 * 00000001404218AA: mov     [rsp+978h+var_888], rax
 * 00000001404218B2: mov     rax, [rdi+90h]
 * 00000001404218B9: mov     [rsp+978h+var_890], rax
 * 00000001404218C1: mov     rax, [rdi+88h]
 * 00000001404218C8: mov     [rsp+978h+var_898], rax
 * 00000001404218D0: mov     rax, [rdi+0B0h]
 * 00000001404218D7: mov     [rsp+978h+var_8A0], rax
 * 00000001404218DF: mov     rax, [rdi+0A8h]
 * 00000001404218E6: mov     [rsp+978h+var_8A8], rax
 * 00000001404218EE: mov     rax, [rdi+0A0h]
 * 00000001404218F5: mov     [rsp+978h+var_8B0], rax
 * 00000001404218FD: mov     [rsp+978h+var_8B8], r9
 * 0000000140421905: mov     rax, [rdi+80h]
 * 000000014042190C: mov     [rsp+978h+var_8C0], rax
 * 0000000140421914: mov     rax, [rdi+78h]
 * 0000000140421918: mov     [rsp+978h+var_8C8], rax
 * 0000000140421920: mov     [rsp+978h+var_8D0], r8
 * 0000000140421928: mov     rax, [rdi+68h]
 * 000000014042192C: mov     [rsp+978h+var_8D8], rax
 * 0000000140421934: mov     rax, [rdi+60h]
 * 0000000140421938: mov     [rsp+978h+var_8E0], rax
 * 0000000140421940: mov     rax, [rdi+58h]
 * 0000000140421944: mov     [rsp+978h+var_8E8], rax
 * 000000014042194C: mov     rax, [rdi+50h]
 * 0000000140421950: mov     [rsp+978h+var_8F0], rax
 * 0000000140421958: mov     rax, [rdi+48h]
 * 000000014042195C: mov     [rsp+978h+var_8F8], rax
 * 0000000140421964: mov     rax, [rdi+40h]
 * 0000000140421968: mov     [rsp+978h+var_900], rax
 * 000000014042196D: mov     rax, [rdi+0D0h]
 * 0000000140421974: mov     [rsp+978h+var_908], rax
 * 0000000140421979: mov     rax, [rdi+0C8h]
 * 0000000140421980: mov     [rsp+978h+var_910], rax
 * 0000000140421985: mov     rax, [rdi+0C0h]
 * 000000014042198C: mov     [rsp+978h+var_918], rax
 * 0000000140421991: mov     rax, [rdi+0B8h]
 * 0000000140421998: mov     [rsp+978h+var_920], rax
 * 000000014042199D: mov     rax, [rdi+38h]
 * 00000001404219A1: mov     [rsp+978h+var_928], rax
 * 00000001404219A6: mov     rax, [rdi+30h]
 * 00000001404219AA: mov     [rsp+978h+var_930], rax
 * 00000001404219AF: mov     rax, [rdi+28h]
 * 00000001404219B3: mov     [rsp+978h+var_938], rax
 * 00000001404219B8: mov     rax, [rdi+20h]
 * 00000001404219BC: mov     [rsp+978h+var_940], rax
 * 00000001404219C1: mov     rax, [rdi+18h]
 * 00000001404219C5: mov     [rsp+978h+var_948], rax
 * 00000001404219CA: mov     rax, [rdi+10h]
 * 00000001404219CE: mov     [rsp+978h+var_950], rax
 * 00000001404219D3: mov     [rsp+978h+var_958], rdx
 * 00000001404219D8: mov     r9, rdi
 * 00000001404219DB: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001404219E0: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 00000001404219E6: test    al, 1
 * 00000001404219E8: jz      loc_140421E26
 * 00000001404219EE: mov     rax, r12
 * 00000001404219F1: imul    rbx
 * 00000001404219F4: sar     rdx, 2
 * 00000001404219F8: mov     rax, rdx
 * 00000001404219FB: shr     rax, 3Fh
 * 00000001404219FF: add     rdx, rax
 * 0000000140421A02: mov     rax, [rdi+4D8h]
 * 0000000140421A09: mov     [rsp+978h+var_718], rax
 * 0000000140421A11: mov     rax, [rdi+4D0h]
 * 0000000140421A18: mov     [rsp+978h+var_720], rax
 * 0000000140421A20: mov     rax, [rdi+4C8h]
 * 0000000140421A27: mov     [rsp+978h+var_728], rax
 * 0000000140421A2F: mov     rax, [rdi+4C0h]
 * 0000000140421A36: mov     [rsp+978h+var_730], rax
 * 0000000140421A3E: mov     rax, [rdi+4B8h]
 * 0000000140421A45: mov     [rsp+978h+var_738], rax
 * 0000000140421A4D: mov     rax, [rdi+4B0h]
 * 0000000140421A54: mov     [rsp+978h+var_740], rax
 * 0000000140421A5C: mov     rax, [rdi+4A8h]
 * 0000000140421A63: mov     [rsp+978h+var_748], rax
 * 0000000140421A6B: mov     rax, [rdi+4A0h]
 * 0000000140421A72: mov     [rsp+978h+var_750], rax
 * 0000000140421A7A: mov     rax, [rdi+498h]
 * 0000000140421A81: mov     [rsp+978h+var_758], rax
 * 0000000140421A89: mov     rax, [rdi+490h]
 * 0000000140421A90: mov     [rsp+978h+var_760], rax
 * 0000000140421A98: mov     rax, [rdi+488h]
 * 0000000140421A9F: mov     [rsp+978h+var_768], rax
 * 0000000140421AA7: mov     rax, [rdi+480h]
 * 0000000140421AAE: mov     [rsp+978h+var_770], rax
 * 0000000140421AB6: mov     rax, [rdi+478h]
 * 0000000140421ABD: mov     [rsp+978h+var_778], rax
 * 0000000140421AC5: mov     rax, [rdi+470h]
 * 0000000140421ACC: mov     [rsp+978h+var_780], rax
 * 0000000140421AD4: mov     rax, [rdi+468h]
 * 0000000140421ADB: mov     [rsp+978h+var_788], rax
 * 0000000140421AE3: mov     rax, [rdi+460h]
 * 0000000140421AEA: mov     [rsp+978h+var_790], rax
 * 0000000140421AF2: mov     rax, [rdi+458h]
 * 0000000140421AF9: mov     [rsp+978h+var_798], rax
 * 0000000140421B01: mov     rax, [rdi+450h]
 * 0000000140421B08: mov     [rsp+978h+var_7A0], rax
 * 0000000140421B10: mov     rax, [rdi+448h]
 * 0000000140421B17: mov     [rsp+978h+var_7A8], rax
 * 0000000140421B1F: mov     rax, [rdi+440h]
 * 0000000140421B26: mov     [rsp+978h+var_7B0], rax
 * 0000000140421B2E: mov     rax, [rdi+438h]
 * 0000000140421B35: mov     [rsp+978h+var_7B8], rax
 * 0000000140421B3D: mov     rax, [rdi+430h]
 * 0000000140421B44: mov     [rsp+978h+var_7C0], rax
 * 0000000140421B4C: mov     rax, [rdi+428h]
 * 0000000140421B53: mov     [rsp+978h+var_7C8], rax
 * 0000000140421B5B: mov     rax, [rdi+420h]
 * 0000000140421B62: mov     [rsp+978h+var_7D0], rax
 * 0000000140421B6A: mov     rax, [rdi+260h]
 * 0000000140421B71: mov     [rsp+978h+var_7D8], rax
 * 0000000140421B79: mov     rax, [rdi+258h]
 * 0000000140421B80: mov     [rsp+978h+var_7E0], rax
 * 0000000140421B88: mov     rax, [rdi+250h]
 * 0000000140421B8F: mov     [rsp+978h+var_7E8], rax
 * 0000000140421B97: mov     rax, [rdi+248h]
 * 0000000140421B9E: mov     [rsp+978h+var_7F0], rax
 * 0000000140421BA6: mov     rax, [rdi+240h]
 * 0000000140421BAD: mov     [rsp+978h+var_7F8], rax
 * 0000000140421BB5: mov     rax, [rdi+238h]
 * 0000000140421BBC: mov     [rsp+978h+var_800], rax
 * 0000000140421BC4: mov     rax, [rdi+230h]
 * 0000000140421BCB: mov     [rsp+978h+var_808], rax
 * 0000000140421BD3: mov     rax, [rdi+228h]
 * 0000000140421BDA: mov     [rsp+978h+var_810], rax
 * 0000000140421BE2: mov     rax, [rdi+220h]
 * 0000000140421BE9: mov     [rsp+978h+var_818], rax
 * 0000000140421BF1: mov     rax, [rdi+218h]
 * 0000000140421BF8: mov     [rsp+978h+var_820], rax
 * 0000000140421C00: mov     rax, [rdi+210h]
 * 0000000140421C07: mov     [rsp+978h+var_828], rax
 * 0000000140421C0F: mov     rax, [rdi+208h]
 * 0000000140421C16: mov     [rsp+978h+var_830], rax
 * 0000000140421C1E: mov     rax, [rdi+200h]
 * 0000000140421C25: mov     [rsp+978h+var_838], rax
 * 0000000140421C2D: mov     rax, [rdi+1F8h]
 * 0000000140421C34: mov     [rsp+978h+var_840], rax
 * 0000000140421C3C: mov     rax, [rdi+1F0h]
 * 0000000140421C43: mov     [rsp+978h+var_848], rax
 * 0000000140421C4B: mov     rax, [rdi+1E8h]
 * 0000000140421C52: mov     [rsp+978h+var_850], rax
 * 0000000140421C5A: mov     rax, [rdi+1E0h]
 * 0000000140421C61: mov     [rsp+978h+var_858], rax
 * 0000000140421C69: mov     rax, [rdi+1D8h]
 * 0000000140421C70: mov     [rsp+978h+var_860], rax
 * 0000000140421C78: mov     rax, [rdi+1D0h]
 * 0000000140421C7F: mov     [rsp+978h+var_868], rax
 * 0000000140421C87: mov     rax, [rdi+1C8h]
 * 0000000140421C8E: mov     [rsp+978h+var_870], rax
 * 0000000140421C96: mov     rax, [rdi+1C0h]
 * 0000000140421C9D: mov     [rsp+978h+var_878], rax
 * 0000000140421CA5: mov     rax, [rdi+1B8h]
 * 0000000140421CAC: mov     [rsp+978h+var_880], rax
 * 0000000140421CB4: mov     rax, [rdi+1B0h]
 * 0000000140421CBB: mov     [rsp+978h+var_888], rax
 * 0000000140421CC3: mov     rax, [rdi+1A8h]
 * 0000000140421CCA: mov     [rsp+978h+var_890], rax
 * 0000000140421CD2: mov     rax, [rdi+1A0h]
 * 0000000140421CD9: mov     [rsp+978h+var_898], rax
 * 0000000140421CE1: mov     rax, [rdi+198h]
 * 0000000140421CE8: mov     [rsp+978h+var_8A0], rax
 * 0000000140421CF0: mov     rax, [rdi+190h]
 * 0000000140421CF7: mov     [rsp+978h+var_8A8], rax
 * 0000000140421CFF: mov     rax, [rdi+188h]
 * 0000000140421D06: mov     [rsp+978h+var_8B0], rax
 * 0000000140421D0E: mov     rax, [rdi+180h]
 * 0000000140421D15: mov     [rsp+978h+var_8B8], rax
 * 0000000140421D1D: mov     rax, [rdi+178h]
 * 0000000140421D24: mov     [rsp+978h+var_8C0], rax
 * 0000000140421D2C: mov     rax, [rdi+170h]
 * 0000000140421D33: mov     [rsp+978h+var_8C8], rax
 * 0000000140421D3B: mov     rax, [rdi+168h]
 * 0000000140421D42: mov     [rsp+978h+var_8D0], rax
 * 0000000140421D4A: mov     rax, [rdi+160h]
 * 0000000140421D51: mov     [rsp+978h+var_8D8], rax
 * 0000000140421D59: mov     rax, [rdi+158h]
 * 0000000140421D60: mov     [rsp+978h+var_8E0], rax
 * 0000000140421D68: mov     rax, [rdi+150h]
 * 0000000140421D6F: mov     [rsp+978h+var_8E8], rax
 * 0000000140421D77: mov     rax, [rdi+148h]
 * 0000000140421D7E: mov     [rsp+978h+var_8F0], rax
 * 0000000140421D86: mov     rax, [rdi+140h]
 * 0000000140421D8D: mov     [rsp+978h+var_8F8], rax
 * 0000000140421D95: mov     rax, [rdi+138h]
 * 0000000140421D9C: mov     [rsp+978h+var_900], rax
 * 0000000140421DA1: mov     rax, [rdi+130h]
 * 0000000140421DA8: mov     [rsp+978h+var_908], rax
 * 0000000140421DAD: mov     rax, [rdi+128h]
 * 0000000140421DB4: mov     [rsp+978h+var_910], rax
 * 0000000140421DB9: mov     rax, [rdi+120h]
 * 0000000140421DC0: mov     [rsp+978h+var_918], rax
 * 0000000140421DC5: mov     rax, [rdi+118h]
 * 0000000140421DCC: mov     [rsp+978h+var_920], rax
 * 0000000140421DD1: mov     rax, [rdi+110h]
 * 0000000140421DD8: mov     [rsp+978h+var_928], rax
 * 0000000140421DDD: mov     rax, [rdi+108h]
 * 0000000140421DE4: mov     [rsp+978h+var_930], rax
 * 0000000140421DE9: mov     rax, [rdi+100h]
 * 0000000140421DF0: mov     [rsp+978h+var_938], rax
 * 0000000140421DF5: mov     rax, [rdi+0F8h]
 * 0000000140421DFC: mov     [rsp+978h+var_940], rax
 * 0000000140421E01: mov     rax, [rdi+0F0h]
 * 0000000140421E08: mov     [rsp+978h+var_948], rax
 * 0000000140421E0D: mov     rax, [rdi+0E8h]
 * 0000000140421E14: mov     [rsp+978h+var_950], rax
 * 0000000140421E19: mov     [rsp+978h+var_958], rdx
 * 0000000140421E1E: mov     r9, rdi
 * 0000000140421E21: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 0000000140421E26: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 0000000140421E2C: test    al, 1
 * 0000000140421E2E: jz      loc_140422533
 * 0000000140421E34: imul    rcx, r13, 9B0h
 * 0000000140421E3B: imul    r8, r13, 9B0h
 * 0000000140421E42: imul    r9, r13, 9B0h
 * 0000000140421E49: imul    r10, r13, 9B0h
 * 0000000140421E50: imul    r11, r13, 9B0h
 * 0000000140421E57: imul    rdi, r13, 9B0h
 * 0000000140421E5E: imul    r14, r13, 9B0h
 * 0000000140421E65: imul    r15, r13, 9B0h
 * 0000000140421E6C: imul    r12, r13, 9B0h
 * 0000000140421E73: imul    r13, 9B0h
 * 0000000140421E7A: mov     rdx, [rsp+978h+var_6C8]
 * 0000000140421E82: imul    rax, rdx, 9B0h
 * 0000000140421E89: mov     [rsp+978h+var_6B0], rax
 * 0000000140421E91: imul    rax, rdx, 9B0h
 * 0000000140421E98: mov     [rsp+978h+var_630], rax
 * 0000000140421EA0: imul    rax, rdx, 9B0h
 * 0000000140421EA7: mov     [rsp+978h+var_638], rax
 * 0000000140421EAF: imul    rax, rdx, 9B0h
 * 0000000140421EB6: mov     [rsp+978h+var_640], rax
 * 0000000140421EBE: imul    rax, rdx, 9B0h
 * 0000000140421EC5: mov     [rsp+978h+var_648], rax
 * 0000000140421ECD: imul    rax, rdx, 9B0h
 * 0000000140421ED4: mov     [rsp+978h+var_650], rax
 * 0000000140421EDC: imul    rax, rdx, 9B0h
 * 0000000140421EE3: mov     [rsp+978h+var_658], rax
 * 0000000140421EEB: imul    rax, rdx, 9B0h
 * 0000000140421EF2: mov     [rsp+978h+var_660], rax
 * 0000000140421EFA: imul    rax, rdx, 9B0h
 * 0000000140421F01: mov     [rsp+978h+var_668], rax
 * 0000000140421F09: imul    rax, rdx, 9B0h
 * 0000000140421F10: mov     [rsp+978h+var_670], rax
 * 0000000140421F18: imul    rax, rdx, 9B0h
 * 0000000140421F1F: mov     [rsp+978h+var_678], rax
 * 0000000140421F27: imul    rax, rdx, 9B0h
 * 0000000140421F2E: mov     [rsp+978h+var_680], rax
 * 0000000140421F36: imul    rax, rdx, 9B0h
 * 0000000140421F3D: mov     [rsp+978h+var_688], rax
 * 0000000140421F45: imul    rax, rdx, 9B0h
 * 0000000140421F4C: mov     [rsp+978h+var_690], rax
 * 0000000140421F54: imul    rax, rdx, 9B0h
 * 0000000140421F5B: mov     [rsp+978h+var_698], rax
 * 0000000140421F63: imul    rax, rdx, 9B0h
 * 0000000140421F6A: mov     [rsp+978h+var_6A0], rax
 * 0000000140421F72: imul    rax, rdx, 9B0h
 * 0000000140421F79: mov     [rsp+978h+var_6A8], rax
 * 0000000140421F81: imul    rax, rdx, 9B0h
 * 0000000140421F88: mov     [rsp+978h+var_578], rax
 * 0000000140421F90: imul    rax, rdx, 9B0h
 * 0000000140421F97: mov     [rsp+978h+var_618], rax
 * 0000000140421F9F: imul    rax, rdx, 9B0h
 * 0000000140421FA6: mov     [rsp+978h+var_610], rax
 * 0000000140421FAE: imul    rax, rdx, 9B0h
 * 0000000140421FB5: mov     [rsp+978h+var_608], rax
 * 0000000140421FBD: imul    rax, rdx, 9B0h
 * 0000000140421FC4: mov     [rsp+978h+var_600], rax
 * 0000000140421FCC: imul    rax, rdx, 9B0h
 * 0000000140421FD3: mov     [rsp+978h+var_5F8], rax
 * 0000000140421FDB: imul    rax, rdx, 9B0h
 * 0000000140421FE2: mov     [rsp+978h+var_5F0], rax
 * 0000000140421FEA: imul    rax, rdx, 9B0h
 * 0000000140421FF1: mov     [rsp+978h+var_5E8], rax
 * 0000000140421FF9: imul    rax, rdx, 9B0h
 * 0000000140422000: mov     [rsp+978h+var_5E0], rax
 * 0000000140422008: imul    rax, rdx, 9B0h
 * 000000014042200F: mov     [rsp+978h+var_5D8], rax
 * 0000000140422017: imul    rax, rdx, 9B0h
 * 000000014042201E: mov     [rsp+978h+var_5D0], rax
 * 0000000140422026: imul    rax, rdx, 9B0h
 * 000000014042202D: mov     [rsp+978h+var_5C8], rax
 * 0000000140422035: imul    rax, rdx, 9B0h
 * 000000014042203C: mov     [rsp+978h+var_5C0], rax
 * 0000000140422044: imul    rax, rdx, 9B0h
 * 000000014042204B: mov     [rsp+978h+var_5B8], rax
 * 0000000140422053: imul    rax, rdx, 9B0h
 * 000000014042205A: mov     [rsp+978h+var_5B0], rax
 * 0000000140422062: imul    rax, rdx, 9B0h
 * 0000000140422069: mov     [rsp+978h+var_5A8], rax
 * 0000000140422071: imul    rax, rdx, 9B0h
 * 0000000140422078: mov     [rsp+978h+var_5A0], rax
 * 0000000140422080: imul    rax, rdx, 9B0h
 * 0000000140422087: mov     [rsp+978h+var_598], rax
 * 000000014042208F: imul    rax, rdx, 9B0h
 * 0000000140422096: mov     [rsp+978h+var_590], rax
 * 000000014042209E: imul    rax, rdx, 9B0h
 * 00000001404220A5: mov     [rsp+978h+var_588], rax
 * 00000001404220AD: imul    rax, rdx, 9B0h
 * 00000001404220B4: mov     [rsp+978h+var_628], rax
 * 00000001404220BC: mov     rax, 6666666666666667h
 * 00000001404220C6: imul    rbx
 * 00000001404220C9: sar     rdx, 2
 * 00000001404220CD: mov     rax, rdx
 * 00000001404220D0: shr     rax, 3Fh
 * 00000001404220D4: add     rdx, rax
 * 00000001404220D7: mov     [rsp+978h+var_620], rdx
 * 00000001404220DF: imul    rdx, [rsp+978h+var_6C8], 9B0h
 * 00000001404220EB: mov     rax, [rsp+978h+P]
 * 00000001404220F3: add     rdx, rax
 * 00000001404220F6: mov     rax, [rcx+rax+408h]
 * 00000001404220FE: mov     [rsp+978h+var_7D8], rax
 * 0000000140422106: mov     rcx, [rsp+978h+P]
 * 000000014042210E: mov     rax, [r8+rcx+400h]
 * 0000000140422116: mov     [rsp+978h+var_7E0], rax
 * 000000014042211E: mov     rax, [r9+rcx+3F8h]
 * 0000000140422126: mov     [rsp+978h+var_7E8], rax
 * 000000014042212E: mov     rax, [r10+rcx+3F0h]
 * 0000000140422136: mov     [rsp+978h+var_7F0], rax
 * 000000014042213E: mov     rax, [r11+rcx+3E8h]
 * 0000000140422146: mov     [rsp+978h+var_7F8], rax
 * 000000014042214E: mov     rax, [rdi+rcx+3E0h]
 * 0000000140422156: mov     [rsp+978h+var_800], rax
 * 000000014042215E: mov     rax, [r14+rcx+3D8h]
 * 0000000140422166: mov     [rsp+978h+var_808], rax
 * 000000014042216E: mov     r14, rcx
 * 0000000140422171: mov     rax, [r15+rcx+3D0h]
 * 0000000140422179: mov     [rsp+978h+var_810], rax
 * 0000000140422181: mov     rax, [r12+rcx+3C8h]
 * 0000000140422189: mov     [rsp+978h+var_818], rax
 * 0000000140422191: mov     rax, [rcx+r13+3C0h]
 * 0000000140422199: mov     [rsp+978h+var_820], rax
 * 00000001404221A1: mov     rax, [rsp+978h+var_6B0]
 * 00000001404221A9: mov     rax, [rax+rcx+3B8h]
 * 00000001404221B1: mov     [rsp+978h+var_828], rax
 * 00000001404221B9: mov     rax, [rsp+978h+var_630]
 * 00000001404221C1: mov     rax, [rax+rcx+3B0h]
 * 00000001404221C9: mov     [rsp+978h+var_830], rax
 * 00000001404221D1: mov     rax, [rsp+978h+var_638]
 * 00000001404221D9: mov     rax, [rax+rcx+3A8h]
 * 00000001404221E1: mov     [rsp+978h+var_838], rax
 * 00000001404221E9: mov     rax, [rsp+978h+var_640]
 * 00000001404221F1: mov     rax, [rax+rcx+3A0h]
 * 00000001404221F9: mov     [rsp+978h+var_840], rax
 * 0000000140422201: mov     rax, [rsp+978h+var_648]
 * 0000000140422209: mov     rax, [rax+rcx+398h]
 * 0000000140422211: mov     [rsp+978h+var_848], rax
 * 0000000140422219: mov     rax, [rsp+978h+var_650]
 * 0000000140422221: mov     rax, [rax+rcx+390h]
 * 0000000140422229: mov     [rsp+978h+var_850], rax
 * 0000000140422231: mov     rax, [rsp+978h+var_658]
 * 0000000140422239: mov     rax, [rax+rcx+388h]
 * 0000000140422241: mov     [rsp+978h+var_858], rax
 * 0000000140422249: mov     rax, [rsp+978h+var_660]
 * 0000000140422251: mov     rax, [rax+rcx+380h]
 * 0000000140422259: mov     [rsp+978h+var_860], rax
 * 0000000140422261: mov     rax, [rsp+978h+var_668]
 * 0000000140422269: mov     rax, [rax+rcx+378h]
 * 0000000140422271: mov     [rsp+978h+var_868], rax
 * 0000000140422279: mov     rax, [rsp+978h+var_670]
 * 0000000140422281: mov     rax, [rax+rcx+370h]
 * 0000000140422289: mov     [rsp+978h+var_870], rax
 * 0000000140422291: mov     rax, [rsp+978h+var_678]
 * 0000000140422299: mov     rax, [rax+rcx+368h]
 * 00000001404222A1: mov     [rsp+978h+var_878], rax
 * 00000001404222A9: mov     rax, [rsp+978h+var_680]
 * 00000001404222B1: mov     rax, [rax+rcx+360h]
 * 00000001404222B9: mov     [rsp+978h+var_880], rax
 * 00000001404222C1: mov     rax, [rsp+978h+var_688]
 * 00000001404222C9: mov     rax, [rax+rcx+358h]
 * 00000001404222D1: mov     [rsp+978h+var_888], rax
 * 00000001404222D9: mov     rax, [rsp+978h+var_690]
 * 00000001404222E1: mov     rax, [rax+rcx+350h]
 * 00000001404222E9: mov     [rsp+978h+var_890], rax
 * 00000001404222F1: mov     rax, [rsp+978h+var_698]
 * 00000001404222F9: mov     rax, [rax+rcx+348h]
 * 0000000140422301: mov     [rsp+978h+var_898], rax
 * 0000000140422309: mov     rax, [rsp+978h+var_6A0]
 * 0000000140422311: mov     rax, [rax+rcx+340h]
 * 0000000140422319: mov     [rsp+978h+var_8A0], rax
 * 0000000140422321: mov     rax, [rsp+978h+var_6A8]
 * 0000000140422329: mov     rax, [rax+rcx+338h]
 * 0000000140422331: mov     [rsp+978h+var_8A8], rax
 * 0000000140422339: mov     rax, [rsp+978h+var_578]
 * 0000000140422341: mov     rax, [rax+rcx+330h]
 * 0000000140422349: mov     [rsp+978h+var_8B0], rax
 * 0000000140422351: mov     rax, [rsp+978h+var_618]
 * 0000000140422359: mov     rax, [rax+rcx+328h]
 * 0000000140422361: mov     [rsp+978h+var_8B8], rax
 * 0000000140422369: mov     rax, [rsp+978h+var_610]
 * 0000000140422371: mov     rax, [rax+rcx+320h]
 * 0000000140422379: mov     [rsp+978h+var_8C0], rax
 * 0000000140422381: mov     rax, [rsp+978h+var_608]
 * 0000000140422389: mov     rax, [rax+rcx+318h]
 * 0000000140422391: mov     [rsp+978h+var_8C8], rax
 * 0000000140422399: mov     rax, [rsp+978h+var_600]
 * 00000001404223A1: mov     rax, [rax+rcx+310h]
 * 00000001404223A9: mov     [rsp+978h+var_8D0], rax
 * 00000001404223B1: mov     rax, [rsp+978h+var_5F8]
 * 00000001404223B9: mov     rax, [rax+rcx+308h]
 * 00000001404223C1: mov     [rsp+978h+var_8D8], rax
 * 00000001404223C9: mov     rax, [rsp+978h+var_5F0]
 * 00000001404223D1: mov     rax, [rax+rcx+300h]
 * 00000001404223D9: mov     [rsp+978h+var_8E0], rax
 * 00000001404223E1: mov     rax, [rsp+978h+var_5E8]
 * 00000001404223E9: mov     rax, [rax+rcx+2F8h]
 * 00000001404223F1: mov     [rsp+978h+var_8E8], rax
 * 00000001404223F9: mov     rax, [rsp+978h+var_5E0]
 * 0000000140422401: mov     rax, [rax+rcx+2F0h]
 * 0000000140422409: mov     [rsp+978h+var_8F0], rax
 * 0000000140422411: mov     rax, [rsp+978h+var_5D8]
 * 0000000140422419: mov     rax, [rax+rcx+2E8h]
 * 0000000140422421: mov     [rsp+978h+var_8F8], rax
 * 0000000140422429: mov     rax, [rsp+978h+var_5D0]
 * 0000000140422431: mov     rax, [rax+rcx+2E0h]
 * 0000000140422439: mov     [rsp+978h+var_900], rax
 * 000000014042243E: mov     rax, [rsp+978h+var_5C8]
 * 0000000140422446: mov     rax, [rax+rcx+2D8h]
 * 000000014042244E: mov     [rsp+978h+var_908], rax
 * 0000000140422453: mov     rax, [rsp+978h+var_5C0]
 * 000000014042245B: mov     rax, [rax+rcx+2D0h]
 * 0000000140422463: mov     [rsp+978h+var_910], rax
 * 0000000140422468: mov     rax, [rsp+978h+var_5B8]
 * 0000000140422470: mov     rax, [rax+rcx+2C8h]
 * 0000000140422478: mov     [rsp+978h+var_918], rax
 * 000000014042247D: mov     rax, [rsp+978h+var_5B0]
 * 0000000140422485: mov     rax, [rax+rcx+2C0h]
 * 000000014042248D: mov     [rsp+978h+var_920], rax
 * 0000000140422492: mov     rax, [rsp+978h+var_5A8]
 * 000000014042249A: mov     rax, [rax+rcx+2B8h]
 * 00000001404224A2: mov     [rsp+978h+var_928], rax
 * 00000001404224A7: mov     rax, [rsp+978h+var_5A0]
 * 00000001404224AF: mov     rax, [rax+rcx+2B0h]
 * 00000001404224B7: mov     [rsp+978h+var_930], rax
 * 00000001404224BC: mov     rax, [rsp+978h+var_598]
 * 00000001404224C4: mov     rax, [rax+rcx+2A8h]
 * 00000001404224CC: mov     [rsp+978h+var_938], rax
 * 00000001404224D1: mov     rax, [rsp+978h+var_590]
 * 00000001404224D9: mov     rax, [rax+rcx+2A0h]
 * 00000001404224E1: mov     [rsp+978h+var_940], rax
 * 00000001404224E6: mov     rax, [rsp+978h+var_588]
 * 00000001404224EE: mov     rax, [rax+rcx+298h]
 * 00000001404224F6: mov     [rsp+978h+var_948], rax
 * 00000001404224FB: mov     rax, [rsp+978h+var_628]
 * 0000000140422503: mov     rax, [rax+rcx+290h]
 * 000000014042250B: mov     [rsp+978h+var_950], rax
 * 0000000140422510: mov     rax, [rsp+978h+var_620]
 * 0000000140422518: mov     [rsp+978h+var_958], rax
 * 000000014042251D: mov     r9, rdx
 * 0000000140422520: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 0000000140422525: mov     r13, [rsp+978h+var_6C8]
 * 000000014042252D: mov     r15d, 8
 * 0000000140422533: xor     r11d, r11d
 * 0000000140422536: cmp     [rsp+978h+var_708], r11b
 * 000000014042253E: jz      loc_1404230BF
 * 0000000140422544: lea     r8d, [r11+5]
 * 0000000140422548: cmp     cs:dword_140E06BF8, r8d
 * 000000014042254F: jbe     loc_1404230BF
 * 0000000140422555: mov     rdx, 400000000000h
 * 000000014042255F: lea     rcx, dword_140E06BF8
 * 0000000140422566: call    _tlgKeywordOn
 * 000000014042256B: test    al, al
 * 000000014042256D: jz      loc_1404230BF
 * 0000000140422573: mov     [rsp+978h+var_620], 1000000h
 * 000000014042257F: lea     rax, [rsp+978h+var_620]
 * 0000000140422587: mov     [rsp+978h+var_418], rax
 * 000000014042258F: mov     [rsp+978h+var_410], 8
 * 000000014042259B: mov     [rsp+978h+var_704], r8w
 * 00000001404225A4: lea     rax, [rsp+978h+var_704]
 * 00000001404225AC: mov     [rsp+978h+var_408], rax
 * 00000001404225B4: mov     [rsp+978h+var_400], 2
 * 00000001404225C0: imul    rax, r13, 9B0h
 * 00000001404225C7: add     rax, r14
 * 00000001404225CA: mov     [rsp+978h+var_3F8], rax
 * 00000001404225D2: mov     [rsp+978h+var_3F0], 10h
 * 00000001404225DE: mov     rax, 6666666666666667h
 * 00000001404225E8: imul    rbx
 * 00000001404225EB: sar     rdx, 2
 * 00000001404225EF: mov     rax, rdx
 * 00000001404225F2: shr     rax, 3Fh
 * 00000001404225F6: add     rdx, rax
 * 00000001404225F9: mov     [rsp+978h+var_628], rdx
 * 0000000140422601: lea     rax, [rsp+978h+var_628]
 * 0000000140422609: mov     [rsp+978h+var_3E8], rax
 * 0000000140422611: mov     [rsp+978h+var_3E0], 8
 * 000000014042261D: imul    rax, r13, 9B0h
 * 0000000140422624: mov     rcx, [rax+r14+4E0h]
 * 000000014042262C: mov     [rsp+978h+var_570], rcx
 * 0000000140422634: lea     rax, [rsp+978h+var_570]
 * 000000014042263C: mov     [rsp+978h+var_3D8], rax
 * 0000000140422644: mov     [rsp+978h+var_3D0], 8
 * 0000000140422650: imul    rax, r13, 9B0h
 * 0000000140422657: mov     rcx, [rax+r14+4E8h]
 * 000000014042265F: mov     [rsp+978h+var_568], rcx
 * 0000000140422667: lea     rax, [rsp+978h+var_568]
 * 000000014042266F: mov     [rsp+978h+var_3C8], rax
 * 0000000140422677: mov     [rsp+978h+var_3C0], 8
 * 0000000140422683: imul    rax, r13, 9B0h
 * 000000014042268A: mov     rcx, [rax+r14+4F0h]
 * 0000000140422692: mov     [rsp+978h+var_560], rcx
 * 000000014042269A: lea     rax, [rsp+978h+var_560]
 * 00000001404226A2: mov     [rsp+978h+var_3B8], rax
 * 00000001404226AA: mov     [rsp+978h+var_3B0], 8
 * 00000001404226B6: imul    rax, r13, 9B0h
 * 00000001404226BD: mov     rcx, [rax+r14+4F8h]
 * 00000001404226C5: mov     [rsp+978h+var_558], rcx
 * 00000001404226CD: lea     rax, [rsp+978h+var_558]
 * 00000001404226D5: mov     [rsp+978h+var_3A8], rax
 * 00000001404226DD: mov     [rsp+978h+var_3A0], 8
 * 00000001404226E9: imul    rax, r13, 9B0h
 * 00000001404226F0: mov     rcx, [rax+r14+500h]
 * 00000001404226F8: mov     [rsp+978h+var_550], rcx
 * 0000000140422700: lea     rax, [rsp+978h+var_550]
 * 0000000140422708: mov     [rsp+978h+var_398], rax
 * 0000000140422710: mov     [rsp+978h+var_390], 8
 * 000000014042271C: imul    rax, r13, 9B0h
 * 0000000140422723: mov     rcx, [rax+r14+508h]
 * 000000014042272B: mov     [rsp+978h+var_548], rcx
 * 0000000140422733: lea     rax, [rsp+978h+var_548]
 * 000000014042273B: mov     [rsp+978h+var_388], rax
 * 0000000140422743: mov     [rsp+978h+var_380], 8
 * 000000014042274F: imul    r9, r13, 9B0h
 * 0000000140422756: mov     rax, [r9+r14+588h]
 * 000000014042275E: mov     [rsp+978h+var_540], rax
 * 0000000140422766: lea     rax, [rsp+978h+var_540]
 * 000000014042276E: mov     [rsp+978h+var_378], rax
 * 0000000140422776: mov     [rsp+978h+var_370], 8
 * 0000000140422782: imul    r8, r13, 9B0h
 * 0000000140422789: mov     rax, [r8+r14+590h]
 * 0000000140422791: mov     [rsp+978h+var_538], rax
 * 0000000140422799: lea     rax, [rsp+978h+var_538]
 * 00000001404227A1: mov     [rsp+978h+var_368], rax
 * 00000001404227A9: mov     [rsp+978h+var_360], 8
 * 00000001404227B5: imul    rdx, r13, 9B0h
 * 00000001404227BC: mov     rax, [rdx+r14+598h]
 * 00000001404227C4: mov     [rsp+978h+var_530], rax
 * 00000001404227CC: lea     rax, [rsp+978h+var_530]
 * 00000001404227D4: mov     [rsp+978h+var_358], rax
 * 00000001404227DC: mov     [rsp+978h+var_350], 8
 * 00000001404227E8: imul    rax, r13, 9B0h
 * 00000001404227EF: mov     rcx, [rax+r14+5A0h]
 * 00000001404227F7: mov     [rsp+978h+var_528], rcx
 * 00000001404227FF: lea     rax, [rsp+978h+var_528]
 * 0000000140422807: mov     [rsp+978h+var_348], rax
 * 000000014042280F: mov     [rsp+978h+var_340], 8
 * 000000014042281B: imul    rax, r13, 9B0h
 * 0000000140422822: mov     rcx, [rax+r14+510h]
 * 000000014042282A: mov     [rsp+978h+var_520], rcx
 * 0000000140422832: lea     rax, [rsp+978h+var_520]
 * 000000014042283A: mov     [rsp+978h+var_338], rax
 * 0000000140422842: mov     [rsp+978h+var_330], 8
 * 000000014042284E: imul    rax, r13, 9B0h
 * 0000000140422855: mov     rcx, [rax+r14+518h]
 * 000000014042285D: mov     [rsp+978h+var_518], rcx
 * 0000000140422865: lea     rax, [rsp+978h+var_518]
 * 000000014042286D: mov     [rsp+978h+var_328], rax
 * 0000000140422875: mov     [rsp+978h+var_320], 8
 * 0000000140422881: imul    rax, r13, 9B0h
 * 0000000140422888: mov     rcx, [rax+r14+520h]
 * 0000000140422890: mov     [rsp+978h+var_510], rcx
 * 0000000140422898: lea     rax, [rsp+978h+var_510]
 * 00000001404228A0: mov     [rsp+978h+var_318], rax
 * 00000001404228A8: mov     [rsp+978h+var_310], 8
 * 00000001404228B4: imul    rax, r13, 9B0h
 * 00000001404228BB: mov     rcx, [rax+r14+528h]
 * 00000001404228C3: mov     [rsp+978h+var_508], rcx
 * 00000001404228CB: lea     rax, [rsp+978h+var_508]
 * 00000001404228D3: mov     [rsp+978h+var_308], rax
 * 00000001404228DB: mov     [rsp+978h+var_300], 8
 * 00000001404228E7: imul    rax, r13, 9B0h
 * 00000001404228EE: mov     rcx, [rax+r14+530h]
 * 00000001404228F6: mov     [rsp+978h+var_500], rcx
 * 00000001404228FE: lea     rax, [rsp+978h+var_500]
 * 0000000140422906: mov     [rsp+978h+var_2F8], rax
 * 000000014042290E: mov     [rsp+978h+var_2F0], 8
 * 000000014042291A: imul    rax, r13, 9B0h
 * 0000000140422921: mov     rcx, [rax+r14+538h]
 * 0000000140422929: mov     [rsp+978h+var_4F8], rcx
 * 0000000140422931: lea     rax, [rsp+978h+var_4F8]
 * 0000000140422939: mov     [rsp+978h+var_2E8], rax
 * 0000000140422941: mov     [rsp+978h+var_2E0], 8
 * 000000014042294D: imul    rax, r13, 9B0h
 * 0000000140422954: mov     rcx, [rax+r14+540h]
 * 000000014042295C: mov     [rsp+978h+var_4F0], rcx
 * 0000000140422964: lea     rax, [rsp+978h+var_4F0]
 * 000000014042296C: mov     [rsp+978h+var_2D8], rax
 * 0000000140422974: mov     [rsp+978h+var_2D0], 8
 * 0000000140422980: imul    rax, r13, 9B0h
 * 0000000140422987: mov     rcx, [rax+r14+548h]
 * 000000014042298F: mov     [rsp+978h+var_4E8], rcx
 * 0000000140422997: lea     rax, [rsp+978h+var_4E8]
 * 000000014042299F: mov     [rsp+978h+var_2C8], rax
 * 00000001404229A7: mov     [rsp+978h+var_2C0], 8
 * 00000001404229B3: mov     rax, [rsp+978h+var_6C0]
 * 00000001404229BB: mov     [rsp+978h+var_4E0], rax
 * 00000001404229C3: lea     rax, [rsp+978h+var_4E0]
 * 00000001404229CB: mov     [rsp+978h+var_2B8], rax
 * 00000001404229D3: mov     [rsp+978h+var_2B0], 8
 * 00000001404229DF: imul    rax, r13, 9B0h
 * 00000001404229E6: mov     rcx, [rax+r14+550h]
 * 00000001404229EE: mov     [rsp+978h+var_4D8], rcx
 * 00000001404229F6: lea     rax, [rsp+978h+var_4D8]
 * 00000001404229FE: mov     [rsp+978h+var_2A8], rax
 * 0000000140422A06: mov     [rsp+978h+var_2A0], 8
 * 0000000140422A12: imul    rax, r13, 9B0h
 * 0000000140422A19: mov     rcx, [rax+r14+570h]
 * 0000000140422A21: mov     [rsp+978h+var_4D0], rcx
 * 0000000140422A29: lea     rax, [rsp+978h+var_4D0]
 * 0000000140422A31: mov     [rsp+978h+var_298], rax
 * 0000000140422A39: mov     [rsp+978h+var_290], 8
 * 0000000140422A45: imul    rax, r13, 9B0h
 * 0000000140422A4C: mov     rcx, [rax+r14+578h]
 * 0000000140422A54: mov     [rsp+978h+var_4C8], rcx
 * 0000000140422A5C: lea     rax, [rsp+978h+var_4C8]
 * 0000000140422A64: mov     [rsp+978h+var_288], rax
 * 0000000140422A6C: mov     [rsp+978h+var_280], 8
 * 0000000140422A78: imul    rax, r13, 9B0h
 * 0000000140422A7F: mov     rcx, [rax+r14+580h]
 * 0000000140422A87: mov     [rsp+978h+var_4C0], rcx
 * 0000000140422A8F: lea     rax, [rsp+978h+var_4C0]
 * 0000000140422A97: mov     [rsp+978h+var_278], rax
 * 0000000140422A9F: mov     [rsp+978h+var_270], 8
 * 0000000140422AAB: imul    rax, r13, 9B0h
 * 0000000140422AB2: mov     rcx, [rax+r14+558h]
 * 0000000140422ABA: mov     [rsp+978h+var_4B8], rcx
 * 0000000140422AC2: lea     rax, [rsp+978h+var_4B8]
 * 0000000140422ACA: mov     [rsp+978h+var_268], rax
 * 0000000140422AD2: mov     [rsp+978h+var_260], 8
 * 0000000140422ADE: imul    rax, r13, 9B0h
 * 0000000140422AE5: mov     rcx, [rax+r14+560h]
 * 0000000140422AED: mov     [rsp+978h+var_4B0], rcx
 * 0000000140422AF5: lea     rax, [rsp+978h+var_4B0]
 * 0000000140422AFD: mov     [rsp+978h+var_258], rax
 * 0000000140422B05: mov     [rsp+978h+var_250], 8
 * 0000000140422B11: imul    rax, r13, 9B0h
 * 0000000140422B18: mov     rcx, [rax+r14+568h]
 * 0000000140422B20: mov     [rsp+978h+var_4A8], rcx
 * 0000000140422B28: lea     rax, [rsp+978h+var_4A8]
 * 0000000140422B30: mov     [rsp+978h+var_248], rax
 * 0000000140422B38: mov     [rsp+978h+var_240], 8
 * 0000000140422B44: imul    rax, r13, 9B0h
 * 0000000140422B4B: mov     rcx, [rax+r14+5A8h]
 * 0000000140422B53: mov     [rsp+978h+var_4A0], rcx
 * 0000000140422B5B: lea     rax, [rsp+978h+var_4A0]
 * 0000000140422B63: mov     [rsp+978h+var_238], rax
 * 0000000140422B6B: mov     [rsp+978h+var_230], 8
 * 0000000140422B77: imul    rax, r13, 9B0h
 * 0000000140422B7E: mov     rcx, [rax+r14+5B0h]
 * 0000000140422B86: mov     [rsp+978h+var_498], rcx
 * 0000000140422B8E: lea     rax, [rsp+978h+var_498]
 * 0000000140422B96: mov     [rsp+978h+var_228], rax
 * 0000000140422B9E: mov     [rsp+978h+var_220], 8
 * 0000000140422BAA: imul    rax, r13, 9B0h
 * 0000000140422BB1: mov     rcx, [rax+r14+738h]
 * 0000000140422BB9: mov     [rsp+978h+var_490], rcx
 * 0000000140422BC1: lea     rax, [rsp+978h+var_490]
 * 0000000140422BC9: mov     [rsp+978h+var_218], rax
 * 0000000140422BD1: mov     [rsp+978h+var_210], 8
 * 0000000140422BDD: imul    rax, r13, 9B0h
 * 0000000140422BE4: mov     rcx, [rax+r14+740h]
 * 0000000140422BEC: mov     [rsp+978h+var_488], rcx
 * 0000000140422BF4: lea     rax, [rsp+978h+var_488]
 * 0000000140422BFC: mov     [rsp+978h+var_208], rax
 * 0000000140422C04: mov     [rsp+978h+var_200], 8
 * 0000000140422C10: imul    rax, r13, 9B0h
 * 0000000140422C17: mov     rcx, [rax+r14+748h]
 * 0000000140422C1F: mov     [rsp+978h+var_480], rcx
 * 0000000140422C27: lea     rax, [rsp+978h+var_480]
 * 0000000140422C2F: mov     [rsp+978h+var_1F8], rax
 * 0000000140422C37: mov     [rsp+978h+var_1F0], 8
 * 0000000140422C43: imul    rax, r13, 9B0h
 * 0000000140422C4A: mov     rcx, [rax+r14+750h]
 * 0000000140422C52: mov     [rsp+978h+var_478], rcx
 * 0000000140422C5A: lea     rax, [rsp+978h+var_478]
 * 0000000140422C62: mov     [rsp+978h+var_1E8], rax
 * 0000000140422C6A: mov     [rsp+978h+var_1E0], 8
 * 0000000140422C76: imul    rax, r13, 9B0h
 * 0000000140422C7D: mov     rcx, [rax+r14+758h]
 * 0000000140422C85: mov     [rsp+978h+var_470], rcx
 * 0000000140422C8D: lea     rax, [rsp+978h+var_470]
 * 0000000140422C95: mov     [rsp+978h+var_1D8], rax
 * 0000000140422C9D: mov     [rsp+978h+var_1D0], 8
 * 0000000140422CA9: imul    rax, r13, 9B0h
 * 0000000140422CB0: mov     rcx, [rax+r14+8E0h]
 * 0000000140422CB8: mov     [rsp+978h+var_468], rcx
 * 0000000140422CC0: lea     rax, [rsp+978h+var_468]
 * 0000000140422CC8: mov     [rsp+978h+var_1C8], rax
 * 0000000140422CD0: mov     [rsp+978h+var_1C0], 8
 * 0000000140422CDC: imul    rax, r13, 9B0h
 * 0000000140422CE3: mov     rcx, [rax+r14+8E8h]
 * 0000000140422CEB: mov     [rsp+978h+var_460], rcx
 * 0000000140422CF3: lea     rax, [rsp+978h+var_460]
 * 0000000140422CFB: mov     [rsp+978h+var_1B8], rax
 * 0000000140422D03: mov     [rsp+978h+var_1B0], 8
 * 0000000140422D0F: mov     rax, [r9+r14+588h]
 * 0000000140422D17: mov     [rsp+978h+var_458], rax
 * 0000000140422D1F: lea     rax, [rsp+978h+var_458]
 * 0000000140422D27: mov     [rsp+978h+var_1A8], rax
 * 0000000140422D2F: mov     [rsp+978h+var_1A0], 8
 * 0000000140422D3B: mov     rax, [r8+r14+590h]
 * 0000000140422D43: mov     [rsp+978h+var_450], rax
 * 0000000140422D4B: lea     rax, [rsp+978h+var_450]
 * 0000000140422D53: mov     [rsp+978h+var_198], rax
 * 0000000140422D5B: mov     [rsp+978h+var_190], 8
 * 0000000140422D67: mov     rax, [rdx+r14+598h]
 * 0000000140422D6F: mov     [rsp+978h+var_448], rax
 * 0000000140422D77: lea     rax, [rsp+978h+var_448]
 * 0000000140422D7F: mov     [rsp+978h+var_188], rax
 * 0000000140422D87: mov     [rsp+978h+var_180], 8
 * 0000000140422D93: lea     rdx, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 0000000140422D9A: lea     rcx, [rsp+978h+var_178]
 * 0000000140422DA2: call    _tlgCreate1Sz_wchar_t
 * 0000000140422DA7: imul    rax, r13, 9B0h
 * 0000000140422DAE: add     rax, 5B8h
 * 0000000140422DB4: add     rax, r14
 * 0000000140422DB7: lea     r8d, [r11+0Ch]
 * 0000000140422DBB: mov     [rsp+978h+var_6FC], r8w
 * 0000000140422DC4: lea     rcx, [rsp+978h+var_6FC]
 * 0000000140422DCC: mov     [rsp+978h+var_168], rcx
 * 0000000140422DD4: mov     [rsp+978h+var_160], 2
 * 0000000140422DE0: mov     [rsp+978h+var_158], rax
 * 0000000140422DE8: mov     [rsp+978h+var_150], 60h ; '`'
 * 0000000140422DF4: imul    rcx, r13, 9B0h
 * 0000000140422DFB: add     rcx, 618h
 * 0000000140422E02: add     rcx, r14
 * 0000000140422E05: mov     [rsp+978h+var_6F8], r8w
 * 0000000140422E0E: lea     rax, [rsp+978h+var_6F8]
 * 0000000140422E16: mov     [rsp+978h+var_148], rax
 * 0000000140422E1E: mov     [rsp+978h+var_140], 2
 * 0000000140422E2A: mov     [rsp+978h+var_138], rcx
 * 0000000140422E32: mov     [rsp+978h+var_130], 60h ; '`'
 * 0000000140422E3E: imul    rcx, r13, 9B0h
 * 0000000140422E45: add     rcx, 678h
 * 0000000140422E4C: add     rcx, r14
 * 0000000140422E4F: mov     [rsp+978h+var_6F4], r8w
 * 0000000140422E58: lea     rax, [rsp+978h+var_6F4]
 * 0000000140422E60: mov     [rsp+978h+var_128], rax
 * 0000000140422E68: mov     [rsp+978h+var_120], 2
 * 0000000140422E74: mov     [rsp+978h+var_118], rcx
 * 0000000140422E7C: mov     [rsp+978h+var_110], 60h ; '`'
 * 0000000140422E88: imul    rcx, r13, 9B0h
 * 0000000140422E8F: add     rcx, 6D8h
 * 0000000140422E96: add     rcx, r14
 * 0000000140422E99: mov     [rsp+978h+var_6F0], r8w
 * 0000000140422EA2: lea     rax, [rsp+978h+var_6F0]
 * 0000000140422EAA: mov     [rsp+978h+var_108], rax
 * 0000000140422EB2: mov     [rsp+978h+var_100], 2
 * 0000000140422EBE: mov     [rsp+978h+var_F8], rcx
 * 0000000140422EC6: mov     [rsp+978h+var_F0], 60h ; '`'
 * 0000000140422ED2: imul    rcx, r13, 9B0h
 * 0000000140422ED9: add     rcx, 760h
 * 0000000140422EE0: add     rcx, r14
 * 0000000140422EE3: mov     [rsp+978h+var_6EC], r8w
 * 0000000140422EEC: lea     rax, [rsp+978h+var_6EC]
 * 0000000140422EF4: mov     [rsp+978h+var_E8], rax
 * 0000000140422EFC: mov     [rsp+978h+var_E0], 2
 * 0000000140422F08: mov     [rsp+978h+var_D8], rcx
 * 0000000140422F10: mov     [rsp+978h+var_D0], 60h ; '`'
 * 0000000140422F1C: imul    rcx, r13, 9B0h
 * 0000000140422F23: add     rcx, 7C0h
 * 0000000140422F2A: add     rcx, r14
 * 0000000140422F2D: mov     [rsp+978h+var_6E8], r8w
 * 0000000140422F36: lea     rax, [rsp+978h+var_6E8]
 * 0000000140422F3E: mov     [rsp+978h+var_C8], rax
 * 0000000140422F46: mov     [rsp+978h+var_C0], 2
 * 0000000140422F52: mov     [rsp+978h+var_B8], rcx
 * 0000000140422F5A: mov     [rsp+978h+var_B0], 60h ; '`'
 * 0000000140422F66: imul    rcx, r13, 9B0h
 * 0000000140422F6D: add     rcx, 820h
 * 0000000140422F74: add     rcx, r14
 * 0000000140422F77: mov     [rsp+978h+var_6E4], r8w
 * 0000000140422F80: lea     rax, [rsp+978h+var_6E4]
 * 0000000140422F88: mov     [rsp+978h+var_A8], rax
 * 0000000140422F90: mov     [rsp+978h+var_A0], 2
 * 0000000140422F9C: mov     [rsp+978h+var_98], rcx
 * 0000000140422FA4: mov     [rsp+978h+var_90], 60h ; '`'
 * 0000000140422FB0: imul    rcx, r13, 9B0h
 * 0000000140422FB7: add     rcx, 880h
 * 0000000140422FBE: add     rcx, r14
 * 0000000140422FC1: mov     [rsp+978h+var_6E0], r8w
 * 0000000140422FCA: lea     rax, [rsp+978h+var_6E0]
 * 0000000140422FD2: mov     [rsp+978h+var_88], rax
 * 0000000140422FDA: mov     [rsp+978h+var_80], 2
 * 0000000140422FE6: mov     [rsp+978h+var_78], rcx
 * 0000000140422FEE: mov     [rsp+978h+var_70], 60h ; '`'
 * 0000000140422FFA: imul    rcx, r13, 9B0h
 * 0000000140423001: add     rcx, 8F0h
 * 0000000140423008: add     rcx, r14
 * 000000014042300B: mov     [rsp+978h+var_6DC], r8w
 * 0000000140423014: lea     rax, [rsp+978h+var_6DC]
 * 000000014042301C: mov     [rsp+978h+var_68], rax
 * 0000000140423024: mov     [rsp+978h+var_60], 2
 * 0000000140423030: mov     [rsp+978h+var_58], rcx
 * 0000000140423038: mov     [rsp+978h+var_50], 60h ; '`'
 * 0000000140423044: imul    rcx, r13, 9B0h
 * 000000014042304B: add     rcx, 950h
 * 0000000140423052: add     rcx, r14
 * 0000000140423055: mov     [rsp+978h+var_6D8], r8w
 * 000000014042305E: lea     rax, [rsp+978h+var_6D8]
 * 0000000140423066: mov     [rsp+978h+var_48], rax
 * 000000014042306E: mov     [rsp+978h+var_40], 2
 * 000000014042307A: mov     [rsp+978h+var_38], rcx
 * 0000000140423082: mov     [rsp+978h+var_30], 60h ; '`'
 * 000000014042308E: lea     rax, [rsp+978h+var_438]
 * 0000000140423096: mov     [rsp+978h+var_950], rax
 * 000000014042309B: mov     dword ptr [rsp+978h+var_958], 41h ; 'A'
 * 00000001404230A3: xor     r9d, r9d
 * 00000001404230A6: xor     r8d, r8d
 * 00000001404230A9: lea     rdx, word_140042AA6
 * 00000001404230B0: lea     rcx, dword_140E06BF8
 * 00000001404230B7: call    _tlgWriteTransfer_EtwWriteTransfer
 * 00000001404230BC: xor     r11d, r11d
 * 00000001404230BF: mov     edx, [rsp+978h+var_700]
 * 00000001404230C6: inc     edx
 * 00000001404230C8: mov     [rsp+978h+var_700], edx
 * 00000001404230CF: mov     r13d, edx
 * 00000001404230D2: mov     [rsp+978h+var_6C8], r13
 * 00000001404230DA: cmp     r13, [rsp+978h+var_440]
 * 00000001404230E2: mov     r12, 6666666666666667h
 * 00000001404230EC: jb      loc_1404217C7
 * 00000001404230F2: mov     cs:qword_140F8DD10, rsi
 * 00000001404230F9: xor     edx, edx; Tag
 * 00000001404230FB: mov     rcx, r14; P
 * 00000001404230FE: call    ExFreePoolWithTag
 * 0000000140423103: mov     rcx, [rsp+978h+var_28]
 * 000000014042310B: xor     rcx, rsp; StackCookie
 * 000000014042310E: call    __security_check_cookie
 * 0000000140423113: lea     r11, [rsp+978h+var_18]
 * 000000014042311B: mov     rbx, [r11+20h]
 * 000000014042311F: mov     rsi, [r11+28h]
 * 0000000140423123: mov     rdi, [r11+30h]
 * 0000000140423127: mov     r12, [r11+38h]
 * 000000014042312B: mov     rsp, r11
 * 000000014042312E: pop     r15
 * 0000000140423130: pop     r14
 * 0000000140423132: pop     r13
 * 0000000140423134: retn
 * 00000001406C0868: push    rbp
 * 00000001406C086A: sub     rsp, 270h
 * 00000001406C0871: mov     rbp, rdx
 * 00000001406C0874: call    KeRcuReadUnlock
 * 00000001406C0879: nop
 * 00000001406C087A: add     rsp, 270h
 * 00000001406C0881: pop     rbp
 * 00000001406C0882: retn
 */
