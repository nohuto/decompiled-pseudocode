/*
 * XREFs of RootHub_UcxEvtClearPortFeature @ 0x140028710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x140008750 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x140008E18 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x140009214 (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x14000B858 (XilRegister_WriteUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     Controller_SetControllerGone @ 0x14003C470 (Controller_SetControllerGone.c)
 *     WPP_RECORDER_SF_sds @ 0x14004577C (WPP_RECORDER_SF_sds.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x14004B494 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RootHub_UcxEvtClearPortFeature(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // r15
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r14
  int v10; // edx
  __int64 v11; // r8
  int Ulong; // eax
  __int64 v13; // rdx
  unsigned int v14; // r11d
  unsigned int v15; // r8d
  int v16; // ebx
  unsigned int v17; // r12d
  unsigned int *v18; // r13
  char v19; // dl
  unsigned int *v20; // r9
  int v21; // r9d
  int v22; // edx
  int v23; // r8d
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  int v32; // edx
  int v33; // ebx
  int v34; // ebx
  char v35; // al
  int v36; // edx
  int v37; // r9d
  int v38; // edx
  int v39; // ebx
  int v40; // ebx
  int v41; // edx
  int v42; // ebx
  int v43; // ebx
  int v44; // edx
  int v45; // ebx
  int v46; // ebx
  int v47; // edx
  int v48; // ebx
  int v49; // ebx
  int v50; // edx
  int v51; // ebx
  int v52; // ebx
  int v53; // eax
  int v54; // eax
  int v55; // ebx
  _UNKNOWN **v56; // rdx
  int v57; // ebx
  char v58; // al
  int v59; // edx
  __int64 v60; // rdx
  unsigned __int16 v61; // ax
  int v62; // eax
  int v63; // ebx
  _UNKNOWN **v64; // rdx
  __int64 v65; // r10
  int v66; // ebx
  int v67; // r9d
  __int64 v68; // rcx
  int v69; // edx
  int v70; // ebx
  int v71; // ebx
  int v72; // ebx
  int v73; // ebx
  int v74; // ebx
  int v75; // ebx
  int v76; // ebx
  int v77; // ebx
  int v78; // ebx
  int v79; // eax
  int v80; // edx
  int v81; // ebx
  unsigned int v82; // ebx
  int v83; // edx
  int v84; // ebx
  int v85; // ebx
  int v86; // edx
  int v87; // ebx
  int v88; // ebx
  int v89; // edx
  int v90; // ebx
  int v91; // ebx
  int v92; // eax
  int v93; // edx
  int v94; // ebx
  bool v95; // zf
  __int64 v96; // rbx
  __int64 v97; // rax
  int v98; // r9d
  int v99; // edx
  int v100; // ebx
  int v101; // ebx
  int v102; // edx
  int v103; // ebx
  int v104; // ebx
  int v105; // edx
  int v106; // ebx
  int v107; // ebx
  int v108; // eax
  int v109; // ebx
  int v110; // edx
  int v111; // ebx
  int v112; // ebx
  const char *v114; // [rsp+28h] [rbp-D0h]
  const char *v115; // [rsp+38h] [rbp-C0h]
  unsigned int v116; // [rsp+70h] [rbp-88h]
  int v117; // [rsp+70h] [rbp-88h]
  int v118; // [rsp+70h] [rbp-88h]
  unsigned int v119; // [rsp+74h] [rbp-84h]
  __int64 v120; // [rsp+78h] [rbp-80h]
  unsigned int *v121; // [rsp+80h] [rbp-78h]
  _OWORD v123[2]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v124; // [rsp+B0h] [rbp-48h]

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
      v115 = "Code Path Requires Passive Level";
      v114 = "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\roothub.c";
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
    }
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  memset(v123, 0, sizeof(v123));
  v124 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x33 )
      LOWORD(v123[0]) = -1;
    else
      LOWORD(v123[0]) = *(_WORD *)(WdfStructures + 408);
  }
  else
  {
    LOWORD(v123[0]) = 40;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v123);
  v9 = *((_QWORD *)&v123[0] + 1);
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v10,
        11,
        39,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
    }
LABEL_15:
    *(_DWORD *)(v9 + 4) = -1073713152;
    v11 = 3221225486LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             v11);
  }
  Ulong = XilRegister_ReadUlong(v5, (unsigned int *)(*(_QWORD *)(v3 + 32) + 4LL));
  if ( Ulong == -1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        v13,
        11,
        40,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
    }
    LOBYTE(v13) = 1;
    Controller_SetControllerGone(*(_QWORD *)(v3 + 8), v13);
    goto LABEL_15;
  }
  if ( (Ulong & 1) == 0 )
  {
    v14 = *(unsigned __int8 *)(v9 + 132);
    v15 = *(unsigned __int8 *)(v9 + 133);
    v16 = *(unsigned __int16 *)(v9 + 130);
    v116 = v14;
    v119 = v15;
    if ( *(_WORD *)(v9 + 128) != 291 || !*(_BYTE *)(v9 + 132) || v14 > *(_DWORD *)(v3 + 16) || *(_WORD *)(v9 + 134) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(unsigned __int8 *)(v9 + 134);
        v21 = 42;
        v23 = *(unsigned __int8 *)(v9 + 131);
        goto LABEL_204;
      }
      goto LABEL_205;
    }
    v17 = v14 - 1;
    v18 = (unsigned int *)(*(_QWORD *)(v3 + 40) + 16LL * (v14 - 1));
    v120 = 120LL * (v14 - 1);
    v19 = *(_BYTE *)(v120 + *(_QWORD *)(v3 + 48) + 13);
    v20 = v18 + 1;
    v121 = v18 + 1;
    if ( v19 == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v115) = *(unsigned __int8 *)(v9 + 133);
        LODWORD(v114) = *(unsigned __int8 *)(v9 + 132);
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          4u,
          0xBu,
          0x2Bu,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v114,
          *(unsigned __int16 *)(v9 + 130),
          v115);
        v14 = v116;
        v15 = v119;
      }
      if ( v16 == 22 )
      {
        if ( v15 > 3 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 57;
            goto LABEL_35;
          }
          goto LABEL_205;
        }
LABEL_116:
        RootHub_AcquireReadModifyWriteLock(v3, v17);
        v70 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v69) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v69,
            11,
            58,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v70);
        }
        v71 = v70 & 0xE000200;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v69) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v69,
            11,
            59,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v71);
        }
        XilRegister_WriteUlong(v5, v18, v71);
        RootHub_ReleaseReadModifyWriteLock(v3, v17);
        v35 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_199;
        v37 = 60;
        goto LABEL_198;
      }
      if ( v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v21 = 44;
LABEL_35:
          v22 = *(unsigned __int8 *)(v9 + 134);
          v23 = *(unsigned __int8 *)(v9 + 133);
LABEL_204:
          WPP_RECORDER_SF_DDDDDDDD(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL), v22, v23, v21);
          goto LABEL_205;
        }
        goto LABEL_205;
      }
      v24 = v16 - 1;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          v26 = v25 - 6;
          if ( v26 )
          {
            v27 = v26 - 8;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( v28 )
              {
                v29 = v28 - 1;
                if ( v29 )
                {
                  v30 = v29 - 1;
                  if ( v30 )
                  {
                    v31 = v30 - 1;
                    if ( v31 )
                    {
                      if ( v31 != 2 )
                      {
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          v21 = 76;
                          goto LABEL_35;
                        }
LABEL_205:
                        v11 = 3221225473LL;
                        goto LABEL_206;
                      }
                      goto LABEL_116;
                    }
                    RootHub_AcquireReadModifyWriteLock(v3, v17);
                    v33 = XilRegister_ReadUlong(v5, v18);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v32) = 4;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v32,
                        11,
                        64,
                        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                        v33);
                    }
                    v34 = v33 & 0xE00C200 | 0x200000;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v32) = 4;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v32,
                        11,
                        65,
                        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                        v34);
                    }
                    XilRegister_WriteUlong(v5, v18, v34);
                    RootHub_ReleaseReadModifyWriteLock(v3, v17);
                    v35 = XilRegister_ReadUlong(v5, v18);
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_199;
                    v37 = 66;
                  }
                  else
                  {
                    RootHub_AcquireReadModifyWriteLock(v3, v17);
                    v39 = XilRegister_ReadUlong(v5, v18);
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v38) = 4;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v38,
                        11,
                        73,
                        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                        v39);
                    }
                    v40 = v39 & 0xE00C200 | 0x100000;
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v38) = 4;
                      WPP_RECORDER_SF_d(
                        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                        v38,
                        11,
                        74,
                        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                        v40);
                    }
                    XilRegister_WriteUlong(v5, v18, v40);
                    RootHub_ReleaseReadModifyWriteLock(v3, v17);
                    v35 = XilRegister_ReadUlong(v5, v18);
                    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_199;
                    v37 = 75;
                  }
                }
                else
                {
                  RootHub_AcquireReadModifyWriteLock(v3, v17);
                  v42 = XilRegister_ReadUlong(v5, v18);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v41) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v41,
                      11,
                      70,
                      (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                      v42);
                  }
                  v43 = v42 & 0xE00C200 | 0x400000;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v41) = 4;
                    WPP_RECORDER_SF_d(
                      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                      v41,
                      11,
                      71,
                      (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                      v43);
                  }
                  XilRegister_WriteUlong(v5, v18, v43);
                  RootHub_ReleaseReadModifyWriteLock(v3, v17);
                  v35 = XilRegister_ReadUlong(v5, v18);
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_199;
                  v37 = 72;
                }
              }
              else
              {
                RootHub_AcquireReadModifyWriteLock(v3, v17);
                v45 = XilRegister_ReadUlong(v5, v18);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v44) = 4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v44,
                    11,
                    67,
                    (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                    v45);
                }
                v46 = v45 & 0xE00C200 | 0x40000;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v44) = 4;
                  WPP_RECORDER_SF_d(
                    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                    v44,
                    11,
                    68,
                    (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                    v46);
                }
                XilRegister_WriteUlong(v5, v18, v46);
                RootHub_ReleaseReadModifyWriteLock(v3, v17);
                v35 = XilRegister_ReadUlong(v5, v18);
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_199;
                v37 = 69;
              }
            }
            else
            {
              RootHub_AcquireReadModifyWriteLock(v3, v17);
              v48 = XilRegister_ReadUlong(v5, v18);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v47) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v47,
                  11,
                  61,
                  (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                  v48);
              }
              v49 = v48 & 0xE00C200 | 0x20000;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v47) = 4;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                  v47,
                  11,
                  62,
                  (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                  v49);
              }
              XilRegister_WriteUlong(v5, v18, v49);
              RootHub_ReleaseReadModifyWriteLock(v3, v17);
              v35 = XilRegister_ReadUlong(v5, v18);
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_199;
              v37 = 63;
            }
          }
          else
          {
            RootHub_AcquireReadModifyWriteLock(v3, v17);
            v51 = XilRegister_ReadUlong(v5, v18);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v50) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v50,
                11,
                54,
                (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                v51);
            }
            v52 = v51 & 0xE00C000;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v50) = 4;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
                v50,
                11,
                55,
                (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                v52);
            }
            XilRegister_WriteUlong(v5, v18, v52);
            RootHub_ReleaseReadModifyWriteLock(v3, v17);
            v35 = XilRegister_ReadUlong(v5, v18);
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_199;
            v37 = 56;
          }
LABEL_198:
          LOBYTE(v36) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v36,
            11,
            v37,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v35);
          goto LABEL_199;
        }
        v53 = RootHub_WaitForPendingU3TransitionCompletion((_QWORD *)v3, v14, 0);
        v11 = (unsigned int)v53;
        if ( v53 < 0 )
        {
LABEL_206:
          *(_DWORD *)(v9 + 4) = -1073741820;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v11);
        }
        RootHub_AcquireReadModifyWriteLock(v3, v17);
        v54 = XilRegister_ReadUlong(v5, v18);
        v55 = v54;
        v56 = &WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            (_DWORD)v56,
            11,
            50,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v54);
          v56 = &WPP_RECORDER_INITIALIZED;
        }
        if ( ((v55 & 2) == 0 || (v55 & 0x1E0) != 0x60 && (v55 & 0x1E0) != 0x1E0)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            (_DWORD)v56,
            11,
            51,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
        }
        v57 = v55 & 0xE00C200 | 0x101E0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v56) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            (_DWORD)v56,
            11,
            52,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v57);
        }
        XilRegister_WriteUlong(v5, v18, v57);
        RootHub_ReleaseReadModifyWriteLock(v3, v17);
        v58 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v59) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v59,
            11,
            53,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v58);
        }
        v60 = *(_QWORD *)(v3 + 48);
        if ( *(int *)(v60 + v120 + 48) <= 0 )
          v61 = 50;
        else
          v61 = *(_WORD *)(v60 + v120 + 52);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01033 + 2552))(
          WdfDriverGlobals,
          *(_QWORD *)(v60 + v120 + 40),
          -10000LL * v61);
        goto LABEL_199;
      }
      RootHub_AcquireReadModifyWriteLock(v3, v17);
      v62 = XilRegister_ReadUlong(v5, v18);
      v63 = v62;
      v64 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v64) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          (_DWORD)v64,
          11,
          45,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v62);
        v64 = &WPP_RECORDER_INITIALIZED;
      }
      v65 = *(_QWORD *)(v3 + 8);
      if ( (*(_QWORD *)(v65 + 736) & 0x2000000LL) != 0 )
      {
        if ( ((v63 & 2) == 0 || (v63 & 0x1E0u) >= 0x60)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v64) = 3;
          WPP_RECORDER_SF_(
            *(_QWORD *)(v65 + 72),
            (_DWORD)v64,
            11,
            46,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
        }
        v66 = v63 & 0xE00C200 | 0x10060;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_111:
          XilRegister_WriteUlong(v5, v18, v66);
          RootHub_ReleaseReadModifyWriteLock(v3, v17);
          v35 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v37 = 49;
            goto LABEL_198;
          }
LABEL_199:
          *(_DWORD *)(v9 + 4) = 0;
          v11 = 0LL;
          return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
                   WdfDriverGlobals,
                   a2,
                   v11);
        }
        v67 = 47;
        v68 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL);
      }
      else
      {
        v66 = v63 & 0xE00C200 | 2;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_111;
        v68 = *(_QWORD *)(v65 + 72);
        v67 = 48;
      }
      LOBYTE(v64) = 4;
      WPP_RECORDER_SF_d(v68, (_DWORD)v64, 11, v67, (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids, v66);
      goto LABEL_111;
    }
    if ( v19 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 106;
        v22 = *(unsigned __int8 *)(v9 + 134);
        v23 = *(unsigned __int8 *)(v9 + 131);
        goto LABEL_204;
      }
      goto LABEL_205;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v115) = *(unsigned __int8 *)(v9 + 133);
      LODWORD(v114) = *(unsigned __int8 *)(v9 + 132);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        4u,
        0xBu,
        0x4Du,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
        v114,
        *(unsigned __int16 *)(v9 + 130),
        v115);
      v15 = v119;
      v20 = v18 + 1;
    }
    if ( v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v21 = 78;
        goto LABEL_35;
      }
      goto LABEL_205;
    }
    v72 = v16 - 8;
    if ( !v72 )
    {
      RootHub_AcquireReadModifyWriteLock(v3, v17);
      v111 = XilRegister_ReadUlong(v5, v18);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v110) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v110,
          11,
          79,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v111);
      }
      v112 = v111 & 0xE00C000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v110) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v110,
          11,
          80,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v112);
      }
      XilRegister_WriteUlong(v5, v18, v112);
      RootHub_ReleaseReadModifyWriteLock(v3, v17);
      v35 = XilRegister_ReadUlong(v5, v18);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_199;
      v37 = 81;
      goto LABEL_198;
    }
    v73 = v72 - 8;
    if ( v73 )
    {
      v74 = v73 - 3;
      if ( !v74 )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v17);
        v103 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v102) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v102,
            11,
            89,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v103);
        }
        v104 = v103 & 0xE00C200 | 0x100000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v102) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v102,
            11,
            90,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v104);
        }
        XilRegister_WriteUlong(v5, v18, v104);
        RootHub_ReleaseReadModifyWriteLock(v3, v17);
        v35 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_199;
        v37 = 91;
        goto LABEL_198;
      }
      v75 = v74 - 1;
      if ( !v75 )
      {
        RootHub_AcquireReadModifyWriteLock(v3, v17);
        v100 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v99) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v99,
            11,
            86,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v100);
        }
        v101 = v100 & 0xE00C200 | 0x200000;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v99) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v99,
            11,
            87,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v101);
        }
        XilRegister_WriteUlong(v5, v18, v101);
        RootHub_ReleaseReadModifyWriteLock(v3, v17);
        v35 = XilRegister_ReadUlong(v5, v18);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_199;
        v37 = 88;
        goto LABEL_198;
      }
      v76 = v75 - 5;
      if ( v76 )
      {
        v77 = v76 - 1;
        if ( !v77 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v17);
          v87 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v86) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v86,
              11,
              96,
              (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
              v87);
          }
          v88 = v87 & 0xE00C200 | 0x800000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v86) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v86,
              11,
              97,
              (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
              v88);
          }
          XilRegister_WriteUlong(v5, v18, v88);
          RootHub_ReleaseReadModifyWriteLock(v3, v17);
          v35 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_199;
          v37 = 98;
          goto LABEL_198;
        }
        v78 = v77 - 3;
        if ( !v78 )
        {
          RootHub_AcquireReadModifyWriteLock(v3, v17);
          v84 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v83) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v83,
              11,
              99,
              (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
              v84);
          }
          v85 = v84 & 0xE00C200 | 0x80000;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v83) = 4;
            WPP_RECORDER_SF_d(
              *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
              v83,
              11,
              100,
              (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
              v85);
          }
          XilRegister_WriteUlong(v5, v18, v85);
          RootHub_ReleaseReadModifyWriteLock(v3, v17);
          v35 = XilRegister_ReadUlong(v5, v18);
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_199;
          v37 = 101;
          goto LABEL_198;
        }
        if ( v78 != 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v21 = 105;
            goto LABEL_35;
          }
          goto LABEL_205;
        }
        v79 = XilRegister_ReadUlong(v5, v20);
        v81 = v79;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v80) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v80,
            11,
            102,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v79);
        }
        v82 = v81 & 0xFFFEFFFF;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v80) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v80,
            11,
            103,
            (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
            v82);
        }
        XilRegister_WriteUlong(v5, v121, v82);
        v35 = XilRegister_ReadUlong(v5, v121);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v37 = 104;
          goto LABEL_198;
        }
        goto LABEL_199;
      }
      RootHub_AcquireReadModifyWriteLock(v3, v17);
      v90 = XilRegister_ReadUlong(v5, v18);
      v117 = v90;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v89) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v89,
          11,
          92,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v90);
      }
      v91 = v90 & 0xE00C200 | 0x400000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v89) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v89,
          11,
          93,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v91);
      }
      XilRegister_WriteUlong(v5, v18, v91);
      RootHub_ReleaseReadModifyWriteLock(v3, v17);
      v92 = XilRegister_ReadUlong(v5, v18);
      v94 = v92;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v93) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v93,
          11,
          94,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v92);
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 744LL) & 0x1000000LL) == 0 )
        goto LABEL_199;
      v95 = v117 == v94;
      v96 = 120LL * v17;
      v97 = *(_QWORD *)(v3 + 48);
      if ( v95 )
      {
        ++*(_DWORD *)(v97 + v120 + 112);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_190;
        v98 = 95;
LABEL_188:
        LOBYTE(v93) = 2;
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v93,
          11,
          v98,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
        goto LABEL_190;
      }
    }
    else
    {
      RootHub_AcquireReadModifyWriteLock(v3, v17);
      v106 = XilRegister_ReadUlong(v5, v18);
      v118 = v106;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v105) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v105,
          11,
          82,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v106);
      }
      v107 = v106 & 0xE00C200 | 0x20000;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v105) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v105,
          11,
          83,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v107);
      }
      XilRegister_WriteUlong(v5, v18, v107);
      RootHub_ReleaseReadModifyWriteLock(v3, v17);
      v108 = XilRegister_ReadUlong(v5, v18);
      v109 = v108;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v93) = 4;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
          v93,
          11,
          84,
          (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
          v108);
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v3 + 8) + 744LL) & 0x1000000LL) == 0 )
        goto LABEL_199;
      v95 = v118 == v109;
      v96 = 120LL * v17;
      v97 = *(_QWORD *)(v3 + 48);
      if ( v95 )
      {
        ++*(_DWORD *)(v97 + v120 + 112);
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_190;
        v98 = 85;
        goto LABEL_188;
      }
    }
    *(_DWORD *)(v97 + v96 + 112) = 0;
LABEL_190:
    if ( *(_DWORD *)(*(_QWORD *)(v3 + 48) + v96 + 112) == 10 )
      Controller_ReportFatalError(*(_QWORD *)(v3 + 8), 64, 4144, 0, 0LL, 0LL, 0LL);
    goto LABEL_199;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v13,
      11,
      41,
      (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
  }
  *(_DWORD *)(v9 + 4) = -1073741807;
  v11 = 3221225666LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01033 + 2104))(
           WdfDriverGlobals,
           a2,
           v11);
}
