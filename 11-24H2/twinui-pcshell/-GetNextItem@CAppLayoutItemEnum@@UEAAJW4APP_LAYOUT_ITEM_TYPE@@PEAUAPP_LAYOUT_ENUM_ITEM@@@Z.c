/*
 * XREFs of ?GetNextItem@CAppLayoutItemEnum@@UEAAJW4APP_LAYOUT_ITEM_TYPE@@PEAUAPP_LAYOUT_ENUM_ITEM@@@Z @ 0x1806C4240
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18006E894 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAppLayoutItemEnum::GetNextItem(__int64 a1, int a2, __int64 a3)
{
  int v5; // esi
  int v6; // eax
  unsigned int v7; // r12d
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, GUID *, __int64 *); // rdi
  __int64 *v13; // rax
  struct IApplicationView *v14; // rdx
  ApplicationViewHelpers *v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  int v22; // [rsp+78h] [rbp+48h]
  ApplicationViewHelpers *v23; // [rsp+80h] [rbp+50h] BYREF

  v22 = a2;
  *(_DWORD *)(a3 + 56) = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)a3 = 0LL;
  SetRectEmpty((LPRECT)(a3 + 24));
  SetRectEmpty((LPRECT)(a3 + 40));
  v5 = -2147319765;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 72LL))(*(_QWORD *)(a1 + 16));
  if ( v6 )
  {
    v7 = v6 - 1;
    while ( *(_DWORD *)(a1 + 32) <= v7 && v5 == -2147319765 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v21 = 0LL;
      v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 96LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
      if ( v9(v8, *(unsigned int *)(a1 + 32), &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v21) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
        if ( (v10 & v22) != 0 )
        {
          v5 = 0;
          if ( v10 != 1 )
            goto LABEL_11;
          v11 = v21;
          v23 = 0LL;
          v12 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v21 + 48LL);
          v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v23);
          v5 = v12(v11, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v13);
          if ( v5 >= 0 )
          {
            v15 = v23;
            *(_QWORD *)(a3 + 16) = v23;
            *(_QWORD *)(a3 + 8) = ApplicationViewHelpers::GetApplicationFromView(v15, v14);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
          if ( v5 >= 0 )
          {
LABEL_11:
            v16 = v21;
            *(_QWORD *)a3 = v21;
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 56LL))(v16, 0LL, a3 + 24);
            (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 56LL))(v21, 1LL, a3 + 40);
            *(_DWORD *)(a3 + 56) = *(_DWORD *)(a1 + 32);
          }
        }
      }
      v17 = *(_DWORD *)(a1 + 32);
      v18 = v17 + 1;
      v19 = v17 - 1;
      if ( *(_DWORD *)(a1 + 24) != -1 )
        v19 = v18;
      *(_DWORD *)(a1 + 32) = v19;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    }
  }
  return (unsigned int)v5;
}
