/*
 * XREFs of DxgkRetrieveStringFromRegistry @ 0x140231260
 * Callers:
 *     DpiGetAdapterInfo @ 0x14022F500 (DpiGetAdapterInfo.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1402319DC (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

NTSTATUS __fastcall DxgkRetrieveStringFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v7; // r9
  _DWORD *Pool2; // rax
  _DWORD *v9; // rdi
  NTSTATUS ValueKey; // ebx
  int v11; // ebp
  ULONG v12; // ebx
  __int16 v13; // si
  ULONG v14[14]; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp+20h] BYREF

  ResultLength = 0;
  v14[0] = 0;
  result = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
  if ( result != -2147483643 && result != -1073741789 )
  {
    if ( result >= 0 )
      return -1073741823;
    return result;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, ResultLength, 1953656900LL, v7);
  v9 = Pool2;
  if ( !Pool2 )
    return -1073741801;
  ValueKey = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, Pool2, ResultLength, v14);
  if ( ValueKey < 0 )
  {
LABEL_12:
    ExFreePoolWithTag(v9, 0);
    return ValueKey;
  }
  v11 = v9[1];
  if ( v11 != 1 && v11 != 7 )
  {
    ValueKey = -1073741788;
    goto LABEL_12;
  }
  v12 = v9[2];
  v14[0] = v12;
  if ( v12 && (v13 = ResultLength, v12 <= ResultLength - 12) )
  {
    if ( v12 > 0xFFFC )
    {
      v12 = 65532;
      v14[0] = 65532;
    }
    memmove(v9, v9 + 3, v12);
    if ( v11 != 7 )
    {
      *(_WORD *)((char *)v9 + v12) = 0;
      v13 = ResultLength;
      LOWORD(v12) = LOWORD(v14[0]) + 2;
    }
    *(_WORD *)(a3 + 2) = v13;
    result = 0;
    *(_WORD *)a3 = v12;
    *(_QWORD *)(a3 + 8) = v9;
  }
  else
  {
    ExFreePoolWithTag(v9, 0);
    return -1073741772;
  }
  return result;
}
