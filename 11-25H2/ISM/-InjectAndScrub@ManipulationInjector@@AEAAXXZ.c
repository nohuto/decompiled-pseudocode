/*
 * XREFs of ?InjectAndScrub@ManipulationInjector@@AEAAXXZ @ 0x18010F8CC
 * Callers:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x18010F210 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z @ 0x18010F294 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N0@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x180110108 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1801101AC (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x180110248 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x180110614 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1801109DC (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800CE978 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x18010F198 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ManipulationInjector::InjectAndScrub(
        ManipulationInjector *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdi
  unsigned int i; // esi
  unsigned int v7; // r11d
  __int64 v8; // rdx
  int v9; // r14d
  int v10; // esi
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // rax
  __int128 v14; // xmm1
  unsigned __int64 v15; // r8
  _OWORD *v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int v24; // ecx
  void (__fastcall ***v25)(_QWORD, __int64, _DWORD *); // rcx
  unsigned int j; // r8d
  __int64 v27; // r9
  char *v28; // rcx
  __int64 v29; // rcx
  _OWORD *v30; // r8
  __int64 v31; // r10
  _OWORD *v32; // r9
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  DWORD v41; // eax
  const char *v42; // r9
  unsigned int v43; // r12d
  unsigned __int16 v44; // si
  __int64 v45; // rcx
  __int64 v46; // rdx
  unsigned __int16 v47; // r11
  int v48; // r10d
  char v49; // al
  int v50; // r13d
  int v51; // r14d
  int v52; // r15d
  struct tagPOINT v53; // rax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rcx
  DWORD v57; // eax
  DWORD LastError; // eax
  unsigned int v59; // [rsp+28h] [rbp-E0h]
  __int64 v60; // [rsp+38h] [rbp-D0h]
  __int64 v61; // [rsp+38h] [rbp-D0h]
  unsigned __int16 v62; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v63; // [rsp+48h] [rbp-C0h]
  __int64 v64; // [rsp+50h] [rbp-B8h]
  __int64 v65; // [rsp+60h] [rbp-A8h]
  __int64 v66; // [rsp+70h] [rbp-98h]
  __int64 v67; // [rsp+80h] [rbp-88h]
  __int64 v68; // [rsp+90h] [rbp-78h]
  __int64 v69; // [rsp+B0h] [rbp-58h]
  __int64 v70; // [rsp+C0h] [rbp-48h]
  int v71; // [rsp+E0h] [rbp-28h]
  struct tagPOINT v72; // [rsp+E4h] [rbp-24h] BYREF
  _DWORD v73[3]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v74[70]; // [rsp+104h] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+370h] [rbp+268h]

  v4 = 0LL;
  if ( *((_BYTE *)this + 13) )
  {
    for ( i = 0; i < *((_DWORD *)this + 12); ++i )
      DbgPrint(
        "Injecting %d (%d, %d) 0x%08X\n",
        *((_DWORD *)this + 38 * i + 29),
        *((_DWORD *)this + 38 * i + 36),
        *((_DWORD *)this + 38 * i + 37),
        *((_DWORD *)this + 38 * i + 31));
  }
  if ( *(_DWORD *)this == 1 )
  {
    if ( !(unsigned int)InjectPointerInput(*((_QWORD *)this + 12), (char *)this + 104, *((unsigned int *)this + 12)) )
    {
      LastError = GetLastError();
      if ( LastError )
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          903LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)LastError,
          v59);
    }
  }
  else
  {
    if ( *(_DWORD *)this != 2 )
    {
      if ( *(_DWORD *)this == 3 )
      {
        v29 = *((unsigned int *)this + 12);
        if ( (_DWORD)v29 )
        {
          v30 = v73;
          v31 = (unsigned int)v29;
          v32 = (_OWORD *)((char *)this + 112);
          do
          {
            v33 = v32[1];
            *v30 = *v32;
            v34 = v32[2];
            v30[1] = v33;
            v35 = v32[3];
            v30[2] = v34;
            v36 = v32[4];
            v30[3] = v35;
            v37 = v32[5];
            v30[4] = v36;
            v38 = v32[6];
            v30[5] = v37;
            v39 = v32[7];
            v30[6] = v38;
            v40 = v32[8];
            v32 = (_OWORD *)((char *)v32 + 152);
            v30[7] = v39;
            v30[8] = v40;
            v30 += 9;
            --v31;
          }
          while ( v31 );
        }
        if ( !(unsigned int)InjectTouchInput(v29, v73) )
        {
          v41 = GetLastError();
          if ( v41 )
            wil::details::in1diag3::_FailFast_Win32(
              retaddr,
              974LL,
              (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
              (const char *)v41,
              v59);
        }
      }
      else
      {
        if ( *(_DWORD *)this != 4 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x3FF,
            (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            a4);
        ++*((_DWORD *)this + 200);
        v7 = 0;
        v8 = *((unsigned int *)this + 12);
        v9 = *((_DWORD *)this + 200);
        v10 = *((_DWORD *)this + 201);
        if ( (_DWORD)v8 )
        {
          do
          {
            v11 = v7;
            v12 = 152LL * v7;
            v13 = *(_QWORD *)((char *)this + v12 + 144);
            if ( v10 )
            {
              *(_DWORD *)((char *)this + v12 + 216) = v13 - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 224) = v13 + *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 220) = HIDWORD(v13) - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 228) = HIDWORD(v13) + *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 232) = v13 - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 240) = v13 + *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 236) = HIDWORD(v13) - *((_DWORD *)this + 201);
              *(_DWORD *)((char *)this + v12 + 244) = HIDWORD(v13) + *((_DWORD *)this + 201);
              v8 = *((unsigned int *)this + 12);
              LODWORD(v74[18 * v7 + 11]) |= 1u;
            }
            v14 = *(_OWORD *)((char *)this + v12 + 128);
            v15 = 144LL * v7;
            v16 = &v73[v15 / 4];
            *v16 = *(_OWORD *)((char *)this + v12 + 112);
            v17 = *(_OWORD *)((char *)this + v12 + 144);
            v16[1] = v14;
            v18 = *(_OWORD *)((char *)this + v12 + 160);
            v16[2] = v17;
            v19 = *(_OWORD *)((char *)this + v12 + 176);
            v16[3] = v18;
            v20 = *(_OWORD *)((char *)this + v12 + 192);
            v16[4] = v19;
            v21 = *(_OWORD *)((char *)this + v12 + 208);
            v16[5] = v20;
            v22 = *(_OWORD *)((char *)this + v12 + 224);
            v16[6] = v21;
            v23 = *(_OWORD *)((char *)this + v12 + 240);
            v16[7] = v22;
            v16[8] = v23;
            v24 = v74[v15 / 8];
            v73[v15 / 4 + 2] = v9;
            LODWORD(v74[v15 / 8]) = v24 | 0x4000;
            if ( (v24 & 4) != 0 )
              LODWORD(v74[18 * v7]) = v24 | 0x4010;
            ++v7;
            *(_QWORD *)((char *)&v74[18 * v11 + 4] + 4) = *(_QWORD *)((char *)&v74[18 * v11 + 2] + 4);
          }
          while ( v7 < (unsigned int)v8 );
        }
        v25 = (void (__fastcall ***)(_QWORD, __int64, _DWORD *))*((_QWORD *)this + 99);
        LODWORD(v74[0]) |= 0x2000u;
        (**v25)(v25, v8, v73);
      }
      goto LABEL_16;
    }
    v42 = (const char *)*((unsigned int *)this + 12);
    v43 = 10 * (_DWORD)v42 + 1;
    if ( (unsigned int)((_DWORD)v42 - 1) > 3 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x390,
        (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        v42);
    if ( (_DWORD)v42 )
    {
      v44 = 1;
      while ( 1 )
      {
        v63 = v44;
        v45 = (unsigned __int16)(v44 - 1);
        v46 = 152 * v45;
        v47 = 10 * v45;
        if ( (*((_BYTE *)this + 152 * v45 + 124) & 4) != 0 )
          break;
        v48 = 0;
        v49 = 0;
        if ( (*((_BYTE *)this + v46 + 124) & 2) == 0 )
          goto LABEL_33;
LABEL_34:
        if ( !v49 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x398,
            (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
            v42);
        v50 = 100 * v48;
        v71 = *(_DWORD *)((char *)this + v46 + 116);
        v51 = v48 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 18) - *((_DWORD *)this + 16)));
        v52 = v48 * (int)(float)(64000.0 / (float)(*((_DWORD *)this + 19) - *((_DWORD *)this + 17)));
        if ( *((_DWORD *)this + 22) == 1 )
          v53 = **(struct tagPOINT **)&ManipulationInjector::DeskToDigiPt(
                                         this,
                                         (struct tagPOINT)&v72,
                                         *(_QWORD *)((char *)this + v46 + 144));
        else
          v53 = *(struct tagPOINT *)((char *)this + v46 + 152);
        HIDWORD(v64) = v53.x;
        HIDWORD(v65) = v53.y;
        HIDWORD(v68) = v50;
        LODWORD(v64) = 3145729;
        v54 = 3LL * v47;
        *(_QWORD *)&v73[v54] = v64;
        v73[v54 + 2] = v44;
        LODWORD(v65) = 3211265;
        *(_QWORD *)((char *)v74 + 4 * v54) = v65;
        *((_DWORD *)&v74[1] + v54) = v44;
        LODWORD(v66) = 4325389;
        HIDWORD(v66) = v48;
        *(_QWORD *)((char *)&v74[1] + 4 * v54 + 4) = v66;
        *((_DWORD *)&v74[2] + v54 + 1) = v44;
        LODWORD(v67) = 3276813;
        HIDWORD(v67) = v48;
        *(_QWORD *)((char *)&v74[3] + 4 * v54) = v67;
        *((_DWORD *)&v74[4] + v54) = v44;
        LODWORD(v68) = 3145741;
        *(_QWORD *)((char *)&v74[4] + 4 * v54 + 4) = v68;
        *((_DWORD *)&v74[5] + v54 + 1) = v44;
        *(_QWORD *)((char *)&v74[6] + 4 * v54) = 0x10047000DLL;
        *((_DWORD *)&v74[7] + v54) = v44;
        LODWORD(v69) = 4718605;
        HIDWORD(v69) = v51;
        *(_QWORD *)((char *)&v74[7] + 4 * v54 + 4) = v69;
        *((_DWORD *)&v74[8] + v54 + 1) = v44;
        LODWORD(v70) = 4784141;
        HIDWORD(v70) = v52;
        *(_QWORD *)((char *)&v74[9] + 4 * v54) = v70;
        *((_DWORD *)&v74[10] + v54) = v44;
        v55 = v44;
        v62 = v44++;
        *(_QWORD *)((char *)&v74[10] + 4 * v54 + 4) = 4128781LL;
        *((_DWORD *)&v74[11] + v54 + 1) = v55;
        HIDWORD(v60) = v71;
        LODWORD(v60) = 5308429;
        *(_QWORD *)((char *)&v74[12] + 4 * v54) = v60;
        *((_DWORD *)&v74[13] + v54) = v62;
        if ( v63 >= (unsigned int)v42 )
          goto LABEL_39;
      }
      v48 = 1;
LABEL_33:
      v49 = 1;
      goto LABEL_34;
    }
LABEL_39:
    HIDWORD(v61) = *((unsigned __int16 *)this + 24);
    LODWORD(v61) = 5505037;
    v56 = 3LL * (unsigned __int16)(10 * *((_WORD *)this + 24));
    *(_QWORD *)&v73[v56] = v61;
    v73[v56 + 2] = 0;
    if ( !(unsigned int)InjectDeviceInput(*((_QWORD *)this + 12), v73, v43) )
    {
      v57 = GetLastError();
      if ( v57 )
        wil::details::in1diag3::_FailFast_Win32(
          retaddr,
          958LL,
          (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
          (const char *)v57,
          v59);
    }
  }
LABEL_16:
  for ( j = 0; j < *((_DWORD *)this + 12); ++j )
  {
    v27 = 152LL * j;
    if ( (*(_DWORD *)((_BYTE *)this + v27 + 124) & 0xFFFBFFFF) != 0 )
    {
      if ( j != (_DWORD)v4 )
      {
        v28 = (char *)this + 152 * (unsigned int)v4;
        *(_OWORD *)(v28 + 104) = *(_OWORD *)((char *)this + v27 + 104);
        *(_OWORD *)(v28 + 120) = *(_OWORD *)((char *)this + v27 + 120);
        *(_OWORD *)(v28 + 136) = *(_OWORD *)((char *)this + v27 + 136);
        *(_OWORD *)(v28 + 152) = *(_OWORD *)((char *)this + v27 + 152);
        *(_OWORD *)(v28 + 168) = *(_OWORD *)((char *)this + v27 + 168);
        *(_OWORD *)(v28 + 184) = *(_OWORD *)((char *)this + v27 + 184);
        *(_OWORD *)(v28 + 200) = *(_OWORD *)((char *)this + v27 + 200);
        *(_OWORD *)(v28 + 216) = *(_OWORD *)((char *)this + v27 + 216);
        *(_OWORD *)(v28 + 232) = *(_OWORD *)((char *)this + v27 + 232);
        *((_QWORD *)v28 + 31) = *(_QWORD *)((char *)this + v27 + 248);
        *((_DWORD *)this + v4 + 178) = *((_DWORD *)this + j + 178);
      }
      v4 = (unsigned int)(v4 + 1);
    }
    else
    {
      *((_BYTE *)this + *(unsigned int *)((char *)this + v27 + 116) + 728) = 1;
    }
  }
  *((_DWORD *)this + 12) = v4;
}
