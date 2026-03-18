/*
 * XREFs of Etw_DeviceUpdate @ 0x14003423C
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003BDAC (UsbDevice_UpdateUsbDevice.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x14004E0A0 (UsbDevice_UcxEvtHubInfo.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140001008 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x14000103C (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001068 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x140008F9C (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     XilUsbDevice_QueryAttributes @ 0x14003CA78 (XilUsbDevice_QueryAttributes.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

char __fastcall Etw_DeviceUpdate(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  char v4; // bl
  char v5; // di
  unsigned __int8 v6; // si
  char v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r9
  int v11; // [rsp+70h] [rbp-F8h]
  char v12; // [rsp+E8h] [rbp-80h] BYREF
  char v13; // [rsp+E9h] [rbp-7Fh] BYREF
  unsigned __int8 v14; // [rsp+EAh] [rbp-7Eh] BYREF
  char v15; // [rsp+EBh] [rbp-7Dh] BYREF
  char v16; // [rsp+ECh] [rbp-7Ch] BYREF
  char v17; // [rsp+EDh] [rbp-7Bh] BYREF
  char v18; // [rsp+EEh] [rbp-7Ah] BYREF
  char v19; // [rsp+EFh] [rbp-79h] BYREF
  char v20; // [rsp+F0h] [rbp-78h] BYREF
  char v21; // [rsp+F1h] [rbp-77h] BYREF
  char v22; // [rsp+F2h] [rbp-76h] BYREF
  char v23; // [rsp+F3h] [rbp-75h] BYREF
  char v24; // [rsp+F4h] [rbp-74h] BYREF
  char v25; // [rsp+F5h] [rbp-73h] BYREF
  char v26; // [rsp+F6h] [rbp-72h] BYREF
  char v27; // [rsp+F7h] [rbp-71h] BYREF
  char v28; // [rsp+F8h] [rbp-70h] BYREF
  char v29; // [rsp+F9h] [rbp-6Fh] BYREF
  __int16 v30; // [rsp+FCh] [rbp-6Ch] BYREF
  __int16 v31; // [rsp+100h] [rbp-68h] BYREF
  __int16 v32; // [rsp+104h] [rbp-64h] BYREF
  __int16 v33; // [rsp+108h] [rbp-60h] BYREF
  __int16 v34; // [rsp+10Ch] [rbp-5Ch] BYREF
  __int16 v35; // [rsp+110h] [rbp-58h] BYREF
  __int16 v36; // [rsp+114h] [rbp-54h] BYREF
  __int16 v37; // [rsp+118h] [rbp-50h] BYREF
  int v38; // [rsp+11Ch] [rbp-4Ch] BYREF
  int v39; // [rsp+120h] [rbp-48h] BYREF
  int v40; // [rsp+124h] [rbp-44h] BYREF
  int v41; // [rsp+128h] [rbp-40h] BYREF
  int v42; // [rsp+12Ch] [rbp-3Ch] BYREF
  __int64 v43; // [rsp+130h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44[2]; // [rsp+138h] [rbp-30h] BYREF
  __int64 *v45; // [rsp+158h] [rbp-10h]
  __int64 v46; // [rsp+160h] [rbp-8h]
  int *v47; // [rsp+168h] [rbp+0h]
  __int64 v48; // [rsp+170h] [rbp+8h]
  int *v49; // [rsp+178h] [rbp+10h]
  __int64 v50; // [rsp+180h] [rbp+18h]
  __int64 v51; // [rsp+188h] [rbp+20h]
  __int64 v52; // [rsp+190h] [rbp+28h]
  char *v53; // [rsp+198h] [rbp+30h]
  __int64 v54; // [rsp+1A0h] [rbp+38h]
  char *v55; // [rsp+1A8h] [rbp+40h]
  __int64 v56; // [rsp+1B0h] [rbp+48h]
  __int16 *v57; // [rsp+1B8h] [rbp+50h]
  __int64 v58; // [rsp+1C0h] [rbp+58h]
  char *v59; // [rsp+1C8h] [rbp+60h]
  __int64 v60; // [rsp+1D0h] [rbp+68h]
  char *v61; // [rsp+1D8h] [rbp+70h]
  __int64 v62; // [rsp+1E0h] [rbp+78h]
  char *v63; // [rsp+1E8h] [rbp+80h]
  __int64 v64; // [rsp+1F0h] [rbp+88h]
  char *v65; // [rsp+1F8h] [rbp+90h]
  __int64 v66; // [rsp+200h] [rbp+98h]
  __int16 *v67; // [rsp+208h] [rbp+A0h]
  __int64 v68; // [rsp+210h] [rbp+A8h]
  __int16 *v69; // [rsp+218h] [rbp+B0h]
  __int64 v70; // [rsp+220h] [rbp+B8h]
  __int16 *v71; // [rsp+228h] [rbp+C0h]
  __int64 v72; // [rsp+230h] [rbp+C8h]
  char *v73; // [rsp+238h] [rbp+D0h]
  __int64 v74; // [rsp+240h] [rbp+D8h]
  char *v75; // [rsp+248h] [rbp+E0h]
  __int64 v76; // [rsp+250h] [rbp+E8h]
  char *v77; // [rsp+258h] [rbp+F0h]
  __int64 v78; // [rsp+260h] [rbp+F8h]
  char *v79; // [rsp+268h] [rbp+100h]
  __int64 v80; // [rsp+270h] [rbp+108h]
  char *v81; // [rsp+278h] [rbp+110h]
  __int64 v82; // [rsp+280h] [rbp+118h]
  char *v83; // [rsp+288h] [rbp+120h]
  __int64 v84; // [rsp+290h] [rbp+128h]
  char *v85; // [rsp+298h] [rbp+130h]
  __int64 v86; // [rsp+2A0h] [rbp+138h]
  int *v87; // [rsp+2A8h] [rbp+140h]
  __int64 v88; // [rsp+2B0h] [rbp+148h]
  char *v89; // [rsp+2B8h] [rbp+150h]
  __int64 v90; // [rsp+2C0h] [rbp+158h]
  char *v91; // [rsp+2C8h] [rbp+160h]
  __int64 v92; // [rsp+2D0h] [rbp+168h]
  unsigned __int8 *v93; // [rsp+2D8h] [rbp+170h]
  __int64 v94; // [rsp+2E0h] [rbp+178h]
  char *v95; // [rsp+2E8h] [rbp+180h]
  __int64 v96; // [rsp+2F0h] [rbp+188h]
  _OWORD *v97; // [rsp+2F8h] [rbp+190h]
  __int64 v98; // [rsp+300h] [rbp+198h]
  _OWORD *v99; // [rsp+308h] [rbp+1A0h]
  __int64 v100; // [rsp+310h] [rbp+1A8h]
  int *v101; // [rsp+318h] [rbp+1B0h]
  __int64 v102; // [rsp+320h] [rbp+1B8h]
  int *v103; // [rsp+328h] [rbp+1C0h]
  __int64 v104; // [rsp+330h] [rbp+1C8h]
  __int16 *v105; // [rsp+338h] [rbp+1D0h]
  __int64 v106; // [rsp+340h] [rbp+1D8h]
  __int16 *v107; // [rsp+348h] [rbp+1E0h]
  __int64 v108; // [rsp+350h] [rbp+1E8h]
  __int16 *v109; // [rsp+358h] [rbp+1F0h]
  __int64 v110; // [rsp+360h] [rbp+1F8h]
  __int16 *v111; // [rsp+368h] [rbp+200h]
  __int64 v112; // [rsp+370h] [rbp+208h]
  char *v113; // [rsp+378h] [rbp+210h]
  __int64 v114; // [rsp+380h] [rbp+218h]
  _BYTE v115[16]; // [rsp+388h] [rbp+220h] BYREF
  _BYTE v116[16]; // [rsp+398h] [rbp+230h] BYREF
  _BYTE v117[16]; // [rsp+3A8h] [rbp+240h] BYREF
  _OWORD v118[2]; // [rsp+3B8h] [rbp+250h] BYREF
  _OWORD v119[2]; // [rsp+3D8h] [rbp+270h] BYREF
  _UNKNOWN *retaddr; // [rsp+430h] [rbp+2C8h] BYREF

  v2 = &retaddr;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v12 = 0;
  v7 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  if ( *(_BYTE *)(a2 + 664) )
  {
    LOBYTE(v2) = XilUsbDevice_QueryAttributes(
                   a2,
                   (unsigned int)&v12,
                   (unsigned int)&v13,
                   (unsigned int)&v14,
                   (__int64)v119,
                   (__int64)&v15,
                   (__int64)v118);
    if ( (unsigned int)dword_14006B470 > 5
      && (LOBYTE(v2) = tlgKeywordOn((__int64)&dword_14006B470, 0x400000000000LL), (_BYTE)v2) )
    {
      v43 = 33556480LL;
      v45 = &v43;
      v38 = *(_DWORD *)(a2 + 20);
      v47 = &v38;
      v39 = *(_DWORD *)(a2 + 36);
      v49 = &v39;
      v51 = a2 + 44;
      v16 = *(_BYTE *)(a2 + 124);
      v53 = &v16;
      v17 = *(_BYTE *)(a2 + 125);
      v55 = &v17;
      v30 = *(_WORD *)(a2 + 126);
      v57 = &v30;
      v18 = *(_BYTE *)(a2 + 128);
      v59 = &v18;
      v19 = *(_BYTE *)(a2 + 129);
      v61 = &v19;
      v20 = *(_BYTE *)(a2 + 130);
      v63 = &v20;
      v21 = *(_BYTE *)(a2 + 131);
      v65 = &v21;
      v31 = *(_WORD *)(a2 + 132);
      v67 = &v31;
      v32 = *(_WORD *)(a2 + 134);
      v69 = &v32;
      v33 = *(_WORD *)(a2 + 136);
      v71 = &v33;
      v22 = *(_BYTE *)(a2 + 138);
      v73 = &v22;
      v23 = *(_BYTE *)(a2 + 139);
      v75 = &v23;
      v24 = *(_BYTE *)(a2 + 140);
      v77 = &v24;
      v46 = 8LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 24LL;
      v54 = 1LL;
      v56 = 1LL;
      v58 = 2LL;
      v60 = 1LL;
      v62 = 1LL;
      v64 = 1LL;
      v66 = 1LL;
      v68 = 2LL;
      v70 = 2LL;
      v72 = 2LL;
      v74 = 1LL;
      v76 = 1LL;
      v8 = *(_QWORD *)(a2 + 8);
      v4 = v12;
      v5 = v13;
      v6 = v14;
      v7 = v15;
      v25 = *(_BYTE *)(a2 + 141);
      v79 = &v25;
      v26 = *(_BYTE *)(a2 + 578);
      v81 = &v26;
      v27 = *(_BYTE *)(a2 + 579);
      v83 = &v27;
      v28 = *(_BYTE *)(a2 + 580);
      v85 = &v28;
      v40 = *(_DWORD *)(a2 + 584);
      v87 = &v40;
      v89 = &v12;
      v91 = &v13;
      v93 = &v14;
      v95 = &v15;
      v97 = v119;
      v99 = v118;
      v78 = 1LL;
      v80 = 1LL;
      v82 = 1LL;
      v84 = 1LL;
      v86 = 1LL;
      v88 = 4LL;
      v90 = 1LL;
      v92 = 1LL;
      v94 = 1LL;
      v96 = 1LL;
      v98 = 32LL;
      v100 = 32LL;
      v41 = *(_DWORD *)(v8 + 644);
      v101 = &v41;
      v102 = 4LL;
      v42 = *(_DWORD *)(v8 + 660);
      v103 = &v42;
      v104 = 4LL;
      v34 = *(_WORD *)(v8 + 664);
      v105 = &v34;
      v106 = 2LL;
      v35 = *(_WORD *)(v8 + 668);
      v107 = &v35;
      v108 = 2LL;
      v36 = *(_WORD *)(v8 + 648);
      v109 = &v36;
      v110 = 2LL;
      v37 = *(_WORD *)(v8 + 652);
      v111 = &v37;
      v112 = 2LL;
      v29 = *(_BYTE *)(v8 + 656);
      v113 = &v29;
      v114 = 1LL;
      tlgCreate1Sz_char((__int64)v115, (_BYTE *)(v8 + 704));
      tlgCreate1Sz_char((__int64)v116, (_BYTE *)(*(_QWORD *)(a2 + 8) + 709LL));
      tlgCreate1Sz_char((__int64)v117, (_BYTE *)(*(_QWORD *)(a2 + 8) + 714LL));
      LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_14006B470,
                     (unsigned __int8 *)dword_140063A11,
                     (__int64)v44,
                     v9,
                     0x28u,
                     v44);
    }
    else
    {
      v4 = v12;
      v5 = v13;
      v6 = v14;
      v7 = v15;
    }
  }
  else
  {
    memset(v119, 0, sizeof(v119));
    memset(v118, 0, sizeof(v118));
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    LOBYTE(v2) = McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
                   v6,
                   (__int64)"\t",
                   0LL,
                   *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                   *(_QWORD *)(a2 + 24),
                   *(_QWORD *)a2,
                   *(_DWORD *)(a2 + 20),
                   *(_DWORD *)(a2 + 36),
                   a2 + 44,
                   *(_BYTE *)(a2 + 143),
                   *(_BYTE *)(a2 + 144) != 0,
                   *(_DWORD *)(a2 + 148),
                   *(_DWORD *)(a2 + 152),
                   v11,
                   a2 + 124,
                   *(_BYTE *)(a2 + 664),
                   *(_BYTE *)(a2 + 665),
                   *(_BYTE *)(a2 + 666),
                   *(_BYTE *)(a2 + 578),
                   *(_BYTE *)(a2 + 579),
                   *(_BYTE *)(a2 + 580),
                   *(_DWORD *)(a2 + 584),
                   v4,
                   v5,
                   v6,
                   v7,
                   (__int64)v119,
                   (__int64)v118);
  return (char)v2;
}
