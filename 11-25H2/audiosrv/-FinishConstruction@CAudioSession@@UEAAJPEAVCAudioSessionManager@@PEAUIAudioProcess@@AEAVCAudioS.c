/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180029340
 * Callers:
 *     <none>
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001AC20 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x18001C6D8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180029964 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800299F4 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x180029B90 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180029DB4 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ??$_Emplace_back_with_unused_capacity@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAAEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@$$QEAV21@@Z @ 0x18004297C (--$_Emplace_back_with_unused_capacity@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSu.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A4D5C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A5C5C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800A8AFE (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     memmove_0 @ 0x18015E888 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=2
int __fastcall CAudioSession::FinishConstruction(
        CAudioSession *this,
        struct CAudioSessionManager *a2,
        struct IAudioProcess *a3,
        struct CAudioSessionInstanceId *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        struct _GUID *a8)
{
  CAudioSession *v11; // r13
  char *v12; // rsi
  __int64 v13; // rdx
  int v14; // eax
  int v15; // esi
  int v16; // eax
  __int64 v17; // r8
  unsigned int v18; // r14d
  _QWORD *v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  _BYTE *v22; // rax
  unsigned __int64 v23; // rdx
  _BYTE *v24; // rcx
  __int64 v25; // r12
  __int64 v26; // rax
  unsigned int v27; // eax
  HRESULT v28; // eax
  HRESULT v29; // esi
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // esi
  const char *v34; // r9
  int result; // eax
  unsigned int v36; // eax
  char **v37; // r12
  const wchar_t *v38; // rdx
  char *v39; // rcx
  __int64 v40; // rsi
  char *v41; // rax
  unsigned __int64 v42; // r13
  char *v43[3]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-60h]
  CAudioSession *v45; // [rsp+40h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  try
  {
    v43[1] = (char *)this;
    v11 = this;
    v45 = this;
    v43[2] = (char *)a3;
    *((_QWORD *)this + 53) = a2;
    v12 = (char *)this + 704;
    v43[0] = (char *)a3;
    if ( a3 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 8LL))(a3);
    v13 = *((_QWORD *)this + 89);
    if ( v13 == *((_QWORD *)this + 90) )
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        v12,
        v13,
        v43);
    else
      std::vector<std::unique_ptr<CAppSubmixClient>>::_Emplace_back_with_unused_capacity<std::unique_ptr<CAppSubmixClient>>(
        v12,
        v43);
    if ( v43[0] )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v43[0] + 16LL))(v43[0]);
    *((_BYTE *)this + 728) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 96LL))(a3) != 0;
    v14 = CAudioSessionInstanceId::Copy((CAudioSession *)((char *)this + 584), a4);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x791,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
    v16 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 40LL))(a3);
    *((_QWORD *)this + 108) = *((_QWORD *)this + 82);
    *((_DWORD *)this + 218) = v16;
    v18 = a5;
    *((_BYTE *)this + 231) = a5 & 1;
    if ( (a5 & 1) != 0 )
      *((_DWORD *)this + 60) = 2000;
    if ( (a5 & 4) == 0 )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((char *)this + 248);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((char *)this + 256);
LABEL_22:
      *((_DWORD *)this + 102) = (v18 >> 5) & 1;
      *((_DWORD *)this + 58) = a6;
      *((_DWORD *)this + 59) = v18;
      *((_DWORD *)this + 51) = a7;
      v26 = *(_QWORD *)&a8->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&a8->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v26 = *(_QWORD *)a8->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v26 )
      {
        *(struct _GUID *)((char *)v11 + 212) = *a8;
        *((_BYTE *)this + 228) = 1;
      }
      else
      {
        v36 = UuidCreate((UUID *)((char *)v11 + 212));
        if ( v36 )
          return wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0x7C1,
                   (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                   (const char *)v36,
                   (unsigned int)v43[0]);
      }
      v27 = UuidCreate((UUID *)((char *)this + 264));
      if ( v27 )
        return wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x7CA,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                 (const char *)v27,
                 (unsigned int)v43[0]);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
      *((_DWORD *)this + 194) = 1065353216;
      if ( this != (CAudioSession *)-736LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
      v28 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)this + 52);
      v29 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D1,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v28);
        return v29;
      }
      else
      {
        v30 = (*(__int64 (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 176LL))(this, v18);
        v31 = v30;
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7D3,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v30);
          return v31;
        }
        else
        {
          v32 = (*(__int64 (__fastcall **)(struct IAudioProcess *, char *))(*(_QWORD *)a3 + 24LL))(a3, (char *)this + 8);
          v33 = v32;
          if ( v32 >= 0 )
          {
            CAudioSession::StartInactiveTimer(this);
            return 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7D6,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v32);
            return v33;
          }
        }
      }
    }
    v19 = (_QWORD *)((char *)this + 248);
    v20 = -1LL;
    v21 = -1LL;
    do
      ++v21;
    while ( aSystemrootSyst_0[v21] );
    if ( !(_DWORD)v21 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 248);
      goto LABEL_45;
    }
    v22 = (_BYTE *)*v19;
    LODWORD(v43[0]) = *(_DWORD *)(*v19 - 16LL);
    v23 = ((char *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202" - v22) >> 1;
    v44 = v23;
    if ( ((1 - *((_DWORD *)v22 - 2)) | (*((_DWORD *)v22 - 3) - (int)v21)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)this + 31, v21);
      v23 = v44;
    }
    v24 = (_BYTE *)*v19;
    v25 = 2LL * (int)v21;
    if ( v23 > LODWORD(v43[0]) )
    {
      if ( !v25 )
        goto LABEL_42;
      if ( v24 )
      {
        memcpy_0(v24, L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202", 2LL * (int)v21);
        goto LABEL_42;
      }
      goto LABEL_41;
    }
    v23 = (unsigned __int64)&v24[2 * v23];
    if ( v25 )
    {
      if ( !v24 || !v23 )
      {
LABEL_41:
        *(_DWORD *)_o__errno(v24, v23, v17) = 22;
        invalid_parameter_noinfo();
        goto LABEL_42;
      }
      memmove_0(v24, (const void *)v23, 2LL * (int)v21);
    }
LABEL_42:
    if ( (int)v21 < 0 || (int)v21 > *(_DWORD *)(*v19 - 12LL) )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(*v19 - 16LL) = v21;
    *(_WORD *)(v25 + *v19) = 0;
LABEL_45:
    v37 = (char **)((char *)this + 256);
    v38 = L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203";
    do
      ++v20;
    while ( aSystemrootSyst[v20] );
    if ( !(_DWORD)v20 )
    {
      ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 256);
LABEL_66:
      *((_BYTE *)this + 230) = 1;
      *((_DWORD *)this + 60) = 5000;
      v18 = a5;
      v11 = v45;
      goto LABEL_22;
    }
    v41 = *v37;
    LODWORD(v43[0]) = *((_DWORD *)*v37 - 4);
    v42 = ((char *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203" - v41) >> 1;
    if ( ((1 - *((_DWORD *)v41 - 2)) | (*((_DWORD *)v41 - 3) - (int)v20)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)this + 32, v20);
      v38 = L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203";
    }
    v39 = *v37;
    v40 = 2LL * (int)v20;
    if ( v42 > LODWORD(v43[0]) )
    {
      if ( !v40 )
        goto LABEL_50;
      if ( v39 )
      {
        memcpy_0(v39, L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203", 2LL * (int)v20);
        goto LABEL_50;
      }
LABEL_49:
      *(_DWORD *)_o__errno(v39, v38, v17) = 22;
      invalid_parameter_noinfo();
      goto LABEL_50;
    }
    v38 = (const wchar_t *)&v39[2 * v42];
    if ( v40 )
    {
      if ( !v39 || !v38 )
        goto LABEL_49;
      memmove_0(v39, v38, 2LL * (int)v20);
    }
LABEL_50:
    if ( (int)v20 < 0 || (int)v20 > *((_DWORD *)*v37 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)*v37 - 4) = v20;
    *(_WORD *)&(*v37)[v40] = 0;
    goto LABEL_66;
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Return_CaughtException(
             retaddr,
             (void *)0x7DF,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
             v34);
  }
  return result;
}
