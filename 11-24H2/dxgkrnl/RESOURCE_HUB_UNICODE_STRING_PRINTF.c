/*
 * XREFs of RESOURCE_HUB_UNICODE_STRING_PRINTF @ 0x140060C6C
 * Callers:
 *     DpOpenSpbResource @ 0x14037B540 (DpOpenSpbResource.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0x14008BDE8 (RtlStringVPrintfWorkerW_0.c)
 */

__int64 RESOURCE_HUB_UNICODE_STRING_PRINTF(__int64 a1, const wchar_t *a2, ...)
{
  wchar_t *v2; // rdi
  size_t v5; // rdx
  NTSTATUS v6; // edx
  size_t pcchNewDestLength[5]; // [rsp+30h] [rbp-28h] BYREF
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  pcchNewDestLength[0] = 0LL;
  v2 = *(wchar_t **)(a1 + 8);
  v5 = (unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1;
  if ( v5 )
  {
    pcchNewDestLength[0] = 0LL;
    v6 = RtlStringVPrintfWorkerW_0(v2, v5, pcchNewDestLength, a2, va);
    if ( v6 >= 0 )
      *(_WORD *)a1 = 2
                   * ((__int64)(unsigned int)((_DWORD)v2 + 2 * LODWORD(pcchNewDestLength[0]) - *(_DWORD *)(a1 + 8)) >> 1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
