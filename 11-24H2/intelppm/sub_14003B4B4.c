/*
 * XREFs of sub_14003B4B4 @ 0x14003B4B4
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140004388 @ 0x140004388 (sub_140004388.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003BCB4 @ 0x14003BCB4 (sub_14003BCB4.c)
 *     sub_14003BDA4 @ 0x14003BDA4 (sub_14003BDA4.c)
 *     sub_140043F48 @ 0x140043F48 (sub_140043F48.c)
 */

__int64 __fastcall sub_14003B4B4(__int64 a1)
{
  __int64 v2; // rdx
  void (__fastcall *v3)(__int64, __int64, _QWORD); // rax
  int v4; // edx
  _DWORD *v5; // r15
  _DWORD *v6; // r13
  int v7; // r9d
  unsigned int v8; // ebx
  unsigned int v9; // edi
  PIO_WORKITEM WorkItem; // rax
  int v11; // edx
  __int64 Pool2; // rax
  int v13; // eax
  unsigned __int16 v14; // r9
  unsigned __int8 v15; // dl
  unsigned int v16; // ecx
  int v17; // r11d
  unsigned int v18; // edx
  unsigned int v19; // r9d
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // r9
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  int v35; // r13d
  char v37; // r10
  char v38; // r11
  char v39; // bl
  char v40; // di
  __int64 i; // r8
  unsigned int v42; // eax
  unsigned int v43; // r9d
  unsigned int v44; // eax
  int v45; // r9d
  unsigned int v46; // r8d
  _DWORD *v47; // rax
  __int64 v48; // [rsp+28h] [rbp-30h]
  __int64 v49; // [rsp+30h] [rbp-28h]
  _DWORD v50[2]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v51; // [rsp+48h] [rbp-10h]
  __int64 v52; // [rsp+A0h] [rbp+48h] BYREF
  int v53; // [rsp+A8h] [rbp+50h] BYREF
  int v54; // [rsp+B0h] [rbp+58h] BYREF

  v2 = *(_QWORD *)(a1 + 208);
  v53 = 0;
  v3 = *(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504);
  v54 = 0;
  v3(qword_140019128, v2, 0LL);
  v5 = 0LL;
  v6 = 0LL;
  if ( !*(_BYTE *)(a1 + 1137) )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
    {
LABEL_5:
      v8 = -1073741823;
      goto LABEL_71;
    }
    v7 = 10;
LABEL_4:
    LOBYTE(v4) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v4, 1, v7, (__int64)&unk_140014CB8);
    goto LABEL_5;
  }
  v9 = *(_DWORD *)(a1 + 1128);
  if ( !v9 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_5;
    v7 = 11;
    goto LABEL_4;
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1176) = WorkItem;
  if ( !WorkItem )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v11) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v11, 4, 12, (__int64)&unk_140014CB8);
    }
    goto LABEL_12;
  }
  Pool2 = ExAllocatePool2(64LL, 8 * v9 + 56, 1919119952LL);
  v5 = (_DWORD *)Pool2;
  if ( !Pool2 )
    goto LABEL_12;
  v13 = sub_14003BCB4(a1, v9, Pool2 + 56);
  v8 = v13;
  if ( v13 < 0 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_71;
    v14 = 13;
    goto LABEL_17;
  }
  v16 = 0;
  v17 = -1;
  v18 = -1;
  while ( v16 < v9 )
  {
    if ( !v5[2 * v16 + 15] )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v22 = 14;
        goto LABEL_45;
      }
      goto LABEL_47;
    }
    v19 = v5[2 * v16 + 14];
    v20 = (v19 >> 1) & 3;
    if ( v20 > 1 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_47;
      v23 = 15;
      goto LABEL_41;
    }
    v21 = v5[2 * v16 + 14] & 0x78;
    if ( v21 > 8 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_47;
      v23 = 16;
LABEL_41:
      LODWORD(v49) = v20;
      LODWORD(v48) = v16;
LABEL_42:
      sub_140004388((__int64)off_140018050->DeviceExtension, 2u, 1u, v23, (__int64)&unk_140014CB8, v48, v49);
      goto LABEL_47;
    }
    if ( (v19 & 0x81) == 0x80 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v22 = 17;
        goto LABEL_45;
      }
LABEL_47:
      v8 = -1073741811;
      goto LABEL_71;
    }
    if ( v19 >= 0x100 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v22 = 18;
LABEL_45:
        LODWORD(v48) = v16;
LABEL_46:
        sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 1u, v22, (__int64)&unk_140014CB8, v48);
      }
      goto LABEL_47;
    }
    if ( (v19 & 0x78) != 0 )
    {
      if ( v21 == 8 && v17 == -1 )
        v17 = v16;
    }
    else if ( v18 == -1 )
    {
      v18 = v16;
    }
    ++v16;
  }
  if ( v18 == -1 )
  {
    v8 = -1073741811;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v18) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v18, 1, 19, (__int64)&unk_140014CB8);
    }
    goto LABEL_71;
  }
  v24 = v5[2 * v18 + 15];
  v5[12] = v18;
  v5[5] = v24;
  v5[13] = v17;
  v13 = sub_14003BDA4(a1, (int)v5 + 4, (int)v5 + 8, (int)v5 + 12, (__int64)(v5 + 4), (__int64)&v53, (__int64)&v54);
  v8 = v13;
  if ( v13 >= 0 )
  {
    v25 = *(_QWORD *)(a1 + 1120);
    LOBYTE(v52) = 0;
    if ( (int)PoFxProcessorNotification(v25, 44LL, &v52) >= 0 )
      *((_BYTE *)v5 + 36) = v52;
    v26 = *(_QWORD *)(a1 + 1120);
    LOBYTE(v52) = 0;
    if ( (int)PoFxProcessorNotification(v26, 47LL, &v52) >= 0 )
      *(_BYTE *)v5 = v52;
    v28 = v5[2];
    if ( v5[1] < v28 || (v29 = v5[3], v28 < v29) || (v30 = v5[4], v29 < v30) || !v30 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        goto LABEL_47;
      v45 = 21;
      goto LABEL_102;
    }
    v31 = *(unsigned __int8 *)(a1 + 1136);
    if ( !(_BYTE)v31 )
    {
LABEL_113:
      v46 = v5[2];
      v5[6] = 100 * v5[1] / v46;
      v5[7] = 100 * v5[3] / v46;
      v5[8] = 100 * v5[4] / v46;
      v47 = (_DWORD *)ExAllocatePool2(64LL, 24LL, 1919119952LL);
      if ( v47 )
      {
        v47[2] = 0;
        v6 = 0LL;
        *v47 = 1;
        v8 = 0;
        v47[1] = 5;
        v47[3] = v53;
        v47[5] = v54;
        v47[4] = 1;
        *(_QWORD *)(a1 + 1200) = v47;
        *(_QWORD *)(a1 + 1184) = v5;
        v5 = 0LL;
        sub_140043F48(a1, 0LL);
      }
      else
      {
        v8 = -1073741670;
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v14 = 30;
          LODWORD(v48) = -1073741670;
          v15 = 2;
          goto LABEL_18;
        }
      }
      goto LABEL_71;
    }
    v52 = ExAllocatePool2(64LL, 24 * v31, 1919119952LL);
    v6 = (_DWORD *)v52;
    if ( v52 )
    {
      v32 = *(unsigned __int8 *)(a1 + 1136);
      v33 = *(_QWORD *)(a1 + 1120);
      v50[1] = 0;
      v50[0] = v32;
      v51 = v52;
      v34 = PoFxProcessorNotification(v33, 41LL, v50);
      v35 = v34;
      v8 = v34;
      if ( v34 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LODWORD(v48) = v34;
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 2u, 0x22u, (__int64)&unk_140014CB8, v48);
LABEL_68:
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LODWORD(v48) = v35;
          sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x16u, (__int64)&unk_140014CB8, v48);
        }
        v6 = (_DWORD *)v52;
        goto LABEL_71;
      }
      if ( v34 < 0 )
        goto LABEL_68;
      v6 = (_DWORD *)v52;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v42 = *(unsigned __int8 *)(a1 + 1136);
        if ( (unsigned int)i >= v42 )
          break;
        v43 = v6[6 * i];
        v6[6 * i + 2] = 100 * v43 / v5[2];
        v44 = v5[4];
        LODWORD(v52) = v44;
        if ( v43 < v44 || (v27 = v5[1], v43 > v27) )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            goto LABEL_47;
          v22 = 23;
          goto LABEL_98;
        }
        if ( (_DWORD)i )
        {
          if ( v43 >= v6[6 * (unsigned int)(i - 1)] )
          {
            if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
              goto LABEL_47;
            v23 = 24;
            LODWORD(v49) = i - 1;
            LODWORD(v48) = i;
            goto LABEL_42;
          }
          v44 = v52;
        }
        if ( v43 == v27 )
          v37 = 1;
        if ( v43 == v44 )
          v38 = 1;
        if ( v43 == v5[3] )
          v39 = 1;
        if ( v43 == v5[2] )
        {
          v40 = 1;
          if ( v6[6 * i + 1] != v5[5] )
          {
            if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
              goto LABEL_47;
            v22 = 25;
LABEL_98:
            LODWORD(v48) = i;
            goto LABEL_46;
          }
        }
      }
      if ( v37 )
      {
        if ( v38 )
        {
          if ( v39 )
          {
            if ( v40 )
            {
              *((_BYTE *)v5 + 37) = v42;
              *((_QWORD *)v5 + 5) = v6;
              goto LABEL_113;
            }
            if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
              goto LABEL_47;
            v45 = 29;
          }
          else
          {
            if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
              goto LABEL_47;
            v45 = 28;
          }
        }
        else
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            goto LABEL_47;
          v45 = 27;
        }
      }
      else
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          goto LABEL_47;
        v45 = 26;
      }
LABEL_102:
      LOBYTE(v27) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v27, 1, v45, (__int64)&unk_140014CB8);
      goto LABEL_47;
    }
LABEL_12:
    v8 = -1073741670;
    goto LABEL_71;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v14 = 20;
LABEL_17:
    LODWORD(v48) = v13;
    v15 = 3;
LABEL_18:
    sub_1400050F8((__int64)off_140018050->DeviceExtension, v15, 3u, v14, (__int64)&unk_140014CB8, v48);
  }
LABEL_71:
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *(_QWORD *)(a1 + 208));
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  return v8;
}
