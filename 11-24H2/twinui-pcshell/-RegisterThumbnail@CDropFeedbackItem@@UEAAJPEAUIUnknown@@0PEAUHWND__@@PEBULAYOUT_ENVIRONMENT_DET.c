/*
 * XREFs of ?RegisterThumbnail@CDropFeedbackItem@@UEAAJPEAUIUnknown@@0PEAUHWND__@@PEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180548310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180029D9C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1801524EC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedbackItem::RegisterThumbnail(
        CDropFeedbackItem *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        HWND a4,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a5)
{
  char *v5; // r12
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  struct IApplicationView *v10; // rdx
  int v11; // ebx
  HRESULT (__stdcall *v12)(IUnknown *, const IID *const, void **); // rbx
  char *v13; // rdi
  _QWORD *v14; // r15
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rdi
  _QWORD *v19; // r14
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, __int64, GUID *, char *); // rbx
  __int64 v21; // rdx
  unsigned int Color; // eax
  __int64 v23; // rdi
  unsigned int v24; // ebp
  __int64 (__fastcall *v25)(__int64, _QWORD, _QWORD, const struct LAYOUT_ENVIRONMENT_DETAILS *, GUID *, char *); // rbx
  __int64 v26; // rdx
  __int64 WindowForView; // rbp
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, char *); // rbx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v31; // [rsp+90h] [rbp+28h]

  v5 = (char *)this + 48;
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)a5;
  *(_OWORD *)((char *)this + 216) = *((_OWORD *)a5 + 1);
  *((_QWORD *)this + 29) = *((_QWORD *)a5 + 4);
  *((_QWORD *)this + 24) = a4;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
          a2,
          &GUID_3bb2b41c_a03f_4e91_87af_46a21b23a806,
          v5);
  if ( v11 >= 0 )
  {
    if ( a3 )
    {
      v12 = a3->lpVtbl->QueryInterface;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 7);
      v13 = (char *)this + 48;
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, char *))v12)(
              a3,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              (char *)this + 56);
      v14 = (_QWORD *)((char *)this + 56);
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    else
    {
      v14 = (_QWORD *)((char *)this + 56);
      v13 = v5;
    }
    v15 = *((_DWORD *)this + 17);
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
          {
            v18 = *(_QWORD *)v5;
            v19 = (_QWORD *)((char *)this + 184);
            v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v5 + 104LL);
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
            v11 = v20(v18, *v14, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 184);
            if ( v11 >= 0 )
            {
              (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v19 + 56LL))(*v19, 1LL);
              (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v19 + 32LL))(*v19, v21, 0LL, 0LL);
            }
          }
          else
          {
            return (unsigned int)-2147467259;
          }
        }
        else
        {
          Color = CImmersiveColor::GetColor(0x498u);
          v23 = *(_QWORD *)v5;
          v24 = Color;
          v25 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, const struct LAYOUT_ENVIRONMENT_DETAILS *, GUID *, char *))(**(_QWORD **)v5 + 104LL);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
          LODWORD(v31) = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
          HIDWORD(v31) = *((_DWORD *)this + 34) - *((_DWORD *)this + 32);
          v11 = v25(v23, *v14, v24, v31, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 184);
          if ( v11 >= 0 )
            return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 23)
                                                                                            + 32LL))(
                                   *((_QWORD *)this + 23),
                                   v26,
                                   0LL,
                                   0LL);
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      v11 = -2147467259;
      WindowForView = ApplicationViewHelpers::GetWindowForView(
                        *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))this + 5),
                        v10);
      if ( WindowForView )
      {
        v28 = *(_QWORD *)v13;
        v29 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v28 + 64LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
        v11 = v29(
                v28,
                *((_QWORD *)this + 7),
                WindowForView,
                0LL,
                0LL,
                0LL,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                (char *)this + 184);
        if ( v11 >= 0 )
        {
          if ( *((_BYTE *)this + 156) )
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 56LL))(*((_QWORD *)this + 23), 1LL);
        }
      }
    }
  }
  return (unsigned int)v11;
}
