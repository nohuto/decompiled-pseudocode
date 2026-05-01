/*
 * XREFs of ?Initialize@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@345@@Z @ 0x18002ACA0
 * Callers:
 *     ?Split@View@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@456@0@Z @ 0x18002F970 (-Split@View@-$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultHash@PEAUHSTRING__@@@Internal@C.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // rsi
  __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v14; // [rsp+48h] [rbp+28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF
  __int64 v16; // [rsp+58h] [rbp+38h] BYREF

  v14 = 0;
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v14);
  if ( v4 < 0 )
    goto LABEL_17;
  v16 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a2)(
         a2,
         &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204,
         &v16);
  v4 = v5;
  if ( v5 == -2147467262 )
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    RoTransformError(2147500034LL, 2147549183LL, 0LL);
  }
  else if ( v5 >= 0 )
  {
    v6 = v16;
    v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 48LL);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v4 = v7(v6, &v15);
  }
  v8 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v4 < 0 )
  {
LABEL_17:
    v10 = v15;
  }
  else
  {
    v9 = v14;
    v10 = v15;
    v11 = v15;
    if ( *(_QWORD *)(a1 + 96) != v15 )
    {
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        v10 = v15;
      }
      v12 = *(_QWORD *)(a1 + 96);
      *(_QWORD *)(a1 + 96) = v11;
      if ( v12 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        v10 = v15;
      }
    }
    *(_DWORD *)(a1 + 104) = v9;
    *(_BYTE *)(a1 + 109) = 1;
    v4 = 0;
  }
  if ( v10 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v4;
}
