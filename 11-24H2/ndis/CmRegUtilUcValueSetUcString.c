/*
 * XREFs of CmRegUtilUcValueSetUcString @ 0x14014E408
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x14014DD28 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x14014E5F8 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall CmRegUtilUcValueSetUcString(HANDLE KeyHandle, PUNICODE_STRING ValueName, unsigned __int16 *a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rax
  unsigned int v8; // ebx
  size_t v9; // rdi
  wchar_t *PoolWithTag; // rax
  const void *v11; // rdx
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF

  v3 = *a3;
  v5 = a3[1] - v3;
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  if ( v5 < 2 )
  {
    v9 = v3 + 2;
    UnicodeString.MaximumLength = v3 + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v3 + 2, 0x63557050u);
    UnicodeString.Buffer = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      v11 = (const void *)*((_QWORD *)a3 + 1);
      UnicodeString.Length = *a3;
      memmove(UnicodeString.Buffer, v11, UnicodeString.Length);
      UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
      v8 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
      RtlFreeUnicodeString(&UnicodeString);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * (v3 >> 1)) = 0;
    return (unsigned int)ZwSetValueKey(KeyHandle, ValueName, 0, 1u, *((PVOID *)a3 + 1), *a3 + 2);
  }
  return v8;
}
