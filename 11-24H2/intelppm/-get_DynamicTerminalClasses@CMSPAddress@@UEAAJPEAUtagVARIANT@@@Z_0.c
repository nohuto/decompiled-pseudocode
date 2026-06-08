/*
 * XREFs of ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14003F3EC
 * Callers:
 *     sub_14003ED1C @ 0x14003ED1C (sub_14003ED1C.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140033E48 @ 0x140033E48 (sub_140033E48.c)
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 */

__int64 __fastcall CMSPAddress::get_DynamicTerminalClasses(CMSPAddress *this, struct tagVARIANT *a2)
{
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  _DWORD *v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // ecx
  _DWORD *v11; // rdi
  int v12; // r12d
  _DWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  _WORD *v16; // r14
  unsigned int *v17; // rax
  int v18; // edx
  int v19; // r9d
  __int64 v20; // r8
  _BYTE *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int8 v24; // al
  int v26; // r9d
  __int64 v27; // [rsp+28h] [rbp-D8h]
  __int64 v28; // [rsp+38h] [rbp-C8h]
  int v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v31[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+84h] [rbp-7Ch]
  __int128 v36; // [rsp+88h] [rbp-78h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h]
  unsigned int *v38; // [rsp+A0h] [rbp-60h]
  struct tagVARIANT *v39; // [rsp+A8h] [rbp-58h]
  char v40; // [rsp+B0h] [rbp-50h] BYREF
  int v41; // [rsp+B2h] [rbp-4Eh]
  const char *v42; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v43)(); // [rsp+C0h] [rbp-40h]
  char v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+CAh] [rbp-36h]
  const char *v46; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v47)(); // [rsp+D8h] [rbp-28h]
  char v48; // [rsp+E0h] [rbp-20h]
  int v49; // [rsp+E2h] [rbp-1Eh]
  const char *v50; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v51)(); // [rsp+F0h] [rbp-10h]
  char v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+FAh] [rbp-6h]
  const char *v54; // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v55)(); // [rsp+108h] [rbp+8h]

  v39 = a2;
  v40 = 0;
  v42 = "Register";
  v45 = 786432;
  v47 = sub_140045530;
  v43 = sub_140045480;
  v41 = 2;
  v46 = "StateType";
  v44 = 1;
  v50 = "Latency";
  v54 = "PowerConsumption";
  v48 = 2;
  v49 = 917504;
  v51 = sub_140045530;
  v52 = 3;
  v53 = 0x100000;
  v55 = sub_140045530;
  _InterlockedOr((volatile signed __int32 *)this + 277, 8u);
  v30 = 0LL;
  LODWORD(v37) = 0;
  v36 = 0LL;
  v34 = 0;
  v3 = 1024;
  v33 = 0LL;
  qmemcpy(v31, "AeiB_CST", sizeof(v31));
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v3, 1919119952LL);
    v5 = (_DWORD *)Pool2;
    if ( !Pool2 )
    {
      v9 = -1073741670;
      goto LABEL_33;
    }
    v6 = *((_QWORD *)this + 2);
    *((_QWORD *)&v36 + 1) = v31;
    *(_QWORD *)&v36 = 1LL;
    v37 = 8LL;
    *(_QWORD *)&v33 = 1LL;
    v35 = 0;
    *((_QWORD *)&v33 + 1) = Pool2;
    v34 = v3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int128 *, __int128 *, _QWORD, __int64 *))(qword_140019120 + 1488))(
           qword_140019128,
           v6,
           0LL,
           3325956LL,
           &v36,
           &v33,
           0LL,
           &v30);
    v9 = v7;
    if ( v7 != -2147483643 )
      break;
    v3 = v5[1];
    ExFreePoolWithTag(v5, 0);
  }
  if ( v7 >= 0 && (v10 = v30, v30) )
  {
    v11 = v5;
  }
  else
  {
    v11 = 0LL;
    ExFreePoolWithTag(v5, 0);
    v10 = v30;
  }
  if ( v9 < 0 )
    goto LABEL_30;
  *((_QWORD *)this + 34) |= *((_DWORD *)this + 70) & 0x7F070;
  if ( !v10 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
    {
LABEL_38:
      v9 = -1073741275;
      goto LABEL_30;
    }
    v26 = 10;
LABEL_48:
    LOBYTE(v8) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v8, 1, v26, (__int64)&unk_140012FE8);
    goto LABEL_38;
  }
  if ( !v11[2] )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_38;
    v26 = 11;
    goto LABEL_48;
  }
  if ( *((_WORD *)v11 + 6) )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v8) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v8, 1, 12, (__int64)&unk_140012FE8);
    }
    v9 = -1072431096;
  }
  else
  {
    v12 = v11[4];
    if ( v12 )
    {
      v13 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(20 * v12 + 4), 1919119952LL);
      if ( v13 )
      {
        v14 = *((unsigned __int16 *)v11 + 7);
        if ( (unsigned __int16)v14 < 4u )
          v14 = 4LL;
        v15 = 0LL;
        v16 = (_WORD *)((char *)v11 + v14 + 16);
        v17 = v11 + 1;
        v18 = 0;
        v38 = v11 + 1;
        v29 = 0;
        while ( v16 < (_WORD *)((char *)v11 + *v17) )
        {
          if ( (_DWORD)v15 == v12 )
          {
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              LOBYTE(v18) = 2;
              sub_140003D28(off_140018050->DeviceExtension, v18, 1, 13, (__int64)&unk_140012FE8);
            }
            goto LABEL_43;
          }
          if ( *v16 != 3 )
          {
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              LODWORD(v27) = v18;
              sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 1u, 0xEu, (__int64)&unk_140012FE8, v27);
            }
LABEL_43:
            v9 = -1072431096;
            goto LABEL_44;
          }
          LODWORD(v28) = 0;
          v19 = (unsigned __int16)v16[1];
          v32 = 5 * v15;
          v9 = sub_14003F9A0(
                 (unsigned int)&v40,
                 4,
                 (int)v16 + 4,
                 v19,
                 (__int64)&v13[5 * v15 + 1],
                 20,
                 (__int64)"_CST",
                 v28);
          if ( v9 < 0 )
          {
            if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
            {
              LODWORD(v27) = v29;
              sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 1u, 0xFu, (__int64)&unk_140012FE8, v27);
            }
            v9 = -1072431089;
            goto LABEL_44;
          }
          v20 = v32;
          v21 = &v13[v32 + 1];
          if ( *v21 != 127 )
          {
            sub_140033E48(v21);
            v20 = v32;
          }
          v22 = (unsigned __int16)v16[1];
          if ( (unsigned __int16)v22 < 4u )
            v22 = 4LL;
          v23 = *((_QWORD *)this + 35);
          v16 = (_WORD *)((char *)v16 + v22 + 4);
          v24 = v13[v20 + 4];
          v18 = ++v29;
          if ( (v23 & 0x1010) == 0 && v24 == 1 || (v23 & 0x2020) == 0 && v24 == 2 || (v23 & 0x4040) == 0 && v24 >= 3u )
            LODWORD(v15) = v15 - 1;
          v17 = v38;
          v15 = (unsigned int)(v15 + 1);
        }
        if ( (_DWORD)v15 )
        {
          *v13 = (unsigned __int8)v15;
          *(_QWORD *)v39 = v13;
          goto LABEL_30;
        }
        v9 = -1073741823;
LABEL_44:
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        v9 = -1073741670;
      }
    }
    else
    {
      v9 = -1073741823;
    }
  }
LABEL_30:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v9 < 0 )
LABEL_33:
    _InterlockedOr((volatile signed __int32 *)this + 278, 8u);
  return (unsigned int)v9;
}
