/*
 * XREFs of LdrpQueryAndUpdateVerifierLaunchCounter @ 0x180087634
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryImageFileKeyOption @ 0x180089B50 (RtlQueryImageFileKeyOption.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180089F88 (RtlpOpenImageFileOptionsKeyEx.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwSetValueKey @ 0x180162880 (ZwSetValueKey.c)
 */

__int64 __fastcall LdrpQueryAndUpdateVerifierLaunchCounter(unsigned __int16 *a1, _DWORD *a2)
{
  unsigned int v3; // edx
  int v4; // r14d
  __int64 v5; // r8
  unsigned int v6; // eax
  size_t v7; // rax
  int v9; // edi
  _WORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+34h] [rbp-1Ch]
  const wchar_t *v12; // [rsp+38h] [rbp-18h]
  _WORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+44h] [rbp-Ch]
  __int64 v15; // [rsp+48h] [rbp-8h]
  int i; // [rsp+70h] [rbp+20h] BYREF
  int v17; // [rsp+80h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+38h]

  Handle = 0LL;
  v3 = *a1;
  v4 = 0;
  v17 = 0;
  v5 = *((_QWORD *)a1 + 1) + v3;
  v6 = v3;
  v14 = 0;
  for ( i = 0; v6; v6 -= 2 )
  {
    if ( *(_WORD *)(v5 - 2) == 92 )
      break;
    v5 -= 2LL;
  }
  v11 = 0;
  v15 = v5;
  v13[0] = v3 - v6;
  v13[1] = v3 - v6 + 2;
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
  v9 = RtlQueryImageFileKeyOption(Handle, v15, 4LL, a2, 4, &v17);
  if ( v9 >= 0 )
  {
    if ( v4 || !*a2 )
      goto LABEL_16;
    i = *a2 - 1;
    ZwSetValueKey(Handle, v13, 0LL, 4LL, &i, 4);
  }
  else
  {
    *a2 = 1;
  }
  v9 = 0;
LABEL_16:
  NtClose(Handle);
  return (unsigned int)v9;
}
