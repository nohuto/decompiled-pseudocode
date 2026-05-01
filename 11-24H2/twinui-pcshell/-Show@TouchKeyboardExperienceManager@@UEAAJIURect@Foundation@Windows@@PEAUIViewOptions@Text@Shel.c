/*
 * XREFs of ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801E0330
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x18004EC68 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ??4?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800502D0 (--4-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEA.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180050D8C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18029185C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@URect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAPEAURect@Foundation@Windows@@QEAU234@$$QEAU234@@Z @ 0x180469BDC (--$_Emplace_reallocate@URect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocato.c)
 *     ??$_Reallocate@$0A@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x180469D40 (--$_Reallocate@$0A@@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::Show(__int64 a1, unsigned int a2, float *a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  _OWORD *v19; // rbx
  int v20; // eax
  int v21; // esi
  ViewOptions *v22; // rax
  float v23; // xmm0_4
  float v24; // xmm1_4
  int v25; // eax
  int v27; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+3Ch] [rbp-C4h] BYREF
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD *v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+68h] [rbp-98h]
  int v37; // [rsp+6Ch] [rbp-94h]
  ViewOptions v38[14]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v39[4]; // [rsp+A8h] [rbp-58h] BYREF
  int v40; // [rsp+ACh] [rbp-54h]
  int v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B4h] [rbp-4Ch]
  __int128 v43; // [rsp+B8h] [rbp-48h]
  __int128 v44; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-28h]
  __int128 v46; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v47; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v27 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v47 = 0LL;
  v28 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 48LL))(a4, &v27);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 6273LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_41:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
    return v9;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 56LL))(a4, (char *)&v27 + 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 6274LL;
    goto LABEL_5;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 64LL))(a4, (char *)&v27 + 2);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 72LL))(a4, (char *)&v27 + 3);
    v9 = v13;
    if ( v13 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 80LL))(a4, &v30);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6277LL;
        goto LABEL_5;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 88LL))(a4, &v31);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6278LL;
        goto LABEL_5;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 96LL))(a4, &v32);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6279LL;
        goto LABEL_5;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a4 + 104LL))(a4, &v47);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6280LL;
        goto LABEL_5;
      }
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a4 + 112LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v28);
      v8 = v15(a4, &v28);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6281LL;
        goto LABEL_5;
      }
      v33 = 0LL;
      v34 = 0LL;
      v29 = 0;
      v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v28 + 56LL))(v28, &v29);
      v9 = v16;
      if ( v16 >= 0 )
      {
        v35 = v29;
        if ( v29 )
          std::vector<Windows::Foundation::Rect>::_Reallocate<0>(&v33, &v35);
        v18 = 0;
        v19 = (_OWORD *)*((_QWORD *)&v33 + 1);
        while ( v18 < v29 )
        {
          v46 = 0LL;
          v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v28 + 48LL))(v28, v18, &v46);
          v21 = v20;
          if ( v20 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1892,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v20);
            std::vector<Geometry::CRect>::_Tidy((__int64)&v33);
            v9 = v21;
            goto LABEL_41;
          }
          if ( v19 == v34 )
          {
            std::vector<Windows::Foundation::Rect>::_Emplace_reallocate<Windows::Foundation::Rect>(&v33, v19, &v46);
            v19 = (_OWORD *)*((_QWORD *)&v33 + 1);
          }
          else
          {
            *v19++ = v46;
            *((_QWORD *)&v33 + 1) = v19;
          }
          ++v18;
        }
        v44 = 0LL;
        v45 = 0LL;
        v39[0] = (_BYTE)v27 != 0;
        v39[1] = BYTE1(v27) != 0;
        v39[2] = BYTE2(v27) != 0;
        v39[3] = HIBYTE(v27) != 0;
        v40 = v30;
        v41 = v31;
        v42 = v32;
        v43 = v47;
        std::vector<Windows::Foundation::Rect>::operator=(&v44, &v33);
        v22 = ViewOptions::ViewOptions(v38, (const struct ViewOptions *)v39);
        v23 = *a3;
        v24 = a3[1];
        LODWORD(v35) = (int)*a3;
        HIDWORD(v35) = (int)v24;
        v36 = (int)(float)(v23 + a3[2]);
        v37 = (int)(float)(v24 + a3[3]);
        v25 = TouchKeyboardExperienceManager::OnInputAppRequestedShow(a1 - 200, a2, &v35, v22);
        v9 = v25;
        if ( v25 >= 0 )
        {
          std::vector<Geometry::CRect>::_Tidy((__int64)&v44);
          std::vector<Geometry::CRect>::_Tidy((__int64)&v33);
          v9 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18A1,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v25);
          std::vector<Geometry::CRect>::_Tidy((__int64)&v44);
          std::vector<Geometry::CRect>::_Tidy((__int64)&v33);
        }
        goto LABEL_41;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x188D,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      std::vector<Geometry::CRect>::_Tidy((__int64)&v33);
      v17 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1884,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      v14 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1883,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    v12 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return v9;
}
