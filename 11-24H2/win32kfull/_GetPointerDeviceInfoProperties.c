/*
 * XREFs of _GetPointerDeviceInfoProperties @ 0x14018F464
 * Callers:
 *     NtUserGetPointerDevices @ 0x14018E3A0 (NtUserGetPointerDevices.c)
 *     NtUserGetPointerDevice @ 0x14018E670 (NtUserGetPointerDevice.c)
 * Callees:
 *     PHIDTtoPT @ 0x14018F4FC (PHIDTtoPT.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x14018F54C (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall GetPointerDeviceInfoProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  __int16 v6; // cx
  __int64 result; // rax

  if ( *(_QWORD *)(a2 + 384) )
    RtlStringCbCopyUnicodeString((unsigned __int16 *)(a1 + 38), 0x410uLL, (const struct _UNICODE_STRING *)(a2 + 376));
  else
    *(_WORD *)(a1 + 38) = 0;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 792);
  *(_DWORD *)(a1 + 16) = PHIDTtoPT(a2, a2, a3);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v5 + 1344);
  v6 = *(_WORD *)(a2 + 776) - 1;
  if ( *(_DWORD *)(a2 + 24) != 7 )
    v6 = *(_WORD *)(a2 + 776);
  *(_WORD *)(a1 + 36) = v6;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(*(_QWORD *)(a2 + 1032) + 4LL);
  result = *(unsigned int *)(a2 + 224);
  *(_DWORD *)a1 = result;
  return result;
}
