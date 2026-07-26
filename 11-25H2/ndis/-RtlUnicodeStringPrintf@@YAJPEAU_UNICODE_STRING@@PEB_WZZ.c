/*
 * XREFs of ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x140070000
 * Callers:
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x14014E9CC (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     GetModuleParameters @ 0x140155B00 (GetModuleParameters.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x14016BE40 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 RtlUnicodeStringPrintf(struct _UNICODE_STRING *a1, const wchar_t *a2, ...)
{
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  unsigned int v5; // esi
  size_t v6; // rdi
  int v7; // eax
  va_list Args; // [rsp+60h] [rbp+18h] BYREF

  va_start(Args, a2);
  Length = a1->Length;
  if ( (Length & 1) != 0 )
    return 3221225485LL;
  MaximumLength = a1->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !a1->Buffer && (Length || MaximumLength) )
  {
    return 3221225485LL;
  }
  v5 = 0;
  v6 = (unsigned __int64)a1->MaximumLength >> 1;
  v7 = _vsnwprintf(a1->Buffer, v6, a2, Args);
  if ( v7 < 0 || v7 > v6 )
  {
    LOWORD(v7) = v6;
    v5 = -2147483643;
  }
  a1->Length = 2 * v7;
  return v5;
}
