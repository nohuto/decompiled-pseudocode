/*
 * XREFs of ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x140148BAC
 * Callers:
 *     ?NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z @ 0x140145000 (-NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1400830E0 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z @ 0x1400AC90C (-ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPcwSetQueueInstanceName(struct NDIS_PD_QUEUE_TRACKER *a1, struct NDIS_PD_EC *a2)
{
  const wchar_t *v4; // rdx
  unsigned int v5; // ebx
  int v7; // [rsp+30h] [rbp-2B8h]
  wchar_t v8[64]; // [rsp+40h] [rbp-2A8h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-228h] BYREF

  ndisPdGetIfIndexVPortStr(*((struct NDIS_PD_ASSOCIATION **)a1 + 4), v8);
  v4 = L"RX";
  if ( *((_DWORD *)a1 + 38) != 1 )
    v4 = L"TX";
  v7 = *((_DWORD *)a1 + 68);
  v5 = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"EC %u: %s: %s %u", *((unsigned int *)a2 + 8), v8, v4, v7);
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)((char *)a1 + 280), SourceString) )
    return (unsigned int)-1073741670;
  return v5;
}
