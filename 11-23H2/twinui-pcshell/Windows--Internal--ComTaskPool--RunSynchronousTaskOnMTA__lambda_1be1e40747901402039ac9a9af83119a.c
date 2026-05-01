/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1be1e40747901402039ac9a9af83119a___ @ 0x1804E3BB0
 * Callers:
 *     ?WindowAdded@WindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@UWindowId@3456@W4WindowCreatedType@@@Z @ 0x1804ED940 (-WindowAdded@WindowWrapperBase@@UEAAJPEAUIWindow@WindowManagement@ApplicationModel@Internal@Wind.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1be1e40747901402039ac9a9af83119a____long_&__lambda_1be1e40747901402039ac9a9af83119a___ @ 0x1804E312C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_1be1e40.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1be1e40747901402039ac9a9af83119a___(
        unsigned int a1,
        unsigned int a2,
        _OWORD *a3)
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
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_1be1e40747901402039ac9a9af83119a____long____lambda_1be1e40747901402039ac9a9af83119a___(
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
