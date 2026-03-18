/*
 * XREFs of Register_ParseCapabilityRegister @ 0x14007D158
 * Callers:
 *     Register_PrepareHardware @ 0x14007DABC (Register_PrepareHardware.c)
 * Callees:
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_qD @ 0x14002B6C0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ddddd @ 0x140030D18 (WPP_RECORDER_SF_ddddd.c)
 *     Controller_IsSecureDevice @ 0x1400328B8 (Controller_IsSecureDevice.c)
 *     Register_FindFirstExtendedCapability @ 0x140034BE8 (Register_FindFirstExtendedCapability.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x140043D58 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044934 (WPP_RECORDER_SF_dddd.c)
 *     WPP_RECORDER_SF_DDd @ 0x140049388 (WPP_RECORDER_SF_DDd.c)
 *     Etw_ControllerFirmareVersionUpdate @ 0x14004E8B8 (Etw_ControllerFirmareVersionUpdate.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 */

__int64 __fastcall Register_ParseCapabilityRegister(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 v5; // rcx
  __int64 Ulong; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int16 v9; // r9
  unsigned int v10; // eax
  int v11; // edx
  unsigned __int8 v12; // bl
  unsigned int v13; // ebp
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 v17; // cl
  __int64 v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // edx
  unsigned int v24; // r10d
  char v25; // al
  int v26; // r9d
  int v27; // r10d
  int v28; // eax
  unsigned int v29; // r8d
  int v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // r9d
  unsigned int v34; // eax
  unsigned int v35; // r10d
  unsigned int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // eax
  unsigned int v39; // r11d
  unsigned int v40; // ecx
  int v41; // ecx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // r10
  unsigned int *FirstExtendedCapability; // rax
  __int64 v46; // rcx
  unsigned int v47; // eax
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  __int64 v53; // [rsp+28h] [rbp-80h]
  char v54; // [rsp+28h] [rbp-80h]
  __int64 v55; // [rsp+30h] [rbp-78h]
  __int64 v56; // [rsp+38h] [rbp-70h]
  __int64 v57; // [rsp+40h] [rbp-68h]
  __int128 v58; // [rsp+50h] [rbp-58h] BYREF
  __int128 v59; // [rsp+60h] [rbp-48h]

  v1 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v3 + 728) == -1LL )
  {
    v4 = *(_WORD *)(v3 + 648);
    if ( v4 == 7023 )
    {
      Ulong = (unsigned int)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 0x4000LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v7) = (unsigned __int16)Ulong;
        v8 = (unsigned __int64)(unsigned int)Ulong >> 16;
        v9 = 21;
LABEL_11:
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          v9,
          (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
          v7,
          v8);
        goto LABEL_12;
      }
      goto LABEL_12;
    }
    if ( v4 != 4172 )
    {
      if ( _stricmp((const char *)(v3 + 704), "QCOM") )
        goto LABEL_13;
      v3 = *(_QWORD *)(a1 + 8);
    }
    if ( !Controller_IsSecureDevice(v3) )
    {
      Ulong = (unsigned __int16)XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 49440LL));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v8) = Ulong & 0xFFF;
        v9 = 22;
        v7 = (unsigned __int64)(unsigned int)Ulong >> 12;
        goto LABEL_11;
      }
LABEL_12:
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 728LL) = Ulong;
      Etw_ControllerFirmareVersionUpdate(v5, *(_QWORD *)(a1 + 8));
    }
  }
LABEL_13:
  v10 = XilRegister_ReadUlong(a1, *(unsigned int **)(a1 + 24));
  v12 = v10;
  v13 = HIBYTE(v10);
  v14 = HIWORD(v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v55) = BYTE2(v10);
    LODWORD(v53) = HIBYTE(v10);
    WPP_RECORDER_SF_DDd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x17u,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v53,
      v55,
      (unsigned __int8)v10);
  }
  v15 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v15 + 720) = v13;
  *(_BYTE *)(v15 + 721) = v14;
  v16 = *(_QWORD *)(a1 + 8);
  v17 = *(_BYTE *)(v16 + 720);
  if ( v17 )
  {
    if ( *(_BYTE *)(v16 + 721) >= 0x10u || v17 > 1u )
      *(_BYTE *)(v16 + 719) = 1;
  }
  else
  {
    v59 = 0x1000uLL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_(*(_QWORD *)(v16 + 72), v11, 6, 24, (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids);
    }
    v18 = *(_QWORD *)(a1 + 8);
    v58 = v59;
    v19 = 2LL;
    v20 = (_QWORD *)(v18 + 736);
    do
    {
      *v20 |= *(_QWORD *)((char *)v20 + (_QWORD)&v58 - v18 - 736);
      ++v20;
      --v19;
    }
    while ( v19 );
  }
  v21 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = v21 + v12;
  v22 = XilRegister_ReadUlong(a1, (unsigned int *)(v21 + 4));
  *(_DWORD *)(a1 + 84) = v22;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v56) = *(unsigned __int8 *)(a1 + 87);
    LODWORD(v55) = (v22 >> 8) & 0x7FF;
    LODWORD(v53) = (unsigned __int8)v22;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x19u,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v53,
      v55,
      v56);
  }
  v24 = *(_DWORD *)(a1 + 84);
  v25 = v24;
  if ( !(_BYTE)v24 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 26;
LABEL_29:
      v54 = v25;
LABEL_94:
      LOBYTE(v23) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v23,
        6,
        v26,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v54);
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741811;
  }
  v27 = (v24 >> 8) & 0x7FF;
  if ( (unsigned int)(v27 - 1) > 0x3FF )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 27;
      v54 = v27;
      goto LABEL_94;
    }
    return (unsigned int)-1073741811;
  }
  if ( !*(_BYTE *)(a1 + 87) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 28;
      v54 = 0;
      goto LABEL_94;
    }
    return (unsigned int)-1073741811;
  }
  v28 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 8LL));
  *(_DWORD *)(a1 + 88) = v28;
  *(_DWORD *)(a1 + 92) = 1 << ((unsigned __int8)v28 >> 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v55) = 1 << ((unsigned __int8)v28 >> 4);
    LODWORD(v53) = v28 & 0xF;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x1Du,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v53,
      v55);
  }
  v29 = *(_DWORD *)(a1 + 88);
  v30 = (v29 >> 27) | *(_WORD *)(a1 + 90) & 0x3E0;
  *(_DWORD *)(a1 + 96) = v30;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v55) = v30;
    LODWORD(v53) = (v29 >> 26) & 1;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x1Eu,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v53,
      v55);
  }
  v31 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 12LL));
  *(_DWORD *)(a1 + 100) = v31;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v55) = *(unsigned __int16 *)(a1 + 102);
    LODWORD(v53) = (unsigned __int8)v31;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x1Fu,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v53,
      v55);
  }
  if ( (unsigned __int8)*(_DWORD *)(a1 + 100) > 0xAu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v33 = 32;
LABEL_43:
    LOBYTE(v32) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v32,
      6,
      v33,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_WORD *)(a1 + 102) > 0x7FFu )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v33 = 33;
    goto LABEL_43;
  }
  v34 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 16LL));
  *(_DWORD *)(a1 + 104) = v34;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v56) = (v34 >> 2) & 1;
    LODWORD(v55) = (v34 >> 1) & 1;
    LODWORD(v53) = v34 & 1;
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      4u,
      6u,
      0x22u,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v53,
      v55,
      v56,
      (v34 >> 3) & 1);
    v35 = *(_DWORD *)(a1 + 104);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v57) = (v35 >> 7) & 1;
      LODWORD(v56) = (v35 >> 6) & 1;
      LODWORD(v55) = (v35 >> 5) & 1;
      LODWORD(v53) = (v35 >> 4) & 1;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x23u,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v53,
        v55,
        v56,
        v57);
      v23 = *(_DWORD *)(a1 + 104);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v55) = *(unsigned __int16 *)(a1 + 106);
        LODWORD(v53) = (unsigned __int16)v23 >> 12;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x24u,
          (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
          v53,
          v55);
      }
    }
  }
  *(_DWORD *)(a1 + 108) = 0;
  if ( v12 >= 0x20u )
  {
    v36 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 28LL));
    *(_DWORD *)(a1 + 108) = v36;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v56) = (v36 >> 2) & 1;
      LODWORD(v55) = (v36 >> 1) & 1;
      LODWORD(v53) = v36 & 1;
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        6u,
        0x25u,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v53,
        v55,
        v56);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = *(_DWORD *)(a1 + 108);
        LODWORD(v56) = (v37 >> 5) & 1;
        LODWORD(v55) = (v37 >> 4) & 1;
        LODWORD(v53) = (v37 >> 3) & 1;
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          6u,
          0x26u,
          (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
          v53,
          v55,
          v56);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v38 = *(_DWORD *)(a1 + 108);
          LODWORD(v55) = (v38 >> 8) & 1;
          LODWORD(v53) = (v38 >> 6) & 1;
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            6u,
            0x27u,
            (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
            v53,
            v55);
        }
      }
    }
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = *(_DWORD *)(a1 + 108);
      LODWORD(v57) = (v39 >> 12) & 1;
      LODWORD(v56) = (v39 >> 11) & 1;
      LODWORD(v55) = (v39 >> 10) & 1;
      LODWORD(v53) = (v39 >> 9) & 1;
      WPP_RECORDER_SF_ddddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (unsigned int)v56,
        6u,
        0x28u,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v53,
        v55,
        v56,
        v57,
        v39 >> 13);
    }
  }
  v40 = *(_DWORD *)(a1 + 104);
  if ( (unsigned __int8)((unsigned __int8)HIBYTE(*(_WORD *)(a1 + 104)) >> 4) > 7u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v23,
        6,
        41,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        (unsigned __int8)HIBYTE(*(_WORD *)(a1 + 104)) >> 4);
    }
    v40 = *(_DWORD *)(a1 + 104) & 0xFFFF0FFF | 0x7000;
    *(_DWORD *)(a1 + 104) = v40;
  }
  v41 = (unsigned __int16)v40 >> 12;
  if ( !v41 || (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 736LL) & 0x40000LL) != 0 )
    v42 = 0;
  else
    v42 = (2 << v41) - 1;
  *(_DWORD *)(a1 + 116) = v42;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v23,
      6,
      42,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v42);
  }
  v43 = *(unsigned __int16 *)(a1 + 106);
  if ( !(_WORD)v43 || 4 * v43 >= (unsigned __int64)*(unsigned int *)(a1 + 20) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = *(_WORD *)(a1 + 106);
      v26 = 43;
      goto LABEL_29;
    }
    return (unsigned int)-1073741811;
  }
  v44 = 4 * v43 + *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 56) = v44;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v23,
      6,
      44,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v44);
  }
  *(_QWORD *)(a1 + 64) = Register_FindFirstExtendedCapability(a1, 1u);
  FirstExtendedCapability = Register_FindFirstExtendedCapability(a1, 0xAu);
  v46 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 72) = FirstExtendedCapability;
  if ( !Controller_IsSecureDevice(v46) || *(_BYTE *)(a1 + 136) )
  {
    v47 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 20LL));
    v23 = v47;
    if ( !v47 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741811;
      v26 = 45;
LABEL_79:
      v54 = 0;
      goto LABEL_94;
    }
    v48 = *(_QWORD *)(a1 + 24) + v47;
    *(_QWORD *)(a1 + 48) = v48;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v23,
        6,
        46,
        (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
        v48,
        v23);
  }
  else
  {
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v49 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 24) + 24LL));
  v23 = v49;
  if ( !v49 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v26 = 47;
    goto LABEL_79;
  }
  v50 = *(_QWORD *)(a1 + 24) + v49;
  *(_QWORD *)(a1 + 40) = v50;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v23,
      6,
      48,
      (__int64)&WPP_746555d3cffb313de7d261611ff307b4_Traceguids,
      v50,
      v23);
  v51 = XilRegister_ReadUlong(a1, (unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL));
  if ( v51 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 49;
      v54 = v51;
      goto LABEL_94;
    }
    return (unsigned int)-1073741811;
  }
  return v1;
}
