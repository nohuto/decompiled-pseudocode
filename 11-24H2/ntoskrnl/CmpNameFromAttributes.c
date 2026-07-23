/*
 * XREFs of CmpNameFromAttributes @ 0x14092F7A8
 * Callers:
 *     NtReplaceKey @ 0x1407D0E80 (NtReplaceKey.c)
 *     CmLoadDifferencingKey @ 0x14092E890 (CmLoadDifferencingKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryObject @ 0x1406A75B0 (ZwQueryObject.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140A676F0 (IoConvertFileHandleToKernelHandle.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpNameFromAttributes(_OWORD *a1, char a2, UNICODE_STRING *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rdx
  unsigned __int16 v7; // di
  wchar_t *Pool2; // rax
  __int64 result; // rax
  NTSTATUS v10; // r15d
  __m128i v11; // xmm0
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 Length; // rax
  wchar_t *Buffer; // rcx
  void *Src[2]; // [rsp+38h] [rbp-290h] BYREF
  ULONG ReturnLength[2]; // [rsp+48h] [rbp-280h] BYREF
  UNICODE_STRING *v18; // [rsp+50h] [rbp-278h]
  HANDLE Handle[2]; // [rsp+58h] [rbp-270h]
  __int128 v20; // [rsp+68h] [rbp-260h]
  __int128 v21; // [rsp+78h] [rbp-250h]
  UNICODE_STRING Source; // [rsp+88h] [rbp-240h] BYREF
  UNICODE_STRING ObjectInformation; // [rsp+A0h] [rbp-228h] BYREF

  v18 = a3;
  v5 = 0;
  ReturnLength[0] = 0;
  a3->Buffer = 0LL;
  if ( a2 == 1 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
  }
  else
  {
    v6 = 0x7FFFFFFF0000LL;
  }
  *(_OWORD *)Handle = *a1;
  v20 = a1[1];
  v21 = a1[2];
  *(_OWORD *)Src = *(_OWORD *)v20;
  if ( a2 != 1 )
    goto LABEL_19;
  v7 = (unsigned __int16)Src[0];
  if ( LOWORD(Src[0]) )
  {
    if ( ((__int64)Src[1] & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1] )
LABEL_19:
      v7 = (unsigned __int16)Src[0];
  }
  if ( (v7 & 1) != 0 )
    return 3221225531LL;
  if ( !Handle[1] )
  {
    if ( !v7 )
      return 3221225531LL;
    a3->Length = v7;
    a3->MaximumLength = v7;
    Pool2 = (wchar_t *)ExAllocatePool2(0x101uLL, v7, 0x6E664D43u);
    a3->Buffer = Pool2;
    if ( Pool2 )
      memmove(Pool2, Src[1], v7);
    else
      return (unsigned int)-1073741670;
    return v5;
  }
  if ( SLODWORD(Handle[1]) < 0 && a2 == 1 )
    return 3221225480LL;
  if ( Src[1] && v7 >= 2u && *(_WORD *)Src[1] == 92 )
    return 3221225531LL;
  LOBYTE(v6) = a2;
  result = IoConvertFileHandleToKernelHandle(Handle[1], v6, 32LL);
  if ( (int)result >= 0 )
  {
    v10 = ZwQueryObject(Handle[1], ObjectNameInformation, &ObjectInformation, 0x200u, ReturnLength);
    ZwClose(Handle[1]);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v11 = (__m128i)ObjectInformation;
    Source = ObjectInformation;
    a3->Length = 0;
    v12 = (unsigned __int16)_mm_cvtsi128_si32(v11) + 2 + v7;
    ReturnLength[1] = v12;
    if ( v12 > 0xFFFF )
      return 3221225529LL;
    a3->MaximumLength = v12;
    v13 = ExAllocatePool2(0x101uLL, (unsigned __int16)v12, 0x6E664D43u);
    a3->Buffer = (wchar_t *)v13;
    if ( !v13 )
      return 3221225626LL;
    RtlAppendUnicodeStringToString(a3, &Source);
    Length = a3->Length;
    if ( (_WORD)Length )
    {
      Buffer = a3->Buffer;
      if ( *(wchar_t *)((char *)Buffer + Length - 2) != 92 )
      {
        *(wchar_t *)((char *)Buffer + Length) = 92;
        a3->Length += 2;
      }
    }
    return (unsigned int)RtlAppendUnicodeStringToString(a3, (PCUNICODE_STRING)Src);
  }
  return result;
}
