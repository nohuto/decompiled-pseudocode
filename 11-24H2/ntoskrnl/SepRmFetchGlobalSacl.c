/*
 * XREFs of SepRmFetchGlobalSacl @ 0x1407946EC
 * Callers:
 *     SepRmGlobalSaclSetWrkr @ 0x1407948C0 (SepRmGlobalSaclSetWrkr.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140425B00 (RtlStringCbCopyW.c)
 *     RtlStringCchCatNW @ 0x140607A4C (RtlStringCchCatNW.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepRegOpenKey @ 0x140A245B4 (SepRegOpenKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmFetchGlobalSacl(STRSAFE_PCNZWCH *a1, ULONG *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  ULONG_PTR v7; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v9; // rdi
  NTSTATUS v10; // ebx
  __int64 v11; // rsi
  void *v12; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+48h] BYREF

  v3 = *(unsigned __int16 *)a1;
  KeyHandle = 0LL;
  ResultLength = 0;
  v7 = v3 + 98;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v7, 0x6C635347u);
  v9 = Pool2;
  if ( !Pool2 )
    goto LABEL_2;
  if ( RtlStringCbCopyW(Pool2, v7, L"\\Registry\\Machine\\SECURITY\\Policy\\GlobalSaclName") >= 0 )
    RtlStringCchCatNW(v9, v7 >> 1, a1[1], (unsigned __int64)*(unsigned __int16 *)a1 >> 1);
  v10 = SepRegOpenKey(v9, 0x201u, &KeyHandle);
  if ( v10 >= 0 )
  {
    v10 = ZwQueryValueKey(KeyHandle, &DefaultKey, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( ((int)(v10 + 0x80000000) < 0 || v10 == -1073741789) && ResultLength <= 0x1000B )
    {
      v10 = 0;
      if ( ResultLength > 0xC )
      {
        v11 = ExAllocatePool2(0x100uLL, ResultLength, 0x6C635347u);
        if ( !v11 )
        {
LABEL_2:
          v10 = -1073741801;
          goto LABEL_17;
        }
        v10 = ZwQueryValueKey(
                KeyHandle,
                &DefaultKey,
                KeyValuePartialInformation,
                (PVOID)v11,
                ResultLength,
                &ResultLength);
        if ( v10 >= 0 )
        {
          ResultLength -= 12;
          v12 = (void *)ExAllocatePool2(0x100uLL, ResultLength, 0x6C635347u);
          *a3 = v12;
          if ( v12 )
          {
            memmove(v12, (const void *)(v11 + 12), ResultLength);
            *a2 = ResultLength;
          }
          else
          {
            v10 = -1073741801;
          }
        }
        ExFreePoolWithTag((PVOID)v11, 0);
      }
      else
      {
        *a2 = 0;
        *a3 = 0LL;
      }
    }
  }
LABEL_17:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v10;
}
