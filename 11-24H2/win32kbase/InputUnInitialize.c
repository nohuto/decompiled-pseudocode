/*
 * XREFs of InputUnInitialize @ 0x1400D054C
 * Callers:
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x14005AA08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x14005AA28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     UnInitializeInputComponents @ 0x1400D0638 (UnInitializeInputComponents.c)
 *     isInputVirtualizationEnabled @ 0x1400D07E4 (isInputVirtualizationEnabled.c)
 *     ?Session_UnInitialize@CBaseInput@@SAJXZ @ 0x14020D978 (-Session_UnInitialize@CBaseInput@@SAJXZ.c)
 *     ?ivrUninitialize@@YAJXZ @ 0x140217B94 (-ivrUninitialize@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall InputUnInitialize(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdi
  void (**v3)(void); // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  void (*v7)(void); // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(W32GetUserSessionState(a1) + 19192) )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v8);
    UnInitializeInputComponents();
    if ( (unsigned __int8)isInputVirtualizationEnabled() )
    {
      v7 = *(void (**)(void))(W32GetUserSessionState(v1) + 19576);
      if ( v7 )
        v7();
      ivrUninitialize();
    }
    v2 = 3LL;
    v3 = (void (**)(void))(W32GetUserSessionState(v1) + 3128);
    do
    {
      (*v3)();
      v3 += 6;
      --v2;
    }
    while ( v2 );
    CBaseInput::Session_UnInitialize();
    v5 = 2LL;
    v6 = (_QWORD *)(W32GetUserSessionState(v4) + 16368);
    do
    {
      if ( *v6 )
        (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v6 + 16LL))(*v6, 1LL);
      *v6 = 0LL;
      v6 += 3;
      --v5;
    }
    while ( v5 );
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v8);
  }
}
