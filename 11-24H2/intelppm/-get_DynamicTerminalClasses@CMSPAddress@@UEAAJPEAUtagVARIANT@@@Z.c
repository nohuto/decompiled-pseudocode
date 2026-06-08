/*
 * XREFs of ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x1400323EC
 * Callers:
 *     sub_140027628 @ 0x140027628 (sub_140027628.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_14003F9A0 @ 0x14003F9A0 (sub_14003F9A0.c)
 *     sub_140040DB8 @ 0x140040DB8 (sub_140040DB8.c)
 */

__int64 __fastcall CMSPAddress::get_DynamicTerminalClasses(CMSPAddress *this, struct tagVARIANT *a2)
{
  unsigned int v2; // esi
  _DWORD *Pool2; // r14
  int v6; // edx
  int v7; // ebx
  _DWORD *v8; // rdi
  int v10; // r9d
  int v11; // eax
  _WORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // [rsp+28h] [rbp-D8h]
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  char v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+52h] [rbp-AEh]
  const char *v19; // [rsp+58h] [rbp-A8h]
  __int64 (__fastcall *v20)(); // [rsp+60h] [rbp-A0h]
  char v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+6Ah] [rbp-96h]
  const char *v23; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v24)(); // [rsp+78h] [rbp-88h]
  char v25; // [rsp+80h] [rbp-80h]
  int v26; // [rsp+82h] [rbp-7Eh]
  const char *v27; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v28)(); // [rsp+90h] [rbp-70h]
  char v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+9Ah] [rbp-66h]
  const char *v31; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall *v32)(); // [rsp+A8h] [rbp-58h]
  char v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B2h] [rbp-4Eh]
  const char *v35; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v36)(); // [rsp+C0h] [rbp-40h]
  char v37; // [rsp+C8h] [rbp-38h]
  int v38; // [rsp+CAh] [rbp-36h]
  const char *v39; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v40)(); // [rsp+D8h] [rbp-28h]
  char v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E2h] [rbp-1Eh]
  const char *v43; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v44)(); // [rsp+F0h] [rbp-10h]
  char v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FAh] [rbp-6h]
  const char *v47; // [rsp+100h] [rbp+0h]
  __int64 (__fastcall *v48)(); // [rsp+108h] [rbp+8h]

  v2 = 0;
  v21 = 1;
  v15 = 0;
  v19 = "CoreFrequency";
  v17 = 0;
  v20 = sub_140045530;
  v23 = "Power";
  v24 = sub_140045530;
  v27 = "Latency";
  v28 = sub_140045530;
  v29 = 3;
  v32 = sub_140045530;
  v31 = "BmLatency";
  v18 = 0;
  v35 = "Control";
  Pool2 = 0LL;
  v22 = 0x40000;
  v39 = "Status";
  v43 = "ControlMask";
  v47 = "StatusMask";
  v25 = 2;
  v26 = 0x80000;
  v30 = 786432;
  v33 = 4;
  v34 = 1048578;
  v36 = sub_140033AF0;
  v37 = 5;
  v38 = 1572866;
  v40 = sub_140033AF0;
  v41 = 6;
  v42 = 2097154;
  v44 = sub_140033AF0;
  v45 = 7;
  v46 = 2621442;
  v48 = sub_140033AF0;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)this + 277, 0x80u);
  v7 = sub_140040DB8((_DWORD)this, 1397968984, 0, (unsigned int)&P, (__int64)&v15);
  if ( v7 < 0 )
    goto LABEL_6;
  v8 = P;
  *((_QWORD *)this + 34) |= *((_DWORD *)this + 70) & 0x40000000;
  if ( !v8 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v6) = 2;
      sub_140003D28(off_140018050->DeviceExtension, v6, 3, 28, (__int64)&unk_140012FE8);
    }
    v7 = -1073741823;
    goto LABEL_6;
  }
  if ( !v15 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
    {
LABEL_16:
      v7 = -1073741275;
      goto LABEL_6;
    }
    v10 = 29;
LABEL_15:
    LOBYTE(v6) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v6, 1, v10, (__int64)&unk_140012FE8);
    goto LABEL_16;
  }
  v11 = v8[2];
  if ( !v11 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_16;
    v10 = 30;
    goto LABEL_15;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, (unsigned int)(48 * v11 + 8), 1919119952LL);
  if ( Pool2 )
  {
    v12 = v8 + 3;
    *Pool2 = *((unsigned __int8 *)v8 + 8);
    while ( 1 )
    {
      if ( v2 >= v8[2] )
      {
        *(_QWORD *)a2 = Pool2;
        goto LABEL_9;
      }
      if ( *v12 != 3 )
        break;
      v7 = sub_14003F9A0(
             (unsigned int)&v17,
             8,
             (int)v12 + 4,
             (unsigned __int16)v12[1],
             (__int64)&Pool2[12 * v2 + 2],
             48,
             (__int64)"XPSS",
             0);
      if ( v7 < 0 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LODWORD(v14) = v2;
          sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x20u, (__int64)&unk_140012FE8, v14);
        }
        goto LABEL_6;
      }
      v13 = (unsigned __int16)v12[1];
      if ( (unsigned __int16)v13 < 4u )
        v13 = 4LL;
      v12 = (_WORD *)((char *)v12 + v13 + 4);
      ++v2;
    }
    v7 = -1072431096;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LODWORD(v14) = v2;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x1Fu, (__int64)&unk_140012FE8, v14);
    }
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_6:
  _InterlockedOr((volatile signed __int32 *)this + 278, 0x80u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x72637250u);
  v8 = P;
LABEL_9:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72637250u);
  return (unsigned int)v7;
}
