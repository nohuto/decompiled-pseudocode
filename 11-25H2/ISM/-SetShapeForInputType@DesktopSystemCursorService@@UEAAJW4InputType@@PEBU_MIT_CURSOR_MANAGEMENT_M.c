/*
 * XREFs of ?SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180077A90
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EAF80 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800F1228 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH0H@Z @ 0x1800F7B20 (-ChangeDwmCursorShape@Cursor@InputTraceLogging@@SAX_N0HHHH0H@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800F9E60 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?ClearShape@HardwareCursorVisual@SystemCursors@@QEAAJXZ @ 0x1800FA238 (-ClearShape@HardwareCursorVisual@SystemCursors@@QEAAJXZ.c)
 *     ?SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z @ 0x1800FA4E4 (-SetShape@HardwareCursorVisual@SystemCursors@@QEAAJPEAXIIII_NM@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopSystemCursorService::SetShapeForInputType(__int64 a1, int a2, __int64 a3)
{
  const char *v6; // r9
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  __int64 v9; // r12
  char *v10; // rdi
  DWORD LastError; // eax
  unsigned __int64 v12; // r8
  char *v13; // r15
  signed __int64 v14; // rax
  unsigned __int64 v15; // r14
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // r14d
  char v22; // r12
  int v23; // r15d
  __int64 v24; // rdx
  int v25; // r8d
  int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // [rsp+20h] [rbp-40h]
  unsigned int v30; // [rsp+20h] [rbp-40h]
  void *v31[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v34; // [rsp+A8h] [rbp+48h] BYREF

  v7 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    if ( a2 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\li"
                      "b\\desktopsystemcursorservice.cpp",
        v6);
    if ( *(_DWORD *)(a3 + 8) )
    {
      v8 = *(_DWORD *)(a3 + 12);
      *(_OWORD *)v31 = 0LL;
      v9 = 0LL;
      v32 = 0LL;
      if ( *(_DWORD *)(a1 + 36) )
      {
        std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v31);
        v9 = v32;
      }
      v34 = 0;
      v10 = (char *)v31[0];
      if ( !(unsigned int)NtUserGetDwmCursorShape(v8, v31[0], *(unsigned int *)(a1 + 36), &v34) )
      {
        LastError = GetLastError();
        if ( LastError == 87 )
        {
LABEL_44:
          std::vector<unsigned char>::_Tidy(v31);
          return v7;
        }
        if ( LastError != 8 )
        {
LABEL_24:
          v7 = -2147467259;
          goto LABEL_44;
        }
        v12 = v34;
        if ( v34 > 0x2000000 )
        {
          v7 = -2147024882;
          goto LABEL_44;
        }
        if ( v34 <= 0x200000 )
          *(_DWORD *)(a1 + 36) = v34;
        v13 = (char *)v31[1];
        if ( v31[1] != v10 )
          v13 = v10;
        v31[1] = v13;
        v14 = v13 - v10;
        if ( v12 >= v13 - v10 )
        {
          if ( v12 > v13 - v10 )
          {
            if ( v12 <= v9 - (__int64)v10 )
            {
              v15 = v12 - v14;
              memset_0(v13, 0, v12 - v14);
              v31[1] = &v13[v15];
            }
            else
            {
              std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(v31);
              v10 = (char *)v31[0];
            }
            v12 = v34;
          }
        }
        else
        {
          v31[1] = &v10[v12];
        }
        if ( !(unsigned int)NtUserGetDwmCursorShape(v8, v10, v12, &v34) )
        {
          if ( GetLastError() == 87 )
            goto LABEL_44;
          goto LABEL_24;
        }
      }
      v16 = *((unsigned int *)v10 + 1);
      v17 = v16 * *(unsigned int *)v10;
      if ( v17 > 0xFFFFFFFF )
      {
        v19 = 132LL;
      }
      else
      {
        v18 = 4LL * (unsigned int)v17;
        if ( v18 > 0xFFFFFFFF )
        {
          v19 = 133LL;
        }
        else
        {
          if ( (int)v18 + 32 >= (unsigned int)v18 )
          {
            if ( v34 != (_DWORD)v18 + 32 )
            {
              v7 = -2147024809;
              v19 = 135LL;
LABEL_43:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v19,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\ser"
                              "vice\\lib\\desktopsystemcursorservice.cpp",
                (const char *)v7,
                v29);
              goto LABEL_44;
            }
            v20 = SystemCursors::HardwareCursorVisual::SetShape(
                    *(SystemCursors::HardwareCursorVisual **)(a1 + 24),
                    v10 + 32,
                    *(_DWORD *)v10,
                    v16,
                    *((_DWORD *)v10 + 2),
                    *((_DWORD *)v10 + 3),
                    *((_DWORD *)v10 + 5) != 0,
                    (float)*((int *)v10 + 4));
            v21 = v20;
            if ( v20 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x92,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\ser"
                              "vice\\lib\\desktopsystemcursorservice.cpp",
                (const char *)(unsigned int)v20,
                v30);
              v7 = v21;
              goto LABEL_44;
            }
            v22 = *((_DWORD *)v10 + 6) & 1;
            v23 = *((_DWORD *)v10 + 6) & 2;
            InputTraceLogging::Cursor::ChangeDwmCursorShape(
              1,
              1,
              *(_DWORD *)v10,
              *((_DWORD *)v10 + 1),
              *((_DWORD *)v10 + 2),
              *((_DWORD *)v10 + 3),
              *((_DWORD *)v10 + 5) != 0,
              *((_DWORD *)v10 + 4));
            v25 = *(_DWORD *)(a1 + 32);
            if ( v22 != (*(_BYTE *)(a1 + 32) & 1) )
            {
              LOBYTE(v24) = v22;
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 40LL) + 48LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                v24);
              *(_DWORD *)(a1 + 32) ^= 1u;
              v25 = *(_DWORD *)(a1 + 32);
            }
            if ( (v23 != 0) != ((v25 & 2) != 0) )
            {
              LOBYTE(v24) = v23 != 0;
              (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 40LL) + 56LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                v24);
              *(_DWORD *)(a1 + 32) ^= 2u;
            }
            if ( v23 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 40LL) + 88LL))(
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL),
                *((unsigned int *)v10 + 7));
            std::vector<unsigned char>::_Tidy(v31);
            return 0LL;
          }
          v19 = 134LL;
        }
      }
      v7 = -2147024362;
      goto LABEL_43;
    }
    v27 = SystemCursors::HardwareCursorVisual::ClearShape(*(SystemCursors::HardwareCursorVisual **)(a1 + 24));
    v28 = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\li"
                      "b\\desktopsystemcursorservice.cpp",
        (const char *)(unsigned int)v27,
        v29);
      return v28;
    }
    InputTraceLogging::Cursor::ChangeDwmCursorShape(0, 1, 0, 0, 0, 0, 0, 100);
  }
  return 0LL;
}
