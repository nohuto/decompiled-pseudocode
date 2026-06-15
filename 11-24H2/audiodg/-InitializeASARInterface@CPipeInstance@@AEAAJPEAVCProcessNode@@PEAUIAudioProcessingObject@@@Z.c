/*
 * XREFs of ?InitializeASARInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400044E0
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003174 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializeASARInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+28h] [rbp-40h] BYREF
  GUID v10; // [rsp+2Ch] [rbp-3Ch]
  __int128 v11; // [rsp+3Ch] [rbp-2Ch]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
         &v8) < 0
    || (v12 = 0,
        v9 = 40,
        v10 = GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5,
        v11 = *((_OWORD *)this + 20),
        v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
               a3,
               40LL,
               &v9),
        v7 = v6,
        v6 >= 0) )
  {
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF86,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v6,
      v8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    return v7;
  }
}
