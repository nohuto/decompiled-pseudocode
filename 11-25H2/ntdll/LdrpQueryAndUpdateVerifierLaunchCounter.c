/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800B05CC
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x1800B2AE0 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwSetValueKey @ 0x180163E10 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned int v3; // edx
  int v4; // r14d
  wchar_t *v5; // r8
  unsigned int v6; // eax
  size_t v7; // rax
  int ImageFileKeyOption; // edi
  _WORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+34h] [rbp-1Ch]
  const wchar_t *v12; // [rsp+38h] [rbp-18h]
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  int Data; // [rsp+70h] [rbp+20h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+38h]

  KeyHandle = 0LL;
  v3 = *a1;
  v4 = 0;
  LODWORD(v15) = 0;
  v5 = (wchar_t *)(*((_QWORD *)a1 + 1) + v3);
  v6 = v3;
  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  for ( Data = 0; v6; v6 -= 2 )
  {
    if ( *(v5 - 1) == 92 )
      break;
    --v5;
  }
  v11 = 0;
  ValueName.Buffer = v5;
  ValueName.Length = v3 - v6;
  ValueName.MaximumLength = v3 - v6 + 2;
  v12 = L"\\VerifierCounter";
  v7 = 2 * wcslen(L"\\VerifierCounter");
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v10[0] = v7;
  v10[1] = v7 + 2;
  if ( (int)RtlpOpenImageFileOptionsKeyEx(v10, 11LL) < 0 )
  {
    if ( (int)RtlpOpenImageFileOptionsKeyEx(v10, 9LL) < 0 )
    {
      *a2 = 1;
      return 0LL;
    }
    v4 = 1;
  }
  ImageFileKeyOption = RtlQueryImageFileKeyOption(KeyHandle, ValueName.Buffer, 4, (__int64)&v15);
  if ( ImageFileKeyOption >= 0 )
  {
    if ( v4 || !*a2 )
      goto LABEL_16;
    Data = *a2 - 1;
    ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
  }
  else
  {
    *a2 = 1;
  }
  ImageFileKeyOption = 0;
LABEL_16:
  NtClose(KeyHandle);
  return (unsigned int)ImageFileKeyOption;
}
