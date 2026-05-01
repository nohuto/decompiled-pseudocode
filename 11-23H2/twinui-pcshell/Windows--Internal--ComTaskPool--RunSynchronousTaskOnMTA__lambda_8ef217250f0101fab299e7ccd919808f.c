/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8ef217250f0101fab299e7ccd919808f___ @ 0x1801F68B0
 * Callers:
 *     ?get_WindowProperties@UwpWindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804F3210 (-get_WindowProperties@UwpWindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Wind.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef217250f0101fab299e7ccd919808f____long_&__lambda_8ef217250f0101fab299e7ccd919808f___ @ 0x1801F5720 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8ef2172.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_8ef217250f0101fab299e7ccd919808f___(
        unsigned int a1,
        unsigned int a2,
        __int128 *a3)
{
  unsigned int v5; // edi
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  int v9; // edi
  int v11; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = a1;
  if ( CoGetApartmentType((APTTYPE *)&v14, (APTTYPEQUALIFIER *)&v11) < 0 || !v14 || v14 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v13 = 0;
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef217250f0101fab299e7ccd919808f____long____lambda_8ef217250f0101fab299e7ccd919808f___(
         &v12,
         (__int64)&v13,
         a3);
  v7 = *v6;
  *v6 = 0LL;
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v8);
  }
  v9 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v9 >= 0 )
    return v13;
  return (unsigned int)v9;
}
