/*
 * XREFs of RootHub_UcxEvtGetPortStatus @ 0x140024160
 * Callers:
 *     <none>
 * Callees:
 *     RootHub_HideInvalidDebugPortStatusAndChange @ 0x140009C50 (RootHub_HideInvalidDebugPortStatusAndChange.c)
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     Register_ReadSecureMmio @ 0x14000D258 (Register_ReadSecureMmio.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     Controller_SetControllerGone @ 0x14003C400 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14004AB84 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtGetPortStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rdi
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  __int16 v10; // ax
  __int64 v11; // r14
  int v12; // edx
  unsigned int v13; // edi
  int v14; // r15d
  __int16 v15; // ax
  int v16; // edx
  char v17; // si
  char v18; // r9
  char v19; // bl
  unsigned int v20; // r13d
  int v21; // r8d
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned int *v24; // rbx
  unsigned int v25; // ebx
  __int64 v26; // rax
  char v27; // cl
  int v28; // r9d
  __int64 v29; // r8
  int v30; // edx
  int v31; // r9d
  __int16 v32; // cx
  __int16 v33; // ax
  __int16 v34; // cx
  unsigned __int16 v35; // dx
  int v36; // eax
  unsigned __int16 *v37; // r10
  __int16 v38; // cx
  __int16 v39; // r8
  unsigned __int16 v40; // r8
  __int16 v41; // ax
  unsigned __int16 v42; // cx
  __int64 v43; // rdx
  __int64 v44; // r15
  unsigned __int16 v45; // cx
  int v46; // eax
  __int16 v47; // cx
  __int16 v48; // ax
  __int16 v49; // cx
  __int16 v50; // dx
  __int16 v51; // cx
  __int16 v52; // ax
  unsigned __int16 v53; // r8
  unsigned int v54; // r9d
  __int16 v55; // cx
  __int16 v56; // ax
  __int16 v57; // cx
  __int16 v58; // dx
  __int16 v59; // ax
  unsigned __int16 v60; // cx
  unsigned int Ulong; // eax
  int *v62; // r15
  int v63; // ebx
  int v64; // ecx
  int v65; // eax
  int v66; // r9d
  char v67; // r10
  char v68; // r11
  __int64 v69; // rdx
  int v71; // [rsp+20h] [rbp-E8h]
  const char *v72; // [rsp+28h] [rbp-E0h]
  __int64 v73; // [rsp+30h] [rbp-D8h]
  unsigned int v74; // [rsp+74h] [rbp-94h] BYREF
  int v75[2]; // [rsp+78h] [rbp-90h]
  __int64 v76; // [rsp+80h] [rbp-88h]
  __int64 v77; // [rsp+88h] [rbp-80h]
  __int64 v78; // [rsp+90h] [rbp-78h]
  _OWORD v79[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-50h]

  v78 = a2;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_BYTE *)(v4 + 1001) == 0;
  v6 = *(_QWORD *)(v4 + 88);
  *(_QWORD *)v75 = v6;
  if ( !v5 && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v72 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  memset(v79, 0, sizeof(v79));
  v80 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v79[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_13;
    }
    v10 = -1;
  }
  else
  {
    v10 = 40;
  }
  LOWORD(v79[0]) = v10;
LABEL_13:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v79);
  v11 = *((_QWORD *)&v79[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v12,
        11,
        108,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    v13 = -1073741810;
    v14 = -1073713152;
    goto LABEL_102;
  }
  v15 = *(_WORD *)(v11 + 130);
  v16 = 8;
  v17 = *(_BYTE *)(v11 + 128);
  v18 = HIBYTE(v15);
  v19 = v15;
  v20 = *(unsigned __int16 *)(v11 + 132);
  LOWORD(v21) = BYTE1(v20);
  if ( v15 != 2 )
    v16 = 4;
  if ( v17 != -93
    || *(_BYTE *)(v11 + 129)
    || v15 && v15 != 2
    || (v18 = HIBYTE(v15), v19 = v15, !*(_WORD *)(v11 + 132))
    || v20 > *(_DWORD *)(v3 + 16)
    || *(unsigned __int16 *)(v11 + 134) != v16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v68 = v18;
      v66 = 109;
      v21 = (unsigned __int16)v21;
      v67 = *(_WORD *)(v11 + 132);
      goto LABEL_100;
    }
LABEL_101:
    v14 = -1073741820;
    v13 = -1073741823;
    goto LABEL_102;
  }
  v22 = v20 - 1;
  v23 = *(_QWORD *)(v6 + 8);
  v13 = 0;
  v24 = (unsigned int *)(*(_QWORD *)(v3 + 40) + 16 * v22);
  v76 = v22;
  v14 = 1;
  if ( *(_BYTE *)(v23 + 1001) )
  {
    v74 = 0;
    Register_ReadSecureMmio(*(__int64 *)v75, (__int64)v24, 2, 1u, &v74);
    v25 = v74;
  }
  else
  {
    v25 = *v24;
  }
  v26 = *(_QWORD *)(v3 + 48);
  v77 = 120 * v22;
  v27 = *(_BYTE *)(v26 + 120 * v22 + 13);
  if ( v27 != 2 )
  {
    if ( v27 == 3 )
    {
      if ( v25 == -1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = 116;
          goto LABEL_67;
        }
LABEL_68:
        Controller_SetControllerGone(*(_QWORD *)(v3 + 8), 1LL);
        v13 = -1073741810;
        v14 = -1073713152;
        goto LABEL_102;
      }
      v44 = *(_QWORD *)(v11 + 40);
      *(_DWORD *)v44 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v72) = v20;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x75u,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v72,
          v25);
      }
      if ( RootHub_HideInvalidDebugPortStatusAndChange(v3, v20) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4,
            11,
            118,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v20);
        v45 = *(_WORD *)v44 & 0xFC04 | 0x2A0;
        *(_WORD *)(v44 + 2) &= 0xFF06u;
        v46 = *(unsigned __int16 *)(v44 + 2);
        *(_WORD *)v44 = v45;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v73) = v46;
          LODWORD(v72) = v45;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x77u,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v72,
            v73);
          v14 = 0;
          goto LABEL_102;
        }
      }
      else
      {
        v47 = *(_WORD *)v44 ^ ((unsigned __int8)v25 ^ (unsigned __int8)*(_WORD *)v44) & 1;
        v48 = v47 ^ ((unsigned __int8)v47 ^ (unsigned __int8)(2 * (v25 >> 1))) & 2;
        v49 = v48 ^ ((unsigned __int8)v48 ^ v25 & 0xF8) & 8;
        v50 = v49 ^ ((unsigned __int8)v49 ^ v25 & 0xF0) & 0x10;
        v51 = v50 ^ (v50 ^ (32 * (v25 >> 5))) & 0x1E0;
        *(_WORD *)v44 = v51;
        if ( ((v25 >> 5) & 0xF) == 0xF )
        {
          v51 = v51 & 0xFE1F | 0x100;
          *(_WORD *)v44 = v51;
        }
        if ( (v25 & 0x1000000) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4,
              11,
              120,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
          v51 = *(_WORD *)v44 & 0xFE1F | 0x140;
        }
        v52 = *(_WORD *)(v44 + 2);
        v53 = v51 ^ (v51 ^ v25 & 0xFE00) & 0x200;
        *(_WORD *)v44 = v53;
        v54 = v25 >> 22;
        v55 = v52 ^ ((unsigned __int8)v52 ^ (unsigned __int8)(v25 >> 17)) & 1;
        v56 = v55 ^ ((unsigned __int8)v55 ^ (unsigned __int8)(8 * (v25 >> 20))) & 8;
        v57 = v56 ^ ((unsigned __int8)v56 ^ (unsigned __int8)(16 * (v25 >> 21))) & 0x10;
        v58 = v57 ^ ((unsigned __int8)v57 ^ (unsigned __int8)(32 * (v25 >> 19))) & 0x20;
        v59 = v58 ^ ((unsigned __int8)v58 ^ (unsigned __int8)((unsigned __int8)(v25 >> 22) << 6)) & 0x40;
        v60 = v59 ^ (v59 ^ (v25 >> 23 << 7)) & 0x80;
        *(_WORD *)(v44 + 2) = v60;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v73) = v60;
          LODWORD(v72) = v53;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            4u,
            0xBu,
            0x79u,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v72,
            v73);
          v54 = v25 >> 22;
        }
        if ( *(_DWORD *)(120LL * (v20 - 1) + *(_QWORD *)(v3 + 48) + 108) && (v25 & 0x1E0) == 0xC0 && (v54 & 1) != 0 )
          *(_WORD *)(v44 + 2) |= 0x80u;
        if ( *(_WORD *)(v11 + 130) == 2 )
        {
          Ulong = XilRegister_ReadUlong(*(__int64 *)v75, (unsigned int *)(*(_QWORD *)(v3 + 40) + 16LL * (v20 - 1) + 8));
          v62 = (int *)(v44 + 4);
          *v62 = 0;
          if ( *(_WORD *)(120LL * (v20 - 1) + *(_QWORD *)(v3 + 48) + 54) || (v25 & 0x3C00) != 0x400 )
          {
            v64 = (v25 >> 10) & 0xF;
            v63 = v64 | (v25 >> 6) & 0xF0;
          }
          else
          {
            v63 = 68;
            v64 = 4;
          }
          *v62 = v64;
          v65 = v63 | (Ulong >> 8) & 0xFF00;
          *v62 = v63;
          *v62 = v65;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              4,
              11,
              122,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v65);
        }
      }
      goto LABEL_95;
    }
LABEL_96:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v21 = *(unsigned __int8 *)(v11 + 133);
      v66 = 123;
      v67 = *(_BYTE *)(v11 + 132);
      v68 = *(_BYTE *)(v11 + 131);
      v19 = *(_BYTE *)(v11 + 130);
      v17 = *(_BYTE *)(v11 + 128);
LABEL_100:
      WPP_RECORDER_SF_DDDDDDDD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        *(unsigned __int8 *)(v11 + 134),
        v21,
        v66,
        v71,
        v17,
        *(_BYTE *)(v11 + 129),
        v19,
        v68,
        v67,
        v21,
        *(_BYTE *)(v11 + 134),
        *(_BYTE *)(v11 + 135));
      goto LABEL_101;
    }
    goto LABEL_101;
  }
  if ( *(_WORD *)(v11 + 130) )
    goto LABEL_96;
  if ( v25 == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = 110;
LABEL_67:
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v16,
        11,
        v28,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
      goto LABEL_68;
    }
    goto LABEL_68;
  }
  v29 = *(_QWORD *)(v11 + 40);
  *(_QWORD *)v75 = v29;
  *(_DWORD *)v29 = 0;
  v30 = (unsigned __int16)v25;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v72) = v20;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xBu,
      0x6Fu,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v72,
      v25);
    v29 = *(_QWORD *)v75;
    v30 = (unsigned __int16)v25;
  }
  LOWORD(v30) = *(_WORD *)v29 ^ (*(_WORD *)v29 ^ v30) & 1;
  v31 = (v25 >> 5) & 0xF;
  v32 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(2 * (v25 >> 1))) & 2;
  if ( v31 == 2 )
  {
    v32 |= 0x20u;
  }
  else
  {
    if ( ((v25 >> 5) & 0xF) == 3 )
    {
LABEL_40:
      v32 |= 4u;
      goto LABEL_44;
    }
    if ( ((v25 >> 5) & 0xF) != 0xB )
    {
      if ( ((v25 >> 5) & 0xF) != 0xF )
        goto LABEL_44;
      goto LABEL_40;
    }
    v32 |= 0x800u;
    *(_WORD *)v29 = v32;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v30) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v30,
        11,
        112,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v20);
      v29 = *(_QWORD *)v75;
      v31 = (v25 >> 5) & 0xF;
      v32 = **(_WORD **)v75;
    }
  }
LABEL_44:
  v33 = v32 ^ ((unsigned __int8)v32 ^ v25 & 0xF8) & 8;
  v34 = v33 ^ ((unsigned __int8)v33 ^ v25 & 0xF0) & 0x10;
  v35 = v34 ^ (v34 ^ ((unsigned __int16)(v25 >> 9) << 8)) & 0x100;
  v36 = v25 & 0x3C00;
  *(_WORD *)v29 = v35;
  if ( v36 == 2048 )
  {
    v35 |= 0x200u;
  }
  else
  {
    if ( v36 != 3072 )
      goto LABEL_49;
    v35 |= 0x400u;
  }
  *(_WORD *)v29 = v35;
LABEL_49:
  if ( (v25 & 0xC000) != 0 )
  {
    v35 |= 0x1000u;
    *(_WORD *)v29 = v35;
  }
  v37 = (unsigned __int16 *)(v29 + 2);
  v38 = *(_WORD *)(v29 + 2) ^ (*(_WORD *)(v29 + 2) ^ (v25 >> 17)) & 1;
  v39 = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)(2 * (v25 >> 18))) & 2;
  if ( v31 == 15 )
    v40 = v39 & 0xFFFB;
  else
    v40 = (v39 ^ (4 * (v25 >> 22))) & 4 ^ v39;
  *v37 = v40;
  v41 = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(8 * (v25 >> 20))) & 8;
  v42 = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)(16 * (v25 >> 21))) & 0x10;
  *v37 = v42;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v73) = v42;
    LODWORD(v72) = v35;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xBu,
      0x71u,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v72,
      v73);
    v31 = (v25 >> 5) & 0xF;
  }
  v43 = *(_QWORD *)(v3 + 48);
  if ( v31 == 15 )
  {
    _InterlockedOr((volatile signed __int32 *)(v43 + v77 + 64), 1u);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(120 * v76 + *(_QWORD *)(v3 + 48) + 80),
      -100000000LL);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(120 * v76 + *(_QWORD *)(v3 + 48) + 72),
      -10000000LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v73) = v25;
      LODWORD(v72) = v20;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x72u,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v72,
        v73);
    }
    goto LABEL_102;
  }
  _m_prefetchw((const void *)(v43 + v77 + 64));
  if ( (_InterlockedAnd((volatile signed __int32 *)(v43 + v77 + 64), 0xFFFFFFFE) & 1) == 0 )
  {
LABEL_95:
    v14 = 0;
    goto LABEL_102;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v73) = v25;
    LODWORD(v72) = v20;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xBu,
      0x73u,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v72,
      v73);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(120 * v76 + *(_QWORD *)(v3 + 48) + 80),
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(120 * v76 + *(_QWORD *)(v3 + 48) + 72),
    0LL);
  v14 = 0;
LABEL_102:
  v69 = v78;
  *(_DWORD *)(v11 + 4) = v14;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           v69,
           v13);
}
