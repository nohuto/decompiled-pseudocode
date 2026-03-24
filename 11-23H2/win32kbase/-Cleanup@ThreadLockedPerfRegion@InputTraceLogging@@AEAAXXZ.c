/*
 * XREFs of ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C013FFF0
 * Callers:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z @ 0x1C013FD50 (-_lambda_invoker_cdecl_@_lambda_d164783eb83be554e1610dcbf87b8416_@@CA@PEAX@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C00946EC (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0132190 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

/*
 * Hex-Rays decompilation failed for ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C013FFF0
 * Reason: Hex-Rays returned no pseudocode for 0x1C013FFF0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C013FFF0: push    rbx
 * 00000001C013FFF2: sub     rsp, 30h
 * 00000001C013FFF6: mov     rbx, rcx
 * 00000001C013FFF9: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0140000: nop     dword ptr [rax+rax+00h]
 * 00000001C0140005: test    rax, rax
 * 00000001C0140008: jz      short loc_1C014000E
 * 00000001C014000A: lock dec dword ptr [rax+18h]
 * 00000001C014000E: cmp     cs:dword_1C0289810, 6
 * 00000001C0140015: jbe     short loc_1C014005C
 * 00000001C0140017: mov     edx, 1
 * 00000001C014001C: lea     rcx, dword_1C0289810
 * 00000001C0140023: call    _tlgKeywordOn
 * 00000001C0140028: test    al, al
 * 00000001C014002A: jz      short loc_1C014005C
 * 00000001C014002C: mov     r9, [rbx]
 * 00000001C014002F: lea     rdx, unk_1C025681C
 * 00000001C0140036: lea     rcx, dword_1C0289810; int
 * 00000001C014003D: mov     rax, [r9]
 * 00000001C0140040: lea     r8, [r9+8]
 * 00000001C0140044: mov     r9, [r9+28h]
 * 00000001C0140048: mov     [rsp+38h+arg_0], rax
 * 00000001C014004D: lea     rax, [rsp+38h+arg_0]
 * 00000001C0140052: mov     [rsp+38h+var_18], rax; __int64
 * 00000001C0140057: call    ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z; _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,uint,_EVENT_DATA_DESCRIPTOR *),&_tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,uint,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,_tlgWrapSz<char> const &)
 * 00000001C014005C: mov     r8, [rbx]; void *
 * 00000001C014005F: mov     rdx, cs:WPP_MAIN_CB.Dpc.SystemArgument2; void *
 * 00000001C0140066: call    ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z; NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(void *,void *)
 * 00000001C014006B: add     rsp, 30h
 * 00000001C014006F: pop     rbx
 * 00000001C0140070: retn
 */
