/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c5527e6a5cdcf12967d2d97adb21a98f___ @ 0x1801E4190
 * Callers:
 *     ?SetPositionAndViewData@UwpWindowWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1801E4120 (-SetPositionAndViewData@UwpWindowWrapperBase@@UEAAJPEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180042F80 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_c5527e6a5cdcf12967d2d97adb21a98f___(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  APTTYPEQUALIFIER v10[10]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  v10[0] = APTTYPEQUALIFIER_NONE;
  if ( CoGetApartmentType((APTTYPE *)&v11, v10) < 0 || !v11 || v11 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v12 = 0;
  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
    *((_OWORD *)v7 + 1) = *(_OWORD *)a3;
    v7[4] = *(_QWORD *)(a3 + 16);
    *v7 = &off_1807201F0;
    v7[5] = &v12;
  }
  else
  {
    v7 = 0LL;
  }
  v8 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v12;
  return (unsigned int)v8;
}
