/*
 * XREFs of ?ScExtractDeviceStrings@@YAJPEAU_STORAGE_DEVICE_DESCRIPTOR@@PEAU_UNICODE_STRING@@111@Z @ 0x140691F74
 * Callers:
 *     ?SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1406938D0 (-SaveStorageProperty@SC_DEVICE@@MEAAXW4_STORAGE_PROPERTY_ID@@PEAU_STORAGE_DESCRIPTOR_HEADER@@@Z.c)
 * Callees:
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140691EC0 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall ScExtractDeviceStrings(
        struct _STORAGE_DEVICE_DESCRIPTOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct _UNICODE_STRING *a4,
        struct _UNICODE_STRING *a5)
{
  struct _UNICODE_STRING **v5; // rsi
  unsigned int *v6; // rdi
  DWORD Size; // r15d
  unsigned int v8; // ebx
  unsigned int v10; // r15d
  __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // eax
  _DWORD v15[4]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v16[4]; // [rsp+30h] [rbp-68h] BYREF

  v5 = (struct _UNICODE_STRING **)v16;
  v6 = v15;
  Size = a1->Size;
  v8 = 0;
  v15[0] = a1->VendorIdOffset;
  v10 = Size - 1;
  v15[1] = a1->ProductIdOffset;
  v11 = 4LL;
  v15[2] = a1->ProductRevisionOffset;
  v15[3] = a1->SerialNumberOffset;
  v16[0] = a2;
  v16[1] = a3;
  v16[2] = a4;
  v16[3] = a5;
  do
  {
    v12 = *v6;
    if ( (unsigned int)v12 >= 0x24 && (unsigned int)v12 <= v10 )
    {
      v13 = ScAnsiToUnicodeString((char *)a1 + v12, *v5);
      if ( v13 < 0 )
        v8 = v13;
    }
    ++v6;
    ++v5;
    --v11;
  }
  while ( v11 );
  return v8;
}
