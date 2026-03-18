/*
 * XREFs of RootHub_UcxEvtSetPortFeature @ 0x140026440
 * Callers:
 *     <none>
 * Callees:
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000BED4 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000C924 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x14000CA5C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     XilRegister_ReadUlong @ 0x14000D210 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14001A724 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     XilRegister_WriteUlong @ 0x14001BA28 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     RootHub_ForceU0AndWait @ 0x140028EFC (RootHub_ForceU0AndWait.c)
 *     Controller_SetControllerGone @ 0x14003C400 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x140045A8C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14004AB84 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtSetPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // r13
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int16 v9; // ax
  __int64 v10; // rbp
  int v11; // edx
  __int64 v12; // r8
  int Ulong; // eax
  __int64 v14; // rdx
  unsigned int v15; // esi
  int v16; // edi
  unsigned int v17; // ebx
  unsigned int v18; // r8d
  unsigned int *v19; // rcx
  char v20; // dl
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  int v24; // edi
  int v25; // edi
  int v26; // edi
  int v27; // edi
  int v28; // eax
  int v29; // edx
  int v30; // ebx
  int v31; // ebx
  char v32; // al
  int v33; // edx
  int v34; // r9d
  int v35; // edx
  int v36; // ebx
  unsigned int v37; // ebx
  int v38; // edx
  int v39; // ebx
  unsigned int v40; // ebx
  int v41; // eax
  int v42; // edx
  int v43; // ebx
  int v44; // ebx
  int v45; // eax
  int v46; // eax
  int v47; // edx
  int v48; // ebx
  int v49; // ebx
  int v50; // edx
  int v51; // edi
  int v52; // ebx
  int v53; // eax
  int v54; // edx
  int v55; // edi
  int v56; // edi
  int v57; // edi
  int v58; // edi
  int v59; // edi
  int v60; // edi
  int v61; // edi
  int v62; // edi
  int v63; // edi
  int v64; // eax
  int v65; // edx
  int v66; // ebx
  int v67; // ebx
  int v68; // edx
  int v69; // ebx
  unsigned int v70; // ebx
  int v71; // edx
  int v72; // ebx
  int v73; // ebx
  int v74; // edx
  int v75; // ebx
  int v76; // ebx
  __int16 v77; // ax
  __int16 v78; // di
  _UNKNOWN **v79; // rdx
  int v80; // edi
  int v81; // ebx
  int v82; // eax
  int v83; // eax
  int v84; // edx
  int v85; // edi
  int v86; // edi
  int v87; // edi
  char v88; // al
  int v89; // edx
  int v90; // eax
  int v91; // edx
  int v92; // esi
  char v93; // al
  int v94; // edx
  int v95; // edx
  int v96; // edi
  unsigned int v97; // edi
  char v98; // al
  int v99; // edx
  const char *v101; // [rsp+28h] [rbp-F0h]
  const char *v102; // [rsp+38h] [rbp-E0h]
  unsigned int *v103; // [rsp+70h] [rbp-A8h]
  unsigned int v104; // [rsp+78h] [rbp-A0h]
  unsigned int *v105; // [rsp+80h] [rbp-98h]
  unsigned int v106; // [rsp+88h] [rbp-90h]
  __int64 v107; // [rsp+90h] [rbp-88h]
  unsigned int *v108; // [rsp+98h] [rbp-80h]
  _OWORD v110[2]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v111; // [rsp+C8h] [rbp-50h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B0B0);
  v4 = *(_QWORD *)(v3 + 8);
  v5 = *(_QWORD *)(v4 + 88);
  if ( *(_BYTE *)(v4 + 1001) && KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v102 = "Code Path Requires Passive Level";
      v101 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  memset(v110, 0, sizeof(v110));
  v111 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v110[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_13;
    }
    v9 = -1;
  }
  else
  {
    v9 = 40;
  }
  LOWORD(v110[0]) = v9;
LABEL_13:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v110);
  v10 = *((_QWORD *)&v110[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v11,
        11,
        124,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
LABEL_16:
    *(_DWORD *)(v10 + 4) = -1073713152;
    v12 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v12);
  }
  Ulong = XilRegister_ReadUlong(v5, (unsigned int *)(*(_QWORD *)(v3 + 32) + 4LL));
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v14,
        11,
        125,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
    }
    LOBYTE(v14) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v14);
    goto LABEL_16;
  }
  if ( (Ulong & 1) == 0 )
  {
    v15 = *(unsigned __int8 *)(v10 + 132);
    v16 = *(unsigned __int16 *)(v10 + 130);
    v17 = *(unsigned __int8 *)(v10 + 133);
    v106 = v15;
    if ( *(_WORD *)(v10 + 128) != 803 || !*(_BYTE *)(v10 + 132) || v15 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v10 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(unsigned __int8 *)(v10 + 134);
        v21 = 127;
        v23 = *(unsigned __int8 *)(v10 + 131);
        goto LABEL_200;
      }
      goto LABEL_201;
    }
    v18 = v15 - 1;
    v107 = 120LL * (v15 - 1);
    v103 = (unsigned int *)(16LL * (v15 - 1) + *(_QWORD *)(v3 + 40));
    v104 = v15 - 1;
    v19 = v103 + 1;
    v108 = v103 + 3;
    v105 = v103 + 1;
    v20 = *(_BYTE *)(*(_QWORD *)(v3 + 48) + v107 + 13);
    if ( v20 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v102) = *(unsigned __int8 *)(v10 + 133);
        LODWORD(v101) = *(unsigned __int8 *)(v10 + 132);
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x80u,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v101,
          *(unsigned __int16 *)(v10 + 130),
          v102);
        v19 = v103 + 1;
        v18 = v15 - 1;
      }
      if ( v16 == 21 )
      {
        if ( v17 > 5 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 144;
            goto LABEL_37;
          }
          goto LABEL_201;
        }
LABEL_93:
        v53 = XilRegister_ReadUlong(v5, v19);
        v55 = v53;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v54) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v54,
            11,
            145,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v53);
        }
        v56 = (v17 << 28) | v55 & 0xFFFFFFF;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v54) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v54,
            11,
            146,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v56);
        }
        XilRegister_WriteUlong(v5, v105, v56);
        v32 = XilRegister_ReadUlong(v5, v105);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_144;
        v34 = 147;
        goto LABEL_143;
      }
      if ( v16 == 22 )
      {
        if ( v17 > 3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 148;
            goto LABEL_37;
          }
          goto LABEL_201;
        }
        if ( v17 == 3 )
          LOBYTE(v17) = 0;
LABEL_84:
        RootHub_AcquireReadModifyWriteLock(v3, v18);
        v51 = XilRegister_ReadUlong(v5, v103);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v50) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v50,
            11,
            149,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v51);
        }
        v52 = v51 & 0xE000200 | ((v17 & 3) << 14);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v50) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v50,
            11,
            150,
            (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
            v52);
        }
        XilRegister_WriteUlong(v5, v103, v52);
        RootHub_ReleaseReadModifyWriteLock(v3, v104);
        v32 = XilRegister_ReadUlong(v5, v103);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_144;
        v34 = 151;
        goto LABEL_143;
      }
      if ( v17 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = 129;
LABEL_37:
          v22 = *(unsigned __int8 *)(v10 + 134);
          v23 = *(unsigned __int8 *)(v10 + 133);
LABEL_200:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v22, v23, v21);
          goto LABEL_201;
        }
        goto LABEL_201;
      }
      v24 = v16 - 2;
      if ( v24 )
      {
        v25 = v24 - 2;
        if ( v25 )
        {
          v26 = v25 - 4;
          if ( v26 )
          {
            v27 = v26 - 13;
            if ( v27 )
            {
              if ( v27 != 1 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v21 = 152;
                  goto LABEL_37;
                }
LABEL_201:
                v12 = 3221225473LL;
                goto LABEL_202;
              }
              goto LABEL_84;
            }
            goto LABEL_93;
          }
          RootHub_AcquireReadModifyWriteLock(v3, v18);
          v28 = XilRegister_ReadUlong(v5, v103);
          v30 = v28;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v29,
              11,
              141,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v28);
          }
          v31 = v30 & 0xE00C000 | 0x200;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v29,
              11,
              142,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v31);
          }
          XilRegister_WriteUlong(v5, v103, v31);
          RootHub_ReleaseReadModifyWriteLock(v3, v104);
          v32 = XilRegister_ReadUlong(v5, v103);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_144;
          v34 = 143;
        }
        else
        {
          RootHub_AcquireReadModifyWriteLock(v3, v18);
          if ( *(_BYTE *)(v107 + *(_QWORD *)(v3 + 48) + 20) )
          {
            v36 = XilRegister_ReadUlong(v5, v105);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v35) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v35,
                11,
                130,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v36);
            }
            v37 = v36 & 0xFFFE0007;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v35) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v35,
                11,
                131,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v37);
            }
            XilRegister_WriteUlong(v5, v105, v37);
            v39 = XilRegister_ReadUlong(v5, v108);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v38) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v38,
                11,
                132,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v39);
            }
            v40 = v39 & 0xFFFFC000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v38) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v38,
                11,
                133,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v40);
            }
            XilRegister_WriteUlong(v5, v108, v40);
            *(_BYTE *)(v107 + *(_QWORD *)(v3 + 48) + 20) = 0;
          }
          v41 = XilRegister_ReadUlong(v5, v103);
          v43 = v41;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v42) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v42,
              11,
              134,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v41);
          }
          v44 = v43 & 0xE00C200 | 0x10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v42) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v42,
              11,
              135,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v44);
          }
          XilRegister_WriteUlong(v5, v103, v44);
          RootHub_ReleaseReadModifyWriteLock(v3, v104);
          v32 = XilRegister_ReadUlong(v5, v103);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_144;
          v34 = 136;
        }
LABEL_143:
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v33,
          11,
          v34,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v32);
        goto LABEL_144;
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 736LL) & 0x8000000LL) != 0 )
      {
        v45 = RootHub_ForceU0AndWait(v3);
        v12 = (unsigned int)v45;
        if ( v45 < 0 )
          goto LABEL_202;
      }
      RootHub_AcquireReadModifyWriteLock(v3, v15 - 1);
      *(_BYTE *)(v107 + *(_QWORD *)(v3 + 48) + 18) = 0;
      v46 = XilRegister_ReadUlong(v5, v103);
      v48 = v46;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v47) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v47,
          11,
          137,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v46);
      }
      if ( ((v48 & 2) == 0 || (v48 & 0x1E0u) >= 0x60)
        && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v47) = 3;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v47,
          11,
          138,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
      }
      v49 = v48 & 0xE00C200 | 0x10060;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v47) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v47,
          11,
          139,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v49);
      }
      XilRegister_WriteUlong(v5, v103, v49);
      RootHub_ReleaseReadModifyWriteLock(v3, v15 - 1);
      v32 = XilRegister_ReadUlong(v5, v103);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = 140;
        goto LABEL_143;
      }
LABEL_144:
      *(_DWORD *)(v10 + 4) = 0;
      v12 = 0LL;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
               WdfDriverGlobals,
               a2,
               v12);
    }
    if ( v20 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = *(unsigned __int8 *)(v10 + 133);
        v22 = *(unsigned __int8 *)(v10 + 134);
        v21 = 183;
        goto LABEL_200;
      }
      goto LABEL_201;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v102) = *(unsigned __int8 *)(v10 + 133);
      LODWORD(v101) = *(unsigned __int8 *)(v10 + 132);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x99u,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
        v101,
        *(unsigned __int16 *)(v10 + 130),
        v102);
      v19 = v103 + 1;
    }
    switch ( v16 )
    {
      case 23:
        goto LABEL_189;
      case 24:
        goto LABEL_182;
      case 5:
        if ( v17 > 5 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 171;
            goto LABEL_37;
          }
          goto LABEL_201;
        }
        break;
      case 27:
        goto LABEL_145;
      default:
        if ( v17 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 154;
            goto LABEL_37;
          }
          goto LABEL_201;
        }
        v57 = v16 - 4;
        if ( !v57 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v15 - 1);
          v75 = XilRegister_ReadUlong(v5, v103);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v74) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v74,
              11,
              155,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v75);
          }
          v76 = v75 & 0xE00C200 | 0x10;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v74) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v74,
              11,
              156,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v76);
          }
          XilRegister_WriteUlong(v5, v103, v76);
          RootHub_ReleaseReadModifyWriteLock(v3, v15 - 1);
          v32 = XilRegister_ReadUlong(v5, v103);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_144;
          v34 = 157;
          goto LABEL_143;
        }
        v58 = v57 - 1;
        if ( v58 )
        {
          v59 = v58 - 3;
          if ( !v59 )
          {
            RootHub_AcquireReadModifyWriteLock(v3, v15 - 1);
            v72 = XilRegister_ReadUlong(v5, v103);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v71) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v71,
                11,
                161,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v72);
            }
            v73 = v72 & 0xE00C000 | 0x200;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v71) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v71,
                11,
                162,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v73);
            }
            XilRegister_WriteUlong(v5, v103, v73);
            RootHub_ReleaseReadModifyWriteLock(v3, v15 - 1);
            v32 = XilRegister_ReadUlong(v5, v103);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_144;
            v34 = 163;
            goto LABEL_143;
          }
          v60 = v59 - 15;
          if ( v60 )
          {
            v61 = v60 - 1;
            if ( v61 )
            {
              v62 = v61 - 3;
              if ( v62 )
              {
                v63 = v62 - 1;
                if ( !v63 )
                {
                  RootHub_AcquireReadModifyWriteLock(v3, v15 - 1);
                  v69 = XilRegister_ReadUlong(v5, v103);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v68) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v68,
                      11,
                      158,
                      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                      v69);
                  }
                  v70 = v69 & 0xE00C200 | 0x80000000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v68) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v68,
                      11,
                      159,
                      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                      v70);
                  }
                  XilRegister_WriteUlong(v5, v103, v70);
                  RootHub_ReleaseReadModifyWriteLock(v3, v15 - 1);
                  v32 = XilRegister_ReadUlong(v5, v103);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_144;
                  v34 = 160;
                  goto LABEL_143;
                }
                if ( v63 != 2 )
                {
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v21 = 182;
                    goto LABEL_37;
                  }
                  goto LABEL_201;
                }
                v64 = XilRegister_ReadUlong(v5, v19);
                v66 = v64;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v65) = 4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v65,
                    11,
                    179,
                    (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                    v64);
                }
                v67 = v66 | 0x10000;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v65) = 4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v65,
                    11,
                    180,
                    (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                    v67);
                }
                XilRegister_WriteUlong(v5, v105, v67);
                v32 = XilRegister_ReadUlong(v5, v105);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v34 = 181;
                  goto LABEL_143;
                }
                goto LABEL_144;
              }
LABEL_145:
              if ( (unsigned __int8)v17 >= 8u )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v21 = 175;
                  goto LABEL_37;
                }
                goto LABEL_201;
              }
              RootHub_AcquireReadModifyWriteLock(v3, v15 - 1);
              v77 = XilRegister_ReadUlong(v5, v103);
              v78 = v77;
              v79 = &WPP_RECORDER_INITIALIZED;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v79) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  (_DWORD)v79,
                  11,
                  176,
                  (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                  v77);
                v79 = &WPP_RECORDER_INITIALIZED;
              }
              v80 = v78 & 0xC200;
              if ( (*(_DWORD *)(120LL * (v15 - 1) + *(_QWORD *)(v3 + 48) + 64) & 2) != 0 )
                v81 = v80;
              else
                v81 = v80 | ((v17 & 7) << 25);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v79) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  (_DWORD)v79,
                  11,
                  177,
                  (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                  v81);
              }
              XilRegister_WriteUlong(v5, v103, v81);
              RootHub_ReleaseReadModifyWriteLock(v3, v15 - 1);
              v32 = XilRegister_ReadUlong(v5, v103);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v34 = 178;
                goto LABEL_143;
              }
              goto LABEL_144;
            }
LABEL_182:
            v92 = XilRegister_ReadUlong(v5, v19);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v91) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v91,
                11,
                168,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v92);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v91) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v91,
                11,
                169,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v92);
            }
            XilRegister_WriteUlong(v5, v105, v92 & 0xFFFF00FF | (v17 << 8));
            v93 = XilRegister_ReadUlong(v5, v105);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v94) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v94,
                11,
                170,
                (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
                v93);
            }
            *(_BYTE *)(120LL * (v106 - 1) + *(_QWORD *)(v3 + 48) + 22) = v17;
            goto LABEL_144;
          }
LABEL_189:
          v96 = XilRegister_ReadUlong(v5, v19);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v95) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v95,
              11,
              165,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v96);
          }
          v97 = v17 | v96 & 0xFFFFFF00;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v95) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v95,
              11,
              166,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v97);
          }
          XilRegister_WriteUlong(v5, v105, v97);
          v98 = XilRegister_ReadUlong(v5, v105);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v99) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v99,
              11,
              167,
              (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
              v98);
          }
          *(_BYTE *)(120LL * (v15 - 1) + *(_QWORD *)(v3 + 48) + 21) = v17;
          goto LABEL_144;
        }
        break;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 736LL) & 0x80000LL) != 0 )
    {
      if ( v17 )
      {
        v82 = RootHub_ForceU0AndWait(v3);
        goto LABEL_163;
      }
    }
    else if ( v17 )
    {
LABEL_167:
      RootHub_AcquireReadModifyWriteLock(v3, v15 - 1);
      if ( v17 == 3 )
        *(_BYTE *)(120LL * (v15 - 1) + *(_QWORD *)(v3 + 48) + 18) = 0;
      v83 = XilRegister_ReadUlong(v5, v103);
      v85 = v83;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v84) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v84,
          11,
          172,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v83);
      }
      v86 = v85 & 0xE00C200;
      if ( v17 == 4 )
        v87 = v86 | 2;
      else
        v87 = (32 * (v17 & 0xF | 0x800)) | v86;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v84) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v84,
          11,
          173,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v87);
      }
      XilRegister_WriteUlong(v5, v103, v87);
      RootHub_ReleaseReadModifyWriteLock(v3, v15 - 1);
      v88 = XilRegister_ReadUlong(v5, v103);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v89) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v89,
          11,
          174,
          (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
          v88);
      }
      if ( v17 != 3
        || (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 736LL) & 0x4000000LL) == 0
        || (v90 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v15, 1), v12 = (unsigned int)v90, v90 >= 0) )
      {
        v12 = 0LL;
        *(_DWORD *)(v10 + 4) = 0;
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                 WdfDriverGlobals,
                 a2,
                 v12);
      }
LABEL_202:
      *(_DWORD *)(v10 + 4) = -1073741820;
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
               WdfDriverGlobals,
               a2,
               v12);
    }
    v82 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v15, 0);
LABEL_163:
    v12 = (unsigned int)v82;
    if ( v82 < 0 )
      goto LABEL_202;
    goto LABEL_167;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v14,
      11,
      126,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
  }
  *(_DWORD *)(v10 + 4) = -1073741807;
  v12 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v12);
}
