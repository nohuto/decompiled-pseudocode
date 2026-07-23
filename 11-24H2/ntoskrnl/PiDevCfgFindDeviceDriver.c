/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x1409C86B4
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072650C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072A910 (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x1404AA058 (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x1404B23C0 (PnpMultiSzContainsString.c)
 *     wcschr @ 0x1404FD650 (wcschr.c)
 *     Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B10 (Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline @ 0x1405A3B64 (Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405A3C68 (PiDevCfgMatchDriverConfigurationId.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiDevCfgClearDeviceDrivers @ 0x140726C00 (PiDevCfgClearDeviceDrivers.c)
 *     PiDevCfgQueryDriverPolicy @ 0x14072896C (PiDevCfgQueryDriverPolicy.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PnpIsNullGuid @ 0x1408D0B80 (PnpIsNullGuid.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x140980950 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFreeDriverNode @ 0x140ABF4A0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140AC0A0C (PiDevCfgQueryDriverNode.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, wchar_t *a2, __int64 *a3)
{
  __int64 v4; // r12
  int ObjectProperty; // esi
  int v6; // r13d
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // eax
  ULONG_PTR v10; // rdi
  wchar_t *Pool2; // r15
  unsigned int v12; // ecx
  __int64 v13; // rdx
  WCHAR *v14; // rbx
  int v15; // r12d
  const wchar_t *v16; // rax
  const wchar_t *v17; // r12
  wchar_t *v18; // rbx
  unsigned int v19; // r8d
  const WCHAR *v20; // r10
  int v21; // eax
  int v22; // edx
  char v23; // bl
  __int64 v24; // rax
  wchar_t *v25; // r12
  __int64 v26; // rbx
  unsigned int v27; // eax
  wchar_t **v28; // r13
  __int64 v29; // rcx
  __int64 *v30; // rbx
  bool v31; // sf
  __int64 *v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 *v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  wchar_t *v41; // rdi
  wchar_t *v42; // rax
  wchar_t *v43; // rbx
  wchar_t *v44; // rax
  wchar_t *v45; // rax
  wchar_t *v46; // rbx
  wchar_t *v47; // rax
  __int64 *v48; // rcx
  __int64 *v49; // rax
  _QWORD *v50; // rcx
  __int64 v51; // rax
  _QWORD *v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v56; // rcx
  bool v57; // zf
  __int64 v58; // rax
  __int64 *v59; // rdx
  int v60; // ebx
  wchar_t *v61; // r13
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r12
  unsigned int v66; // edi
  unsigned int v67; // r8d
  unsigned int v68; // r11d
  unsigned int v69; // edx
  __int64 v70; // rbx
  _QWORD *v71; // r10
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 *v74; // rdx
  const wchar_t *v75; // rbx
  __int64 v76; // rax
  int v77; // eax
  _QWORD *v78; // rdi
  __int64 i; // rbx
  _QWORD *v80; // rcx
  __int64 v81; // rcx
  __int64 *v82; // rax
  __int64 *v83; // rcx
  bool IsNullGuid; // al
  __int64 *v85; // rdx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v92; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v93; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v94; // [rsp+70h] [rbp-90h]
  int v95; // [rsp+78h] [rbp-88h]
  int v96; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v97; // [rsp+80h] [rbp-80h]
  unsigned int v98; // [rsp+88h] [rbp-78h] BYREF
  __int64 v99; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v100; // [rsp+98h] [rbp-68h]
  int v101; // [rsp+A0h] [rbp-60h] BYREF
  int v102; // [rsp+A4h] [rbp-5Ch]
  unsigned int v103; // [rsp+A8h] [rbp-58h]
  const wchar_t *v104; // [rsp+B0h] [rbp-50h]
  wchar_t *Str; // [rsp+B8h] [rbp-48h]
  unsigned int v106; // [rsp+C0h] [rbp-40h]
  PCWSTR v107; // [rsp+C8h] [rbp-38h]
  int v108; // [rsp+D0h] [rbp-30h]
  __int64 v109; // [rsp+D8h] [rbp-28h]
  const wchar_t *v110; // [rsp+E0h] [rbp-20h]
  __int64 *v111; // [rsp+E8h] [rbp-18h]
  __int64 v112[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v113; // [rsp+100h] [rbp+0h]

  v111 = a3;
  v97 = a1;
  v113 = 0;
  v102 = 0;
  v94 = &v93;
  Str = 0LL;
  v93 = (__int64)&v93;
  v4 = a1;
  v110 = 0LL;
  v100 = &v99;
  ObjectProperty = 0;
  v96 = 0;
  v99 = (__int64)&v99;
  v6 = 0;
  v101 = 1;
  v7 = 0LL;
  v98 = 0;
  v92 = 0LL;
  *(_OWORD *)v112 = 0LL;
  if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
    PiDevCfgClearDeviceDrivers(v4);
  if ( a2 )
  {
    Str = a2;
    v8 = -1LL;
    do
      ++v8;
    while ( a2[v8] );
    v110 = (const wchar_t *)((unsigned __int64)&a2[v8 + 1] & -(__int64)(a2[v8 + 1] != 0));
  }
  v9 = 1;
  if ( PnpSetupInProgress )
    v9 = 3;
  v108 = v9;
  if ( (unsigned int)Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline() )
    PiDevCfgQueryDriverPolicy((unsigned int *)v112);
  LODWORD(v10) = 520;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x208uLL, 0x63647050u);
  if ( !Pool2 )
  {
LABEL_12:
    ObjectProperty = -1073741670;
    goto LABEL_210;
  }
  v12 = 0;
  v13 = 0LL;
  v103 = 0;
  v109 = 0LL;
  do
  {
    v14 = *(WCHAR **)(v4 + 16 * (v13 + 3));
    v107 = v14;
    if ( !v14 )
      goto LABEL_105;
    v15 = 0;
    v95 = 0;
    if ( !*v14 )
      goto LABEL_103;
    do
    {
      v98 = 0;
      v101 = 1;
      ObjectProperty = PnpGetObjectProperty(
                         *(_QWORD **)&PiPnpRtlCtx,
                         v14,
                         0xBu,
                         (void *)0xFFFFFFFFFFFFFFFFLL,
                         0LL,
                         (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                         &v101,
                         Pool2,
                         v10,
                         (__int64)&v98,
                         0);
      if ( ObjectProperty < 0 )
      {
        while ( ObjectProperty == -1073741789 )
        {
          if ( v98 <= (unsigned int)v10 )
            goto LABEL_40;
          v10 = v98;
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0);
          v16 = (const wchar_t *)ExAllocatePool2(0x100uLL, v10, 0x63647050u);
          Pool2 = (wchar_t *)v16;
          if ( !v16 )
            goto LABEL_12;
          ObjectProperty = PnpGetObjectProperty(
                             *(_QWORD **)&PiPnpRtlCtx,
                             v14,
                             0xBu,
                             (void *)0xFFFFFFFFFFFFFFFFLL,
                             0LL,
                             (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                             &v101,
                             v16,
                             v10,
                             (__int64)&v98,
                             0);
          if ( ObjectProperty >= 0 )
            goto LABEL_23;
        }
      }
      if ( ObjectProperty == -1073741670 )
        break;
      if ( ObjectProperty < 0 )
      {
        if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
        {
          if ( v6 != -1073741772 )
          {
            v6 = ObjectProperty;
            v102 = ObjectProperty;
          }
        }
        else if ( ObjectProperty == -1073741772 )
        {
          v6 = -1073741772;
          v102 = -1073741772;
        }
LABEL_40:
        ObjectProperty = 0;
        goto LABEL_99;
      }
LABEL_23:
      if ( v101 != 8210 )
        goto LABEL_99;
      v17 = Pool2;
      if ( !*Pool2 )
        goto LABEL_98;
      do
      {
        v18 = wcschr(v17, 0x5Cu);
        if ( v18 )
        {
          ObjectProperty = DrvDbSplitDeviceIdDriverInfMatch(v17, 0LL, 0, (__int64)&v96);
          if ( ObjectProperty < 0 )
            break;
          v19 = v103;
          v20 = v17;
          v21 = v108;
          v17 = v18 + 1;
          *v18 = 0;
          v22 = v21;
          v23 = v96;
          v104 = v17;
          if ( v19 == 2 )
          {
            if ( (_BYTE)v96 != 3 )
              goto LABEL_94;
            v22 = v21 | 8;
          }
          if ( (_BYTE)v96 == 1 || (_BYTE)v96 == 2 || (_BYTE)v96 == 3 )
          {
            ObjectProperty = PiDevCfgQueryDriverNode(v20, v107, v22, (__int64)v112, (__int64)&v92);
            if ( ObjectProperty < 0 )
            {
              ObjectProperty = 0;
              goto LABEL_94;
            }
            v24 = v92;
            v25 = *(wchar_t **)(v92 + 168);
            if ( v25 )
            {
              if ( *v25 )
              {
                v26 = v97;
                while ( 1 )
                {
                  v27 = 0;
                  v28 = (wchar_t **)(v26 + 48);
                  v106 = 0;
                  while ( !*v28 )
                  {
LABEL_52:
                    ++v27;
                    v28 += 2;
                    v106 = v27;
                    if ( v27 >= 3 )
                      goto LABEL_55;
                  }
                  if ( !PnpMultiSzContainsString(*v28, v25) )
                    break;
                  *(_QWORD *)(v92 + 176) = v25;
LABEL_55:
                  v24 = v92;
                  if ( !*(_QWORD *)(v92 + 176) )
                  {
                    v29 = -1LL;
                    do
                      ++v29;
                    while ( v25[v29] );
                    v25 += v29 + 1;
                    if ( *v25 )
                      continue;
                  }
                  v23 = v96;
                  v6 = v102;
                  goto LABEL_60;
                }
                v27 = v106;
                goto LABEL_52;
              }
LABEL_60:
              if ( *(_QWORD *)(v24 + 176) )
                *(_DWORD *)(v24 + 108) |= 0xFFFFu;
            }
            if ( (unsigned int)Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline() )
            {
              if ( v23 != 3 )
              {
                v30 = (__int64 *)v92;
                if ( (*(_DWORD *)(v92 + 184) & 0x200) != 0 )
                {
                  v35 = v94;
                  if ( (__int64 *)*v94 != &v93 )
                    goto LABEL_218;
                  *(_QWORD *)(v92 + 8) = v94;
                  *v30 = (__int64)&v93;
                  *v35 = (__int64)v30;
                  v94 = v30;
                  if ( Str && PiDevCfgMatchDriverConfigurationId(v92, Str) )
                  {
                    v6 = -1073740949;
                    v102 = -1073740949;
                  }
                  goto LABEL_93;
                }
                if ( Str )
                {
                  if ( !PiDevCfgMatchDriverConfigurationId(v92, Str) )
                    goto LABEL_80;
                  v30 = (__int64 *)v92;
                }
                if ( !v30[22] )
                {
                  if ( !v7 )
                    goto LABEL_85;
                  if ( (int)PiDevCfgCompareDrivers((__int64)v30, v7, 0) < 0 )
                  {
                    v32 = v94;
                    goto LABEL_88;
                  }
                }
                goto LABEL_90;
              }
            }
            else if ( v23 != 3 )
            {
              if ( !Str || PiDevCfgMatchDriverConfigurationId(v92, Str) )
              {
                v30 = (__int64 *)v92;
                if ( !*(_QWORD *)(v92 + 176) )
                {
                  if ( v7 )
                  {
                    v31 = (int)PiDevCfgCompareDrivers(v92, v7, 0) < 0;
                    v32 = v94;
                    if ( v31 )
                    {
LABEL_88:
                      if ( (__int64 *)*v32 != &v93 )
                        goto LABEL_218;
                      *(_QWORD *)v7 = &v93;
                      *(_QWORD *)(v7 + 8) = v32;
                      *v32 = v7;
                      v94 = (__int64 *)v7;
                      v7 = v92;
                      goto LABEL_93;
                    }
LABEL_91:
                    if ( (__int64 *)*v32 != &v93 )
                      goto LABEL_218;
                    *v30 = (__int64)&v93;
                    v30[1] = (__int64)v32;
                    *v32 = (__int64)v30;
                    v94 = v30;
                    goto LABEL_93;
                  }
LABEL_85:
                  v7 = (__int64)v30;
LABEL_93:
                  v17 = v104;
                  goto LABEL_94;
                }
LABEL_90:
                v32 = v94;
                goto LABEL_91;
              }
LABEL_80:
              v36 = v94;
              v37 = v92;
              if ( (__int64 *)*v94 != &v93 )
                goto LABEL_218;
              *(_QWORD *)v92 = &v93;
              *(_QWORD *)(v37 + 8) = v36;
              *v36 = v37;
              v94 = (__int64 *)v37;
              goto LABEL_93;
            }
            v33 = v100;
            v34 = v92;
            if ( (__int64 *)*v100 != &v99 )
              goto LABEL_218;
            *(_QWORD *)v92 = &v99;
            *(_QWORD *)(v34 + 8) = v33;
            *v33 = v34;
            v100 = (__int64 *)v34;
            goto LABEL_93;
          }
        }
LABEL_94:
        v38 = -1LL;
        do
          ++v38;
        while ( v17[v38] );
        v17 += v38 + 1;
      }
      while ( *v17 );
      v14 = (WCHAR *)v107;
LABEL_98:
      v15 = v95;
LABEL_99:
      v39 = -1LL;
      do
        ++v39;
      while ( v14[v39] );
      ++v15;
      v14 += v39 + 1;
      v95 = v15;
      v107 = v14;
    }
    while ( *v14 );
    v13 = v109;
    v12 = v103;
LABEL_103:
    if ( ObjectProperty < 0 )
      goto LABEL_210;
    v4 = v97;
LABEL_105:
    ++v12;
    ++v13;
    v103 = v12;
    v109 = v13;
  }
  while ( v12 < 3 );
  v40 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
  v41 = Str;
  if ( v40 )
  {
    if ( Str )
    {
      if ( v7 )
        goto LABEL_135;
      if ( v6 == -1073740949 )
        goto LABEL_126;
      v45 = wcschr(Str, 0x3Au);
      v46 = v45;
      if ( !v45 || (*v45 = 0, (v47 = wcschr(v45 + 1, 0x2Cu)) == 0LL) )
      {
LABEL_117:
        ObjectProperty = -1073741773;
        goto LABEL_210;
      }
      *v47 = 0;
      if ( (int)PiDevCfgQueryDriverNode(v41, v46 + 1, 4, (__int64)v112, (__int64)&v92) < 0 )
        goto LABEL_126;
      v48 = (__int64 *)v92;
      if ( (*(_DWORD *)(v92 + 184) & 0x200) != 0 )
      {
        v49 = v94;
        if ( (__int64 *)*v94 != &v93 )
          goto LABEL_218;
        *(_QWORD *)(v92 + 8) = v94;
        *v48 = (__int64)&v93;
        v6 = -1073740949;
        *v49 = (__int64)v48;
        v94 = v48;
        v48 = 0LL;
        v92 = 0LL;
      }
      if ( !v48 )
        goto LABEL_126;
      v7 = (__int64)v48;
    }
LABEL_125:
    if ( !v7 )
      goto LABEL_126;
LABEL_135:
    while ( 1 )
    {
      v53 = v93;
      if ( (__int64 *)v93 == &v93 )
        break;
      if ( *(__int64 **)(v93 + 8) != &v93 )
        goto LABEL_218;
      v54 = *(_QWORD *)v93;
      if ( *(_QWORD *)(*(_QWORD *)v93 + 8LL) != v93 )
        goto LABEL_218;
      v93 = *(_QWORD *)v93;
      *(_QWORD *)(v54 + 8) = &v93;
      v92 = v53;
      IsEnabledDeviceUsageNoInline = Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline();
      v56 = v7 + 224;
      v57 = IsEnabledDeviceUsageNoInline == 0;
      v58 = v92;
      if ( !v57 )
        v56 = v4 + 24;
      v59 = *(__int64 **)(v56 + 8);
      if ( *v59 != v56 )
        goto LABEL_218;
      *(_QWORD *)v92 = v56;
      *(_QWORD *)(v58 + 8) = v59;
      *v59 = v58;
      *(_QWORD *)(v56 + 8) = v58;
      if ( (*(_DWORD *)(v92 + 184) & 4) != 0 )
      {
        v60 = *(_DWORD *)(v7 + 184);
        if ( (v60 & 8) == 0 && (int)PiDevCfgCompareDrivers(v92, v7, 4) < 0 )
          *(_DWORD *)(v7 + 184) = v60 | 8;
      }
    }
    v61 = Str;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v62 = v99;
            if ( (__int64 *)v99 == &v99 )
            {
              *v111 = v7;
              v7 = 0LL;
              goto LABEL_210;
            }
            if ( *(__int64 **)(v99 + 8) != &v99 )
              goto LABEL_218;
            v63 = *(_QWORD *)v99;
            if ( *(_QWORD *)(*(_QWORD *)v99 + 8LL) != v99 )
              goto LABEL_218;
            v99 = *(_QWORD *)v99;
            *(_QWORD *)(v63 + 8) = &v99;
            v92 = v62;
            if ( !PnpIsNullGuid((void *)(v62 + 188)) )
            {
              v64 = v92;
              if ( !*(_QWORD *)(v92 + 176) )
                break;
            }
            if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
            {
              IsNullGuid = PnpIsNullGuid((void *)(v92 + 188));
              *(_DWORD *)(v92 + 448) = IsNullGuid ? -1073741811 : -1073741637;
              v85 = *(__int64 **)(v4 + 32);
              v86 = v92;
              if ( *v85 != v4 + 24 )
                goto LABEL_218;
              *(_QWORD *)v92 = v4 + 24;
              *(_QWORD *)(v86 + 8) = v85;
              *v85 = v86;
              *(_QWORD *)(v4 + 32) = v86;
            }
            else
            {
              PiDevCfgFreeDriverNode(v92);
            }
          }
          v65 = *(_QWORD *)(v92 + 144);
          if ( v65 )
          {
            v66 = *(_DWORD *)(v7 + 152);
            v67 = 0;
            if ( !v66 )
            {
LABEL_160:
              if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
              {
                *(_DWORD *)(v92 + 448) = -1073741127;
                goto LABEL_162;
              }
              goto LABEL_182;
            }
            v68 = *(_DWORD *)(v92 + 152);
            while ( 1 )
            {
              v69 = 0;
              if ( v68 )
              {
                v70 = *(_QWORD *)(v7 + 144);
                while ( 1 )
                {
                  v71 = (_QWORD *)(v65 + 16LL * v69);
                  if ( *(_QWORD *)(v70 + 16LL * v67) == *v71 && *(_QWORD *)(v70 + 16LL * v67 + 8) == v71[1] )
                    break;
                  if ( ++v69 >= v68 )
                    goto LABEL_159;
                }
                if ( v71 )
                  break;
              }
LABEL_159:
              if ( ++v67 >= v66 )
                goto LABEL_160;
            }
          }
          if ( !v61 )
            break;
          if ( !v110 )
            goto LABEL_177;
          if ( *v110 != 42 || v110[1] )
          {
            v75 = v110;
            if ( !*v110 )
              goto LABEL_177;
            while ( !PiDevCfgMatchDriverConfigurationId(v64, v75) )
            {
              v76 = -1LL;
              do
                ++v76;
              while ( v75[v76] );
              v75 += v76 + 1;
              if ( !*v75 )
                goto LABEL_177;
              v64 = v92;
            }
            v64 = v92;
          }
          if ( v64 )
            break;
LABEL_177:
          if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_DWORD *)(v92 + 448) = -1073740007;
            goto LABEL_162;
          }
LABEL_182:
          PiDevCfgFreeDriverNode(v92);
          v4 = v97;
        }
        v77 = Feature_KernelPnP_CheckDriverIntegrity__private_IsEnabledDeviceUsageNoInline();
        v78 = (_QWORD *)v92;
        if ( !v77 || (*(_DWORD *)(v92 + 184) & 0x200) == 0 )
          break;
        if ( !(unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_182;
LABEL_162:
        v4 = v97;
        v72 = v92;
        v73 = v97 + 24;
        v74 = *(__int64 **)(v97 + 32);
        if ( *v74 != v97 + 24 )
          goto LABEL_218;
        *(_QWORD *)v92 = v73;
        *(_QWORD *)(v72 + 8) = v74;
        *v74 = v72;
        *(_QWORD *)(v73 + 8) = v72;
      }
      for ( i = *(_QWORD *)(v7 + 208); ; i = *(_QWORD *)i )
      {
        if ( i == v7 + 208 )
          goto LABEL_188;
        if ( *(_QWORD *)(i + 188) == *(_QWORD *)(v92 + 188) && *(_QWORD *)(i + 196) == *(_QWORD *)(v92 + 196) )
          break;
      }
      if ( *(_QWORD *)(i + 144) )
      {
        if ( !*(_QWORD *)(v92 + 144) )
          goto LABEL_194;
      }
      else if ( *(_QWORD *)(v92 + 144) )
      {
        goto LABEL_200;
      }
      if ( (int)PiDevCfgCompareDrivers(v92, i, 0) >= 0 )
      {
LABEL_194:
        i = (__int64)v78;
        v92 = 0LL;
        v78 = 0LL;
        goto LABEL_195;
      }
LABEL_200:
      v81 = *(_QWORD *)i;
      if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i )
        goto LABEL_218;
      v82 = *(__int64 **)(i + 8);
      if ( *v82 != i )
        goto LABEL_218;
      *v82 = v81;
      *(_QWORD *)(v81 + 8) = v82;
      v78 = (_QWORD *)v92;
LABEL_195:
      if ( !i )
        goto LABEL_188;
      if ( !(unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
      {
        PiDevCfgFreeDriverNode(i);
        v78 = (_QWORD *)v92;
LABEL_188:
        v4 = v97;
        goto LABEL_189;
      }
      v4 = v97;
      *(_DWORD *)(i + 448) = -1073741198;
      v83 = *(__int64 **)(v4 + 32);
      if ( *v83 != v4 + 24 )
        goto LABEL_218;
      *(_QWORD *)i = v4 + 24;
      *(_QWORD *)(i + 8) = v83;
      *v83 = i;
      v78 = (_QWORD *)v92;
      *(_QWORD *)(v4 + 32) = i;
LABEL_189:
      if ( v78 )
      {
        v80 = *(_QWORD **)(v7 + 216);
        if ( *v80 != v7 + 208 )
          goto LABEL_218;
        *v78 = v7 + 208;
        v78[1] = v80;
        *v80 = v78;
        *(_QWORD *)(v7 + 216) = v78;
      }
    }
  }
  if ( !Str )
    goto LABEL_125;
  if ( v7 )
    goto LABEL_135;
  v42 = wcschr(Str, 0x3Au);
  v43 = v42;
  if ( !v42 )
    goto LABEL_117;
  *v42 = 0;
  v44 = wcschr(v42 + 1, 0x2Cu);
  if ( !v44 )
    goto LABEL_117;
  *v44 = 0;
  if ( (int)PiDevCfgQueryDriverNode(v41, v43 + 1, 4, (__int64)v112, (__int64)&v92) >= 0 )
  {
    v7 = v92;
    goto LABEL_125;
  }
LABEL_126:
  if ( !v6 || (ObjectProperty = v6, v6 == -1073741772) )
    ObjectProperty = -1073740656;
  if ( (unsigned int)Feature_KernelPnP_LogBlockedDrivers__private_IsEnabledDeviceUsageNoInline() )
  {
    while ( 1 )
    {
      v50 = (_QWORD *)v93;
      if ( (__int64 *)v93 == &v93 )
        goto LABEL_210;
      if ( *(__int64 **)(v93 + 8) != &v93 )
        break;
      v51 = *(_QWORD *)v93;
      if ( *(_QWORD *)(*(_QWORD *)v93 + 8LL) != v93 )
        break;
      v93 = *(_QWORD *)v93;
      *(_QWORD *)(v51 + 8) = &v93;
      v52 = *(_QWORD **)(v4 + 32);
      v92 = (__int64)v50;
      if ( *v52 != v4 + 24 )
        break;
      *v50 = v4 + 24;
      v50[1] = v52;
      *v52 = v50;
      *(_QWORD *)(v4 + 32) = v50;
    }
LABEL_218:
    __fastfail(3u);
  }
LABEL_210:
  while ( 1 )
  {
    v87 = v93;
    if ( (__int64 *)v93 == &v93 )
      break;
    if ( *(__int64 **)(v93 + 8) != &v93 )
      goto LABEL_218;
    v88 = *(_QWORD *)v93;
    if ( *(_QWORD *)(*(_QWORD *)v93 + 8LL) != v93 )
      goto LABEL_218;
    v93 = *(_QWORD *)v93;
    *(_QWORD *)(v88 + 8) = &v93;
    v92 = v87;
    PiDevCfgFreeDriverNode(v87);
  }
  while ( 1 )
  {
    v89 = v99;
    if ( (__int64 *)v99 == &v99 )
      break;
    if ( *(__int64 **)(v99 + 8) != &v99 )
      goto LABEL_218;
    v90 = *(_QWORD *)v99;
    if ( *(_QWORD *)(*(_QWORD *)v99 + 8LL) != v99 )
      goto LABEL_218;
    v99 = *(_QWORD *)v99;
    *(_QWORD *)(v90 + 8) = &v99;
    v92 = v89;
    PiDevCfgFreeDriverNode(v89);
  }
  if ( v7 )
    PiDevCfgFreeDriverNode(v7);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)ObjectProperty;
}
