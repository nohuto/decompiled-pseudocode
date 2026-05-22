/*
 * XREFs of ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18002C340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x18002C918 (_lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_--operator().c)
 *     ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x18002CB04 (--1TargetingInfo@KeyboardProcessor@@QEAA@XZ.c)
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x18002CB5C (--0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z.c)
 *     ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x18002CC60 (-GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18002D1B8 (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 *     ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x18002D39C (--$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardPro.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005B4E4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18009D442 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall KeyboardProcessor::OnInputReport(KeyboardProcessor *this, struct InputInfo *a2)
{
  struct InputContext *v2; // rsi
  unsigned __int16 v4; // di
  __int16 v5; // cx
  __int16 v6; // r15
  bool v7; // r12
  __int64 v8; // r8
  _OWORD *v9; // rax
  unsigned int v10; // ebx
  _OWORD *v11; // rcx
  __int64 *v12; // rbx
  __int64 *i; // r13
  KeyboardProcessor::TargetingInfo *v14; // rax
  __int16 v15; // si
  __int16 v16; // di
  struct IInputTarget *v17; // rbx
  struct IInputTarget *v18; // rcx
  int v19; // eax
  unsigned int v20; // edi
  struct IInputTarget *v21; // rcx
  int updated; // eax
  size_t v24; // r8
  int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // rdx
  unsigned int v28; // ebx
  int v29; // eax
  struct IInputTarget *v30; // rcx
  int TargetingInfo; // eax
  struct InputContext *v32; // rcx
  int v33; // [rsp+20h] [rbp-E0h]
  struct IInputTarget *v34; // [rsp+28h] [rbp-D8h] BYREF
  struct InputContext *v35; // [rsp+30h] [rbp-D0h] BYREF
  RTL_SRWLOCK *v36; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v38[92]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v39; // [rsp+1C0h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v2 = a2;
  v35 = a2;
  v4 = 0;
  v5 = *((_WORD *)a2 + 47);
  v6 = v5 & 0x20;
  v7 = (v5 & 1) == 0;
  LOBYTE(v33) = v7;
  if ( (*(_BYTE *)a2 & 4) == 0 )
  {
    v28 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)0x80070057LL,
      v33);
    return v28;
  }
  if ( (v5 & 0x20) == 0 && (v5 & 0x40) == 0 )
  {
    v4 = *((_WORD *)a2 + 29) | 0xE000;
    if ( (v5 & 2) == 0 )
      v4 = *((_WORD *)a2 + 29);
    if ( (v5 & 4) != 0 )
      v4 |= 0xE100u;
  }
  AcquireSRWLockExclusive(&KeyboardProcessor::s_keyStateSnapshotLock);
  v36 = &KeyboardProcessor::s_keyStateSnapshotLock;
  v9 = (_OWORD *)((char *)v2 + 96);
  v10 = 128;
  v11 = &KeyboardProcessor::s_keyStateSnapshot;
  if ( v2 == (struct InputContext *)-96LL )
  {
    memset_0(&KeyboardProcessor::s_keyStateSnapshot, 0, 0x100uLL);
    *(_DWORD *)_o__errno() = 22;
    invalid_parameter_noinfo();
  }
  else
  {
    v27 = 2LL;
    do
    {
      *v11 = *v9;
      v11[1] = v9[1];
      v11[2] = v9[2];
      v11[3] = v9[3];
      v11[4] = v9[4];
      v11[5] = v9[5];
      v11[6] = v9[6];
      v11 += 8;
      *(v11 - 1) = v9[7];
      v9 += 8;
      --v27;
    }
    while ( v27 );
  }
  switch ( v4 )
  {
    case 0x1Du:
      v10 = 1;
      goto LABEL_38;
    case 0x2Au:
      v10 = 2;
      goto LABEL_38;
    case 0x36u:
      v10 = 32;
      goto LABEL_38;
    case 0x38u:
      v10 = 4;
      goto LABEL_38;
    case 0xE01Du:
      v10 = 16;
      goto LABEL_38;
    case 0xE038u:
      v10 = 64;
      goto LABEL_38;
    case 0xE05Bu:
      v10 = 8;
      goto LABEL_38;
    case 0xE05Cu:
LABEL_38:
      if ( !v7 || (v10 & *((_DWORD *)this + 14)) == 0 )
      {
        LOBYTE(v8) = v7;
        updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), v10, v8);
        v20 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x133,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
            (const char *)(unsigned int)updated,
            v33);
LABEL_36:
          ReleaseSRWLockExclusive(&KeyboardProcessor::s_keyStateSnapshotLock);
          return v20;
        }
        v29 = *((_DWORD *)this + 14);
        if ( v7 )
          *((_DWORD *)this + 14) = v10 | v29;
        else
          *((_DWORD *)this + 14) = v29 & ~v10;
      }
      break;
  }
  v34 = 0LL;
  if ( v6 )
  {
    v35 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
    TargetingInfo = KeyboardProcessor::GetTargetingInfo(this, &v35, &v34);
    v28 = TargetingInfo;
    if ( TargetingInfo >= 0 )
    {
      v32 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(struct InputContext *))(*(_QWORD *)v32 + 16LL))(v32);
      }
      goto LABEL_31;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)TargetingInfo,
      v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  }
  else
  {
    v37[0] = v2;
    v37[1] = this;
    if ( !v7 )
    {
      v12 = (__int64 *)*((_QWORD *)this + 8);
      for ( i = (__int64 *)*((_QWORD *)this + 9); v12 != i; v12 += 48 )
      {
        v14 = (KeyboardProcessor::TargetingInfo *)KeyboardProcessor::TargetingInfo::TargetingInfo(
                                                    (KeyboardProcessor::TargetingInfo *)v38,
                                                    (const struct KeyboardProcessor::TargetingInfo *)v12);
        v15 = *((_WORD *)v35 + 30);
        v16 = *((_WORD *)v14 + 30);
        KeyboardProcessor::TargetingInfo::~TargetingInfo(v14);
        if ( v15 == v16 )
          break;
      }
      goto LABEL_22;
    }
    lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator()(v37);
    v38[90] = 0;
    memset_0(v38, 0, sizeof(v38));
    v38[0] = 4;
    v38[6] = 368;
    v39 = 0LL;
    v24 = *((unsigned int *)v2 + 6);
    if ( *((_DWORD *)v2 + 6) )
    {
      if ( v24 > 0x180 )
      {
        memset_0(v38, 0, 0x180uLL);
        *(_DWORD *)_o__errno() = 34;
        invalid_parameter_noinfo();
      }
      else
      {
        memcpy_0(v38, v2, v24);
      }
    }
    v12 = (__int64 *)*((_QWORD *)this + 9);
    if ( v12 == *((__int64 **)this + 10) )
    {
      v12 = (__int64 *)std::vector<KeyboardProcessor::TargetingInfo>::_Emplace_reallocate<KeyboardProcessor::TargetingInfo &>(
                         (char *)this + 64,
                         *((_QWORD *)this + 9),
                         v38);
    }
    else
    {
      KeyboardProcessor::TargetingInfo::TargetingInfo(
        *((KeyboardProcessor::TargetingInfo **)this + 9),
        (const struct KeyboardProcessor::TargetingInfo *)v38);
      *((_QWORD *)this + 9) += 384LL;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12 + 47);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v12 + 46);
    v25 = KeyboardProcessor::GetTargetingInfo(this, (struct InputContext **)v12 + 46, (struct IInputTarget **)v12 + 47);
    v26 = v25;
    if ( v25 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39 + 1);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
LABEL_22:
      if ( v12 != *((__int64 **)this + 9) )
      {
        v17 = (struct IInputTarget *)v12[47];
        if ( v34 != v17 )
        {
          if ( v17 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 8LL))(v17);
          v18 = v34;
          v34 = v17;
          if ( v18 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 16LL))(v18);
        }
        if ( !v7 )
          lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator()(v37);
      }
      v2 = v35;
LABEL_31:
      if ( v34
        && (v19 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputContext *))(*(_QWORD *)v34 + 24LL))(
                    v34,
                    v2),
            v20 = v19,
            v19 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
          (const char *)(unsigned int)v19,
          v33);
        v30 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v30 + 16LL))(v30);
        }
      }
      else
      {
        v21 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v20 = 0;
      }
      goto LABEL_36;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x167,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v25,
      v33);
    KeyboardProcessor::TargetingInfo::~TargetingInfo((KeyboardProcessor::TargetingInfo *)v38);
    v28 = v26;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v36);
  return v28;
}
