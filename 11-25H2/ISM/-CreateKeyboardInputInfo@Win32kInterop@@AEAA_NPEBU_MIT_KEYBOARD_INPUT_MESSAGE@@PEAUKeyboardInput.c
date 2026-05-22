/*
 * XREFs of ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x180050C60
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x180050B70 (std--_Func_impl_no_alloc__lambda_1b0efb71d9072eeea077d490cef5cfbb__void__MIT_KEYBOARD_INPUT_MESS.c)
 *     ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800EFFE4 (-ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 * Callees:
 *     ??$As@UIInputDeviceInfoStore@@@?$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputDeviceInfoStore@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800510D8 (--$As@UIInputDeviceInfoStore@@@-$ComPtr@UISystemInputRouter@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18009D272 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall Win32kInterop::CreateKeyboardInputInfo(
        Win32kInterop *this,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE *a2,
        struct KeyboardInputInfo *a3)
{
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v6; // rax
  unsigned int v7; // esi
  __int64 v8; // rdx
  unsigned __int64 i; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  const struct _MIT_KEYBOARD_INPUT_MESSAGE *v15; // rax
  __int64 v16; // rdx
  _WORD *v17; // rcx
  __int64 v18; // rsi
  __int16 v19; // ax
  _WORD *v20; // rax
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // rdx
  _OWORD *v24; // rcx
  __int64 v26; // rcx
  int v27[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v29[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h]
  int v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  char v33; // [rsp+61h] [rbp-9Fh]
  __int16 v34; // [rsp+68h] [rbp-98h]
  __int16 v35; // [rsp+6Ah] [rbp-96h]
  __int16 v36; // [rsp+6Ch] [rbp-94h]
  _BYTE v37[32]; // [rsp+6Eh] [rbp-92h] BYREF
  __int16 v38; // [rsp+8Eh] [rbp-72h]
  _BYTE v39[256]; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+190h] [rbp+90h]
  __int16 v41; // [rsp+194h] [rbp+94h]
  bool v42; // [rsp+196h] [rbp+96h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v6 = (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a2 + 344);
  if ( *(_QWORD *)a2 )
    v6 = a2;
  v7 = *(_DWORD *)v6;
  v27[0] = *(_DWORD *)v6;
  v8 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v8 = 0x100000001B3LL * (*((unsigned __int8 *)v27 + i) ^ (unsigned __int64)v8);
  v10 = 2 * (v8 & *((_QWORD *)this + 14));
  v11 = *((_QWORD *)this + 11);
  v12 = *(_QWORD *)(v11 + 8 * v10 + 8);
  if ( v12 == *((_QWORD *)this + 9) )
  {
LABEL_6:
    v12 = 0LL;
  }
  else
  {
    while ( v7 != *(_DWORD *)(v12 + 16) )
    {
      if ( v12 == *(_QWORD *)(v11 + 8 * v10) )
        goto LABEL_6;
      v12 = *(_QWORD *)(v12 + 8);
    }
  }
  if ( v12 )
    goto LABEL_12;
  *(_QWORD *)v27 = 0LL;
  v13 = Microsoft::WRL::ComPtr<ISystemInputRouter>::As<IInputDeviceInfoStore>((char *)this + 48, v27);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x16C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v13,
      v27[0]);
  v28 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)v27 + 24LL))(*(_QWORD *)v27, v7, &v28) >= 0 )
  {
    v14 = *(_QWORD *)v27;
    if ( *(_QWORD *)v27 )
    {
      *(_QWORD *)v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
LABEL_12:
    memset_0(v29, 0, 0x170uLL);
    v31 = 368;
    v15 = (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a2 + 344);
    if ( *(_QWORD *)a2 )
      v15 = a2;
    v29[1] = *(_DWORD *)v15;
    v32 = *((_QWORD *)a2 + 42);
    v41 = *((_WORD *)a2 + 166);
    v29[0] = 4;
    v29[2] = *((_DWORD *)a2 + 78);
    v30 = *((_QWORD *)a2 + 40);
    v42 = *((_DWORD *)a2 + 82) != 0;
    v34 = *((_WORD *)a2 + 4);
    v35 = *((_WORD *)a2 + 5);
    v36 = *((_WORD *)a2 + 6);
    v38 = *((_WORD *)a2 + 135);
    v40 = *((_DWORD *)a2 + 68);
    v33 = 1;
    v16 = 16LL;
    v17 = v37;
    v18 = 2LL;
    do
    {
      if ( v16 == -2147483630 )
        break;
      v19 = *(_WORD *)((char *)v17 + a2 - (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)v37 + 276);
      if ( !v19 )
        break;
      *v17++ = v19;
      --v16;
    }
    while ( v16 );
    v20 = v17 - 1;
    if ( v16 )
      v20 = v17;
    *v20 = 0;
    v21 = (_OWORD *)((char *)a2 + 14);
    if ( a2 == (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)-14LL )
    {
      memset_0(v39, 0, sizeof(v39));
      *(_DWORD *)_o__errno() = 22;
      invalid_parameter_noinfo();
    }
    else
    {
      v22 = v39;
      v23 = 2LL;
      do
      {
        *v22 = *v21;
        v22[1] = v21[1];
        v22[2] = v21[2];
        v22[3] = v21[3];
        v22[4] = v21[4];
        v22[5] = v21[5];
        v22[6] = v21[6];
        v22 += 8;
        *(v22 - 1) = v21[7];
        v21 += 8;
        --v23;
      }
      while ( v23 );
    }
    v24 = v29;
    do
    {
      *(_OWORD *)a3 = *v24;
      *((_OWORD *)a3 + 1) = v24[1];
      *((_OWORD *)a3 + 2) = v24[2];
      *((_OWORD *)a3 + 3) = v24[3];
      *((_OWORD *)a3 + 4) = v24[4];
      *((_OWORD *)a3 + 5) = v24[5];
      *((_OWORD *)a3 + 6) = v24[6];
      a3 = (struct KeyboardInputInfo *)((char *)a3 + 128);
      *((_OWORD *)a3 - 1) = v24[7];
      v24 += 8;
      --v18;
    }
    while ( v18 );
    *(_OWORD *)a3 = *v24;
    *((_OWORD *)a3 + 1) = v24[1];
    *((_OWORD *)a3 + 2) = v24[2];
    *((_OWORD *)a3 + 3) = v24[3];
    *((_OWORD *)a3 + 4) = v24[4];
    *((_OWORD *)a3 + 5) = v24[5];
    *((_OWORD *)a3 + 6) = v24[6];
    return 1;
  }
  v26 = *(_QWORD *)v27;
  if ( *(_QWORD *)v27 )
  {
    *(_QWORD *)v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  return 0;
}
