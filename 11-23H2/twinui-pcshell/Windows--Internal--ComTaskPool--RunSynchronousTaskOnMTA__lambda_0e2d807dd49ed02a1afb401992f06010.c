/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0e2d807dd49ed02a1afb401992f06010___ @ 0x1801F6700
 * Callers:
 *     ?SetCustomResourceSet@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804F1A50 (-SetCustomResourceSet@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fou.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0e2d807dd49ed02a1afb401992f06010____long_&__lambda_0e2d807dd49ed02a1afb401992f06010___ @ 0x1801F55F8 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_0e2d807.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0e2d807dd49ed02a1afb401992f06010___(
        unsigned int a1,
        unsigned int a2,
        __int64 a3)
{
  void *v4; // r8
  unsigned int v5; // edi
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  int v9; // edi
  volatile signed __int32 *v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v13, (APTTYPEQUALIFIER *)&v14) < 0 || !(_DWORD)v13 || (_DWORD)v13 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v12 = 0;
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_0e2d807dd49ed02a1afb401992f06010____long____lambda_0e2d807dd49ed02a1afb401992f06010___(
         &v11,
         (__int64)&v12,
         v4);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v9 >= 0 )
    return v12;
  return (unsigned int)v9;
}
