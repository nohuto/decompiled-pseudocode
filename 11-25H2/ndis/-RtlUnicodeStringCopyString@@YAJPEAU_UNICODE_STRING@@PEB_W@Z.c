/*
 * XREFs of ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x140069460
 * Callers:
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x14016BE40 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x1400694C0 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x140069540 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCopyString(struct _UNICODE_STRING *a1, const wchar_t *a2, ULONG a3)
{
  NTSTATUS result; // eax
  __int64 v5; // rcx
  const wchar_t *v6; // r9
  wchar_t *v7; // rcx
  size_t v8; // rdx
  size_t v9; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+48h] [rbp+10h] BYREF

  pcchNewDestLength = (size_t)a2;
  result = RtlUnicodeStringValidateWorker(a1, (const size_t)a2, a3);
  if ( result >= 0 && v5 )
  {
    v7 = *(wchar_t **)(v5 + 8);
    v8 = (unsigned __int64)a1->MaximumLength >> 1;
LABEL_4:
    pcchNewDestLength = 0LL;
    result = RtlWideCharArrayCopyStringWorker(v7, v8, &pcchNewDestLength, v6, v9);
    a1->Length = 2 * pcchNewDestLength;
    return result;
  }
  v7 = 0LL;
  v8 = 0LL;
  if ( result >= 0 )
    goto LABEL_4;
  return result;
}
