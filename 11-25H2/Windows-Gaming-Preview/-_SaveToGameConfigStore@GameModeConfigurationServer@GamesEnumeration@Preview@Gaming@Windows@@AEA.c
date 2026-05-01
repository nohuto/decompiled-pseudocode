/*
 * XREFs of ?_SaveToGameConfigStore@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180037D08
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3__Windows::Internal::CNoResult_::Run @ 0x180037090 (Windows--Internal--COperationLambdaVar_0__lambda_13b4327bb98260f7a87a6660565127f3___ea_180037090.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18000108C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SerializeRelatedProcessArray@@YAJPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@AEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180016288 (-SerializeRelatedProcessArray@@YAJPEAU-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@.c)
 *     ?SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800169CC (-SetRelatedProcessesToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@V-$ComPtr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // r15d
  HSTRING v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 *v16; // rbx
  HSTRING v17; // rdi
  const WCHAR *v18; // r15
  const WCHAR *v19; // r13
  const WCHAR *v20; // r12
  __int64 v21; // rax
  unsigned int v22; // edx
  const WCHAR **v23; // rcx
  __int64 v24; // r8
  int v25; // edx
  int v26; // edx
  PCWSTR StringRawBuffer; // r8
  const WCHAR *v28; // rdx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  int v36; // eax
  __int64 *v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 (__fastcall *v42)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 (__fastcall *v45)(__int64, _QWORD *, __int64, __int64 *, int); // rax
  __int64 *v46; // rcx
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rax
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64 *); // rcx
  __int64 **v51; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v54; // rdx
  _QWORD v55[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v56; // [rsp+48h] [rbp-C0h] BYREF
  int v57; // [rsp+4Ch] [rbp-BCh] BYREF
  int v58; // [rsp+50h] [rbp-B8h] BYREF
  int v59; // [rsp+54h] [rbp-B4h] BYREF
  __int64 (__fastcall ***v60)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-B0h] BYREF
  int v61; // [rsp+60h] [rbp-A8h]
  UINT32 length; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v63; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+70h] [rbp-98h] BYREF
  int v65; // [rsp+78h] [rbp-90h] BYREF
  int v66; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v67; // [rsp+80h] [rbp-88h] BYREF
  int v68; // [rsp+84h] [rbp-84h] BYREF
  HSTRING string[2]; // [rsp+88h] [rbp-80h] BYREF
  __int16 v70; // [rsp+98h] [rbp-70h] BYREF
  struct _RTL_CRITICAL_SECTION *v71; // [rsp+A0h] [rbp-68h]
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+A8h] [rbp-60h] BYREF
  const WCHAR *v73; // [rsp+C8h] [rbp-40h]
  int v74; // [rsp+D0h] [rbp-38h]
  int v75; // [rsp+D4h] [rbp-34h]
  const WCHAR *v76; // [rsp+D8h] [rbp-30h]
  int v77; // [rsp+E0h] [rbp-28h]
  int v78; // [rsp+E4h] [rbp-24h]
  const WCHAR *v79; // [rsp+E8h] [rbp-20h]
  int v80; // [rsp+F0h] [rbp-18h]
  int v81; // [rsp+F4h] [rbp-14h]
  const WCHAR *v82; // [rsp+F8h] [rbp-10h]
  int v83; // [rsp+100h] [rbp-8h]
  int v84; // [rsp+104h] [rbp-4h]
  __int64 (__fastcall ****v85)(_QWORD, GUID *, __int64 *); // [rsp+108h] [rbp+0h]
  __int64 v86; // [rsp+110h] [rbp+8h]
  int *v87; // [rsp+118h] [rbp+10h]
  __int64 v88; // [rsp+120h] [rbp+18h]
  _QWORD *v89; // [rsp+128h] [rbp+20h]
  __int64 v90; // [rsp+130h] [rbp+28h]
  int *v91; // [rsp+138h] [rbp+30h]
  __int64 v92; // [rsp+140h] [rbp+38h]
  int *v93; // [rsp+148h] [rbp+40h]
  __int64 v94; // [rsp+150h] [rbp+48h]
  int *v95; // [rsp+158h] [rbp+50h]
  __int64 v96; // [rsp+160h] [rbp+58h]
  int *v97; // [rsp+168h] [rbp+60h]
  __int64 v98; // [rsp+170h] [rbp+68h]
  __int16 *v99; // [rsp+178h] [rbp+70h]
  __int64 v100; // [rsp+180h] [rbp+78h]
  PCWSTR v101; // [rsp+188h] [rbp+80h]
  int v102; // [rsp+190h] [rbp+88h]
  int v103; // [rsp+194h] [rbp+8Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v71 = v2;
  if ( !*((_QWORD *)this + 11) )
  {
    v3 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BC,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80070005LL);
LABEL_3:
    if ( v2 )
      LeaveCriticalSection(v2);
    return (unsigned int)v3;
  }
  v56 = 0;
  v57 = 0;
  v61 = 0;
  v64 = 0LL;
  LODWORD(v63) = 0;
  v58 = 0;
  string[0] = 0LL;
  if ( *((_QWORD *)this + 19) && !*((_QWORD *)this + 18) )
  {
    v5 = 711LL;
    goto LABEL_13;
  }
  v6 = *((_QWORD *)this + 14);
  v7 = *((_QWORD *)this + 15);
  if ( v6 )
  {
    if ( !v7 || !*((_QWORD *)this + 16) )
    {
LABEL_12:
      v5 = 717LL;
      goto LABEL_13;
    }
  }
  else if ( v7 || *((_QWORD *)this + 16) )
  {
    goto LABEL_12;
  }
  if ( v6 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 48LL))(v7, &v56);
    if ( v3 < 0 )
    {
      v10 = 722LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)(unsigned int)v3);
      WindowsDeleteString(0LL);
      goto LABEL_3;
    }
    v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), &v57);
    if ( v3 < 0 )
    {
      v10 = 723LL;
      goto LABEL_22;
    }
    if ( v57 + v56 > 100 )
    {
      v5 = 724LL;
LABEL_13:
      v8 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)0x80070057LL);
      v9 = 0LL;
LABEL_14:
      WindowsDeleteString(v9);
      if ( v2 )
        LeaveCriticalSection(v2);
      return (unsigned int)v8;
    }
    v61 = 100 - v57 - v56;
  }
  v11 = *((_QWORD *)this + 18);
  if ( v11 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, &v64);
    if ( v3 < 0 )
    {
      v10 = 731LL;
      goto LABEL_22;
    }
    v12 = *((_QWORD *)this + 19);
    if ( v12 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 48LL))(v12, (char *)&v64 + 4);
      if ( v3 < 0 )
      {
        v10 = 734LL;
        goto LABEL_22;
      }
    }
  }
  v13 = *((_QWORD *)this + 17);
  if ( v13 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, &v63);
    if ( v3 < 0 )
    {
      v10 = 740LL;
      goto LABEL_22;
    }
  }
  v14 = *((_QWORD *)this + 14);
  if ( v14 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 48LL))(v14, &v58);
    if ( v3 < 0 )
    {
      v10 = 745LL;
      goto LABEL_22;
    }
  }
  v15 = SerializeRelatedProcessArray(*((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 13), string);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2EC,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)v15);
  v16 = (__int64 *)**((_QWORD **)this + 10);
  v17 = string[0];
  while ( !*((_BYTE *)v16 + 25) )
  {
    v18 = &word_18004D6D0;
    v19 = &word_18004D6D0;
    v20 = &word_18004D6D0;
    v21 = v16[6];
    v22 = *(_DWORD *)(v21 + 16);
    if ( v22 )
    {
      v23 = (const WCHAR **)(*(_QWORD *)(v21 + 8) + 8LL);
      v24 = v22;
      do
      {
        v25 = *((_DWORD *)v23 - 2);
        if ( v25 )
        {
          v26 = v25 - 1;
          if ( v26 )
          {
            if ( v26 == 1 )
              v18 = *v23;
          }
          else
          {
            v20 = *v23;
          }
        }
        else
        {
          v19 = *v23;
        }
        v23 += 2;
        --v24;
      }
      while ( v24 );
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(v17, &length);
    if ( (unsigned int)dword_180059000 > 5
      && (qword_180059010 & 0x800000000000LL) != 0
      && (qword_180059018 & 0x800000000000LL) == qword_180059018 )
    {
      string[1] = (HSTRING)StringRawBuffer;
      v70 = length;
      v59 = v61;
      v65 = v57;
      v66 = v56;
      v67 = v58;
      v55[1] = v64;
      v68 = *((unsigned __int8 *)this + 160);
      LODWORD(v60) = *((unsigned __int8 *)this + 96);
      v28 = *(const WCHAR **)(v16[6] + 24);
      v99 = &v70;
      v100 = 2LL;
      v101 = StringRawBuffer;
      v102 = 2 * (unsigned __int16)length;
      v103 = 0;
      v97 = &v59;
      v98 = 4LL;
      v95 = &v65;
      v96 = 4LL;
      v93 = &v66;
      v94 = 4LL;
      v91 = &v67;
      v92 = 4LL;
      v89 = &v55[1];
      v90 = 8LL;
      v87 = &v68;
      v88 = 4LL;
      v85 = &v60;
      v86 = 4LL;
      if ( v18 )
      {
        v29 = -1LL;
        do
          ++v29;
        while ( v18[v29] );
        v30 = 2 * v29 + 2;
      }
      else
      {
        v18 = &word_18004D6D0;
        v30 = 2;
      }
      v82 = v18;
      v83 = v30;
      v84 = 0;
      if ( v20 )
      {
        v31 = -1LL;
        do
          ++v31;
        while ( v20[v31] );
        v32 = 2 * v31 + 2;
      }
      else
      {
        v20 = &word_18004D6D0;
        v32 = 2;
      }
      v79 = v20;
      v80 = v32;
      v81 = 0;
      if ( v19 )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( v19[v33] );
        v34 = 2 * v33 + 2;
      }
      else
      {
        v19 = &word_18004D6D0;
        v34 = 2;
      }
      v76 = v19;
      v77 = v34;
      v78 = 0;
      if ( v28 )
      {
        v35 = -1LL;
        do
          ++v35;
        while ( v28[v35] );
        v36 = 2 * v35 + 2;
      }
      else
      {
        v28 = &word_18004D6D0;
        v36 = 2;
      }
      v73 = v28;
      v74 = v36;
      v75 = 0;
      tlgWriteTransfer_EventWriteTransfer((__int64)&dword_180059000, byte_180050179, 0LL, 0LL, 0xFu, &v72);
    }
    if ( ((*(_DWORD *)(v16[6] + 32) >> 7) & 1) != *((_BYTE *)this + 96) )
    {
      LODWORD(v60) = *((unsigned __int8 *)this + 96);
      v37 = (__int64 *)*((_QWORD *)this + 8);
      v38 = *v37;
      *(_OWORD *)&v55[1] = *((_OWORD *)v16 + 2);
      v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *), int))(v38 + 104))(
             v37,
             &v55[1],
             17LL,
             &v60,
             4);
      if ( v8 < 0 )
      {
        v43 = 804LL;
        goto LABEL_112;
      }
      *(_DWORD *)(v16[6] + 32) ^= (*(_DWORD *)(v16[6] + 32) ^ (*((unsigned __int8 *)this + 96) << 7)) & 0x80;
    }
    if ( ((*(_DWORD *)(v16[6] + 32) & 0x100) == 0) != *((_BYTE *)this + 160) )
    {
      LODWORD(v60) = *((_BYTE *)this + 160) == 0;
      v39 = (__int64 *)*((_QWORD *)this + 8);
      v40 = *v39;
      *(_OWORD *)&v55[1] = *((_OWORD *)v16 + 2);
      v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *), int))(v40 + 104))(
             v39,
             &v55[1],
             21LL,
             &v60,
             4);
      if ( v8 < 0 )
      {
        v43 = 813LL;
        goto LABEL_112;
      }
      *(_DWORD *)(v16[6] + 32) = *(_DWORD *)(v16[6] + 32) & 0xFFFFFEFF | (*((_BYTE *)this + 160) == 0 ? 0x100 : 0);
    }
    v41 = *((_QWORD *)this + 8);
    v42 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v41 + 72LL);
    *(_OWORD *)&v55[1] = *((_OWORD *)v16 + 2);
    if ( *((_QWORD *)this + 18) )
    {
      v8 = v42(v41, &v55[1], 18LL, &v64, 8);
      if ( v8 < 0 )
      {
        v43 = 820LL;
        goto LABEL_112;
      }
    }
    else
    {
      v8 = v42(v41, &v55[1], 18LL, 0LL, 0);
      if ( v8 < 0 )
      {
        v43 = 824LL;
        goto LABEL_112;
      }
    }
    v44 = *((_QWORD *)this + 8);
    v45 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64 *, int))(*(_QWORD *)v44 + 72LL);
    *(_OWORD *)&v55[1] = *((_OWORD *)v16 + 2);
    if ( *((_QWORD *)this + 17) )
    {
      v8 = v45(v44, &v55[1], 20LL, &v63, 4);
      if ( v8 < 0 )
      {
        v43 = 830LL;
        goto LABEL_112;
      }
    }
    else
    {
      v8 = v45(v44, &v55[1], 20LL, 0LL, 0);
      if ( v8 < 0 )
      {
        v43 = 834LL;
        goto LABEL_112;
      }
    }
    v46 = (__int64 *)*((_QWORD *)this + 8);
    if ( *((_QWORD *)this + 14) )
    {
      v59 = 0;
      if ( (unsigned __int8)v56 + (unsigned __int8)v61 + (unsigned __int8)v57 != 100 )
      {
        v54 = 397LL;
        goto LABEL_116;
      }
      if ( (unsigned __int8)v58 > 0x64u )
      {
        v54 = 402LL;
LABEL_116:
        v8 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v54,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)0x80070057LL);
LABEL_117:
        v43 = 847LL;
LABEL_112:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v43,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)(unsigned int)v8);
        v9 = v17;
        goto LABEL_14;
      }
      v59 = (unsigned __int8)v61 | (((unsigned __int8)v57 | (((unsigned __int8)v56 | ((unsigned __int8)v58 << 8)) << 8)) << 8);
      v47 = *v46;
      *(_OWORD *)&v55[1] = *((_OWORD *)v16 + 2);
      v48 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64, int *, int))(v47 + 72))(
              v46,
              &v55[1],
              19LL,
              &v59,
              4);
      v8 = v48;
      if ( v48 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x197,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v48);
      if ( v8 < 0 )
        goto LABEL_117;
    }
    else
    {
      v49 = *v46;
      *(_OWORD *)&v55[1] = *((_OWORD *)v16 + 2);
      v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD *, __int64))(v49 + 72))(v46, &v55[1], 19LL);
      if ( v8 < 0 )
      {
        v43 = 851LL;
        goto LABEL_112;
      }
    }
    v50 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 13);
    v60 = v50;
    if ( v50 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v50)[1])(v50);
    *(_OWORD *)&v55[1] = *((_OWORD *)v16 + 2);
    v8 = SetRelatedProcessesToGameConfigStore(*((_QWORD *)this + 8), (__int128 *)&v55[1], &v60);
    if ( v8 < 0 )
    {
      v43 = 855LL;
      goto LABEL_112;
    }
    v51 = (__int64 **)v16[2];
    if ( *((_BYTE *)v51 + 25) )
    {
      for ( i = (__int64 *)v16[1]; !*((_BYTE *)i + 25) && v16 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v16 = i;
      v16 = i;
    }
    else
    {
      v16 = (__int64 *)v16[2];
      for ( j = *v51; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v16 = j;
    }
  }
  WindowsDeleteString(v17);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
