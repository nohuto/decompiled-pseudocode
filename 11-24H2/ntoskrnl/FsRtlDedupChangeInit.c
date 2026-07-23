/*
 * XREFs of FsRtlDedupChangeInit @ 0x14070A490
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     FsRtlpDedupChangeQueryValueKey @ 0x14070A744 (FsRtlpDedupChangeQueryValueKey.c)
 *     FsRtlpDedupChangeRegisterVolume @ 0x14070A880 (FsRtlpDedupChangeRegisterVolume.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlDedupChangeInit(_QWORD *a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
  int v9; // eax
  __int64 v10; // r8
  PVOID v11; // rdi
  unsigned int v12; // ebx
  _BYTE v14[4]; // [rsp+30h] [rbp-81h] BYREF
  int v15; // [rsp+34h] [rbp-7Dh] BYREF
  PVOID P; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v17[2]; // [rsp+40h] [rbp-71h] BYREF
  const wchar_t *v18; // [rsp+48h] [rbp-69h]
  _DWORD v19[2]; // [rsp+50h] [rbp-61h] BYREF
  const wchar_t *v20; // [rsp+58h] [rbp-59h]
  char v21; // [rsp+60h] [rbp-51h] BYREF

  v19[1] = 0;
  v17[1] = 0;
  *a1 = 0LL;
  v14[0] = 0;
  P = &v21;
  v15 = 92;
  v20 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\DedupChange";
  v19[0] = 8257660;
  v18 = L"Enabled";
  v17[0] = 1048590;
  v9 = FsRtlpDedupChangeQueryValueKey(v19, v17, &v15, &P, v14);
  v11 = P;
  if ( v9 < 0 || *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
  {
    LOBYTE(v10) = a4;
    v12 = FsRtlpDedupChangeRegisterVolume(a2, a3, v10, a5, a1);
  }
  else
  {
    v12 = -1073741823;
  }
  if ( v14[0] )
    ExFreePoolWithTag(v11, 0);
  return v12;
}
