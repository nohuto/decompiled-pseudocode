/*
 * XREFs of ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAUIInputTarget@@H@Z @ 0x18002FDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x180014F08 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 *     ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x180030308 (-CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA-AUInputInteropMessageStorage@1@PEBUPoi.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18003054C (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Win32kInterop::DeliverInputToTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        int a5)
{
  __int64 v8; // rdx
  int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // rcx
  int (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int v14; // esi
  const struct _MIT_INPUT_INTEROP_MESSAGE *v15; // rbx
  unsigned int i; // edx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 *v19; // r9
  struct _MIT_INPUT_INTEROP_MESSAGE *v20[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+58h] [rbp+28h] BYREF

  if ( (*(_DWORD *)a2 & 0x1000) != 0 )
  {
    if ( *(_BYTE *)(a2 + 126) )
      ((void (__fastcall *)(__int64, _QWORD))Win32kInterop::s_pfnMTCallback)(a2 + 128, 0LL);
    return 0LL;
  }
  v8 = 2LL;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    v20[0] = *(struct _MIT_INPUT_INTEROP_MESSAGE **)(a2 + 304);
    if ( a4 )
    {
      v21 = *(_QWORD *)(a2 + 56);
      v19 = &v21;
      v8 = 1LL;
    }
    else
    {
      v19 = 0LL;
    }
    NtMITPostMouseInputMessage(v20, v8, 0LL, v19, v20[0]);
    return 0LL;
  }
  v21 = 0LL;
  if ( !a4 )
  {
    v9 = a5;
    v10 = 0LL;
    goto LABEL_5;
  }
  v13 = **a4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  if ( v13(a4, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v21) >= 0 )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 64LL))(v21);
    if ( v14 )
    {
      Win32kInterop::CreateInputInteropMessageFromInputInfo(v20, a2);
      v15 = v20[0];
      for ( i = 0; i < *(_DWORD *)(a2 + 316); ++i )
        *((_DWORD *)v15 + 60 * i + 90) = v14;
      PointerInputMediator::OnForwardedToGestureTargeting(v15);
      ((void (__fastcall *)(const struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v15, 0LL);
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v20);
      goto LABEL_6;
    }
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 56LL))(v21);
    v9 = 0;
LABEL_5:
    Win32kInterop::RoutePointerFrame(a2, a3, v10, v9);
LABEL_6:
    v11 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  Win32kInterop::RoutePointerFrame(a2, a3, 0LL, 1);
  v17 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64))(*a4)[3])(a4, a2);
  v18 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v17;
}
