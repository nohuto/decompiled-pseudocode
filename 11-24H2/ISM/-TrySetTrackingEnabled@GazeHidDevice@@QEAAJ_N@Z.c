/*
 * XREFs of ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x1800E06F4
 * Callers:
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x1800DD024 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BD18 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x180183A00 (-CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z.c)
 *     ?SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z @ 0x180184344 (-SetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEAXKPEADK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidDevice::TrySetTrackingEnabled(GazeHidDevice *this, unsigned __int8 a2)
{
  int v2; // esi
  char *v4; // r14
  const struct std::nothrow_t *v5; // rdx
  int v6; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // eax
  const struct std::nothrow_t *v11; // rdx
  void *v12[2]; // [rsp+50h] [rbp-20h] BYREF
  char v13; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  int v15; // [rsp+A0h] [rbp+30h] BYREF
  int v16; // [rsp+B0h] [rbp+40h] BYREF
  int v17; // [rsp+B8h] [rbp+48h] BYREF

  v2 = a2;
  v12[0] = 0LL;
  v15 = 0;
  v12[1] = v12;
  v13 = 1;
  v4 = (char *)this + 128;
  v6 = GazeHidParser::CreateReportForProperty((char *)this + 128, 1LL, v12, &v15);
  if ( v6 < 0 )
  {
LABEL_2:
    if ( v12[0] )
      operator delete(v12[0], v5);
    return (unsigned int)v6;
  }
  v16 = v2;
  v8 = v15;
  v9 = GazeHidParser::SetPropertyValue(v4, v5, &v16);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x104,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_2;
  }
  v17 = 0;
  v10 = NtRIMDeviceIoControl(*((_QWORD *)this + 1), *((_QWORD *)this + 2), 721297LL, v12[0], v8, 0LL, 0, &v17, 0);
  if ( v10 < 0 )
  {
    v6 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x10F,
           (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
           (const char *)(unsigned int)v10);
    goto LABEL_2;
  }
  if ( v12[0] )
    operator delete(v12[0], v11);
  return 0LL;
}
