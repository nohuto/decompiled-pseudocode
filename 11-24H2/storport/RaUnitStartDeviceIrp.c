/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1401BC368
 * Callers:
 *     RaUnitPnpIrp @ 0x140015D70 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitRestartQueue @ 0x140001B70 (RaidUnitRestartQueue.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     RaUnitUnlockForwardIo @ 0x14002B180 (RaUnitUnlockForwardIo.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x140035A2C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     RaidUnitGetInitialTimestamp @ 0x14003D4A8 (RaidUnitGetInitialTimestamp.c)
 *     RaidUnitGetPowerCycleCount @ 0x140040124 (RaidUnitGetPowerCycleCount.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidUnlockDeviceQueue @ 0x140053B48 (RaidUnlockDeviceQueue.c)
 *     RaidGetD3ColdCapability @ 0x140055CE0 (RaidGetD3ColdCapability.c)
 *     RaidIsDeviceQueueLocked @ 0x140055F18 (RaidIsDeviceQueueLocked.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidGetD3ColdInterface @ 0x140077DF4 (RaidGetD3ColdInterface.c)
 *     RaidUnitConvertToNormalUnit @ 0x14009E158 (RaidUnitConvertToNormalUnit.c)
 *     RaidUnitRegisterInterfaces @ 0x14009FCC0 (RaidUnitRegisterInterfaces.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     RaUnitInitializeWMI @ 0x14018C1C0 (RaUnitInitializeWMI.c)
 *     RaidUnitGetDeviceParameters @ 0x1401BCAD4 (RaidUnitGetDeviceParameters.c)
 */

__int64 __fastcall RaUnitStartDeviceIrp(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rcx
  char D3ColdCapability; // al
  char v7; // cl
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // cl
  _BYTE *v13; // rcx
  char v14; // al
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  bool v18; // zf
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  int *v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // rdx
  char v24; // r14
  _BYTE *v25; // r9
  unsigned __int8 v26; // r10
  char v27; // r11
  char v28; // r13
  char v29; // r12
  char *v30; // rdi
  unsigned int v31; // eax
  unsigned int v32; // r8d
  unsigned int *v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // r15
  char v36; // cl
  char v37; // r8
  _BYTE *v38; // rax
  char *v39; // r12
  unsigned int v40; // eax
  char v41; // al
  __int64 v43; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+28h] [rbp-D8h]
  char v45; // [rsp+60h] [rbp-A0h] BYREF
  char v46; // [rsp+61h] [rbp-9Fh] BYREF
  char v47; // [rsp+62h] [rbp-9Eh] BYREF
  char v48; // [rsp+63h] [rbp-9Dh] BYREF
  char v49; // [rsp+64h] [rbp-9Ch] BYREF
  char v50; // [rsp+65h] [rbp-9Bh] BYREF
  char v51; // [rsp+66h] [rbp-9Ah] BYREF
  char v52; // [rsp+67h] [rbp-99h] BYREF
  unsigned int v53; // [rsp+68h] [rbp-98h] BYREF
  int v54; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h] BYREF
  int v56; // [rsp+78h] [rbp-88h] BYREF
  int v57; // [rsp+7Ch] [rbp-84h] BYREF
  int v58; // [rsp+80h] [rbp-80h] BYREF
  int v59; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h] BYREF
  __int128 v61; // [rsp+90h] [rbp-70h]
  GUID v62; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+D0h] [rbp-30h]
  __int64 v65; // [rsp+D8h] [rbp-28h]
  __int64 v66; // [rsp+E0h] [rbp-20h]
  __int64 v67; // [rsp+E8h] [rbp-18h]
  int *v68; // [rsp+F0h] [rbp-10h]
  __int64 v69; // [rsp+F8h] [rbp-8h]
  char *v70; // [rsp+100h] [rbp+0h]
  __int64 v71; // [rsp+108h] [rbp+8h]
  char *v72; // [rsp+110h] [rbp+10h]
  __int64 v73; // [rsp+118h] [rbp+18h]
  char *v74; // [rsp+120h] [rbp+20h]
  __int64 v75; // [rsp+128h] [rbp+28h]
  char v76[16]; // [rsp+130h] [rbp+30h] BYREF
  char v77[16]; // [rsp+140h] [rbp+40h] BYREF
  char v78[16]; // [rsp+150h] [rbp+50h] BYREF
  char v79[16]; // [rsp+160h] [rbp+60h] BYREF
  char v80[16]; // [rsp+170h] [rbp+70h] BYREF
  char *v81; // [rsp+180h] [rbp+80h]
  __int64 v82; // [rsp+188h] [rbp+88h]
  char *v83; // [rsp+190h] [rbp+90h]
  __int64 v84; // [rsp+198h] [rbp+98h]
  char *v85; // [rsp+1A0h] [rbp+A0h]
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  char *v87; // [rsp+1B0h] [rbp+B0h]
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  char *v89; // [rsp+1C0h] [rbp+C0h]
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  __int64 *v91; // [rsp+1D0h] [rbp+D0h]
  __int64 v92; // [rsp+1D8h] [rbp+D8h]
  unsigned int *v93; // [rsp+1E0h] [rbp+E0h]
  __int64 v94; // [rsp+1E8h] [rbp+E8h]
  int *v95; // [rsp+1F0h] [rbp+F0h]
  __int64 v96; // [rsp+1F8h] [rbp+F8h]
  int *v97; // [rsp+200h] [rbp+100h]
  __int64 v98; // [rsp+208h] [rbp+108h]
  int *v99; // [rsp+210h] [rbp+110h]
  __int64 v100; // [rsp+218h] [rbp+118h]
  int *v101; // [rsp+220h] [rbp+120h]
  __int64 v102; // [rsp+228h] [rbp+128h]
  __int64 *v103; // [rsp+230h] [rbp+130h]
  __int64 v104; // [rsp+238h] [rbp+138h]

  v2 = 0;
  if ( *(_DWORD *)(a1 + 56) != 1 )
  {
    RaUnitInitializeWMI(a1);
    RaidUnitRegisterInterfaces(a1);
    if ( (unsigned int)RaidIsDeviceQueueLocked(a1 + 720) )
    {
      RaidUnlockDeviceQueue(v5);
      RaUnitUnlockForwardIo(a1, 1);
      RaidUnitRestartQueue(a1, 0);
    }
    _InterlockedExchange((volatile __int32 *)(a1 + 56), 1);
    RaidUnitConvertToNormalUnit(a1);
    if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 1880)) >= 0 && *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_DWORD *)(a1 + 1952) & 8) != 0
        || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1880)), v7 = 2, !D3ColdCapability) )
      {
        v7 = 0;
      }
      *(_BYTE *)(a1 + 505) = v7 | *(_BYTE *)(a1 + 505) & 0xFD;
    }
    else
    {
      *(_BYTE *)(a1 + 505) &= ~2u;
    }
    if ( RaidIsUnitControlSupported(a1, 2) )
    {
      v8 = *(_QWORD *)(a1 + 24);
      v61 = 0LL;
      LOWORD(v61) = 1;
      WORD1(v61) = *(_WORD *)(v8 + 56);
      WORD4(v61) = *(_WORD *)(a1 + 104);
      BYTE10(v61) = *(_BYTE *)(a1 + 106);
      DWORD1(v61) = 4;
      if ( *(_DWORD *)v8 == 1094997074 )
      {
        v9 = v8 + 376;
      }
      else if ( *(_DWORD *)v8 == 1314275652 )
      {
        v9 = v8 + 168;
      }
      else
      {
        v9 = 0LL;
      }
      RaCallMiniportUnitControl(v9);
    }
    *(_BYTE *)(a1 + 505) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  *(_QWORD *)(a1 + 3416) = 0x10000000LL;
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  if ( *(_QWORD *)(a1 + 112) && (unsigned int)dword_140170178 > 5 && tlgKeywordOn(v10, 0x400000000000LL) )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v65 = 16LL;
    v67 = 16LL;
    v64 = v11 + 5064;
    v66 = a1 + 2104;
    v54 = *(_DWORD *)(v11 + 56);
    v68 = &v54;
    v45 = *(_BYTE *)(a1 + 104);
    v70 = &v45;
    v46 = *(_BYTE *)(a1 + 105);
    v72 = &v46;
    v47 = *(_BYTE *)(a1 + 106);
    v74 = &v47;
    v69 = 4LL;
    v71 = 1LL;
    v73 = 1LL;
    v75 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v76, *(const wchar_t **)(v11 + 4720));
    tlgCreate1Sz_char((__int64)v77, (_BYTE *)(a1 + 168));
    tlgCreate1Sz_char((__int64)v78, (_BYTE *)(a1 + 177));
    tlgCreate1Sz_char((__int64)v79, (_BYTE *)(a1 + 498));
    tlgCreate1Sz_char((__int64)v80, (_BYTE *)(a1 + 242));
    v12 = *(_BYTE *)(a1 + 136);
    v81 = &v48;
    v48 = v12 & 1;
    v13 = *(_BYTE **)(a1 + 112);
    v82 = 1LL;
    v14 = *v13 & 0x1F;
    v84 = 1LL;
    v49 = v14;
    v83 = &v49;
    v50 = *v13 >> 5;
    v85 = &v50;
    v86 = 1LL;
    v15 = v13[1] & 0x7F;
    v88 = 1LL;
    v51 = v15;
    v87 = &v51;
    v52 = v13[1] >> 7;
    v89 = &v52;
    v60 = *(_QWORD *)(a1 + 3360);
    v91 = &v60;
    v53 = *(_DWORD *)(a1 + 3352);
    v90 = 1LL;
    v92 = 8LL;
    v93 = &v53;
    v56 = *(_DWORD *)(a1 + 1928);
    v95 = &v56;
    v57 = *(_DWORD *)(a1 + 1932);
    v97 = &v57;
    v58 = *(_DWORD *)(a1 + 1936);
    v99 = &v58;
    v59 = *(_DWORD *)(a1 + 1940);
    v101 = &v59;
    LODWORD(v55) = *(_DWORD *)(a1 + 1948);
    v103 = &v55;
    v94 = 4LL;
    v96 = 4LL;
    v98 = 4LL;
    v100 = 4LL;
    v102 = 4LL;
    v104 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)v13, (unsigned __int8 *)dword_14015E558, v16, v17, 0x19u, &v63);
  }
  v18 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v18 )
    goto LABEL_88;
  v62 = 0LL;
  IoGetActivityIdIrp(a2, &v62);
  v20 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v20 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_88;
    v22 = &EventNonReadWriteRequestComplete;
    goto LABEL_87;
  }
  if ( *(_BYTE *)v20 != 15 )
  {
    if ( *(_BYTE *)v20 != 27 )
      goto LABEL_88;
    if ( *(_BYTE *)(v20 + 1) == 7 && !*(_DWORD *)(v20 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v21 = *(int **)(a2 + 56);
        if ( v21 )
          v2 = *v21;
        LODWORD(v44) = *(_DWORD *)(a2 + 48);
        LODWORD(v43) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v19, v20, &v62, a2, v43, v44);
      }
      goto LABEL_88;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_88;
    v22 = &EventPnpRequestComplete;
LABEL_87:
    LODWORD(v43) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v19, v22, &v62, a2, v43);
    goto LABEL_88;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_88;
  v23 = *(_QWORD *)(v20 + 8);
  v24 = 0;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( *(_BYTE *)(v23 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v23 + 72);
    v25 = *(_BYTE **)(v23 + 32);
    v26 = *(_BYTE *)(v23 + 11);
    v24 = *(_BYTE *)(v23 + 4);
    if ( *(_BYTE *)(v23 + 2) )
      goto LABEL_88;
LABEL_65:
    LOBYTE(v19) = v36 - 8;
    if ( (v19 & 0x5D) != 0 )
      goto LABEL_88;
    if ( *(_BYTE *)(v23 + 3) == 1 || !v25 || !v26 )
      goto LABEL_83;
    v37 = 0;
    v19 = (unsigned __int64)&v25[v26];
    v38 = v25 + 8;
    if ( (unsigned __int8)((*v25 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v38 > v19 )
        goto LABEL_81;
      v28 = v25[2];
      v27 = v25[1] & 0xF;
      v29 = v25[3];
    }
    else
    {
      if ( (unsigned __int64)v38 > v19 )
        goto LABEL_81;
      v39 = v25 + 13;
      v27 = v25[2] & 0xF;
      v40 = v26;
      if ( (unsigned int)(unsigned __int8)v25[7] + 8 <= v26 )
        v40 = (unsigned __int8)v25[7] + 8;
      v19 = (unsigned __int64)&v25[v40];
      if ( (unsigned __int64)v39 <= v19 )
        v28 = v25[12];
      if ( (unsigned __int64)(v25 + 14) > v19 )
        v29 = 0;
      else
        v29 = *v39;
    }
    v37 = 1;
LABEL_81:
    if ( v37 )
    {
      LOBYTE(v2) = v28;
      v41 = v29;
LABEL_84:
      LOBYTE(v44) = *(_BYTE *)(v23 + 3);
      LODWORD(v43) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v19, v23, &v62, a2, v43, v44, v24, v27, v2, v41, a2);
      goto LABEL_88;
    }
LABEL_83:
    v27 = 0;
    v41 = 0;
    goto LABEL_84;
  }
  v30 = 0LL;
  v45 = 0;
  if ( *(_DWORD *)(v23 + 20) )
    goto LABEL_88;
  v31 = *(_DWORD *)(v23 + 56);
  v19 = 0LL;
  v54 = 0;
  v53 = v31;
  if ( !v31 )
    goto LABEL_62;
  v32 = v53;
  v33 = (unsigned int *)(v23 + 120);
  v55 = v23 + 120;
  while ( 1 )
  {
    v34 = *v33;
    if ( (unsigned int)v34 >= 0x80 )
    {
      v35 = *(unsigned int *)(v23 + 16);
      if ( (unsigned int)v34 < (unsigned int)v35 )
        break;
    }
LABEL_56:
    v19 = (unsigned int)(v19 + 1);
    v33 = (unsigned int *)(v55 + 4);
    v54 = v19;
    v55 += 4LL;
    if ( (unsigned int)v19 >= v32 )
      goto LABEL_62;
  }
  if ( *(_DWORD *)(v23 + v34) != 64 )
  {
    v19 = (unsigned int)(*(_DWORD *)(v23 + v34) - 65);
    if ( *(_DWORD *)(v23 + v34) == 65 )
    {
      v19 = v34 + 56;
      if ( v34 + 56 <= v35 )
      {
        v45 = 1;
        if ( *(_BYTE *)(v23 + v34 + 10) )
          v30 = (char *)(v34 + v23 + 24);
        v24 = *(_BYTE *)(v23 + v34 + 8);
        v25 = *(_BYTE **)(v23 + v34 + 16);
        v26 = *(_BYTE *)(v23 + v34 + 9);
      }
    }
    else if ( *(_DWORD *)(v23 + v34) == 66 )
    {
      v19 = v34 + 40;
      if ( v34 + 40 <= v35 )
      {
        if ( *(_DWORD *)(v23 + v34 + 12) )
          v30 = (char *)(v34 + v23 + 32);
        v25 = *(_BYTE **)(v23 + v34 + 24);
        goto LABEL_61;
      }
    }
    goto LABEL_54;
  }
  v19 = v34 + 40;
  if ( v34 + 40 > v35 )
  {
LABEL_54:
    if ( v45 )
      goto LABEL_62;
    LODWORD(v19) = v54;
    v32 = v53;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(v23 + v34 + 10) )
    v30 = (char *)(v34 + v23 + 24);
  v25 = *(_BYTE **)(v23 + v34 + 16);
LABEL_61:
  v26 = *(_BYTE *)(v23 + v34 + 9);
  v24 = *(_BYTE *)(v23 + v34 + 8);
LABEL_62:
  if ( v30 )
  {
    v36 = *v30;
    goto LABEL_65;
  }
LABEL_88:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
