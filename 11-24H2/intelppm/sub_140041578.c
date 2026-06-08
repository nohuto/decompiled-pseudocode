/*
 * XREFs of sub_140041578 @ 0x140041578
 * Callers:
 *     sub_14002C480 @ 0x14002C480 (sub_14002C480.c)
 * Callees:
 *     sub_140003A78 @ 0x140003A78 (sub_140003A78.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     sub_14000677C @ 0x14000677C (sub_14000677C.c)
 *     sub_14000D6C0 @ 0x14000D6C0 (sub_14000D6C0.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140027008 @ 0x140027008 (sub_140027008.c)
 *     sub_140027628 @ 0x140027628 (sub_140027628.c)
 *     sub_140029660 @ 0x140029660 (sub_140029660.c)
 *     sub_140029CA8 @ 0x140029CA8 (sub_140029CA8.c)
 *     sub_14002A2C0 @ 0x14002A2C0 (sub_14002A2C0.c)
 *     sub_14002D524 @ 0x14002D524 (sub_14002D524.c)
 *     sub_14002F738 @ 0x14002F738 (sub_14002F738.c)
 *     sub_1400318EC @ 0x1400318EC (sub_1400318EC.c)
 *     sub_140033EB8 @ 0x140033EB8 (sub_140033EB8.c)
 *     sub_140035020 @ 0x140035020 (sub_140035020.c)
 *     sub_14003551C @ 0x14003551C (sub_14003551C.c)
 *     sub_1400392E0 @ 0x1400392E0 (sub_1400392E0.c)
 *     sub_140039440 @ 0x140039440 (sub_140039440.c)
 *     sub_14003B17C @ 0x14003B17C (sub_14003B17C.c)
 *     sub_14003B4B4 @ 0x14003B4B4 (sub_14003B4B4.c)
 *     sub_14003C174 @ 0x14003C174 (sub_14003C174.c)
 *     sub_14003C708 @ 0x14003C708 (sub_14003C708.c)
 *     sub_140040530 @ 0x140040530 (sub_140040530.c)
 *     sub_1400406BC @ 0x1400406BC (sub_1400406BC.c)
 *     sub_140040970 @ 0x140040970 (sub_140040970.c)
 *     sub_140040C38 @ 0x140040C38 (sub_140040C38.c)
 *     sub_140040F94 @ 0x140040F94 (sub_140040F94.c)
 *     sub_140043AF8 @ 0x140043AF8 (sub_140043AF8.c)
 *     sub_140046CC4 @ 0x140046CC4 (sub_140046CC4.c)
 *     sub_1400470A0 @ 0x1400470A0 (sub_1400470A0.c)
 */

__int64 __fastcall sub_140041578(CMSPAddress *this)
{
  int v2; // r13d
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // rax
  PIO_WORKITEM WorkItem; // rax
  int v13; // edx
  __int16 v14; // r8
  int v15; // eax
  int v16; // edx
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned __int16 v34; // r9
  __int64 v35; // rcx
  int v36; // ebx
  int v37; // eax
  int v38; // edi
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // ebx
  int v43; // eax
  int v44; // edx
  int v45; // esi
  char v46; // al
  __int64 v47; // rax
  void (__fastcall *v48)(CMSPAddress *); // rax
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned int v53; // ecx
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  int *v58; // [rsp+88h] [rbp-80h] BYREF
  int v59; // [rsp+90h] [rbp-78h] BYREF
  __int64 v60; // [rsp+98h] [rbp-70h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-58h]
  _QWORD v63[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v64; // [rsp+C8h] [rbp-40h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+D8h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+E8h] [rbp-20h] BYREF
  _OWORD v67[3]; // [rsp+F8h] [rbp-10h] BYREF
  int v68; // [rsp+128h] [rbp+20h]
  __int16 v69; // [rsp+12Ch] [rbp+24h]

  v63[0] = 3538996LL;
  LODWORD(v62) = 0;
  v68 = 6619250;
  v69 = 0;
  v64 = 0LL;
  v60 = 0LL;
  PreviousAffinity = 0LL;
  v63[1] = v67;
  v2 = 0;
  v61 = 0LL;
  v59 = 0;
  Affinity = 0LL;
  v67[0] = xmmword_140012C40;
  *((_QWORD *)this + 33) = qword_140019140[0];
  *((_QWORD *)this + 35) = qword_140019140[0];
  v67[1] = xmmword_140012C50;
  *((_QWORD *)this + 34) = 0LL;
  v67[2] = xmmword_140012C60;
  if ( (int)sub_14002A2C0((__int64)this, (__int64)&v64) >= 0 )
  {
    if ( DWORD1(v64) )
    {
      *((_DWORD *)this + 47) = DWORD1(v64);
      *((_BYTE *)this + 185) = BYTE8(v64);
      *((_BYTE *)this + 184) = 1;
      *((_WORD *)this + 93) = 0x2000;
      *((_DWORD *)this + 48) = 0;
    }
  }
  else
  {
    v64 = 0LL;
    HIDWORD(v64) = -1;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v3) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v3, 3, 32, (__int64)&unk_140012AE0);
    }
    *((_QWORD *)this + 35) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  v4 = HIDWORD(v64);
  v5 = (_DWORD *)((char *)this + 56);
  *((_DWORD *)this + 18) = -1;
  *((_DWORD *)this + 14) = -1;
  *((_DWORD *)this + 12) = v4;
  *((_DWORD *)this + 13) = v64;
  v6 = ((__int64 (__fastcall *)(CMSPAddress *))qword_1400196C0)(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    *((_QWORD *)this + 35) = 0LL;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x21u, (__int64)&unk_140012AE0, v6);
    goto LABEL_189;
  }
  if ( *v5 == -1 )
  {
    if ( _bittest64(qword_140019140, 0x2Du) )
    {
      *((_DWORD *)this + 20) = dword_140019A60;
      *((_DWORD *)this + 21) = *((_DWORD *)this + 18);
      *((_QWORD *)this + 35) &= 0xFFFFFFC7FFFFFFFFuLL;
    }
  }
  else
  {
    v8 = IoSetDevicePropertyData(*((PDEVICE_OBJECT *)this + 1), &PropertyKey, 0, 0, 7u, 4u, (char *)this + 56);
    if ( v8 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      Size[0] = v8;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 4u, 0x22u, (__int64)&unk_140012AE0, *(_QWORD *)Size);
    }
    KeProcessorGroupAffinity(&Affinity, (unsigned int)*v5);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v2 = 1;
  }
  *((_QWORD *)&v61 + 1) = &unk_140012C78;
  *(_QWORD *)&v61 = 24LL;
  v62 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, CMSPAddress *))(qword_140019120 + 1632))(qword_140019128, this);
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(qword_140019120 + 3472))(
          qword_140019128,
          v9,
          &v61,
          512LL,
          0LL,
          &v60,
          &v59);
  if ( v10 < 0 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      Sizea[0] = v10;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x23u, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
    }
    v11 = L"Unknown";
  }
  else
  {
    v11 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 1552))(
                             qword_140019128,
                             v60,
                             0LL);
  }
  *((_QWORD *)this + 8) = v11;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)this);
  *((_QWORD *)this + 145) = WorkItem;
  *((_BYTE *)this + 1169) = 1;
  if ( !WorkItem )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v13) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v13, 4, 36, (__int64)&unk_140012AE0);
    }
    v7 = -1073741670;
    goto LABEL_187;
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019160, 0LL);
  v58 = 0LL;
  if ( qword_140019308 )
  {
    v15 = sub_140040530((__int64)this, qword_140019308, v14, &v58);
    if ( v15 >= 0 )
    {
      v17 = *v58;
      if ( (*v58 & 0xE) != 0 )
      {
        if ( (v17 & 2) != 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v16) = 2;
          sub_140003D28(off_140018050->DeviceExtension, v16, 1, 37, (__int64)&unk_140012AE0);
        }
        if ( (v17 & 4) != 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
          sub_14000D6C0(
            (__int64)off_140018050->DeviceExtension,
            *(unsigned __int8 *)(qword_140019308 + 13),
            *(unsigned __int8 *)(qword_140019308 + 12),
            *(unsigned __int8 *)(qword_140019308 + 11),
            Type);
        if ( (v17 & 8) != 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          Sizea[0] = *(_DWORD *)(qword_140019308 + 16);
          sub_1400050F8(
            (__int64)off_140018050->DeviceExtension,
            2u,
            1u,
            0x27u,
            (__int64)&unk_140012AE0,
            *(_QWORD *)Sizea);
        }
      }
      else
      {
        *((_QWORD *)this + 11) = v58;
      }
      goto LABEL_39;
    }
    if ( v15 == -1073741772 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v16) = 4;
        sub_140003D28(off_140018050->DeviceExtension, v16, 2, 40, (__int64)&unk_140012AE0);
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      Sizea[0] = v15;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x29u, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
    }
  }
  if ( qword_140019300 )
    sub_1400318EC((__int64)this, qword_140019300, word_140019310);
LABEL_39:
  sub_1400406BC((__int64)this, (_DWORD *)this + 276);
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
  {
    Sizea[0] = *((_DWORD *)this + 276);
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 5u, 3u, 0x2Au, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
  }
  if ( (*((_QWORD *)this + 35) & 0x111200000E00LL) != 0 )
  {
    v18 = sub_14003C174((__int64)this);
    if ( v18 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        Sizea[0] = v18;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x2Bu, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
      }
      *((_QWORD *)this + 35) &= 0xFFFFEEEDFFFFF1FFuLL;
    }
  }
  if ( (*((_QWORD *)this + 35) & 0x20E0000000000LL) != 0 )
  {
    v19 = sub_1400470A0(this);
    if ( v19 >= 0 )
    {
      *((_QWORD *)this + 35) &= 0xFFFFFFFDFFF80D88uLL;
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      Sizea[0] = v19;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x2Cu, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
    }
  }
  if ( (*((_QWORD *)this + 35) & 0x111200000E00LL) != 0 )
  {
    v20 = sub_14003C708((__int64)this);
    if ( v20 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        Sizea[0] = v20;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x2Du, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
      }
      *((_QWORD *)this + 35) &= 0xFFFFEEEDFFFFF1FFuLL;
    }
  }
  if ( (*((_DWORD *)this + 70) & 0x7F077LL) != 0 )
  {
    v21 = sub_140046CC4(this);
    if ( v21 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      Sizea[0] = v21;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x2Eu, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
    }
  }
  v22 = *((_QWORD *)this + 35);
  if ( (v22 & 0x7F077) == 0 )
  {
    v22 &= ~0x200uLL;
    *((_QWORD *)this + 35) = v22;
  }
  if ( (v22 & 0x200000200LL) != 0 )
  {
    v23 = sub_140039440((__int64)this);
    if ( v23 < 0 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        Sizea[0] = v23;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x2Fu, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
      }
      *((_QWORD *)this + 35) &= 0xFFFFFFFDFFFFFDFFuLL;
    }
  }
  v24 = *((_QWORD *)this + 35);
  if ( (v24 & 0x1000000000LL) != 0 )
  {
    v25 = sub_14003B4B4((__int64)this);
    v26 = *((_QWORD *)this + 35);
    if ( v25 >= 0 )
    {
      v24 = v26 & 0xFFFFFFFF04CFFFFFuLL;
      *((_QWORD *)this + 35) = v24;
    }
    else
    {
      v24 = v26 & 0xFFFFFFEFFFFFFFFFuLL;
      *((_QWORD *)this + 35) = v24;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        Sizea[0] = v25;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x30u, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
        v24 = *((_QWORD *)this + 35);
      }
    }
  }
  if ( (v24 & 0x8000000) != 0 )
  {
    v27 = sub_14002D524((__int64)this);
    v28 = *((_QWORD *)this + 35);
    if ( v27 >= 0 )
    {
      v24 = v28 & 0xFFFFFFFF0CCFFFFFuLL;
      *((_QWORD *)this + 35) = v24;
    }
    else
    {
      v24 = v28 & 0xFFFFFFFFF7FFFFFFuLL;
      *((_QWORD *)this + 35) = v24;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        Sizea[0] = v27;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x31u, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
        v24 = *((_QWORD *)this + 35);
      }
    }
  }
  if ( (v24 & 0x80000000) != 0 )
  {
    v29 = sub_140027008(this);
    v30 = *((_QWORD *)this + 35);
    if ( v29 >= 0 )
    {
      v24 = v30 & 0xFFFFFFFF8CCFFFFFuLL;
      *((_QWORD *)this + 35) = v24;
    }
    else
    {
      v24 = v30 & 0xFFFFFFFF7FFFFFFFuLL;
      *((_QWORD *)this + 35) = v24;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        Sizea[0] = v29;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x32u, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
        v24 = *((_QWORD *)this + 35);
      }
    }
  }
  if ( (v24 & 0x70000000) != 0 )
  {
    v31 = sub_140027628(this);
    if ( v31 < 0 )
    {
      *((_QWORD *)this + 35) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        Sizea[0] = v31;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x33u, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
      }
    }
  }
  if ( (*((_DWORD *)this + 70) & 0x3300000) != 0 )
  {
    v32 = sub_1400392E0((__int64)this);
    if ( v32 < 0 )
    {
      *((_QWORD *)this + 35) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        Sizea[0] = v32;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x34u, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
      }
    }
  }
  if ( !qword_140019318 || (v33 = qword_140019318(this), v7 = v33, v33 >= 0) )
  {
    v35 = *((_QWORD *)this + 35);
    if ( (v35 & 0x60000000) != 0 && *((_BYTE *)this + 424) == 127 )
    {
      if ( (v35 & 0x20000000) != 0 )
      {
        *((_QWORD *)this + 37) = qword_140019338;
        *((_QWORD *)this + 41) = qword_140019360;
        *((_QWORD *)this + 39) = qword_140019348;
      }
      if ( (v35 & 0x40000000) == 0 )
      {
LABEL_114:
        if ( (v35 & 0x4000000) != 0 )
          *((_QWORD *)this + 42) = qword_140019368;
        if ( (v35 & 0xA8000000) != 0 )
        {
          *((_QWORD *)this + 44) = qword_140019378;
          *((_QWORD *)this + 45) = qword_140019380;
        }
        if ( (v35 & 0x2000000) != 0 && *((_BYTE *)this + 480) == 127 )
        {
          *((_QWORD *)this + 38) = qword_140019340;
          *((_QWORD *)this + 40) = qword_140019350;
        }
        else if ( *((_BYTE *)this + 480) == 1 && (v35 & 0x1100000) != 0 )
        {
          *((_QWORD *)this + 38) = sub_1400014D0;
          *((_QWORD *)this + 40) = sub_14000E5C0;
        }
        else
        {
          *((_QWORD *)this + 35) = v35 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_140019370 )
          *((_QWORD *)this + 43) = qword_140019370;
        sub_140029CA8((__int64)this);
        if ( (*((_DWORD *)this + 70) & 0x7B07F070) != 0 )
        {
          v7 = sub_140033EB8((__int64)this);
          if ( v7 < 0 )
          {
            sub_140035020(this);
            if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
              goto LABEL_186;
            v34 = 54;
            Sizea[0] = v7;
            goto LABEL_102;
          }
        }
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
          qword_140019128,
          *((_QWORD *)this + 26),
          0LL);
        v36 = ((__int64 (__fastcall *)(CMSPAddress *))qword_140019688)(this);
        (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *((_QWORD *)this + 26));
        if ( v36 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          Sizea[0] = v36;
          sub_1400050F8(
            (__int64)off_140018050->DeviceExtension,
            2u,
            3u,
            0x37u,
            (__int64)&unk_140012AE0,
            *(_QWORD *)Sizea);
        }
        if ( dword_1400197C8 == dword_140019154
          && _bittest64((const signed __int64 *)this + 35, 0x30u)
          && qword_140019450 )
        {
          qword_140019450(this);
        }
        v37 = *((_DWORD *)this + 70);
        v38 = 0;
        LODWORD(v58) = 0;
        if ( (v37 & 0x70000000) != 0 )
        {
          v39 = sub_140040C38((__int64)this, (unsigned int *)&v58);
          if ( v39 >= 0 )
          {
            v38 = (int)v58;
          }
          else if ( v39 == -1073741772 )
          {
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              LOBYTE(v40) = 4;
              sub_140003D28(off_140018050->DeviceExtension, v40, 2, 56, (__int64)&unk_140012AE0);
            }
          }
          else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            Sizea[0] = v39;
            sub_1400050F8(
              (__int64)off_140018050->DeviceExtension,
              3u,
              3u,
              0x39u,
              (__int64)&unk_140012AE0,
              *(_QWORD *)Sizea);
          }
        }
        v41 = *((_DWORD *)this + 70);
        v42 = 0;
        LODWORD(v58) = 0;
        if ( (v41 & 0x3000000) != 0 )
        {
          v43 = sub_140040970((__int64)this, (unsigned int *)&v58);
          if ( v43 >= 0 )
          {
            v42 = (int)v58;
          }
          else if ( v43 == -1073741772 )
          {
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              LOBYTE(v44) = 4;
              sub_140003D28(off_140018050->DeviceExtension, v44, 2, 58, (__int64)&unk_140012AE0);
            }
          }
          else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          {
            Sizea[0] = v43;
            sub_1400050F8(
              (__int64)off_140018050->DeviceExtension,
              3u,
              3u,
              0x3Bu,
              (__int64)&unk_140012AE0,
              *(_QWORD *)Sizea);
          }
        }
        v45 = ((__int64 (__fastcall *)(CMSPAddress *))qword_1400196C8)(this);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(
          qword_140019128,
          qword_140019158,
          0LL);
        sub_140040F94((__int64)this, v38, v42, 0x64u);
        (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
        if ( (*((_QWORD *)this + 35) & 0x10FF300000LL) != 0 )
        {
          if ( *((_QWORD *)this + 69) )
          {
            v46 = sub_14003551C(this);
          }
          else
          {
            if ( !byte_1400196D8 )
              goto LABEL_160;
            v46 = v45 == 0;
          }
          if ( v46 )
          {
LABEL_160:
            if ( (int)sub_14002F738((__int64)this) >= 0 )
            {
              v47 = *((_QWORD *)this + 35);
              if ( (v47 & 0x1000000000LL) != 0 )
              {
                ((void (__fastcall *)(CMSPAddress *))qword_1400196B8)(this);
              }
              else if ( (v47 & 0x8000000) != 0 )
              {
                ((void (__fastcall *)(CMSPAddress *))qword_1400196B0)(this);
              }
              else if ( (v47 & 0x80000000) != 0 )
              {
                ((void (__fastcall *)(CMSPAddress *))qword_1400196A8)(this);
              }
              else
              {
                v48 = (void (__fastcall *)(CMSPAddress *))qword_140019690;
                if ( (*((_QWORD *)this + 35) & 0x73300000LL) == 0 )
                  v48 = (void (__fastcall *)(CMSPAddress *))qword_1400196A0;
                v48(this);
              }
            }
          }
        }
        if ( _bittest64((const signed __int64 *)this + 35, 0x23u) )
        {
          if ( ++dword_140019A48 == dword_140019154 )
          {
            v49 = CmRegisterMachineHiveLoadedNotification(sub_140005640, 0LL, v63, &unk_140021CE0);
            if ( v49 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              Sizea[0] = v49;
              sub_140005F24(
                (__int64)off_140018050->DeviceExtension,
                2u,
                4u,
                0x3Cu,
                (__int64)&unk_140012AE0,
                *(_QWORD *)Sizea);
            }
          }
        }
        if ( _bittest64((const signed __int64 *)this + 35, 0x25u) )
        {
          if ( ++dword_140019A44 == dword_140019154 )
            sub_140029660();
        }
        if ( (*((_QWORD *)this + 35) & 0x800000000000LL) == 0 )
          goto LABEL_183;
        if ( ((__int64 (__fastcall *)(CMSPAddress *))qword_140019400)(this) != 0x800000000000LL )
          *((_QWORD *)this + 35) &= ~0x800000000000uLL;
        if ( (*((_QWORD *)this + 35) & 0x800000000000LL) != 0 )
        {
          sub_14003B17C((__int64)this);
        }
        else
        {
LABEL_183:
          if ( (qword_140019140[0] & 0x800000000000LL) != 0 )
          {
            v50 = (*(__int64 (__fastcall **)(__int64, CMSPAddress *))(qword_140019120 + 1632))(qword_140019128, this);
            v51 = (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 736))(qword_140019128, v50);
            (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 3352))(qword_140019128, v51);
          }
        }
        sub_14000677C((__int64)this);
        v7 = 0;
        goto LABEL_186;
      }
      v35 &= ~0x400000uLL;
      *((_QWORD *)this + 37) = sub_14000E4F0;
    }
    else if ( *((_BYTE *)this + 424) == 1 && (v35 & 0x10000000) != 0 )
    {
      *((_QWORD *)this + 37) = sub_1400014D0;
      v35 &= ~0x400000uLL;
      *((_QWORD *)this + 39) = sub_14000E5C0;
    }
    else
    {
      v35 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *((_QWORD *)this + 35) = v35;
    goto LABEL_114;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v34 = 53;
    Sizea[0] = v33;
LABEL_102:
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, v34, (__int64)&unk_140012AE0, *(_QWORD *)Sizea);
  }
LABEL_186:
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019160);
LABEL_187:
  if ( v2 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_189:
  if ( (*((_DWORD *)this + 68) & 0x7F077 & *((_QWORD *)this + 35)) != (*((_DWORD *)this + 68) & 0x7F077) )
    sub_140003A78((ULONG *)this, &stru_1400144C0, &stru_1400143A0, 0, 0LL);
  v52 = *((_QWORD *)this + 35);
  v53 = *((_DWORD *)this + 68) & 0x40000000;
  if ( (v52 & 0x40000000) == 0 )
    v53 = *((_DWORD *)this + 68) & 0x70000000;
  if ( (v53 & (unsigned int)v52) != (unsigned __int64)v53 )
    sub_140003A78((ULONG *)this, &stru_1400143E0, &stru_140014470, 0, 0LL);
  if ( (*((_DWORD *)this + 68) & 0x3300000 & *((_QWORD *)this + 35)) != (*((_DWORD *)this + 68) & 0x3300000) )
    sub_140003A78((ULONG *)this, &stru_140014440, &stru_140014460, 0, 0LL);
  if ( (*((_DWORD *)this + 68) & 0x80000000 & *((_QWORD *)this + 35)) != (*((_DWORD *)this + 68) & 0x80000000) )
    sub_140003A78((ULONG *)this, &stru_140014370, &stru_140014390, 0, 0LL);
  if ( (*((_DWORD *)this + 68) & 0x8000000 & *((_QWORD *)this + 35)) != (*((_DWORD *)this + 68) & 0x8000000) )
    sub_140003A78((ULONG *)this, &stru_1400142E0, &stru_1400143B0, 0, 0LL);
  sub_140043AF8(this, 0LL);
  return (unsigned int)v7;
}
