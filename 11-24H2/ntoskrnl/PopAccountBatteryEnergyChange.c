/*
 * XREFs of PopAccountBatteryEnergyChange @ 0x140A95B84
 * Callers:
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall PopAccountBatteryEnergyChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // rsi
  bool v3; // zf
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // ecx
  const CHAR *v11; // rdx
  const CHAR *v12; // r10
  __int64 v13; // r8
  const CHAR *v14; // rdx
  const CHAR *v15; // r10
  __int64 v16; // r8
  const CHAR *v17; // rdx
  const CHAR *v18; // r10
  __int64 v19; // r8
  const CHAR *v20; // rdx
  int v21; // r9d
  const CHAR *v22; // rdx
  __int64 v23; // r8
  const CHAR *v24; // r10
  __int64 v25; // r8
  const CHAR *v26; // rdx
  const CHAR *v27; // r10
  __int64 v28; // r8
  const CHAR *v29; // rdx
  const CHAR *v30; // r10
  __int64 v31; // r8
  const CHAR *v32; // rdx
  const CHAR *v33; // r10
  __int64 v34; // r8
  const CHAR *v35; // rdx
  const CHAR *v36; // r10
  __int64 v37; // r8
  const CHAR *v38; // rdx
  const CHAR *v39; // r10
  __int64 v40; // r8
  const CHAR *v41; // rdx
  const CHAR *v42; // r10
  __int64 v43; // r8
  const CHAR *v44; // rdx
  const CHAR *v45; // r10
  const CHAR *v46; // rdx
  unsigned int *v47; // r8
  unsigned __int64 v48; // r10
  __int64 v49; // r9
  unsigned int v50; // ecx
  int v51; // eax
  unsigned __int64 v52; // rcx
  int v54; // [rsp+38h] [rbp-D0h] BYREF
  int v55; // [rsp+3Ch] [rbp-CCh] BYREF
  int v56; // [rsp+40h] [rbp-C8h] BYREF
  int v57; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v58; // [rsp+48h] [rbp-C0h] BYREF
  int v59; // [rsp+4Ch] [rbp-BCh] BYREF
  int v60; // [rsp+50h] [rbp-B8h] BYREF
  int v61; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v62; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v63; // [rsp+5Ch] [rbp-ACh] BYREF
  __int128 v64; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v67; // [rsp+98h] [rbp-70h]
  __int64 v68; // [rsp+A0h] [rbp-68h]
  __int64 v69; // [rsp+A8h] [rbp-60h]
  _DWORD v70[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v71; // [rsp+B8h] [rbp-50h]
  __int64 v72; // [rsp+C0h] [rbp-48h]
  char v73[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v74[16]; // [rsp+D8h] [rbp-30h] BYREF
  char v75[16]; // [rsp+E8h] [rbp-20h] BYREF
  char v76[16]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 *v77; // [rsp+108h] [rbp+0h]
  __int64 v78; // [rsp+110h] [rbp+8h]
  int *v79; // [rsp+118h] [rbp+10h]
  __int64 v80; // [rsp+120h] [rbp+18h]
  int *v81; // [rsp+128h] [rbp+20h]
  __int64 v82; // [rsp+130h] [rbp+28h]
  int *v83; // [rsp+138h] [rbp+30h]
  __int64 v84; // [rsp+140h] [rbp+38h]
  int *v85; // [rsp+148h] [rbp+40h]
  __int64 v86; // [rsp+150h] [rbp+48h]
  char v87[16]; // [rsp+158h] [rbp+50h] BYREF
  char v88[16]; // [rsp+168h] [rbp+60h] BYREF
  char v89[16]; // [rsp+178h] [rbp+70h] BYREF
  char v90[16]; // [rsp+188h] [rbp+80h] BYREF
  char v91[16]; // [rsp+198h] [rbp+90h] BYREF
  char v92[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v93[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v94[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v95[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned int *v96; // [rsp+1E8h] [rbp+E0h]
  __int64 v97; // [rsp+1F0h] [rbp+E8h]
  int *v98; // [rsp+1F8h] [rbp+F0h]
  __int64 v99; // [rsp+200h] [rbp+F8h]
  int *v100; // [rsp+208h] [rbp+100h]
  __int64 v101; // [rsp+210h] [rbp+108h]
  int *v102; // [rsp+218h] [rbp+110h]
  __int64 v103; // [rsp+220h] [rbp+118h]
  unsigned int *v104; // [rsp+228h] [rbp+120h]
  __int64 v105; // [rsp+230h] [rbp+128h]
  unsigned int *v106; // [rsp+238h] [rbp+130h]
  __int64 v107; // [rsp+240h] [rbp+138h]
  _UNKNOWN *retaddr; // [rsp+270h] [rbp+168h] BYREF

  v1 = &retaddr;
  v2 = *(unsigned int *)(a1 + 240);
  v3 = (*(_DWORD *)(a1 + 112) & 0x40000000) == 0;
  v5 = *(unsigned int *)(a1 + 244);
  v6 = 0LL;
  v7 = *(unsigned int *)(a1 + 152);
  LODWORD(v8) = *(_DWORD *)(a1 + 240);
  v9 = *(unsigned int *)(a1 + 128);
  v64 = *(_OWORD *)(a1 + 224);
  *(_DWORD *)(a1 + 224) = 0;
  if ( v3 )
  {
    LODWORD(v1) = v9 - 1;
    if ( (unsigned int)(v9 - 1) > 0xFFFFFFFD )
    {
      *(_QWORD *)(a1 + 240) = 0LL;
      *(_DWORD *)(a1 + 224) = 4;
      v10 = 4;
    }
    else if ( (_DWORD)v7 == -1 )
    {
      *(_DWORD *)(a1 + 224) = 8;
      v10 = 8;
    }
    else if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != (_DWORD)v9 )
      {
        *(_DWORD *)(a1 + 244) = v9;
        v8 = v9 * (unsigned int)(100000 * v2 / v5) / 100000;
      }
      LODWORD(v1) = v8;
      v6 = v7 - (unsigned int)v8;
      *(_DWORD *)(a1 + 240) = v7;
      *(_QWORD *)(a1 + 232) += v6;
      v10 = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 244) = v9;
      *(_DWORD *)(a1 + 240) = v7;
      *(_DWORD *)(a1 + 224) = 1;
      v10 = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 224) = 2;
    v10 = 2;
  }
  if ( v10 != (_DWORD)v64 || (LODWORD(v1) = DWORD2(v64), *(_QWORD *)(a1 + 232) != *((_QWORD *)&v64 + 1)) )
  {
    if ( (unsigned int)dword_140E07680 > 5 )
    {
      v68 = 2LL;
      v67 = v70;
      v11 = "Energy Counter Unavailable";
      v69 = *(_QWORD *)(a1 + 40);
      v70[0] = *(unsigned __int16 *)(a1 + 32);
      if ( (v10 & 1) == 0 )
        v11 = "-";
      v65 = *(_QWORD *)(a1 + 232);
      v71 = &v65;
      v70[1] = 0;
      v72 = 8LL;
      tlgCreate1Sz_char((__int64)v73, v11);
      v14 = "Relative Capacity Unit";
      if ( (*(_DWORD *)(v13 + 224) & 2) == 0 )
        v14 = v12;
      tlgCreate1Sz_char((__int64)v74, v14);
      v17 = "FCC Unavailable";
      if ( (*(_DWORD *)(v16 + 224) & 4) == 0 )
        v17 = v15;
      tlgCreate1Sz_char((__int64)v75, v17);
      v20 = "Capacity Unavailable";
      if ( (*(_DWORD *)(v19 + 224) & 8) == 0 )
        v20 = v18;
      tlgCreate1Sz_char((__int64)v76, v20);
      *(_QWORD *)&v64 = v6;
      v77 = &v64;
      v22 = "AC Power";
      v78 = 8LL;
      v79 = &v54;
      v54 = v2;
      v81 = &v55;
      v83 = &v56;
      v57 = dword_140F0BC94;
      v85 = &v57;
      v3 = (*(_DWORD *)(v23 + 148) & 1) == 0;
      v80 = 4LL;
      if ( v3 )
        v22 = "DC Power";
      v55 = v21;
      v82 = 4LL;
      v56 = v5;
      v84 = 4LL;
      v86 = 4LL;
      tlgCreate1Sz_char((__int64)v87, v22);
      v26 = "Battery Discharging";
      if ( (*(_DWORD *)(v25 + 148) & 2) == 0 )
        v26 = v24;
      tlgCreate1Sz_char((__int64)v88, v26);
      v29 = "Battery Charging";
      if ( (*(_DWORD *)(v28 + 148) & 4) == 0 )
        v29 = v27;
      tlgCreate1Sz_char((__int64)v89, v29);
      v32 = "Battery Critical";
      if ( (*(_DWORD *)(v31 + 148) & 8) == 0 )
        v32 = v30;
      tlgCreate1Sz_char((__int64)v90, v32);
      v35 = "Battery charge limiting mode";
      if ( (*(_DWORD *)(v34 + 148) & 0x10) == 0 )
        v35 = v33;
      tlgCreate1Sz_char((__int64)v91, v35);
      v38 = "Battery charging state power supply present";
      if ( (*(_DWORD *)(v37 + 148) & 0x20) == 0 )
        v38 = v36;
      tlgCreate1Sz_char((__int64)v92, v38);
      v41 = "Battery charging state adequate";
      if ( (*(_DWORD *)(v40 + 148) & 0x40) == 0 )
        v41 = v39;
      tlgCreate1Sz_char((__int64)v93, v41);
      v44 = "Battery trip point supported";
      if ( (*(_DWORD *)(v43 + 148) & 0x80u) == 0 )
        v44 = v42;
      tlgCreate1Sz_char((__int64)v94, v44);
      v46 = "Platform BCL Enabled";
      if ( (byte_140F0BF18 & 1) == 0 )
        v46 = v45;
      tlgCreate1Sz_char((__int64)v95, v46);
      v48 = v47[32];
      v49 = v47[38];
      if ( (_DWORD)v48 )
        v50 = (((unsigned int)v48 >> 1) + 100 * (_DWORD)v49) / (unsigned int)v48;
      else
        v50 = 0;
      v58 = v50;
      v96 = &v58;
      v51 = v49;
      v97 = 4LL;
      if ( (_DWORD)v48 )
      {
        v52 = 100000 * v49 / v48;
        v51 = v49;
      }
      else
      {
        LODWORD(v52) = 0;
      }
      v60 = v51;
      v59 = v52;
      v100 = &v60;
      v98 = &v59;
      v102 = &v61;
      v62 = v47[39];
      v104 = &v62;
      v63 = v47[40];
      v106 = &v63;
      v99 = 4LL;
      v101 = 4LL;
      v61 = v48;
      v103 = 4LL;
      v105 = 4LL;
      v107 = 4LL;
      LODWORD(v1) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E07680,
                      (unsigned __int8 *)&word_14004C196,
                      0LL,
                      0LL,
                      0x1Du,
                      &v66);
    }
  }
  return (int)v1;
}
