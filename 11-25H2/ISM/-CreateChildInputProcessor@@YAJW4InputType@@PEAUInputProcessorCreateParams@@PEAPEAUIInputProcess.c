/*
 * XREFs of ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800373FC
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180037040 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@ButtonProcessor@@IEAAJXZ @ 0x180084ACC (-Initialize@ButtonProcessor@@IEAAJXZ.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1801B8DA0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801BE4F8 (-RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?IsSingleBit@@YAHJ@Z @ 0x1800375C0 (-IsSingleBit@@YAHJ@Z.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180038C90 (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateChildInputProcessor(unsigned int a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  int i; // r9d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  int InputProcessorWorker; // eax
  unsigned int v13; // ebx
  int v15[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v15 = GUID_NULL;
  if ( !(unsigned int)IsSingleBit(a1) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL,
      v15[0]);
  if ( !a2 || !*a2 || !a2[1] || (v6 = a2[2]) == 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL,
      v15[0]);
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, v15) < 0 )
    goto LABEL_22;
  v7 = *(_QWORD *)&GUID_NULL.Data1 - *(_QWORD *)v15;
  if ( *(_QWORD *)&GUID_NULL.Data1 == *(_QWORD *)v15 )
    v7 = *(_QWORD *)GUID_NULL.Data4 - *(_QWORD *)&v15[2];
  if ( !v7 )
LABEL_22:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070490LL,
      v15[0]);
  for ( i = 0; ; ++i )
  {
    if ( (unsigned __int64)i >= 0x13 )
      goto LABEL_23;
    v9 = 48LL * i;
    v10 = *(_QWORD *)v15 - *(_QWORD *)((char *)&unk_180244360 + v9);
    if ( *(_QWORD *)v15 == *(_QWORD *)((char *)&unk_180244360 + v9) )
      v10 = *(_QWORD *)&v15[2] - *(_QWORD *)((char *)&unk_180244360 + v9 + 8);
    if ( !v10 )
      break;
  }
  if ( i < 0 )
LABEL_23:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD3,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070490LL,
      v15[0]);
  v11 = (unsigned int)(i + 1);
  if ( *(_DWORD *)((char *)&unk_180244360 + v9 + 16) != a1 )
    v11 = 0LL;
  InputProcessorWorker = CreateInputProcessorWorker(a2, a3, a1, v11);
  v13 = InputProcessorWorker;
  if ( InputProcessorWorker >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCF,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
    (const char *)(unsigned int)InputProcessorWorker,
    v15[0]);
  return v13;
}
