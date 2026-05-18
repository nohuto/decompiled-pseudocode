/*
 * XREFs of sub_18000FE70 @ 0x18000FE70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000DF34 @ 0x18000DF34 (sub_18000DF34.c)
 *     sub_18000FCF0 @ 0x18000FCF0 (sub_18000FCF0.c)
 *     sub_18000FE08 @ 0x18000FE08 (sub_18000FE08.c)
 *     __alloca_probe @ 0x1800D4F40 (__alloca_probe.c)
 */

const char *__fastcall sub_18000FE70(__int64 a1)
{
  volatile signed __int32 **v1; // rdi
  int v2; // eax
  volatile signed __int32 *cbMultiByte; // rbp
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v5; // rax
  WCHAR WideCharStr[2048]; // [rsp+40h] [rbp-1018h] BYREF

  v1 = (volatile signed __int32 **)(a1 + 184);
  if ( *(_QWORD *)(a1 + 184) )
    return (const char *)((unsigned __int64)(*v1 + 1) & -(__int64)(*v1 != 0LL));
  sub_18000DF34(WideCharStr, 2048LL, a1 + 16);
  v2 = WideCharToMultiByte(0, 0, WideCharStr, -1, 0LL, 0, 0LL, 0LL);
  cbMultiByte = (volatile signed __int32 *)v2;
  if ( !v2 )
  {
    sub_18000FE08((__int64)v1);
LABEL_6:
    WideCharToMultiByte(
      0,
      0,
      WideCharStr,
      -1,
      (LPSTR)((unsigned __int64)(*v1 + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)*v1 >> 64)),
      (int)cbMultiByte,
      0LL,
      0LL);
    return (const char *)((unsigned __int64)(*v1 + 1) & -(__int64)(*v1 != 0LL));
  }
  ProcessHeap = GetProcessHeap();
  v5 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, (SIZE_T)(cbMultiByte + 1));
  if ( v5 )
  {
    *v5 = 0;
    sub_18000FCF0(v1, v5, cbMultiByte);
    goto LABEL_6;
  }
  return "WIL Exception";
}
