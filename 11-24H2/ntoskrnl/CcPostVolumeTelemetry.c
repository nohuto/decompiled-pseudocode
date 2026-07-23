/*
 * XREFs of CcPostVolumeTelemetry @ 0x14040C990
 * Callers:
 *     CcTelemetryPeriodicTimerCallback @ 0x140A6A690 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     CcHasVolumeCumulativeTelemetryChanged @ 0x140200444 (CcHasVolumeCumulativeTelemetryChanged.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1402B6E24 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeRcuReadUnlock @ 0x14040C230 (KeRcuReadUnlock.c)
 *     KeRcuReadLock @ 0x14040C360 (KeRcuReadLock.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x14049BF4C (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteT.c)
 *     CcHasVolumeTelemetryChanged @ 0x1404B3518 (CcHasVolumeTelemetryChanged.c)
 *     McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1404BE400 (McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer.c)
 *     CcAggregateCumulativeVolumeTelemetry @ 0x1404D8680 (CcAggregateCumulativeVolumeTelemetry.c)
 *     McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer @ 0x1404F3F8C (McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CcAggregateCumulativeGlobalTelemetry @ 0x140AAC478 (CcAggregateCumulativeGlobalTelemetry.c)
 *     CcResetGlobalTelemetry @ 0x140AB1C68 (CcResetGlobalTelemetry.c)
 *     ExAllocatePoolWithTag @ 0x140B74010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

/*
 * Hex-Rays decompilation failed for CcPostVolumeTelemetry @ 0x14040C990
 * Reason: Hex-Rays returned no pseudocode for 0x14040C990
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014040C990: mov     rax, rsp
 * 000000014040C993: mov     [rax+8], rbx
 * 000000014040C997: mov     [rax+10h], rsi
 * 000000014040C99B: mov     [rax+18h], rdi
 * 000000014040C99F: mov     [rax+20h], r12
 * 000000014040C9A3: push    r13
 * 000000014040C9A5: push    r14
 * 000000014040C9A7: push    r15
 * 000000014040C9A9: sub     rsp, 960h
 * 000000014040C9B0: mov     rax, cs:__security_cookie
 * 000000014040C9B7: xor     rax, rsp
 * 000000014040C9BA: mov     [rsp+978h+var_28], rax
 * 000000014040C9C2: xor     r14b, r14b
 * 000000014040C9C5: mov     [rsp+978h+var_708], r14b
 * 000000014040C9CD: and     [rsp+978h+var_6D4], 0
 * 000000014040C9D5: and     [rsp+978h+var_6D0], 0
 * 000000014040C9DD: mov     rsi, 0FFFFF78000000014h
 * 000000014040C9E7: mov     rsi, [rsi]
 * 000000014040C9EA: mov     rbx, rsi
 * 000000014040C9ED: sub     rbx, cs:qword_140F8E6B0
 * 000000014040C9F4: mov     rdi, rsi
 * 000000014040C9F7: sub     rdi, cs:qword_140F8E6B8
 * 000000014040C9FE: cmp     rbx, qword ptr cs:unk_140F8E6C8
 * 000000014040CA05: jge     short loc_14040CA17
 * 000000014040CA07: mov     rax, cs:qword_140F8E6D8
 * 000000014040CA0E: test    rax, rax
 * 000000014040CA11: jg      loc_14040EA2B
 * 000000014040CA17: cmp     rdi, cs:qword_140F8E6D0
 * 000000014040CA1E: jge     short loc_14040CA2A
 * 000000014040CA20: cmp     cs:qword_140F8E6D8, 0
 * 000000014040CA28: jnz     short loc_14040CA35
 * 000000014040CA2A: mov     r14b, 1
 * 000000014040CA2D: mov     [rsp+978h+var_708], r14b
 * 000000014040CA35: inc     cs:qword_140F8E6D8
 * 000000014040CA3C: mov     rax, cs:qword_140F8E6E8
 * 000000014040CA43: add     rax, 0Ah
 * 000000014040CA47: mov     [rsp+978h+var_6C0], rax
 * 000000014040CA4F: imul    rdx, rax, 9B0h; NumberOfBytes
 * 000000014040CA56: mov     ecx, 600h; PoolType
 * 000000014040CA5B: mov     r8d, 65546343h; Tag
 * 000000014040CA61: call    ExAllocatePoolWithTag
 * 000000014040CA66: mov     r15, rax
 * 000000014040CA69: mov     [rsp+978h+P], rax
 * 000000014040CA71: test    rax, rax
 * 000000014040CA74: jz      loc_14040EA2B
 * 000000014040CA7A: call    KeRcuReadLock
 * 000000014040CA7F: mov     r12, cs:CcVolumeCacheMapList
 * 000000014040CA86: mov     [rsp+978h+var_580], r12
 * 000000014040CA8E: mov     r13d, [rsp+978h+var_6D4]
 * 000000014040CA96: mov     edx, [rsp+978h+var_6D0]
 * 000000014040CA9D: lea     rax, CcVolumeCacheMapList
 * 000000014040CAA4: cmp     r12, rax
 * 000000014040CAA7: jz      loc_14040CB69
 * 000000014040CAAD: mov     eax, edx
 * 000000014040CAAF: cmp     rax, [rsp+978h+var_6C0]
 * 000000014040CAB7: jnb     loc_14040CB69
 * 000000014040CABD: lea     rcx, [r12-18h]
 * 000000014040CAC2: inc     edx
 * 000000014040CAC4: mov     [rsp+978h+var_6D0], edx
 * 000000014040CACB: call    CcHasVolumeTelemetryChanged
 * 000000014040CAD0: test    al, al
 * 000000014040CAD2: jnz     short loc_14040CAE4
 * 000000014040CAD4: test    r14b, r14b
 * 000000014040CAD7: jz      short loc_14040CAE2
 * 000000014040CAD9: call    CcHasVolumeCumulativeTelemetryChanged
 * 000000014040CADE: test    al, al
 * 000000014040CAE0: jnz     short loc_14040CAE4
 * 000000014040CAE2: jmp     short loc_14040CA9D
 * 000000014040CAE4: lea     r14, [rcx+0E8h]
 * 000000014040CAEB: mov     rcx, r14
 * 000000014040CAEE: call    CcAggregateCumulativeVolumeTelemetry
 * 000000014040CAF3: mov     eax, r13d
 * 000000014040CAF6: imul    rcx, rax, 9B0h
 * 000000014040CAFD: add     rcx, r15; void *
 * 000000014040CB00: mov     rdx, r14; Src
 * 000000014040CB03: mov     r8d, 9B0h; Size
 * 000000014040CB09: call    memmove
 * 000000014040CB0E: lea     rcx, [r12+0E0h]; void *
 * 000000014040CB16: mov     r13d, 4D0h
 * 000000014040CB1C: mov     r8d, r13d; Size
 * 000000014040CB1F: xor     edx, edx; Val
 * 000000014040CB21: call    memset_0
 * 000000014040CB26: mov     r14b, [rsp+978h+var_708]
 * 000000014040CB2E: test    r14b, r14b
 * 000000014040CB31: jz      short loc_14040CB45
 * 000000014040CB33: lea     rcx, [r12+5B0h]; void *
 * 000000014040CB3B: mov     r8d, r13d; Size
 * 000000014040CB3E: xor     edx, edx; Val
 * 000000014040CB40: call    memset_0
 * 000000014040CB45: mov     r12, [r12]
 * 000000014040CB49: mov     [rsp+978h+var_580], r12
 * 000000014040CB51: mov     r13d, [rsp+978h+var_6D4]
 * 000000014040CB59: inc     r13d
 * 000000014040CB5C: mov     [rsp+978h+var_6D4], r13d
 * 000000014040CB64: jmp     loc_14040CA96
 * 000000014040CB69: call    KeRcuReadUnlock
 * 000000014040CB6E: call    CcAggregateCumulativeGlobalTelemetry
 * 000000014040CB73: mov     ecx, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 000000014040CB79: mov     r12, 6666666666666667h
 * 000000014040CB83: test    cl, 1
 * 000000014040CB86: jz      loc_14040CC80
 * 000000014040CB8C: mov     rax, r12
 * 000000014040CB8F: imul    rbx
 * 000000014040CB92: sar     rdx, 2
 * 000000014040CB96: mov     r9, rdx
 * 000000014040CB99: shr     r9, 3Fh
 * 000000014040CB9D: add     r9, rdx
 * 000000014040CBA0: mov     rax, cs:qword_140F8E720
 * 000000014040CBA7: mov     [rsp+978h+var_8D8], rax
 * 000000014040CBAF: mov     rax, cs:qword_140F8E718
 * 000000014040CBB6: mov     [rsp+978h+var_8E0], rax
 * 000000014040CBBE: mov     rax, cs:qword_140F8E710
 * 000000014040CBC5: mov     [rsp+978h+var_8E8], rax
 * 000000014040CBCD: mov     rax, cs:qword_140F8E708
 * 000000014040CBD4: mov     [rsp+978h+var_8F0], rax
 * 000000014040CBDC: mov     rax, cs:qword_140F8E700
 * 000000014040CBE3: mov     [rsp+978h+var_8F8], rax
 * 000000014040CBEB: mov     rax, cs:qword_140F8E770
 * 000000014040CBF2: mov     [rsp+978h+var_900], rax
 * 000000014040CBF7: mov     rax, cs:qword_140F8E768
 * 000000014040CBFE: mov     [rsp+978h+var_908], rax
 * 000000014040CC03: mov     rax, cs:qword_140F8E760
 * 000000014040CC0A: mov     [rsp+978h+var_910], rax
 * 000000014040CC0F: mov     rax, cs:qword_140F8E758
 * 000000014040CC16: mov     [rsp+978h+var_918], rax
 * 000000014040CC1B: mov     rax, cs:qword_140F8E750
 * 000000014040CC22: mov     [rsp+978h+var_920], rax
 * 000000014040CC27: mov     rax, cs:qword_140F8E748
 * 000000014040CC2E: mov     [rsp+978h+var_928], rax
 * 000000014040CC33: mov     rax, cs:qword_140F8E740
 * 000000014040CC3A: mov     [rsp+978h+var_930], rax
 * 000000014040CC3F: mov     rax, cs:qword_140F8E738
 * 000000014040CC46: mov     [rsp+978h+var_938], rax
 * 000000014040CC4B: mov     rax, cs:qword_140F8E730
 * 000000014040CC52: mov     [rsp+978h+var_940], rax
 * 000000014040CC57: mov     rax, cs:qword_140F8E728
 * 000000014040CC5E: mov     [rsp+978h+var_948], rax
 * 000000014040CC63: mov     rax, cs:qword_140F8E6F8
 * 000000014040CC6A: mov     [rsp+978h+var_950], rax
 * 000000014040CC6F: mov     rax, cs:qword_140F8E6F0
 * 000000014040CC76: mov     [rsp+978h+var_958], rax
 * 000000014040CC7B: call    McTemplateK0xxxxxxxxxxxxxxxxxxq_EtwWriteTransfer
 * 000000014040CC80: call    CcResetGlobalTelemetry
 * 000000014040CC85: xor     r11d, r11d
 * 000000014040CC88: test    r14b, r14b
 * 000000014040CC8B: jz      loc_14040D0BA
 * 000000014040CC91: lea     r8d, [r11+5]
 * 000000014040CC95: cmp     cs:dword_140E06BF8, r8d
 * 000000014040CC9C: jbe     loc_14040D034
 * 000000014040CCA2: mov     rdx, 400000000000h
 * 000000014040CCAC: lea     rcx, dword_140E06BF8
 * 000000014040CCB3: call    _tlgKeywordOn
 * 000000014040CCB8: test    al, al
 * 000000014040CCBA: jz      loc_14040D034
 * 000000014040CCC0: mov     [rsp+978h+var_6C0], 1000000h
 * 000000014040CCCC: lea     rax, [rsp+978h+var_6C0]
 * 000000014040CCD4: mov     [rsp+978h+var_418], rax
 * 000000014040CCDC: lea     r15d, [r11+8]
 * 000000014040CCE0: mov     [rsp+978h+var_410], r15
 * 000000014040CCE8: mov     [rsp+978h+var_704], r8w
 * 000000014040CCF1: lea     rax, [rsp+978h+var_704]
 * 000000014040CCF9: mov     [rsp+978h+var_408], rax
 * 000000014040CD01: mov     [rsp+978h+var_400], 2
 * 000000014040CD0D: mov     rax, r12
 * 000000014040CD10: imul    rdi
 * 000000014040CD13: sar     rdx, 2
 * 000000014040CD17: mov     rax, rdx
 * 000000014040CD1A: shr     rax, 3Fh
 * 000000014040CD1E: add     rdx, rax
 * 000000014040CD21: mov     [rsp+978h+var_6C8], rdx
 * 000000014040CD29: lea     rax, [rsp+978h+var_6C8]
 * 000000014040CD31: mov     [rsp+978h+var_3F8], rax
 * 000000014040CD39: mov     [rsp+978h+var_3F0], r15
 * 000000014040CD41: mov     eax, cs:CcNumberNumaNodes
 * 000000014040CD47: mov     [rsp+978h+var_700], eax
 * 000000014040CD4E: lea     rax, [rsp+978h+var_700]
 * 000000014040CD56: mov     [rsp+978h+var_3E8], rax
 * 000000014040CD5E: mov     [rsp+978h+var_3E0], 4
 * 000000014040CD6A: mov     rax, cs:qword_140F8E778
 * 000000014040CD71: mov     [rsp+978h+var_6A8], rax
 * 000000014040CD79: lea     rax, [rsp+978h+var_6A8]
 * 000000014040CD81: mov     [rsp+978h+var_3D8], rax
 * 000000014040CD89: mov     [rsp+978h+var_3D0], r15
 * 000000014040CD91: mov     rax, cs:qword_140F8E780
 * 000000014040CD98: mov     [rsp+978h+var_6A0], rax
 * 000000014040CDA0: lea     rax, [rsp+978h+var_6A0]
 * 000000014040CDA8: mov     [rsp+978h+var_3C8], rax
 * 000000014040CDB0: mov     [rsp+978h+var_3C0], r15
 * 000000014040CDB8: mov     rax, cs:qword_140F8E7B0
 * 000000014040CDBF: mov     [rsp+978h+var_698], rax
 * 000000014040CDC7: lea     rax, [rsp+978h+var_698]
 * 000000014040CDCF: mov     [rsp+978h+var_3B8], rax
 * 000000014040CDD7: mov     [rsp+978h+var_3B0], r15
 * 000000014040CDDF: mov     rax, cs:qword_140F8E7B8
 * 000000014040CDE6: mov     [rsp+978h+var_690], rax
 * 000000014040CDEE: lea     rax, [rsp+978h+var_690]
 * 000000014040CDF6: mov     [rsp+978h+var_3A8], rax
 * 000000014040CDFE: mov     [rsp+978h+var_3A0], r15
 * 000000014040CE06: mov     rax, cs:qword_140F8E7C0
 * 000000014040CE0D: mov     [rsp+978h+var_688], rax
 * 000000014040CE15: lea     rax, [rsp+978h+var_688]
 * 000000014040CE1D: mov     [rsp+978h+var_398], rax
 * 000000014040CE25: mov     [rsp+978h+var_390], r15
 * 000000014040CE2D: mov     rax, cs:qword_140F8E7C8
 * 000000014040CE34: mov     [rsp+978h+var_680], rax
 * 000000014040CE3C: lea     rax, [rsp+978h+var_680]
 * 000000014040CE44: mov     [rsp+978h+var_388], rax
 * 000000014040CE4C: mov     [rsp+978h+var_380], r15
 * 000000014040CE54: mov     rax, cs:qword_140F8E7D0
 * 000000014040CE5B: mov     [rsp+978h+var_678], rax
 * 000000014040CE63: lea     rax, [rsp+978h+var_678]
 * 000000014040CE6B: mov     [rsp+978h+var_378], rax
 * 000000014040CE73: mov     [rsp+978h+var_370], r15
 * 000000014040CE7B: mov     rax, cs:qword_140F8E7D8
 * 000000014040CE82: mov     [rsp+978h+var_670], rax
 * 000000014040CE8A: lea     rax, [rsp+978h+var_670]
 * 000000014040CE92: mov     [rsp+978h+var_368], rax
 * 000000014040CE9A: mov     [rsp+978h+var_360], r15
 * 000000014040CEA2: mov     rax, cs:qword_140F8E7E0
 * 000000014040CEA9: mov     [rsp+978h+var_668], rax
 * 000000014040CEB1: lea     rax, [rsp+978h+var_668]
 * 000000014040CEB9: mov     [rsp+978h+var_358], rax
 * 000000014040CEC1: mov     [rsp+978h+var_350], r15
 * 000000014040CEC9: mov     rax, cs:qword_140F8E7E8
 * 000000014040CED0: mov     [rsp+978h+var_660], rax
 * 000000014040CED8: lea     rax, [rsp+978h+var_660]
 * 000000014040CEE0: mov     [rsp+978h+var_348], rax
 * 000000014040CEE8: mov     [rsp+978h+var_340], r15
 * 000000014040CEF0: mov     rax, cs:qword_140F8E7F0
 * 000000014040CEF7: mov     [rsp+978h+var_658], rax
 * 000000014040CEFF: lea     rax, [rsp+978h+var_658]
 * 000000014040CF07: mov     [rsp+978h+var_338], rax
 * 000000014040CF0F: mov     [rsp+978h+var_330], r15
 * 000000014040CF17: mov     rax, cs:qword_140F8E7F8
 * 000000014040CF1E: mov     [rsp+978h+var_650], rax
 * 000000014040CF26: lea     rax, [rsp+978h+var_650]
 * 000000014040CF2E: mov     [rsp+978h+var_328], rax
 * 000000014040CF36: mov     [rsp+978h+var_320], r15
 * 000000014040CF3E: mov     rax, cs:qword_140F8E788
 * 000000014040CF45: mov     [rsp+978h+var_648], rax
 * 000000014040CF4D: lea     rax, [rsp+978h+var_648]
 * 000000014040CF55: mov     [rsp+978h+var_318], rax
 * 000000014040CF5D: mov     [rsp+978h+var_310], r15
 * 000000014040CF65: mov     rax, cs:qword_140F8E790
 * 000000014040CF6C: mov     [rsp+978h+var_640], rax
 * 000000014040CF74: lea     rax, [rsp+978h+var_640]
 * 000000014040CF7C: mov     [rsp+978h+var_308], rax
 * 000000014040CF84: mov     [rsp+978h+var_300], r15
 * 000000014040CF8C: mov     rax, cs:qword_140F8E798
 * 000000014040CF93: mov     [rsp+978h+var_638], rax
 * 000000014040CF9B: lea     rax, [rsp+978h+var_638]
 * 000000014040CFA3: mov     [rsp+978h+var_2F8], rax
 * 000000014040CFAB: mov     [rsp+978h+var_2F0], r15
 * 000000014040CFB3: mov     rax, cs:qword_140F8E7A0
 * 000000014040CFBA: mov     [rsp+978h+var_630], rax
 * 000000014040CFC2: lea     rax, [rsp+978h+var_630]
 * 000000014040CFCA: mov     [rsp+978h+var_2E8], rax
 * 000000014040CFD2: mov     [rsp+978h+var_2E0], r15
 * 000000014040CFDA: mov     rax, cs:qword_140F8E7A8
 * 000000014040CFE1: mov     [rsp+978h+var_6B0], rax
 * 000000014040CFE9: lea     rax, [rsp+978h+var_6B0]
 * 000000014040CFF1: mov     [rsp+978h+var_2D8], rax
 * 000000014040CFF9: mov     [rsp+978h+var_2D0], r15
 * 000000014040D001: lea     rax, [rsp+978h+var_438]
 * 000000014040D009: mov     [rsp+978h+var_950], rax
 * 000000014040D00E: mov     dword ptr [rsp+978h+var_958], 17h
 * 000000014040D016: xor     r9d, r9d
 * 000000014040D019: xor     r8d, r8d
 * 000000014040D01C: lea     rdx, word_1400439BA
 * 000000014040D023: lea     rcx, dword_140E06BF8
 * 000000014040D02A: call    _tlgWriteTransfer_EtwWriteTransfer
 * 000000014040D02F: xor     r11d, r11d
 * 000000014040D032: jmp     short loc_14040D03A
 * 000000014040D034: mov     r15d, 8
 * 000000014040D03A: mov     cs:qword_140F8E778, r11
 * 000000014040D041: mov     cs:qword_140F8E780, r11
 * 000000014040D048: mov     cs:qword_140F8E788, r11
 * 000000014040D04F: mov     cs:qword_140F8E790, r11
 * 000000014040D056: mov     cs:qword_140F8E798, r11
 * 000000014040D05D: mov     cs:qword_140F8E7A0, r11
 * 000000014040D064: mov     cs:qword_140F8E7A8, r11
 * 000000014040D06B: mov     cs:qword_140F8E7B0, r11
 * 000000014040D072: mov     cs:qword_140F8E7B8, r11
 * 000000014040D079: mov     cs:qword_140F8E7C0, r11
 * 000000014040D080: mov     cs:qword_140F8E7C8, r11
 * 000000014040D087: mov     cs:qword_140F8E7D0, r11
 * 000000014040D08E: mov     cs:qword_140F8E7D8, r11
 * 000000014040D095: mov     cs:qword_140F8E7E0, r11
 * 000000014040D09C: mov     cs:qword_140F8E7E8, r11
 * 000000014040D0A3: mov     cs:qword_140F8E7F0, r11
 * 000000014040D0AA: mov     cs:qword_140F8E7F8, r11
 * 000000014040D0B1: mov     cs:qword_140F8E6B8, rsi
 * 000000014040D0B8: jmp     short loc_14040D0C0
 * 000000014040D0BA: mov     r15d, 8
 * 000000014040D0C0: mov     eax, r13d
 * 000000014040D0C3: mov     [rsp+978h+var_440], rax
 * 000000014040D0CB: mov     [rsp+978h+var_700], r11d
 * 000000014040D0D3: mov     r14, [rsp+978h+P]
 * 000000014040D0DB: test    r13d, r13d
 * 000000014040D0DE: jz      loc_14040EA1A
 * 000000014040D0E4: mov     r13, r11
 * 000000014040D0E7: mov     [rsp+978h+var_6C8], r11
 * 000000014040D0EF: imul    rdi, r13, 9B0h
 * 000000014040D0F6: add     rdi, r14
 * 000000014040D0F9: mov     r8, [rdi+70h]
 * 000000014040D0FD: test    r8, r8
 * 000000014040D100: jz      short loc_14040D117
 * 000000014040D102: mov     rax, r8
 * 000000014040D105: sub     rax, [rdi+78h]
 * 000000014040D109: imul    rax, 64h ; 'd'
 * 000000014040D10D: xor     edx, edx
 * 000000014040D10F: div     r8
 * 000000014040D112: mov     r9, rax
 * 000000014040D115: jmp     short loc_14040D11A
 * 000000014040D117: mov     r9, r11
 * 000000014040D11A: mov     [rsp+978h+var_6C0], r9
 * 000000014040D122: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 000000014040D128: test    al, 1
 * 000000014040D12A: jz      loc_14040D308
 * 000000014040D130: mov     rax, r12
 * 000000014040D133: imul    rbx
 * 000000014040D136: sar     rdx, 2
 * 000000014040D13A: mov     rax, rdx
 * 000000014040D13D: shr     rax, 3Fh
 * 000000014040D141: add     rdx, rax
 * 000000014040D144: mov     rax, [rdi+418h]
 * 000000014040D14B: mov     [rsp+978h+var_840], rax
 * 000000014040D153: mov     rax, [rdi+410h]
 * 000000014040D15A: mov     [rsp+978h+var_848], rax
 * 000000014040D162: mov     rax, [rdi+288h]
 * 000000014040D169: mov     [rsp+978h+var_850], rax
 * 000000014040D171: mov     rax, [rdi+280h]
 * 000000014040D178: mov     [rsp+978h+var_858], rax
 * 000000014040D180: mov     rax, [rdi+278h]
 * 000000014040D187: mov     [rsp+978h+var_860], rax
 * 000000014040D18F: mov     rax, [rdi+270h]
 * 000000014040D196: mov     [rsp+978h+var_868], rax
 * 000000014040D19E: mov     rax, [rdi+268h]
 * 000000014040D1A5: mov     [rsp+978h+var_870], rax
 * 000000014040D1AD: mov     rax, [rdi+0E0h]
 * 000000014040D1B4: mov     [rsp+978h+var_878], rax
 * 000000014040D1BC: mov     rax, [rdi+0D8h]
 * 000000014040D1C3: mov     [rsp+978h+var_880], rax
 * 000000014040D1CB: mov     rax, [rdi+98h]
 * 000000014040D1D2: mov     [rsp+978h+var_888], rax
 * 000000014040D1DA: mov     rax, [rdi+90h]
 * 000000014040D1E1: mov     [rsp+978h+var_890], rax
 * 000000014040D1E9: mov     rax, [rdi+88h]
 * 000000014040D1F0: mov     [rsp+978h+var_898], rax
 * 000000014040D1F8: mov     rax, [rdi+0B0h]
 * 000000014040D1FF: mov     [rsp+978h+var_8A0], rax
 * 000000014040D207: mov     rax, [rdi+0A8h]
 * 000000014040D20E: mov     [rsp+978h+var_8A8], rax
 * 000000014040D216: mov     rax, [rdi+0A0h]
 * 000000014040D21D: mov     [rsp+978h+var_8B0], rax
 * 000000014040D225: mov     [rsp+978h+var_8B8], r9
 * 000000014040D22D: mov     rax, [rdi+80h]
 * 000000014040D234: mov     [rsp+978h+var_8C0], rax
 * 000000014040D23C: mov     rax, [rdi+78h]
 * 000000014040D240: mov     [rsp+978h+var_8C8], rax
 * 000000014040D248: mov     [rsp+978h+var_8D0], r8
 * 000000014040D250: mov     rax, [rdi+68h]
 * 000000014040D254: mov     [rsp+978h+var_8D8], rax
 * 000000014040D25C: mov     rax, [rdi+60h]
 * 000000014040D260: mov     [rsp+978h+var_8E0], rax
 * 000000014040D268: mov     rax, [rdi+58h]
 * 000000014040D26C: mov     [rsp+978h+var_8E8], rax
 * 000000014040D274: mov     rax, [rdi+50h]
 * 000000014040D278: mov     [rsp+978h+var_8F0], rax
 * 000000014040D280: mov     rax, [rdi+48h]
 * 000000014040D284: mov     [rsp+978h+var_8F8], rax
 * 000000014040D28C: mov     rax, [rdi+40h]
 * 000000014040D290: mov     [rsp+978h+var_900], rax
 * 000000014040D295: mov     rax, [rdi+0D0h]
 * 000000014040D29C: mov     [rsp+978h+var_908], rax
 * 000000014040D2A1: mov     rax, [rdi+0C8h]
 * 000000014040D2A8: mov     [rsp+978h+var_910], rax
 * 000000014040D2AD: mov     rax, [rdi+0C0h]
 * 000000014040D2B4: mov     [rsp+978h+var_918], rax
 * 000000014040D2B9: mov     rax, [rdi+0B8h]
 * 000000014040D2C0: mov     [rsp+978h+var_920], rax
 * 000000014040D2C5: mov     rax, [rdi+38h]
 * 000000014040D2C9: mov     [rsp+978h+var_928], rax
 * 000000014040D2CE: mov     rax, [rdi+30h]
 * 000000014040D2D2: mov     [rsp+978h+var_930], rax
 * 000000014040D2D7: mov     rax, [rdi+28h]
 * 000000014040D2DB: mov     [rsp+978h+var_938], rax
 * 000000014040D2E0: mov     rax, [rdi+20h]
 * 000000014040D2E4: mov     [rsp+978h+var_940], rax
 * 000000014040D2E9: mov     rax, [rdi+18h]
 * 000000014040D2ED: mov     [rsp+978h+var_948], rax
 * 000000014040D2F2: mov     rax, [rdi+10h]
 * 000000014040D2F6: mov     [rsp+978h+var_950], rax
 * 000000014040D2FB: mov     [rsp+978h+var_958], rdx
 * 000000014040D300: mov     r9, rdi
 * 000000014040D303: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 000000014040D308: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 000000014040D30E: test    al, 1
 * 000000014040D310: jz      loc_14040D74E
 * 000000014040D316: mov     rax, r12
 * 000000014040D319: imul    rbx
 * 000000014040D31C: sar     rdx, 2
 * 000000014040D320: mov     rax, rdx
 * 000000014040D323: shr     rax, 3Fh
 * 000000014040D327: add     rdx, rax
 * 000000014040D32A: mov     rax, [rdi+4D8h]
 * 000000014040D331: mov     [rsp+978h+var_718], rax
 * 000000014040D339: mov     rax, [rdi+4D0h]
 * 000000014040D340: mov     [rsp+978h+var_720], rax
 * 000000014040D348: mov     rax, [rdi+4C8h]
 * 000000014040D34F: mov     [rsp+978h+var_728], rax
 * 000000014040D357: mov     rax, [rdi+4C0h]
 * 000000014040D35E: mov     [rsp+978h+var_730], rax
 * 000000014040D366: mov     rax, [rdi+4B8h]
 * 000000014040D36D: mov     [rsp+978h+var_738], rax
 * 000000014040D375: mov     rax, [rdi+4B0h]
 * 000000014040D37C: mov     [rsp+978h+var_740], rax
 * 000000014040D384: mov     rax, [rdi+4A8h]
 * 000000014040D38B: mov     [rsp+978h+var_748], rax
 * 000000014040D393: mov     rax, [rdi+4A0h]
 * 000000014040D39A: mov     [rsp+978h+var_750], rax
 * 000000014040D3A2: mov     rax, [rdi+498h]
 * 000000014040D3A9: mov     [rsp+978h+var_758], rax
 * 000000014040D3B1: mov     rax, [rdi+490h]
 * 000000014040D3B8: mov     [rsp+978h+var_760], rax
 * 000000014040D3C0: mov     rax, [rdi+488h]
 * 000000014040D3C7: mov     [rsp+978h+var_768], rax
 * 000000014040D3CF: mov     rax, [rdi+480h]
 * 000000014040D3D6: mov     [rsp+978h+var_770], rax
 * 000000014040D3DE: mov     rax, [rdi+478h]
 * 000000014040D3E5: mov     [rsp+978h+var_778], rax
 * 000000014040D3ED: mov     rax, [rdi+470h]
 * 000000014040D3F4: mov     [rsp+978h+var_780], rax
 * 000000014040D3FC: mov     rax, [rdi+468h]
 * 000000014040D403: mov     [rsp+978h+var_788], rax
 * 000000014040D40B: mov     rax, [rdi+460h]
 * 000000014040D412: mov     [rsp+978h+var_790], rax
 * 000000014040D41A: mov     rax, [rdi+458h]
 * 000000014040D421: mov     [rsp+978h+var_798], rax
 * 000000014040D429: mov     rax, [rdi+450h]
 * 000000014040D430: mov     [rsp+978h+var_7A0], rax
 * 000000014040D438: mov     rax, [rdi+448h]
 * 000000014040D43F: mov     [rsp+978h+var_7A8], rax
 * 000000014040D447: mov     rax, [rdi+440h]
 * 000000014040D44E: mov     [rsp+978h+var_7B0], rax
 * 000000014040D456: mov     rax, [rdi+438h]
 * 000000014040D45D: mov     [rsp+978h+var_7B8], rax
 * 000000014040D465: mov     rax, [rdi+430h]
 * 000000014040D46C: mov     [rsp+978h+var_7C0], rax
 * 000000014040D474: mov     rax, [rdi+428h]
 * 000000014040D47B: mov     [rsp+978h+var_7C8], rax
 * 000000014040D483: mov     rax, [rdi+420h]
 * 000000014040D48A: mov     [rsp+978h+var_7D0], rax
 * 000000014040D492: mov     rax, [rdi+260h]
 * 000000014040D499: mov     [rsp+978h+var_7D8], rax
 * 000000014040D4A1: mov     rax, [rdi+258h]
 * 000000014040D4A8: mov     [rsp+978h+var_7E0], rax
 * 000000014040D4B0: mov     rax, [rdi+250h]
 * 000000014040D4B7: mov     [rsp+978h+var_7E8], rax
 * 000000014040D4BF: mov     rax, [rdi+248h]
 * 000000014040D4C6: mov     [rsp+978h+var_7F0], rax
 * 000000014040D4CE: mov     rax, [rdi+240h]
 * 000000014040D4D5: mov     [rsp+978h+var_7F8], rax
 * 000000014040D4DD: mov     rax, [rdi+238h]
 * 000000014040D4E4: mov     [rsp+978h+var_800], rax
 * 000000014040D4EC: mov     rax, [rdi+230h]
 * 000000014040D4F3: mov     [rsp+978h+var_808], rax
 * 000000014040D4FB: mov     rax, [rdi+228h]
 * 000000014040D502: mov     [rsp+978h+var_810], rax
 * 000000014040D50A: mov     rax, [rdi+220h]
 * 000000014040D511: mov     [rsp+978h+var_818], rax
 * 000000014040D519: mov     rax, [rdi+218h]
 * 000000014040D520: mov     [rsp+978h+var_820], rax
 * 000000014040D528: mov     rax, [rdi+210h]
 * 000000014040D52F: mov     [rsp+978h+var_828], rax
 * 000000014040D537: mov     rax, [rdi+208h]
 * 000000014040D53E: mov     [rsp+978h+var_830], rax
 * 000000014040D546: mov     rax, [rdi+200h]
 * 000000014040D54D: mov     [rsp+978h+var_838], rax
 * 000000014040D555: mov     rax, [rdi+1F8h]
 * 000000014040D55C: mov     [rsp+978h+var_840], rax
 * 000000014040D564: mov     rax, [rdi+1F0h]
 * 000000014040D56B: mov     [rsp+978h+var_848], rax
 * 000000014040D573: mov     rax, [rdi+1E8h]
 * 000000014040D57A: mov     [rsp+978h+var_850], rax
 * 000000014040D582: mov     rax, [rdi+1E0h]
 * 000000014040D589: mov     [rsp+978h+var_858], rax
 * 000000014040D591: mov     rax, [rdi+1D8h]
 * 000000014040D598: mov     [rsp+978h+var_860], rax
 * 000000014040D5A0: mov     rax, [rdi+1D0h]
 * 000000014040D5A7: mov     [rsp+978h+var_868], rax
 * 000000014040D5AF: mov     rax, [rdi+1C8h]
 * 000000014040D5B6: mov     [rsp+978h+var_870], rax
 * 000000014040D5BE: mov     rax, [rdi+1C0h]
 * 000000014040D5C5: mov     [rsp+978h+var_878], rax
 * 000000014040D5CD: mov     rax, [rdi+1B8h]
 * 000000014040D5D4: mov     [rsp+978h+var_880], rax
 * 000000014040D5DC: mov     rax, [rdi+1B0h]
 * 000000014040D5E3: mov     [rsp+978h+var_888], rax
 * 000000014040D5EB: mov     rax, [rdi+1A8h]
 * 000000014040D5F2: mov     [rsp+978h+var_890], rax
 * 000000014040D5FA: mov     rax, [rdi+1A0h]
 * 000000014040D601: mov     [rsp+978h+var_898], rax
 * 000000014040D609: mov     rax, [rdi+198h]
 * 000000014040D610: mov     [rsp+978h+var_8A0], rax
 * 000000014040D618: mov     rax, [rdi+190h]
 * 000000014040D61F: mov     [rsp+978h+var_8A8], rax
 * 000000014040D627: mov     rax, [rdi+188h]
 * 000000014040D62E: mov     [rsp+978h+var_8B0], rax
 * 000000014040D636: mov     rax, [rdi+180h]
 * 000000014040D63D: mov     [rsp+978h+var_8B8], rax
 * 000000014040D645: mov     rax, [rdi+178h]
 * 000000014040D64C: mov     [rsp+978h+var_8C0], rax
 * 000000014040D654: mov     rax, [rdi+170h]
 * 000000014040D65B: mov     [rsp+978h+var_8C8], rax
 * 000000014040D663: mov     rax, [rdi+168h]
 * 000000014040D66A: mov     [rsp+978h+var_8D0], rax
 * 000000014040D672: mov     rax, [rdi+160h]
 * 000000014040D679: mov     [rsp+978h+var_8D8], rax
 * 000000014040D681: mov     rax, [rdi+158h]
 * 000000014040D688: mov     [rsp+978h+var_8E0], rax
 * 000000014040D690: mov     rax, [rdi+150h]
 * 000000014040D697: mov     [rsp+978h+var_8E8], rax
 * 000000014040D69F: mov     rax, [rdi+148h]
 * 000000014040D6A6: mov     [rsp+978h+var_8F0], rax
 * 000000014040D6AE: mov     rax, [rdi+140h]
 * 000000014040D6B5: mov     [rsp+978h+var_8F8], rax
 * 000000014040D6BD: mov     rax, [rdi+138h]
 * 000000014040D6C4: mov     [rsp+978h+var_900], rax
 * 000000014040D6C9: mov     rax, [rdi+130h]
 * 000000014040D6D0: mov     [rsp+978h+var_908], rax
 * 000000014040D6D5: mov     rax, [rdi+128h]
 * 000000014040D6DC: mov     [rsp+978h+var_910], rax
 * 000000014040D6E1: mov     rax, [rdi+120h]
 * 000000014040D6E8: mov     [rsp+978h+var_918], rax
 * 000000014040D6ED: mov     rax, [rdi+118h]
 * 000000014040D6F4: mov     [rsp+978h+var_920], rax
 * 000000014040D6F9: mov     rax, [rdi+110h]
 * 000000014040D700: mov     [rsp+978h+var_928], rax
 * 000000014040D705: mov     rax, [rdi+108h]
 * 000000014040D70C: mov     [rsp+978h+var_930], rax
 * 000000014040D711: mov     rax, [rdi+100h]
 * 000000014040D718: mov     [rsp+978h+var_938], rax
 * 000000014040D71D: mov     rax, [rdi+0F8h]
 * 000000014040D724: mov     [rsp+978h+var_940], rax
 * 000000014040D729: mov     rax, [rdi+0F0h]
 * 000000014040D730: mov     [rsp+978h+var_948], rax
 * 000000014040D735: mov     rax, [rdi+0E8h]
 * 000000014040D73C: mov     [rsp+978h+var_950], rax
 * 000000014040D741: mov     [rsp+978h+var_958], rdx
 * 000000014040D746: mov     r9, rdi
 * 000000014040D749: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 000000014040D74E: mov     eax, cs:Microsoft_Windows_Kernel_CacheEnableBits
 * 000000014040D754: test    al, 1
 * 000000014040D756: jz      loc_14040DE5B
 * 000000014040D75C: imul    rcx, r13, 9B0h
 * 000000014040D763: imul    r8, r13, 9B0h
 * 000000014040D76A: imul    r9, r13, 9B0h
 * 000000014040D771: imul    r10, r13, 9B0h
 * 000000014040D778: imul    r11, r13, 9B0h
 * 000000014040D77F: imul    rdi, r13, 9B0h
 * 000000014040D786: imul    r14, r13, 9B0h
 * 000000014040D78D: imul    r15, r13, 9B0h
 * 000000014040D794: imul    r12, r13, 9B0h
 * 000000014040D79B: imul    r13, 9B0h
 * 000000014040D7A2: mov     rdx, [rsp+978h+var_6C8]
 * 000000014040D7AA: imul    rax, rdx, 9B0h
 * 000000014040D7B1: mov     [rsp+978h+var_6B0], rax
 * 000000014040D7B9: imul    rax, rdx, 9B0h
 * 000000014040D7C0: mov     [rsp+978h+var_630], rax
 * 000000014040D7C8: imul    rax, rdx, 9B0h
 * 000000014040D7CF: mov     [rsp+978h+var_638], rax
 * 000000014040D7D7: imul    rax, rdx, 9B0h
 * 000000014040D7DE: mov     [rsp+978h+var_640], rax
 * 000000014040D7E6: imul    rax, rdx, 9B0h
 * 000000014040D7ED: mov     [rsp+978h+var_648], rax
 * 000000014040D7F5: imul    rax, rdx, 9B0h
 * 000000014040D7FC: mov     [rsp+978h+var_650], rax
 * 000000014040D804: imul    rax, rdx, 9B0h
 * 000000014040D80B: mov     [rsp+978h+var_658], rax
 * 000000014040D813: imul    rax, rdx, 9B0h
 * 000000014040D81A: mov     [rsp+978h+var_660], rax
 * 000000014040D822: imul    rax, rdx, 9B0h
 * 000000014040D829: mov     [rsp+978h+var_668], rax
 * 000000014040D831: imul    rax, rdx, 9B0h
 * 000000014040D838: mov     [rsp+978h+var_670], rax
 * 000000014040D840: imul    rax, rdx, 9B0h
 * 000000014040D847: mov     [rsp+978h+var_678], rax
 * 000000014040D84F: imul    rax, rdx, 9B0h
 * 000000014040D856: mov     [rsp+978h+var_680], rax
 * 000000014040D85E: imul    rax, rdx, 9B0h
 * 000000014040D865: mov     [rsp+978h+var_688], rax
 * 000000014040D86D: imul    rax, rdx, 9B0h
 * 000000014040D874: mov     [rsp+978h+var_690], rax
 * 000000014040D87C: imul    rax, rdx, 9B0h
 * 000000014040D883: mov     [rsp+978h+var_698], rax
 * 000000014040D88B: imul    rax, rdx, 9B0h
 * 000000014040D892: mov     [rsp+978h+var_6A0], rax
 * 000000014040D89A: imul    rax, rdx, 9B0h
 * 000000014040D8A1: mov     [rsp+978h+var_6A8], rax
 * 000000014040D8A9: imul    rax, rdx, 9B0h
 * 000000014040D8B0: mov     [rsp+978h+var_578], rax
 * 000000014040D8B8: imul    rax, rdx, 9B0h
 * 000000014040D8BF: mov     [rsp+978h+var_618], rax
 * 000000014040D8C7: imul    rax, rdx, 9B0h
 * 000000014040D8CE: mov     [rsp+978h+var_610], rax
 * 000000014040D8D6: imul    rax, rdx, 9B0h
 * 000000014040D8DD: mov     [rsp+978h+var_608], rax
 * 000000014040D8E5: imul    rax, rdx, 9B0h
 * 000000014040D8EC: mov     [rsp+978h+var_600], rax
 * 000000014040D8F4: imul    rax, rdx, 9B0h
 * 000000014040D8FB: mov     [rsp+978h+var_5F8], rax
 * 000000014040D903: imul    rax, rdx, 9B0h
 * 000000014040D90A: mov     [rsp+978h+var_5F0], rax
 * 000000014040D912: imul    rax, rdx, 9B0h
 * 000000014040D919: mov     [rsp+978h+var_5E8], rax
 * 000000014040D921: imul    rax, rdx, 9B0h
 * 000000014040D928: mov     [rsp+978h+var_5E0], rax
 * 000000014040D930: imul    rax, rdx, 9B0h
 * 000000014040D937: mov     [rsp+978h+var_5D8], rax
 * 000000014040D93F: imul    rax, rdx, 9B0h
 * 000000014040D946: mov     [rsp+978h+var_5D0], rax
 * 000000014040D94E: imul    rax, rdx, 9B0h
 * 000000014040D955: mov     [rsp+978h+var_5C8], rax
 * 000000014040D95D: imul    rax, rdx, 9B0h
 * 000000014040D964: mov     [rsp+978h+var_5C0], rax
 * 000000014040D96C: imul    rax, rdx, 9B0h
 * 000000014040D973: mov     [rsp+978h+var_5B8], rax
 * 000000014040D97B: imul    rax, rdx, 9B0h
 * 000000014040D982: mov     [rsp+978h+var_5B0], rax
 * 000000014040D98A: imul    rax, rdx, 9B0h
 * 000000014040D991: mov     [rsp+978h+var_5A8], rax
 * 000000014040D999: imul    rax, rdx, 9B0h
 * 000000014040D9A0: mov     [rsp+978h+var_5A0], rax
 * 000000014040D9A8: imul    rax, rdx, 9B0h
 * 000000014040D9AF: mov     [rsp+978h+var_598], rax
 * 000000014040D9B7: imul    rax, rdx, 9B0h
 * 000000014040D9BE: mov     [rsp+978h+var_590], rax
 * 000000014040D9C6: imul    rax, rdx, 9B0h
 * 000000014040D9CD: mov     [rsp+978h+var_588], rax
 * 000000014040D9D5: imul    rax, rdx, 9B0h
 * 000000014040D9DC: mov     [rsp+978h+var_628], rax
 * 000000014040D9E4: mov     rax, 6666666666666667h
 * 000000014040D9EE: imul    rbx
 * 000000014040D9F1: sar     rdx, 2
 * 000000014040D9F5: mov     rax, rdx
 * 000000014040D9F8: shr     rax, 3Fh
 * 000000014040D9FC: add     rdx, rax
 * 000000014040D9FF: mov     [rsp+978h+var_620], rdx
 * 000000014040DA07: imul    rdx, [rsp+978h+var_6C8], 9B0h
 * 000000014040DA13: mov     rax, [rsp+978h+P]
 * 000000014040DA1B: add     rdx, rax
 * 000000014040DA1E: mov     rax, [rcx+rax+408h]
 * 000000014040DA26: mov     [rsp+978h+var_7D8], rax
 * 000000014040DA2E: mov     rcx, [rsp+978h+P]
 * 000000014040DA36: mov     rax, [r8+rcx+400h]
 * 000000014040DA3E: mov     [rsp+978h+var_7E0], rax
 * 000000014040DA46: mov     rax, [r9+rcx+3F8h]
 * 000000014040DA4E: mov     [rsp+978h+var_7E8], rax
 * 000000014040DA56: mov     rax, [r10+rcx+3F0h]
 * 000000014040DA5E: mov     [rsp+978h+var_7F0], rax
 * 000000014040DA66: mov     rax, [r11+rcx+3E8h]
 * 000000014040DA6E: mov     [rsp+978h+var_7F8], rax
 * 000000014040DA76: mov     rax, [rdi+rcx+3E0h]
 * 000000014040DA7E: mov     [rsp+978h+var_800], rax
 * 000000014040DA86: mov     rax, [r14+rcx+3D8h]
 * 000000014040DA8E: mov     [rsp+978h+var_808], rax
 * 000000014040DA96: mov     r14, rcx
 * 000000014040DA99: mov     rax, [r15+rcx+3D0h]
 * 000000014040DAA1: mov     [rsp+978h+var_810], rax
 * 000000014040DAA9: mov     rax, [r12+rcx+3C8h]
 * 000000014040DAB1: mov     [rsp+978h+var_818], rax
 * 000000014040DAB9: mov     rax, [rcx+r13+3C0h]
 * 000000014040DAC1: mov     [rsp+978h+var_820], rax
 * 000000014040DAC9: mov     rax, [rsp+978h+var_6B0]
 * 000000014040DAD1: mov     rax, [rax+rcx+3B8h]
 * 000000014040DAD9: mov     [rsp+978h+var_828], rax
 * 000000014040DAE1: mov     rax, [rsp+978h+var_630]
 * 000000014040DAE9: mov     rax, [rax+rcx+3B0h]
 * 000000014040DAF1: mov     [rsp+978h+var_830], rax
 * 000000014040DAF9: mov     rax, [rsp+978h+var_638]
 * 000000014040DB01: mov     rax, [rax+rcx+3A8h]
 * 000000014040DB09: mov     [rsp+978h+var_838], rax
 * 000000014040DB11: mov     rax, [rsp+978h+var_640]
 * 000000014040DB19: mov     rax, [rax+rcx+3A0h]
 * 000000014040DB21: mov     [rsp+978h+var_840], rax
 * 000000014040DB29: mov     rax, [rsp+978h+var_648]
 * 000000014040DB31: mov     rax, [rax+rcx+398h]
 * 000000014040DB39: mov     [rsp+978h+var_848], rax
 * 000000014040DB41: mov     rax, [rsp+978h+var_650]
 * 000000014040DB49: mov     rax, [rax+rcx+390h]
 * 000000014040DB51: mov     [rsp+978h+var_850], rax
 * 000000014040DB59: mov     rax, [rsp+978h+var_658]
 * 000000014040DB61: mov     rax, [rax+rcx+388h]
 * 000000014040DB69: mov     [rsp+978h+var_858], rax
 * 000000014040DB71: mov     rax, [rsp+978h+var_660]
 * 000000014040DB79: mov     rax, [rax+rcx+380h]
 * 000000014040DB81: mov     [rsp+978h+var_860], rax
 * 000000014040DB89: mov     rax, [rsp+978h+var_668]
 * 000000014040DB91: mov     rax, [rax+rcx+378h]
 * 000000014040DB99: mov     [rsp+978h+var_868], rax
 * 000000014040DBA1: mov     rax, [rsp+978h+var_670]
 * 000000014040DBA9: mov     rax, [rax+rcx+370h]
 * 000000014040DBB1: mov     [rsp+978h+var_870], rax
 * 000000014040DBB9: mov     rax, [rsp+978h+var_678]
 * 000000014040DBC1: mov     rax, [rax+rcx+368h]
 * 000000014040DBC9: mov     [rsp+978h+var_878], rax
 * 000000014040DBD1: mov     rax, [rsp+978h+var_680]
 * 000000014040DBD9: mov     rax, [rax+rcx+360h]
 * 000000014040DBE1: mov     [rsp+978h+var_880], rax
 * 000000014040DBE9: mov     rax, [rsp+978h+var_688]
 * 000000014040DBF1: mov     rax, [rax+rcx+358h]
 * 000000014040DBF9: mov     [rsp+978h+var_888], rax
 * 000000014040DC01: mov     rax, [rsp+978h+var_690]
 * 000000014040DC09: mov     rax, [rax+rcx+350h]
 * 000000014040DC11: mov     [rsp+978h+var_890], rax
 * 000000014040DC19: mov     rax, [rsp+978h+var_698]
 * 000000014040DC21: mov     rax, [rax+rcx+348h]
 * 000000014040DC29: mov     [rsp+978h+var_898], rax
 * 000000014040DC31: mov     rax, [rsp+978h+var_6A0]
 * 000000014040DC39: mov     rax, [rax+rcx+340h]
 * 000000014040DC41: mov     [rsp+978h+var_8A0], rax
 * 000000014040DC49: mov     rax, [rsp+978h+var_6A8]
 * 000000014040DC51: mov     rax, [rax+rcx+338h]
 * 000000014040DC59: mov     [rsp+978h+var_8A8], rax
 * 000000014040DC61: mov     rax, [rsp+978h+var_578]
 * 000000014040DC69: mov     rax, [rax+rcx+330h]
 * 000000014040DC71: mov     [rsp+978h+var_8B0], rax
 * 000000014040DC79: mov     rax, [rsp+978h+var_618]
 * 000000014040DC81: mov     rax, [rax+rcx+328h]
 * 000000014040DC89: mov     [rsp+978h+var_8B8], rax
 * 000000014040DC91: mov     rax, [rsp+978h+var_610]
 * 000000014040DC99: mov     rax, [rax+rcx+320h]
 * 000000014040DCA1: mov     [rsp+978h+var_8C0], rax
 * 000000014040DCA9: mov     rax, [rsp+978h+var_608]
 * 000000014040DCB1: mov     rax, [rax+rcx+318h]
 * 000000014040DCB9: mov     [rsp+978h+var_8C8], rax
 * 000000014040DCC1: mov     rax, [rsp+978h+var_600]
 * 000000014040DCC9: mov     rax, [rax+rcx+310h]
 * 000000014040DCD1: mov     [rsp+978h+var_8D0], rax
 * 000000014040DCD9: mov     rax, [rsp+978h+var_5F8]
 * 000000014040DCE1: mov     rax, [rax+rcx+308h]
 * 000000014040DCE9: mov     [rsp+978h+var_8D8], rax
 * 000000014040DCF1: mov     rax, [rsp+978h+var_5F0]
 * 000000014040DCF9: mov     rax, [rax+rcx+300h]
 * 000000014040DD01: mov     [rsp+978h+var_8E0], rax
 * 000000014040DD09: mov     rax, [rsp+978h+var_5E8]
 * 000000014040DD11: mov     rax, [rax+rcx+2F8h]
 * 000000014040DD19: mov     [rsp+978h+var_8E8], rax
 * 000000014040DD21: mov     rax, [rsp+978h+var_5E0]
 * 000000014040DD29: mov     rax, [rax+rcx+2F0h]
 * 000000014040DD31: mov     [rsp+978h+var_8F0], rax
 * 000000014040DD39: mov     rax, [rsp+978h+var_5D8]
 * 000000014040DD41: mov     rax, [rax+rcx+2E8h]
 * 000000014040DD49: mov     [rsp+978h+var_8F8], rax
 * 000000014040DD51: mov     rax, [rsp+978h+var_5D0]
 * 000000014040DD59: mov     rax, [rax+rcx+2E0h]
 * 000000014040DD61: mov     [rsp+978h+var_900], rax
 * 000000014040DD66: mov     rax, [rsp+978h+var_5C8]
 * 000000014040DD6E: mov     rax, [rax+rcx+2D8h]
 * 000000014040DD76: mov     [rsp+978h+var_908], rax
 * 000000014040DD7B: mov     rax, [rsp+978h+var_5C0]
 * 000000014040DD83: mov     rax, [rax+rcx+2D0h]
 * 000000014040DD8B: mov     [rsp+978h+var_910], rax
 * 000000014040DD90: mov     rax, [rsp+978h+var_5B8]
 * 000000014040DD98: mov     rax, [rax+rcx+2C8h]
 * 000000014040DDA0: mov     [rsp+978h+var_918], rax
 * 000000014040DDA5: mov     rax, [rsp+978h+var_5B0]
 * 000000014040DDAD: mov     rax, [rax+rcx+2C0h]
 * 000000014040DDB5: mov     [rsp+978h+var_920], rax
 * 000000014040DDBA: mov     rax, [rsp+978h+var_5A8]
 * 000000014040DDC2: mov     rax, [rax+rcx+2B8h]
 * 000000014040DDCA: mov     [rsp+978h+var_928], rax
 * 000000014040DDCF: mov     rax, [rsp+978h+var_5A0]
 * 000000014040DDD7: mov     rax, [rax+rcx+2B0h]
 * 000000014040DDDF: mov     [rsp+978h+var_930], rax
 * 000000014040DDE4: mov     rax, [rsp+978h+var_598]
 * 000000014040DDEC: mov     rax, [rax+rcx+2A8h]
 * 000000014040DDF4: mov     [rsp+978h+var_938], rax
 * 000000014040DDF9: mov     rax, [rsp+978h+var_590]
 * 000000014040DE01: mov     rax, [rax+rcx+2A0h]
 * 000000014040DE09: mov     [rsp+978h+var_940], rax
 * 000000014040DE0E: mov     rax, [rsp+978h+var_588]
 * 000000014040DE16: mov     rax, [rax+rcx+298h]
 * 000000014040DE1E: mov     [rsp+978h+var_948], rax
 * 000000014040DE23: mov     rax, [rsp+978h+var_628]
 * 000000014040DE2B: mov     rax, [rax+rcx+290h]
 * 000000014040DE33: mov     [rsp+978h+var_950], rax
 * 000000014040DE38: mov     rax, [rsp+978h+var_620]
 * 000000014040DE40: mov     [rsp+978h+var_958], rax
 * 000000014040DE45: mov     r9, rdx
 * 000000014040DE48: call    McTemplateK0jxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 000000014040DE4D: mov     r13, [rsp+978h+var_6C8]
 * 000000014040DE55: mov     r15d, 8
 * 000000014040DE5B: xor     r11d, r11d
 * 000000014040DE5E: cmp     [rsp+978h+var_708], r11b
 * 000000014040DE66: jz      loc_14040E9E7
 * 000000014040DE6C: lea     r8d, [r11+5]
 * 000000014040DE70: cmp     cs:dword_140E06BF8, r8d
 * 000000014040DE77: jbe     loc_14040E9E7
 * 000000014040DE7D: mov     rdx, 400000000000h
 * 000000014040DE87: lea     rcx, dword_140E06BF8
 * 000000014040DE8E: call    _tlgKeywordOn
 * 000000014040DE93: test    al, al
 * 000000014040DE95: jz      loc_14040E9E7
 * 000000014040DE9B: mov     [rsp+978h+var_620], 1000000h
 * 000000014040DEA7: lea     rax, [rsp+978h+var_620]
 * 000000014040DEAF: mov     [rsp+978h+var_418], rax
 * 000000014040DEB7: mov     [rsp+978h+var_410], 8
 * 000000014040DEC3: mov     [rsp+978h+var_704], r8w
 * 000000014040DECC: lea     rax, [rsp+978h+var_704]
 * 000000014040DED4: mov     [rsp+978h+var_408], rax
 * 000000014040DEDC: mov     [rsp+978h+var_400], 2
 * 000000014040DEE8: imul    rax, r13, 9B0h
 * 000000014040DEEF: add     rax, r14
 * 000000014040DEF2: mov     [rsp+978h+var_3F8], rax
 * 000000014040DEFA: mov     [rsp+978h+var_3F0], 10h
 * 000000014040DF06: mov     rax, 6666666666666667h
 * 000000014040DF10: imul    rbx
 * 000000014040DF13: sar     rdx, 2
 * 000000014040DF17: mov     rax, rdx
 * 000000014040DF1A: shr     rax, 3Fh
 * 000000014040DF1E: add     rdx, rax
 * 000000014040DF21: mov     [rsp+978h+var_628], rdx
 * 000000014040DF29: lea     rax, [rsp+978h+var_628]
 * 000000014040DF31: mov     [rsp+978h+var_3E8], rax
 * 000000014040DF39: mov     [rsp+978h+var_3E0], 8
 * 000000014040DF45: imul    rax, r13, 9B0h
 * 000000014040DF4C: mov     rcx, [rax+r14+4E0h]
 * 000000014040DF54: mov     [rsp+978h+var_570], rcx
 * 000000014040DF5C: lea     rax, [rsp+978h+var_570]
 * 000000014040DF64: mov     [rsp+978h+var_3D8], rax
 * 000000014040DF6C: mov     [rsp+978h+var_3D0], 8
 * 000000014040DF78: imul    rax, r13, 9B0h
 * 000000014040DF7F: mov     rcx, [rax+r14+4E8h]
 * 000000014040DF87: mov     [rsp+978h+var_568], rcx
 * 000000014040DF8F: lea     rax, [rsp+978h+var_568]
 * 000000014040DF97: mov     [rsp+978h+var_3C8], rax
 * 000000014040DF9F: mov     [rsp+978h+var_3C0], 8
 * 000000014040DFAB: imul    rax, r13, 9B0h
 * 000000014040DFB2: mov     rcx, [rax+r14+4F0h]
 * 000000014040DFBA: mov     [rsp+978h+var_560], rcx
 * 000000014040DFC2: lea     rax, [rsp+978h+var_560]
 * 000000014040DFCA: mov     [rsp+978h+var_3B8], rax
 * 000000014040DFD2: mov     [rsp+978h+var_3B0], 8
 * 000000014040DFDE: imul    rax, r13, 9B0h
 * 000000014040DFE5: mov     rcx, [rax+r14+4F8h]
 * 000000014040DFED: mov     [rsp+978h+var_558], rcx
 * 000000014040DFF5: lea     rax, [rsp+978h+var_558]
 * 000000014040DFFD: mov     [rsp+978h+var_3A8], rax
 * 000000014040E005: mov     [rsp+978h+var_3A0], 8
 * 000000014040E011: imul    rax, r13, 9B0h
 * 000000014040E018: mov     rcx, [rax+r14+500h]
 * 000000014040E020: mov     [rsp+978h+var_550], rcx
 * 000000014040E028: lea     rax, [rsp+978h+var_550]
 * 000000014040E030: mov     [rsp+978h+var_398], rax
 * 000000014040E038: mov     [rsp+978h+var_390], 8
 * 000000014040E044: imul    rax, r13, 9B0h
 * 000000014040E04B: mov     rcx, [rax+r14+508h]
 * 000000014040E053: mov     [rsp+978h+var_548], rcx
 * 000000014040E05B: lea     rax, [rsp+978h+var_548]
 * 000000014040E063: mov     [rsp+978h+var_388], rax
 * 000000014040E06B: mov     [rsp+978h+var_380], 8
 * 000000014040E077: imul    r9, r13, 9B0h
 * 000000014040E07E: mov     rax, [r9+r14+588h]
 * 000000014040E086: mov     [rsp+978h+var_540], rax
 * 000000014040E08E: lea     rax, [rsp+978h+var_540]
 * 000000014040E096: mov     [rsp+978h+var_378], rax
 * 000000014040E09E: mov     [rsp+978h+var_370], 8
 * 000000014040E0AA: imul    r8, r13, 9B0h
 * 000000014040E0B1: mov     rax, [r8+r14+590h]
 * 000000014040E0B9: mov     [rsp+978h+var_538], rax
 * 000000014040E0C1: lea     rax, [rsp+978h+var_538]
 * 000000014040E0C9: mov     [rsp+978h+var_368], rax
 * 000000014040E0D1: mov     [rsp+978h+var_360], 8
 * 000000014040E0DD: imul    rdx, r13, 9B0h
 * 000000014040E0E4: mov     rax, [rdx+r14+598h]
 * 000000014040E0EC: mov     [rsp+978h+var_530], rax
 * 000000014040E0F4: lea     rax, [rsp+978h+var_530]
 * 000000014040E0FC: mov     [rsp+978h+var_358], rax
 * 000000014040E104: mov     [rsp+978h+var_350], 8
 * 000000014040E110: imul    rax, r13, 9B0h
 * 000000014040E117: mov     rcx, [rax+r14+5A0h]
 * 000000014040E11F: mov     [rsp+978h+var_528], rcx
 * 000000014040E127: lea     rax, [rsp+978h+var_528]
 * 000000014040E12F: mov     [rsp+978h+var_348], rax
 * 000000014040E137: mov     [rsp+978h+var_340], 8
 * 000000014040E143: imul    rax, r13, 9B0h
 * 000000014040E14A: mov     rcx, [rax+r14+510h]
 * 000000014040E152: mov     [rsp+978h+var_520], rcx
 * 000000014040E15A: lea     rax, [rsp+978h+var_520]
 * 000000014040E162: mov     [rsp+978h+var_338], rax
 * 000000014040E16A: mov     [rsp+978h+var_330], 8
 * 000000014040E176: imul    rax, r13, 9B0h
 * 000000014040E17D: mov     rcx, [rax+r14+518h]
 * 000000014040E185: mov     [rsp+978h+var_518], rcx
 * 000000014040E18D: lea     rax, [rsp+978h+var_518]
 * 000000014040E195: mov     [rsp+978h+var_328], rax
 * 000000014040E19D: mov     [rsp+978h+var_320], 8
 * 000000014040E1A9: imul    rax, r13, 9B0h
 * 000000014040E1B0: mov     rcx, [rax+r14+520h]
 * 000000014040E1B8: mov     [rsp+978h+var_510], rcx
 * 000000014040E1C0: lea     rax, [rsp+978h+var_510]
 * 000000014040E1C8: mov     [rsp+978h+var_318], rax
 * 000000014040E1D0: mov     [rsp+978h+var_310], 8
 * 000000014040E1DC: imul    rax, r13, 9B0h
 * 000000014040E1E3: mov     rcx, [rax+r14+528h]
 * 000000014040E1EB: mov     [rsp+978h+var_508], rcx
 * 000000014040E1F3: lea     rax, [rsp+978h+var_508]
 * 000000014040E1FB: mov     [rsp+978h+var_308], rax
 * 000000014040E203: mov     [rsp+978h+var_300], 8
 * 000000014040E20F: imul    rax, r13, 9B0h
 * 000000014040E216: mov     rcx, [rax+r14+530h]
 * 000000014040E21E: mov     [rsp+978h+var_500], rcx
 * 000000014040E226: lea     rax, [rsp+978h+var_500]
 * 000000014040E22E: mov     [rsp+978h+var_2F8], rax
 * 000000014040E236: mov     [rsp+978h+var_2F0], 8
 * 000000014040E242: imul    rax, r13, 9B0h
 * 000000014040E249: mov     rcx, [rax+r14+538h]
 * 000000014040E251: mov     [rsp+978h+var_4F8], rcx
 * 000000014040E259: lea     rax, [rsp+978h+var_4F8]
 * 000000014040E261: mov     [rsp+978h+var_2E8], rax
 * 000000014040E269: mov     [rsp+978h+var_2E0], 8
 * 000000014040E275: imul    rax, r13, 9B0h
 * 000000014040E27C: mov     rcx, [rax+r14+540h]
 * 000000014040E284: mov     [rsp+978h+var_4F0], rcx
 * 000000014040E28C: lea     rax, [rsp+978h+var_4F0]
 * 000000014040E294: mov     [rsp+978h+var_2D8], rax
 * 000000014040E29C: mov     [rsp+978h+var_2D0], 8
 * 000000014040E2A8: imul    rax, r13, 9B0h
 * 000000014040E2AF: mov     rcx, [rax+r14+548h]
 * 000000014040E2B7: mov     [rsp+978h+var_4E8], rcx
 * 000000014040E2BF: lea     rax, [rsp+978h+var_4E8]
 * 000000014040E2C7: mov     [rsp+978h+var_2C8], rax
 * 000000014040E2CF: mov     [rsp+978h+var_2C0], 8
 * 000000014040E2DB: mov     rax, [rsp+978h+var_6C0]
 * 000000014040E2E3: mov     [rsp+978h+var_4E0], rax
 * 000000014040E2EB: lea     rax, [rsp+978h+var_4E0]
 * 000000014040E2F3: mov     [rsp+978h+var_2B8], rax
 * 000000014040E2FB: mov     [rsp+978h+var_2B0], 8
 * 000000014040E307: imul    rax, r13, 9B0h
 * 000000014040E30E: mov     rcx, [rax+r14+550h]
 * 000000014040E316: mov     [rsp+978h+var_4D8], rcx
 * 000000014040E31E: lea     rax, [rsp+978h+var_4D8]
 * 000000014040E326: mov     [rsp+978h+var_2A8], rax
 * 000000014040E32E: mov     [rsp+978h+var_2A0], 8
 * 000000014040E33A: imul    rax, r13, 9B0h
 * 000000014040E341: mov     rcx, [rax+r14+570h]
 * 000000014040E349: mov     [rsp+978h+var_4D0], rcx
 * 000000014040E351: lea     rax, [rsp+978h+var_4D0]
 * 000000014040E359: mov     [rsp+978h+var_298], rax
 * 000000014040E361: mov     [rsp+978h+var_290], 8
 * 000000014040E36D: imul    rax, r13, 9B0h
 * 000000014040E374: mov     rcx, [rax+r14+578h]
 * 000000014040E37C: mov     [rsp+978h+var_4C8], rcx
 * 000000014040E384: lea     rax, [rsp+978h+var_4C8]
 * 000000014040E38C: mov     [rsp+978h+var_288], rax
 * 000000014040E394: mov     [rsp+978h+var_280], 8
 * 000000014040E3A0: imul    rax, r13, 9B0h
 * 000000014040E3A7: mov     rcx, [rax+r14+580h]
 * 000000014040E3AF: mov     [rsp+978h+var_4C0], rcx
 * 000000014040E3B7: lea     rax, [rsp+978h+var_4C0]
 * 000000014040E3BF: mov     [rsp+978h+var_278], rax
 * 000000014040E3C7: mov     [rsp+978h+var_270], 8
 * 000000014040E3D3: imul    rax, r13, 9B0h
 * 000000014040E3DA: mov     rcx, [rax+r14+558h]
 * 000000014040E3E2: mov     [rsp+978h+var_4B8], rcx
 * 000000014040E3EA: lea     rax, [rsp+978h+var_4B8]
 * 000000014040E3F2: mov     [rsp+978h+var_268], rax
 * 000000014040E3FA: mov     [rsp+978h+var_260], 8
 * 000000014040E406: imul    rax, r13, 9B0h
 * 000000014040E40D: mov     rcx, [rax+r14+560h]
 * 000000014040E415: mov     [rsp+978h+var_4B0], rcx
 * 000000014040E41D: lea     rax, [rsp+978h+var_4B0]
 * 000000014040E425: mov     [rsp+978h+var_258], rax
 * 000000014040E42D: mov     [rsp+978h+var_250], 8
 * 000000014040E439: imul    rax, r13, 9B0h
 * 000000014040E440: mov     rcx, [rax+r14+568h]
 * 000000014040E448: mov     [rsp+978h+var_4A8], rcx
 * 000000014040E450: lea     rax, [rsp+978h+var_4A8]
 * 000000014040E458: mov     [rsp+978h+var_248], rax
 * 000000014040E460: mov     [rsp+978h+var_240], 8
 * 000000014040E46C: imul    rax, r13, 9B0h
 * 000000014040E473: mov     rcx, [rax+r14+5A8h]
 * 000000014040E47B: mov     [rsp+978h+var_4A0], rcx
 * 000000014040E483: lea     rax, [rsp+978h+var_4A0]
 * 000000014040E48B: mov     [rsp+978h+var_238], rax
 * 000000014040E493: mov     [rsp+978h+var_230], 8
 * 000000014040E49F: imul    rax, r13, 9B0h
 * 000000014040E4A6: mov     rcx, [rax+r14+5B0h]
 * 000000014040E4AE: mov     [rsp+978h+var_498], rcx
 * 000000014040E4B6: lea     rax, [rsp+978h+var_498]
 * 000000014040E4BE: mov     [rsp+978h+var_228], rax
 * 000000014040E4C6: mov     [rsp+978h+var_220], 8
 * 000000014040E4D2: imul    rax, r13, 9B0h
 * 000000014040E4D9: mov     rcx, [rax+r14+738h]
 * 000000014040E4E1: mov     [rsp+978h+var_490], rcx
 * 000000014040E4E9: lea     rax, [rsp+978h+var_490]
 * 000000014040E4F1: mov     [rsp+978h+var_218], rax
 * 000000014040E4F9: mov     [rsp+978h+var_210], 8
 * 000000014040E505: imul    rax, r13, 9B0h
 * 000000014040E50C: mov     rcx, [rax+r14+740h]
 * 000000014040E514: mov     [rsp+978h+var_488], rcx
 * 000000014040E51C: lea     rax, [rsp+978h+var_488]
 * 000000014040E524: mov     [rsp+978h+var_208], rax
 * 000000014040E52C: mov     [rsp+978h+var_200], 8
 * 000000014040E538: imul    rax, r13, 9B0h
 * 000000014040E53F: mov     rcx, [rax+r14+748h]
 * 000000014040E547: mov     [rsp+978h+var_480], rcx
 * 000000014040E54F: lea     rax, [rsp+978h+var_480]
 * 000000014040E557: mov     [rsp+978h+var_1F8], rax
 * 000000014040E55F: mov     [rsp+978h+var_1F0], 8
 * 000000014040E56B: imul    rax, r13, 9B0h
 * 000000014040E572: mov     rcx, [rax+r14+750h]
 * 000000014040E57A: mov     [rsp+978h+var_478], rcx
 * 000000014040E582: lea     rax, [rsp+978h+var_478]
 * 000000014040E58A: mov     [rsp+978h+var_1E8], rax
 * 000000014040E592: mov     [rsp+978h+var_1E0], 8
 * 000000014040E59E: imul    rax, r13, 9B0h
 * 000000014040E5A5: mov     rcx, [rax+r14+758h]
 * 000000014040E5AD: mov     [rsp+978h+var_470], rcx
 * 000000014040E5B5: lea     rax, [rsp+978h+var_470]
 * 000000014040E5BD: mov     [rsp+978h+var_1D8], rax
 * 000000014040E5C5: mov     [rsp+978h+var_1D0], 8
 * 000000014040E5D1: imul    rax, r13, 9B0h
 * 000000014040E5D8: mov     rcx, [rax+r14+8E0h]
 * 000000014040E5E0: mov     [rsp+978h+var_468], rcx
 * 000000014040E5E8: lea     rax, [rsp+978h+var_468]
 * 000000014040E5F0: mov     [rsp+978h+var_1C8], rax
 * 000000014040E5F8: mov     [rsp+978h+var_1C0], 8
 * 000000014040E604: imul    rax, r13, 9B0h
 * 000000014040E60B: mov     rcx, [rax+r14+8E8h]
 * 000000014040E613: mov     [rsp+978h+var_460], rcx
 * 000000014040E61B: lea     rax, [rsp+978h+var_460]
 * 000000014040E623: mov     [rsp+978h+var_1B8], rax
 * 000000014040E62B: mov     [rsp+978h+var_1B0], 8
 * 000000014040E637: mov     rax, [r9+r14+588h]
 * 000000014040E63F: mov     [rsp+978h+var_458], rax
 * 000000014040E647: lea     rax, [rsp+978h+var_458]
 * 000000014040E64F: mov     [rsp+978h+var_1A8], rax
 * 000000014040E657: mov     [rsp+978h+var_1A0], 8
 * 000000014040E663: mov     rax, [r8+r14+590h]
 * 000000014040E66B: mov     [rsp+978h+var_450], rax
 * 000000014040E673: lea     rax, [rsp+978h+var_450]
 * 000000014040E67B: mov     [rsp+978h+var_198], rax
 * 000000014040E683: mov     [rsp+978h+var_190], 8
 * 000000014040E68F: mov     rax, [rdx+r14+598h]
 * 000000014040E697: mov     [rsp+978h+var_448], rax
 * 000000014040E69F: lea     rax, [rsp+978h+var_448]
 * 000000014040E6A7: mov     [rsp+978h+var_188], rax
 * 000000014040E6AF: mov     [rsp+978h+var_180], 8
 * 000000014040E6BB: lea     rdx, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 000000014040E6C2: lea     rcx, [rsp+978h+var_178]
 * 000000014040E6CA: call    _tlgCreate1Sz_wchar_t
 * 000000014040E6CF: imul    rax, r13, 9B0h
 * 000000014040E6D6: add     rax, 5B8h
 * 000000014040E6DC: add     rax, r14
 * 000000014040E6DF: lea     r8d, [r11+0Ch]
 * 000000014040E6E3: mov     [rsp+978h+var_6FC], r8w
 * 000000014040E6EC: lea     rcx, [rsp+978h+var_6FC]
 * 000000014040E6F4: mov     [rsp+978h+var_168], rcx
 * 000000014040E6FC: mov     [rsp+978h+var_160], 2
 * 000000014040E708: mov     [rsp+978h+var_158], rax
 * 000000014040E710: mov     [rsp+978h+var_150], 60h ; '`'
 * 000000014040E71C: imul    rcx, r13, 9B0h
 * 000000014040E723: add     rcx, 618h
 * 000000014040E72A: add     rcx, r14
 * 000000014040E72D: mov     [rsp+978h+var_6F8], r8w
 * 000000014040E736: lea     rax, [rsp+978h+var_6F8]
 * 000000014040E73E: mov     [rsp+978h+var_148], rax
 * 000000014040E746: mov     [rsp+978h+var_140], 2
 * 000000014040E752: mov     [rsp+978h+var_138], rcx
 * 000000014040E75A: mov     [rsp+978h+var_130], 60h ; '`'
 * 000000014040E766: imul    rcx, r13, 9B0h
 * 000000014040E76D: add     rcx, 678h
 * 000000014040E774: add     rcx, r14
 * 000000014040E777: mov     [rsp+978h+var_6F4], r8w
 * 000000014040E780: lea     rax, [rsp+978h+var_6F4]
 * 000000014040E788: mov     [rsp+978h+var_128], rax
 * 000000014040E790: mov     [rsp+978h+var_120], 2
 * 000000014040E79C: mov     [rsp+978h+var_118], rcx
 * 000000014040E7A4: mov     [rsp+978h+var_110], 60h ; '`'
 * 000000014040E7B0: imul    rcx, r13, 9B0h
 * 000000014040E7B7: add     rcx, 6D8h
 * 000000014040E7BE: add     rcx, r14
 * 000000014040E7C1: mov     [rsp+978h+var_6F0], r8w
 * 000000014040E7CA: lea     rax, [rsp+978h+var_6F0]
 * 000000014040E7D2: mov     [rsp+978h+var_108], rax
 * 000000014040E7DA: mov     [rsp+978h+var_100], 2
 * 000000014040E7E6: mov     [rsp+978h+var_F8], rcx
 * 000000014040E7EE: mov     [rsp+978h+var_F0], 60h ; '`'
 * 000000014040E7FA: imul    rcx, r13, 9B0h
 * 000000014040E801: add     rcx, 760h
 * 000000014040E808: add     rcx, r14
 * 000000014040E80B: mov     [rsp+978h+var_6EC], r8w
 * 000000014040E814: lea     rax, [rsp+978h+var_6EC]
 * 000000014040E81C: mov     [rsp+978h+var_E8], rax
 * 000000014040E824: mov     [rsp+978h+var_E0], 2
 * 000000014040E830: mov     [rsp+978h+var_D8], rcx
 * 000000014040E838: mov     [rsp+978h+var_D0], 60h ; '`'
 * 000000014040E844: imul    rcx, r13, 9B0h
 * 000000014040E84B: add     rcx, 7C0h
 * 000000014040E852: add     rcx, r14
 * 000000014040E855: mov     [rsp+978h+var_6E8], r8w
 * 000000014040E85E: lea     rax, [rsp+978h+var_6E8]
 * 000000014040E866: mov     [rsp+978h+var_C8], rax
 * 000000014040E86E: mov     [rsp+978h+var_C0], 2
 * 000000014040E87A: mov     [rsp+978h+var_B8], rcx
 * 000000014040E882: mov     [rsp+978h+var_B0], 60h ; '`'
 * 000000014040E88E: imul    rcx, r13, 9B0h
 * 000000014040E895: add     rcx, 820h
 * 000000014040E89C: add     rcx, r14
 * 000000014040E89F: mov     [rsp+978h+var_6E4], r8w
 * 000000014040E8A8: lea     rax, [rsp+978h+var_6E4]
 * 000000014040E8B0: mov     [rsp+978h+var_A8], rax
 * 000000014040E8B8: mov     [rsp+978h+var_A0], 2
 * 000000014040E8C4: mov     [rsp+978h+var_98], rcx
 * 000000014040E8CC: mov     [rsp+978h+var_90], 60h ; '`'
 * 000000014040E8D8: imul    rcx, r13, 9B0h
 * 000000014040E8DF: add     rcx, 880h
 * 000000014040E8E6: add     rcx, r14
 * 000000014040E8E9: mov     [rsp+978h+var_6E0], r8w
 * 000000014040E8F2: lea     rax, [rsp+978h+var_6E0]
 * 000000014040E8FA: mov     [rsp+978h+var_88], rax
 * 000000014040E902: mov     [rsp+978h+var_80], 2
 * 000000014040E90E: mov     [rsp+978h+var_78], rcx
 * 000000014040E916: mov     [rsp+978h+var_70], 60h ; '`'
 * 000000014040E922: imul    rcx, r13, 9B0h
 * 000000014040E929: add     rcx, 8F0h
 * 000000014040E930: add     rcx, r14
 * 000000014040E933: mov     [rsp+978h+var_6DC], r8w
 * 000000014040E93C: lea     rax, [rsp+978h+var_6DC]
 * 000000014040E944: mov     [rsp+978h+var_68], rax
 * 000000014040E94C: mov     [rsp+978h+var_60], 2
 * 000000014040E958: mov     [rsp+978h+var_58], rcx
 * 000000014040E960: mov     [rsp+978h+var_50], 60h ; '`'
 * 000000014040E96C: imul    rcx, r13, 9B0h
 * 000000014040E973: add     rcx, 950h
 * 000000014040E97A: add     rcx, r14
 * 000000014040E97D: mov     [rsp+978h+var_6D8], r8w
 * 000000014040E986: lea     rax, [rsp+978h+var_6D8]
 * 000000014040E98E: mov     [rsp+978h+var_48], rax
 * 000000014040E996: mov     [rsp+978h+var_40], 2
 * 000000014040E9A2: mov     [rsp+978h+var_38], rcx
 * 000000014040E9AA: mov     [rsp+978h+var_30], 60h ; '`'
 * 000000014040E9B6: lea     rax, [rsp+978h+var_438]
 * 000000014040E9BE: mov     [rsp+978h+var_950], rax
 * 000000014040E9C3: mov     dword ptr [rsp+978h+var_958], 41h ; 'A'
 * 000000014040E9CB: xor     r9d, r9d
 * 000000014040E9CE: xor     r8d, r8d
 * 000000014040E9D1: lea     rdx, word_14004340E
 * 000000014040E9D8: lea     rcx, dword_140E06BF8
 * 000000014040E9DF: call    _tlgWriteTransfer_EtwWriteTransfer
 * 000000014040E9E4: xor     r11d, r11d
 * 000000014040E9E7: mov     edx, [rsp+978h+var_700]
 * 000000014040E9EE: inc     edx
 * 000000014040E9F0: mov     [rsp+978h+var_700], edx
 * 000000014040E9F7: mov     r13d, edx
 * 000000014040E9FA: mov     [rsp+978h+var_6C8], r13
 * 000000014040EA02: cmp     r13, [rsp+978h+var_440]
 * 000000014040EA0A: mov     r12, 6666666666666667h
 * 000000014040EA14: jb      loc_14040D0EF
 * 000000014040EA1A: mov     cs:qword_140F8E6B0, rsi
 * 000000014040EA21: xor     edx, edx; Tag
 * 000000014040EA23: mov     rcx, r14; P
 * 000000014040EA26: call    ExFreePoolWithTag
 * 000000014040EA2B: mov     rcx, [rsp+978h+var_28]
 * 000000014040EA33: xor     rcx, rsp; StackCookie
 * 000000014040EA36: call    __security_check_cookie
 * 000000014040EA3B: lea     r11, [rsp+978h+var_18]
 * 000000014040EA43: mov     rbx, [r11+20h]
 * 000000014040EA47: mov     rsi, [r11+28h]
 * 000000014040EA4B: mov     rdi, [r11+30h]
 * 000000014040EA4F: mov     r12, [r11+38h]
 * 000000014040EA53: mov     rsp, r11
 * 000000014040EA56: pop     r15
 * 000000014040EA58: pop     r14
 * 000000014040EA5A: pop     r13
 * 000000014040EA5C: retn
 * 00000001406CD06E: push    rbp
 * 00000001406CD070: sub     rsp, 270h
 * 00000001406CD077: mov     rbp, rdx
 * 00000001406CD07A: call    KeRcuReadUnlock
 * 00000001406CD07F: nop
 * 00000001406CD080: add     rsp, 270h
 * 00000001406CD087: pop     rbp
 * 00000001406CD088: retn
 */
