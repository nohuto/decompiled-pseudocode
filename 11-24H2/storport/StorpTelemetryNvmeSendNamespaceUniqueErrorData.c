/*
 * XREFs of StorpTelemetryNvmeSendNamespaceUniqueErrorData @ 0x1400B8BCC
 * Callers:
 *     StorpTelemetryCollectNvmeErrorData @ 0x1400B27E4 (StorpTelemetryCollectNvmeErrorData.c)
 * Callees:
 *     McTemplateK0qjzshqusssjqqqhuhuuqqqqqi_EtwWriteTransfer @ 0x1400AAF20 (McTemplateK0qjzshqusssjqqqhuhuuqqqqqi_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetryNvmeSendNamespaceUniqueErrorData(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // r8
  __int64 v6; // rdx
  const char *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rsi

  if ( byte_14017146A < 0 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = a1 + 160;
    v6 = *(unsigned __int16 *)(a2 + 78);
    v7 = (const char *)&word_140150F48;
    v8 = (unsigned __int16)v6;
    if ( *(_QWORD *)(v4 + 752) )
      v7 = *(const char **)(v4 + 752);
    LOWORD(v8) = (unsigned __int16)v6 >> 9;
    LOBYTE(v8) = ((unsigned __int16)v6 >> 9) & 7;
    LOWORD(v6) = (unsigned __int16)v6 >> 1;
    v9 = *(_QWORD *)(v4 + 128);
    McTemplateK0qjzshqusssjqqqhuhuuqqqqqi_EtwWriteTransfer(
      v8,
      v6,
      v5,
      *(_DWORD *)(v9 + 56),
      v9 + 1032,
      *(const wchar_t **)(v9 + 1016),
      *(const char **)(v4 + 792),
      *(_WORD *)(v4 + 4),
      *(_DWORD *)(a1 + 56),
      *(_BYTE *)(v4 + 744),
      v7,
      (const char *)(v4 + 800),
      (const char *)(v4 + 841),
      a1 + 160,
      (*(_BYTE *)(v4 + 136) & 2) != 0 ? 20 : 17,
      *(_DWORD *)(a2 + 84),
      *(_DWORD *)(a2 + 88),
      *(_WORD *)(a2 + 74),
      *(_BYTE *)a2,
      *(_WORD *)(a2 + 2),
      v6,
      v8,
      *(_DWORD *)(a2 + 64),
      *(_DWORD *)(a2 + 68),
      *(_DWORD *)(a2 + 72),
      *(_DWORD *)(a2 + 76),
      *(_DWORD *)(a2 + 80),
      *(_QWORD *)(a2 + 96));
  }
  return 0LL;
}
