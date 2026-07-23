/*
 * XREFs of PiLogSurpriseRemoveEvent @ 0x140AB10CC
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1402B87BC (McTemplateK0zq_EtwWriteTransfer.c)
 */

int *__fastcall PiLogSurpriseRemoveEvent(__int64 a1, int a2, int **a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  const wchar_t *v6; // r9
  int *result; // rax
  int v8; // edx

  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 160);
  if ( v5 )
    v4 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  v6 = *(const wchar_t **)(v4 + 48);
  result = *a3;
  v8 = **a3;
  if ( a2 == 3 )
  {
    if ( (byte_140EEFF64 & 8) != 0 )
      return (int *)McTemplateK0zq_EtwWriteTransfer(a1, (__int64)KMPnPEvt_SurpriseRemove_Missing, a1 + 88, v6, v8);
  }
  else
  {
    if ( a2 != 5 )
      __fastfail(5u);
    if ( (byte_140EEFF64 & 4) != 0 )
      return (int *)McTemplateK0zq_EtwWriteTransfer(a1, (__int64)KMPnPEvt_SurpriseRemove_Failed, a1 + 88, v6, v8);
  }
  return result;
}
