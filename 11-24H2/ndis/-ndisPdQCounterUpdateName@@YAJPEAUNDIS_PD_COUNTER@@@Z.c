/*
 * XREFs of ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x14013DE90
 * Callers:
 *     ?NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z @ 0x14013A120 (-NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z.c)
 *     ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x14013C5E0 (-ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x140067700 (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ?ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z @ 0x1400A475C (-ndisPdGetIfIndexVPortStr@@YAXPEAUNDIS_PD_ASSOCIATION@@PEA_WI@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisPdQCounterUpdateName(struct NDIS_PD_COUNTER *a1)
{
  _UNICODE_STRING *v1; // rdi
  const wchar_t *v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rax
  __int128 v6; // xmm0
  unsigned int v7; // ebx
  __int128 v9; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v10; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v11[64]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR SourceString[264]; // [rsp+D0h] [rbp-30h] BYREF

  v1 = (_UNICODE_STRING *)((char *)a1 + 96);
  RtlFreeUnicodeString((PUNICODE_STRING)a1 + 6);
  ndisPdGetIfIndexVPortStr(*((struct NDIS_PD_ASSOCIATION **)a1 + 4), v11);
  if ( *((int *)a1 + 22) <= 1 )
  {
    if ( *((_DWORD *)a1 + 22) == 1 && (v5 = *((_QWORD *)a1 + 9), *(_WORD *)(v5 + 48)) )
    {
      v6 = *((_OWORD *)a1 + 7);
      v10 = *(_OWORD *)(v5 + 48);
      v9 = v6;
      v4 = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%wZ: %wZ", &v10, &v9);
    }
    else
    {
      v10 = *((_OWORD *)a1 + 7);
      v4 = RtlStringCbPrintfW((wchar_t *)SourceString, 0x202uLL, L"%s: %wZ", v11, &v10);
    }
  }
  else
  {
    v3 = L"RX";
    if ( *((_DWORD *)a1 + 14) != 1 )
      v3 = L"TX";
    v4 = RtlStringCbPrintfW(
           (wchar_t *)SourceString,
           0x202uLL,
           L"%s: %s multi-Q: %wZ",
           v11,
           v3,
           &v9,
           *((_OWORD *)a1 + 7));
  }
  v7 = v4;
  if ( !RtlCreateUnicodeString(v1, SourceString) )
    return (unsigned int)-1073741670;
  return v7;
}
