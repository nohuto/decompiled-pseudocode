/*
 * XREFs of PiDevCfgFindDeviceDriver @ 0x1408914DC
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14071C9FC (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072097C (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PiDevCfgCompareDrivers @ 0x1404AE7BC (PiDevCfgCompareDrivers.c)
 *     PnpMultiSzContainsString @ 0x1404B81E0 (PnpMultiSzContainsString.c)
 *     wcschr @ 0x1404FD610 (wcschr.c)
 *     PiDevCfgMatchDriverConfigurationId @ 0x1405A3468 (PiDevCfgMatchDriverConfigurationId.c)
 *     PnpIsNullGuid @ 0x140838480 (PnpIsNullGuid.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x14089134C (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     PiDevCfgFreeDriverNode @ 0x140891C44 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryDriverNode @ 0x140892318 (PiDevCfgQueryDriverNode.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgFindDeviceDriver(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  __int64 v3; // rbx
  int v4; // esi
  int v5; // r13d
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // r12d
  wchar_t *Pool2; // rax
  __int64 v10; // r8
  wchar_t *v11; // rcx
  unsigned int v12; // r15d
  const WCHAR *v13; // rdi
  int i; // ebx
  int ObjectProperty; // eax
  __int64 v16; // rax
  wchar_t *j; // r12
  wchar_t *v18; // rax
  wchar_t *v19; // rbx
  int v20; // eax
  int v21; // eax
  const WCHAR *v22; // r10
  char v23; // bl
  int v24; // edx
  int DriverNode; // eax
  __int64 v26; // rdi
  wchar_t *v27; // r15
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rax
  const WCHAR *v31; // rdi
  _QWORD *v32; // rax
  const WCHAR *v33; // r12
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  int v41; // ebx
  int v42; // eax
  unsigned int k; // edi
  __int64 v44; // rax
  __int64 v45; // rax
  wchar_t *v46; // rcx
  wchar_t *v47; // rax
  bool matched; // al
  __int64 *v49; // rcx
  __int64 *v50; // rax
  __int64 *v51; // rax
  __int64 v52; // rax
  wchar_t *v53; // rax
  wchar_t *v54; // rax
  wchar_t *v55; // rbx
  wchar_t *v56; // rax
  int v57; // eax
  __int64 v58; // rax
  bool IsNullGuid; // al
  _QWORD *v60; // rbx
  __int64 v61; // rdi
  unsigned int v62; // r11d
  unsigned int v63; // r9d
  _QWORD *v64; // rdx
  _QWORD *v65; // r10
  __int64 v66; // rcx
  int v67; // ecx
  const wchar_t *m; // rdi
  bool v69; // al
  __int64 v70; // rax
  _QWORD *n; // rdi
  __int64 v72; // rcx
  _QWORD *v73; // rcx
  _QWORD *v74; // rcx
  _QWORD *v75; // rax
  __int64 v76; // [rsp+60h] [rbp-59h] BYREF
  __int64 v77; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v78; // [rsp+70h] [rbp-49h]
  int v79; // [rsp+78h] [rbp-41h] BYREF
  unsigned int v80; // [rsp+7Ch] [rbp-3Dh] BYREF
  __int64 v81; // [rsp+80h] [rbp-39h] BYREF
  __int64 *v82; // [rsp+88h] [rbp-31h]
  int v83; // [rsp+90h] [rbp-29h] BYREF
  const WCHAR *v84; // [rsp+98h] [rbp-21h]
  wchar_t *Str; // [rsp+A0h] [rbp-19h]
  PCWSTR SourceString; // [rsp+A8h] [rbp-11h]
  int v87; // [rsp+B0h] [rbp-9h]
  __int64 v88; // [rsp+B8h] [rbp-1h]
  const wchar_t *v89; // [rsp+C0h] [rbp+7h]
  unsigned int v91; // [rsp+128h] [rbp+6Fh]
  int v93; // [rsp+138h] [rbp+7Fh]

  v78 = &v77;
  v77 = (__int64)&v77;
  v82 = &v81;
  v81 = (__int64)&v81;
  SourceString = 0LL;
  v3 = a1;
  v89 = 0LL;
  v4 = 0;
  v79 = 0;
  v5 = 0;
  v83 = 1;
  v6 = 0LL;
  v80 = 0;
  v76 = 0LL;
  if ( a2 )
  {
    SourceString = a2;
    v45 = -1LL;
    do
      ++v45;
    while ( a2[v45] );
    v89 = (const wchar_t *)((unsigned __int64)&a2[v45 + 1] & -(__int64)(a2[v45 + 1] != 0));
    v3 = a1;
  }
  v7 = 1;
  v8 = 520;
  if ( PnpSetupInProgress )
    v7 = 3;
  v88 = 520LL;
  v87 = v7;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v10 = 0LL;
  Str = Pool2;
  v11 = Pool2;
  if ( !Pool2 )
  {
    v4 = -1073741670;
    goto LABEL_51;
  }
  v12 = 0;
LABEL_6:
  v91 = v12;
  if ( v12 < 3 )
  {
    v13 = *(const WCHAR **)(v3 + 16 * (v12 + 2LL));
    v84 = v13;
    if ( !v13 )
      goto LABEL_20;
    for ( i = v10; ; ++i )
    {
      v93 = i;
      if ( *v13 == (_WORD)v10 )
        goto LABEL_18;
      v83 = 1;
      v80 = v10;
      while ( 1 )
      {
        ObjectProperty = PnpGetObjectProperty(
                           PiPnpRtlCtx,
                           (_DWORD)v13,
                           11,
                           -1,
                           v10,
                           (__int64)&DEVPKEY_DeviceId_DriverInfMatches,
                           (__int64)&v83,
                           (__int64)v11,
                           v8,
                           (__int64)&v80,
                           v10);
        v4 = ObjectProperty;
        if ( ObjectProperty != -1073741789 )
          break;
        if ( v80 <= v8 )
        {
          v10 = 0LL;
LABEL_71:
          v4 = 0;
          goto LABEL_15;
        }
        v8 = v80;
        v88 = v80;
        if ( Str )
          ExFreePoolWithTag(Str, 0);
        v53 = (wchar_t *)ExAllocatePool2(0x100uLL);
        v10 = 0LL;
        Str = v53;
        v11 = v53;
        if ( !v53 )
        {
          v4 = -1073741670;
LABEL_18:
          if ( v4 < 0 )
            goto LABEL_51;
          v3 = a1;
LABEL_20:
          ++v12;
          goto LABEL_6;
        }
      }
      v10 = 0LL;
      if ( ObjectProperty == -1073741670 )
      {
        v11 = Str;
        goto LABEL_18;
      }
      if ( ObjectProperty < 0 )
      {
        if ( ObjectProperty == -1073741790 || ObjectProperty == -1073740697 )
        {
          if ( v5 != -1073741772 )
            v5 = ObjectProperty;
        }
        else if ( ObjectProperty == -1073741772 )
        {
          v5 = -1073741772;
        }
        goto LABEL_71;
      }
      if ( v83 == 8210 )
        break;
LABEL_15:
      v16 = -1LL;
      do
        ++v16;
      while ( v13[v16] != (_WORD)v10 );
      v11 = Str;
      v13 += v16 + 1;
      v84 = v13;
    }
    for ( j = Str; ; j += v29 + 1 )
    {
      if ( *j == (_WORD)v10 )
      {
LABEL_37:
        v8 = v88;
        i = v93;
        goto LABEL_15;
      }
      v18 = wcschr(j, 0x5Cu);
      v10 = 0LL;
      v19 = v18;
      if ( v18 )
      {
        v20 = DrvDbSplitDeviceIdDriverInfMatch(j, 0LL, 0, (__int64)&v79);
        v10 = 0LL;
        v4 = v20;
        if ( v20 < 0 )
          goto LABEL_37;
        v21 = v87;
        v22 = j;
        *v19 = 0;
        j = v19 + 1;
        v23 = v79;
        v24 = v21;
        if ( v12 == 2 )
        {
          if ( (_BYTE)v79 != 3 )
            goto LABEL_34;
          v24 = v21 | 8;
        }
        if ( (_BYTE)v79 == 1 || (_BYTE)v79 == 2 || (_BYTE)v79 == 3 )
          break;
      }
LABEL_34:
      v29 = -1LL;
      do
        ++v29;
      while ( j[v29] != (_WORD)v10 );
    }
    DriverNode = PiDevCfgQueryDriverNode(v22, v13, v24, (__int64)&v76);
    v10 = 0LL;
    v4 = DriverNode;
    if ( DriverNode < 0 )
    {
      v4 = 0;
      goto LABEL_34;
    }
    v26 = v76;
    v27 = *(wchar_t **)(v76 + 168);
    if ( v27 )
    {
      while ( *v27 )
      {
        for ( k = 0; k < 3; ++k )
        {
          v46 = *(wchar_t **)(a1 + 16 * (k + 2LL));
          if ( v46 )
          {
            v47 = PnpMultiSzContainsString(v46, v27);
            v10 = 0LL;
            if ( v47 )
            {
              *(_QWORD *)(v76 + 176) = v27;
              break;
            }
          }
        }
        v26 = v76;
        if ( *(_QWORD *)(v76 + 176) )
          goto LABEL_80;
        v44 = -1LL;
        do
          ++v44;
        while ( v27[v44] );
        v27 += v44 + 1;
      }
      if ( !*(_QWORD *)(v26 + 176) )
        goto LABEL_29;
LABEL_80:
      *(_DWORD *)(v26 + 108) |= 0xFFFFu;
      v26 = v76;
    }
LABEL_29:
    if ( v23 == 3 )
    {
      v28 = v82;
      if ( (__int64 *)*v82 != &v81 )
        goto LABEL_31;
      *(_QWORD *)(v26 + 8) = v82;
      *(_QWORD *)v26 = &v81;
      *v28 = v26;
      v82 = (__int64 *)v26;
      goto LABEL_33;
    }
    if ( SourceString )
    {
      matched = PiDevCfgMatchDriverConfigurationId(v26, SourceString);
      v10 = 0LL;
      if ( !matched )
      {
        v49 = v78;
        v50 = (__int64 *)v76;
        if ( (__int64 *)*v78 != &v77 )
          goto LABEL_31;
        *(_QWORD *)(v76 + 8) = v78;
        *v50 = (__int64)&v77;
        *v49 = (__int64)v50;
        v78 = v50;
        goto LABEL_33;
      }
      v26 = v76;
    }
    if ( !*(_QWORD *)(v26 + 176) )
    {
      if ( !v6 )
      {
        v6 = v26;
LABEL_33:
        v12 = v91;
        v13 = v84;
        goto LABEL_34;
      }
      if ( (int)PiDevCfgCompareDrivers(v26, v6, 0) < 0 )
      {
        v51 = v78;
        if ( (__int64 *)*v78 != &v77 )
          goto LABEL_31;
        *(_QWORD *)(v6 + 8) = v78;
        *(_QWORD *)v6 = &v77;
        *v51 = v6;
        v78 = (__int64 *)v6;
        v6 = v76;
        goto LABEL_33;
      }
    }
    v30 = v78;
    if ( (__int64 *)*v78 != &v77 )
      goto LABEL_31;
    *(_QWORD *)v26 = &v77;
    *(_QWORD *)(v26 + 8) = v30;
    *v30 = v26;
    v78 = (__int64 *)v26;
    goto LABEL_33;
  }
  v31 = SourceString;
  if ( !SourceString )
    goto LABEL_45;
  if ( v6 )
  {
LABEL_46:
    while ( 1 )
    {
      v32 = (_QWORD *)v77;
      if ( (__int64 *)v77 == &v77 )
        break;
      if ( *(__int64 **)(v77 + 8) != &v77 )
        goto LABEL_31;
      v39 = *(_QWORD *)v77;
      if ( *(_QWORD *)(*(_QWORD *)v77 + 8LL) != v77 )
        goto LABEL_31;
      v77 = *(_QWORD *)v77;
      *(_QWORD *)(v39 + 8) = &v77;
      v76 = (__int64)v32;
      v40 = *(_QWORD **)(v6 + 232);
      if ( *v40 != v6 + 224 )
        goto LABEL_31;
      *v32 = v6 + 224;
      v32[1] = v40;
      *v40 = v32;
      *(_QWORD *)(v6 + 232) = v32;
      if ( (*(_DWORD *)(v76 + 184) & 4) != 0 )
      {
        v41 = *(_DWORD *)(v6 + 184);
        if ( (v41 & 8) == 0 )
        {
          v42 = PiDevCfgCompareDrivers(v76, v6, 4);
          v10 = 0LL;
          if ( v42 < 0 )
            *(_DWORD *)(v6 + 184) = v41 | 8;
        }
      }
    }
    v33 = v31;
    while ( 1 )
    {
      while ( 1 )
      {
        v34 = v81;
        if ( (__int64 *)v81 == &v81 )
        {
          *a3 = v6;
          v6 = v10;
          goto LABEL_51;
        }
        if ( *(__int64 **)(v81 + 8) != &v81 || (v58 = *(_QWORD *)v81, *(_QWORD *)(*(_QWORD *)v81 + 8LL) != v81) )
LABEL_31:
          __fastfail(3u);
        v81 = *(_QWORD *)v81;
        *(_QWORD *)(v58 + 8) = &v81;
        v76 = v34;
        IsNullGuid = PnpIsNullGuid((void *)(v34 + 188));
        v60 = (_QWORD *)v76;
        v10 = 0LL;
        if ( !IsNullGuid && !*(_QWORD *)(v76 + 176) )
          break;
LABEL_150:
        PiDevCfgFreeDriverNode(v60);
        v10 = 0LL;
      }
      v61 = *(_QWORD *)(v76 + 144);
      if ( v61 )
      {
        v62 = *(_DWORD *)(v6 + 152);
        v63 = 0;
        if ( v62 )
        {
          while ( 1 )
          {
            while ( (unsigned int)v10 >= *(_DWORD *)(v76 + 152) )
            {
              LODWORD(v10) = 0;
LABEL_149:
              if ( ++v63 >= v62 )
                goto LABEL_150;
            }
            v64 = (_QWORD *)(*(_QWORD *)(v6 + 144) + 16LL * v63);
            v65 = (_QWORD *)(v61 + 16LL * (unsigned int)v10);
            v66 = *v64 - *v65;
            if ( *v64 == *v65 )
              v66 = v64[1] - v65[1];
            if ( !v66 )
            {
              v10 = 0LL;
              if ( v65 )
                goto LABEL_137;
              goto LABEL_149;
            }
            LODWORD(v10) = v10 + 1;
          }
        }
        goto LABEL_150;
      }
LABEL_137:
      if ( v33 )
      {
        if ( !v89 )
          goto LABEL_150;
        v67 = *v89 - 42;
        if ( *v89 == 42 )
          v67 = v89[1];
        if ( v67 )
        {
          for ( m = v89; ; m += v70 + 1 )
          {
            if ( !*m )
              goto LABEL_150;
            v69 = PiDevCfgMatchDriverConfigurationId((__int64)v60, m);
            v10 = 0LL;
            if ( v69 )
              break;
            v70 = -1LL;
            do
              ++v70;
            while ( m[v70] );
            v60 = (_QWORD *)v76;
          }
          v60 = (_QWORD *)v76;
        }
        if ( !v60 )
          goto LABEL_150;
      }
      for ( n = *(_QWORD **)(v6 + 208); ; n = (_QWORD *)*n )
      {
        if ( n == (_QWORD *)(v6 + 208) )
          goto LABEL_164;
        v72 = *(_QWORD *)((char *)n + 188) - *(_QWORD *)((char *)v60 + 188);
        if ( !v72 )
          v72 = *(_QWORD *)((char *)n + 196) - *(_QWORD *)((char *)v60 + 196);
        if ( !v72 )
          break;
      }
      if ( n[18] )
      {
        if ( !v60[18] )
          goto LABEL_161;
      }
      else if ( v60[18] )
      {
        goto LABEL_169;
      }
      if ( (int)PiDevCfgCompareDrivers((__int64)v60, (__int64)n, 0) >= 0 )
      {
LABEL_161:
        n = v60;
        v60 = (_QWORD *)v10;
        v76 = v10;
        goto LABEL_162;
      }
LABEL_169:
      v74 = (_QWORD *)*n;
      if ( *(_QWORD **)(*n + 8LL) != n )
        goto LABEL_31;
      v75 = (_QWORD *)n[1];
      if ( (_QWORD *)*v75 != n )
        goto LABEL_31;
      *v75 = v74;
      v74[1] = v75;
      v60 = (_QWORD *)v76;
LABEL_162:
      if ( n )
      {
        PiDevCfgFreeDriverNode(n);
        v60 = (_QWORD *)v76;
        v10 = 0LL;
      }
LABEL_164:
      if ( v60 )
      {
        v73 = *(_QWORD **)(v6 + 216);
        if ( *v73 != v6 + 208 )
          goto LABEL_31;
        *v60 = v6 + 208;
        v60[1] = v73;
        *v73 = v60;
        *(_QWORD *)(v6 + 216) = v60;
      }
    }
  }
  v54 = wcschr(SourceString, 0x3Au);
  v55 = v54;
  if ( !v54 || (*v54 = 0, (v56 = wcschr(v54 + 1, 0x2Cu)) == 0LL) )
  {
    v4 = -1073741773;
    goto LABEL_51;
  }
  *v56 = 0;
  v57 = PiDevCfgQueryDriverNode(v31, v55 + 1, 4, (__int64)&v76);
  v10 = 0LL;
  if ( v57 < 0 )
    goto LABEL_103;
  v6 = v76;
LABEL_45:
  if ( v6 )
    goto LABEL_46;
LABEL_103:
  if ( !v5 || v5 == -1073741772 )
    v4 = -1073740656;
  else
    v4 = v5;
LABEL_51:
  while ( 1 )
  {
    v35 = v77;
    if ( (__int64 *)v77 == &v77 )
      break;
    if ( *(__int64 **)(v77 + 8) != &v77 )
      goto LABEL_31;
    v52 = *(_QWORD *)v77;
    if ( *(_QWORD *)(*(_QWORD *)v77 + 8LL) != v77 )
      goto LABEL_31;
    v77 = *(_QWORD *)v77;
    *(_QWORD *)(v52 + 8) = &v77;
    v76 = v35;
    PiDevCfgFreeDriverNode(v35);
  }
  while ( 1 )
  {
    v36 = v81;
    if ( (__int64 *)v81 == &v81 )
      break;
    if ( *(__int64 **)(v81 + 8) != &v81 )
      goto LABEL_31;
    v38 = *(_QWORD *)v81;
    if ( *(_QWORD *)(*(_QWORD *)v81 + 8LL) != v81 )
      goto LABEL_31;
    v81 = *(_QWORD *)v81;
    *(_QWORD *)(v38 + 8) = &v81;
    v76 = v36;
    PiDevCfgFreeDriverNode(v36);
  }
  if ( v6 )
    PiDevCfgFreeDriverNode(v6);
  if ( Str )
    ExFreePoolWithTag(Str, 0);
  return (unsigned int)v4;
}
