/*
 * XREFs of ?OnDeviceRemoval@GazeProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B1060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GazeProcessor::OnDeviceRemoval(GazeProcessor *this, struct DeviceInfo *a2)
{
  __int64 v2; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  int v7[22]; // [rsp+20h] [rbp-78h] BYREF
  char v8; // [rsp+78h] [rbp-20h]
  int v9; // [rsp+79h] [rbp-1Fh]
  __int16 v10; // [rsp+7Dh] [rbp-1Bh]
  char v11; // [rsp+7Fh] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = *((_QWORD *)this + 38);
  if ( !v2 )
    return 0LL;
  memset_0(v7, 0, sizeof(v7));
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v7[1] = **((_DWORD **)this + 5);
  v7[0] = 0x4000;
  v7[6] = 96;
  v7[10] = 2;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 24LL))(v2, v7);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\lib\\gazeprocessor.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
