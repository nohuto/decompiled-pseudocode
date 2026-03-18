/*
 * XREFs of ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1401C7298
 * Callers:
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x14018BCAC (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14021D4F0 (-VmBusGetRegistryKeys@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14004CEFC (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x140066604 (-RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x140070548 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401C8F18 (-InsertTail@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DXG_REGISTRY_KEY_LIST::AppendSubKeys(
        DXG_REGISTRY_KEY_LIST *this,
        void *a2,
        struct _KEY_FULL_INFORMATION *a3,
        struct _UNICODE_STRING *a4)
{
  ULONG MaxNameLen; // eax
  ULONG v7; // ebx
  ULONG Length; // r15d
  __int64 v9; // rdi
  wchar_t *v10; // rsi
  NTSTATUS v11; // eax
  ULONG v12; // r8d
  int inserted; // eax
  const wchar_t *v14; // r9
  ULONG ResultLength[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v17; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING v18; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h]
  struct _UNICODE_STRING *v20; // [rsp+80h] [rbp-80h]
  char v21; // [rsp+90h] [rbp-70h] BYREF

  MaxNameLen = a3->MaxNameLen;
  KeyHandle = a2;
  v7 = 0;
  v20 = a4;
  Length = 2 * MaxNameLen + 24;
  LODWORD(v9) = 0;
  v10 = (wchar_t *)operator new[](Length, 0x4B677844u, 256LL, (__int64)a4);
  *(_QWORD *)&v17.Length = 34078720LL;
  *(_QWORD *)&v18.Length = 262146LL;
  v17.Buffer = (wchar_t *)&v21;
  wcscpy((wchar_t *)ResultLength, L"\\");
  v18.Buffer = (wchar_t *)ResultLength;
  while ( v7 < a3->SubKeys )
  {
    memset(v10, 0, Length);
    ResultLength[1] = 0;
    v11 = ZwEnumerateKey(KeyHandle, v7, KeyBasicInformation, v10, Length, &ResultLength[1]);
    v9 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      v14 = L"Failed to Enumerate Subkeys for AppendSubKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 2266;
      goto LABEL_8;
    }
    RtlUnicodeStringCopy(&v17, v20, v12);
    RtlUnicodeStringCat(&v17, &v18);
    RtlUnicodeStringCatString(&v17, v10 + 8);
    inserted = DXG_REGISTRY_KEY_LIST::InsertTail(this, &v17);
    v9 = inserted;
    if ( inserted < 0 )
    {
      WdLogSingleEntry1(2LL, inserted);
      v14 = L"Failed to insert SubKeyRegistryPath into list for AppendSubKeys (status = 0x%I64x).";
      WdLogGlobalForLineNumber = 2279;
LABEL_8:
      DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v14, v9, 0LL, 0LL, 0LL, 0LL);
      break;
    }
    ++v7;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  return (unsigned int)v9;
}
