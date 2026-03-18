/*
 * XREFs of ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x18012B5D4
 * Callers:
 *     ?CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190EF4 (-CalculateFrameTargets@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x18008DEE0 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _anonymous_namespace_::BypassGestureTargeting @ 0x1801FFE1C (_anonymous_namespace_--BypassGestureTargeting.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractions(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  void (__fastcall ***v5)(_QWORD); // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  void (__fastcall ***v8)(_QWORD); // rax
  void (__fastcall ***v9)(_QWORD); // rcx
  void (__fastcall ***v10)(_QWORD); // rsi
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  void (__fastcall *v14)(__int64 *, _BOOL8 *); // rbx
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v17)(_QWORD); // [rsp+58h] [rbp-A8h] BYREF
  _BOOL8 v18; // [rsp+60h] [rbp-A0h] BYREF
  void (__fastcall ***v19)(_QWORD); // [rsp+68h] [rbp-98h] BYREF
  void (__fastcall ***v20)(_QWORD); // [rsp+70h] [rbp-90h] BYREF
  void (__fastcall ***v21)(_QWORD); // [rsp+78h] [rbp-88h] BYREF
  __int16 v22; // [rsp+80h] [rbp-80h] BYREF
  char v23; // [rsp+82h] [rbp-7Eh]
  __int128 v24; // [rsp+88h] [rbp-78h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+A0h] [rbp-60h]
  __int16 v27; // [rsp+A8h] [rbp-58h] BYREF
  char v28; // [rsp+AAh] [rbp-56h]
  __int128 v29; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  __int128 v32; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-20h]
  int v34; // [rsp+E8h] [rbp-18h]
  _DWORD v35[4]; // [rsp+F0h] [rbp-10h] BYREF

  v2 = *a1;
  v17 = 0LL;
  v20 = 0LL;
  v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v2 + 112))(a1);
  v21 = v5;
  v6 = (__int64)v5;
  if ( v5 )
    (**v5)(v5);
  v35[1] = 0;
  v35[2] = 0;
  v35[3] = 0;
  v29 = 0LL;
  v35[0] = 0;
  v24 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v31 = 0;
  v27 = 0;
  v28 = 0;
  v25 = 0LL;
  v26 = 0;
  v22 = 0;
  v23 = 0;
  v33 = 0LL;
  v34 = 0;
  v16 = 3;
  if ( (unsigned __int8)anonymous_namespace_::BypassGestureTargeting(a1, a2) )
  {
    v7 = *a1;
    v16 = 2;
    v8 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64 *))(v7 + 16))(a1);
    v9 = v17;
    v10 = v8;
    if ( v17 == v8 )
      goto LABEL_9;
    if ( v8 )
    {
      (**v8)(v8);
      v9 = v17;
    }
    v18 = (_BOOL8)v9;
    v17 = v10;
    Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v18);
  }
  v9 = v17;
LABEL_9:
  v11 = v16;
  if ( v16 != 3 )
    goto LABEL_13;
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v17);
  if ( (int)CGestureTargetingManager::ProcessInteractionTree(
              a1,
              v6,
              a2,
              (__int64)&v27,
              (__int64)&v22,
              (__int64)&v32,
              (__int64)v35,
              &v16,
              &v17,
              &v20) < 0 )
    goto LABEL_23;
  v11 = v16;
  if ( v16 != 3 )
  {
    v9 = v17;
LABEL_13:
    if ( v11 != 4 )
    {
      v19 = v9;
      v18 = v11 != 1;
      if ( v9 )
      {
        (**v9)(v9);
        v11 = v16;
      }
      if ( v11 == 2 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 112))(a1);
        if ( v17 == (void (__fastcall ***)(_QWORD))v12 )
          Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v19);
      }
      (*(void (__fastcall **)(__int64 *, _BOOL8 *))(*a1 + 88))(a1, &v18);
      Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v19);
    }
  }
  v13 = *a1;
  v18 = 1LL;
  v19 = v20;
  v14 = *(void (__fastcall **)(__int64 *, _BOOL8 *))(v13 + 104);
  if ( v20 )
    (**v20)(v20);
  v14(a1, &v18);
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v19);
LABEL_23:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v32);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v24);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v29);
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v20);
  return Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v17);
}
