/*
 * XREFs of ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x180125540
 * Callers:
 *     s_midiOpenPort @ 0x1800FADD0 (s_midiOpenPort.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180077BBC (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FilterInstantiate2(const unsigned __int16 *a1, __int64 a2, void **a3)
{
  HANDLE FileW; // rdi
  signed int LastError; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  FileW = CreateFileW(a1, 0xC0000000, 0, 0LL, 3u, 0x40800080u, 0LL);
  v9 = (__int64)FileW;
  if ( (((unsigned __int64)FileW + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    goto LABEL_10;
  LastError = GetLastError();
  v6 = LastError;
  if ( LastError )
  {
    if ( LastError <= 0 )
      goto LABEL_6;
  }
  else
  {
    LOWORD(v6) = 31;
  }
  v6 = (unsigned __int16)v6 | 0x80070000;
LABEL_6:
  if ( (v6 & 0x80000000) == 0 )
  {
LABEL_10:
    v9 = -1LL;
    *a3 = FileW;
    wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v9);
    return 0LL;
  }
  if ( v6 + 2147024894 > 1 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47D,
      (int)"avcore\\audiocore\\lib\\kslib\\kslib.cpp",
      (const char *)v6);
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)&v9);
  return v6;
}
