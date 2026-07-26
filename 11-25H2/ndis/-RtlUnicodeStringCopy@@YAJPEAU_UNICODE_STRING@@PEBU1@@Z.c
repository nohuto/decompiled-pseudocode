/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1400720B0
 * Callers:
 *     ?ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z @ 0x140081A80 (-ndisReadBindPaths@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_RTL_QUERY_REGISTRY_TABLE@@PEAX@Z.c)
 *     ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x14016BE40 (-ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x140072180 (RtlUnicodeStringValidateWorker_0.c)
 */

NTSTATUS __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, ULONG a3)
{
  __int16 v3; // si
  _WORD *v5; // rdi
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  size_t v9; // rdx
  __int64 v10; // rcx
  ULONG v11; // r8d
  NTSTATUS v12; // ecx
  unsigned __int64 v13; // r10
  wchar_t *Buffer; // r11

  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  result = RtlUnicodeStringValidateWorker_0(a1, (const size_t)a2, a3);
  if ( result >= 0 )
  {
    if ( v10 )
    {
      v5 = *(_WORD **)(v10 + 8);
      v6 = (unsigned __int64)*(unsigned __int16 *)(v10 + 2) >> 1;
    }
    v12 = RtlUnicodeStringValidateWorker_0(a2, v9, v11);
    if ( v12 >= 0 )
    {
      if ( a2 )
      {
        Buffer = a2->Buffer;
        v13 = (unsigned __int64)a2->Length >> 1;
      }
      v12 = 0;
      if ( v6 )
      {
        while ( v13 )
        {
          --v13;
          *v5++ = *Buffer++;
          ++v3;
          if ( !--v6 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        if ( v13 )
          v12 = -2147483643;
      }
    }
    result = v12;
    a1->Length = 2 * v3;
  }
  return result;
}
