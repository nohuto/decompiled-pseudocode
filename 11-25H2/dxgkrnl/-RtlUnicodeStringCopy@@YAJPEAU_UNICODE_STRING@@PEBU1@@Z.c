/*
 * XREFs of ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14004CEFC
 * Callers:
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x14018BCAC (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x14018C078 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1401C7298 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 *     ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x140369558 (-SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ @ 0x1403F7BD8 (-SaveHKCUPathInSessionData@DpiPersistence@@YAJXZ.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x14004CFD0 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCopy(struct _UNICODE_STRING *a1, const struct _UNICODE_STRING *a2, ULONG a3)
{
  NTSTATUS v5; // eax
  size_t v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // r8d
  unsigned int v9; // r11d
  _WORD *v10; // r14
  unsigned __int64 v11; // rbx
  NTSTATUS v12; // eax
  unsigned __int64 v13; // r10
  wchar_t *Buffer; // r8
  unsigned __int64 v15; // rcx
  __int16 v16; // dx

  v5 = RtlUnicodeStringValidateWorker(a1, (const size_t)a2, a3);
  v9 = v5;
  if ( v5 >= 0 && v7 )
  {
    v10 = *(_WORD **)(v7 + 8);
    v11 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
LABEL_5:
    v12 = RtlUnicodeStringValidateWorker(a2, v6, v8);
    v9 = v12;
    if ( v12 >= 0 && a2 )
    {
      Buffer = a2->Buffer;
      v15 = (unsigned __int64)a2->Length >> 1;
    }
    else
    {
      Buffer = (wchar_t *)v13;
      v15 = v13;
      if ( v12 < 0 )
      {
LABEL_14:
        a1->Length = 2 * v13;
        return v9;
      }
    }
    v9 = v13;
    v16 = v13;
    if ( v11 )
    {
      while ( v15 )
      {
        --v15;
        *v10++ = *Buffer++;
        ++v16;
        if ( !--v11 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( v15 )
        v9 = -2147483643;
    }
    LOWORD(v13) = v16;
    goto LABEL_14;
  }
  v10 = 0LL;
  v11 = 0LL;
  if ( v5 >= 0 )
    goto LABEL_5;
  return v9;
}
