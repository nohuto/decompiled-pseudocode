/*
 * XREFs of ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x14015EEF0
 * Callers:
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x14015ED10 (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14015EE00 (-ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401664E0 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x14004DC90 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z.c)
 *     RtlUnicodeStringValidateWorker @ 0x14004DD70 (RtlUnicodeStringValidateWorker.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x140054600 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x140057150 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 */

NTSTATUS __fastcall ndisPcwGetInstanceName(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const wchar_t *a2,
        struct _UNICODE_STRING *a3)
{
  NTSTATUS result; // eax
  size_t v6; // rdx
  ULONG v7; // r8d
  _UNICODE_STRING *pModifiedInstanceName; // rsi
  NTSTATUS v9; // eax
  ULONG v10; // r8d
  __int16 v11; // di
  NTSTATUS v12; // edx
  wchar_t *Buffer; // r14
  unsigned __int64 v14; // rbp
  wchar_t *v15; // rbx
  unsigned __int64 v16; // r10
  __int64 v17; // r11
  wchar_t *v18; // rcx
  __int64 v19; // r11

  if ( (_DWORD)a2 == -2 )
    return RtlUnicodeStringCopy(a3, &ndisPcwSystemTotalInstanceName, (ULONG)a3);
  if ( (_DWORD)a2 == 4095 )
    result = RtlUnicodeStringCopyString(a3, a2, (ULONG)a3);
  else
    result = RtlUnicodeStringPrintf(a3, L"%u, ", (unsigned int)a2);
  if ( result >= 0 )
  {
    pModifiedInstanceName = a1->pModifiedInstanceName;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a1->pAdapterInstanceName;
    v9 = RtlUnicodeStringValidateWorker(a3, v6, v7);
    v11 = 0;
    v12 = v9;
    if ( v9 >= 0 && a3 )
    {
      Buffer = a3->Buffer;
      v14 = (unsigned __int64)a3->Length >> 1;
    }
    else
    {
      Buffer = 0LL;
      v14 = 0LL;
      if ( v9 < 0 )
        return v12;
    }
    v15 = 0LL;
    v12 = RtlUnicodeStringValidateWorker(pModifiedInstanceName, (unsigned int)v9, v10);
    if ( v12 >= 0 )
    {
      if ( pModifiedInstanceName )
      {
        v15 = pModifiedInstanceName->Buffer;
        v16 = (unsigned __int64)pModifiedInstanceName->Length >> 1;
      }
      v18 = &Buffer[v14];
      v12 = 0;
      v19 = v17 - v14;
      if ( v19 )
      {
        while ( v16 )
        {
          --v16;
          *v18++ = *v15++;
          ++v11;
          if ( !--v19 )
            goto LABEL_17;
        }
      }
      else
      {
LABEL_17:
        if ( v16 )
          v12 = -2147483643;
      }
      a3->Length = 2 * (v11 + v14);
    }
    return v12;
  }
  return result;
}
