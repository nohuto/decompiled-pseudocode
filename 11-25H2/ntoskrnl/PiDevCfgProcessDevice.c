/*
 * XREFs of PiDevCfgProcessDevice @ 0x1408906D0
 * Callers:
 *     PpDevCfgProcessDevice @ 0x140A9A1A4 (PpDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObject @ 0x140463B34 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1404A172C (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407178C8 (PnpUpdateRebootRequiredReason.c)
 *     PiDevCfgMigrateRootDevice @ 0x14071E830 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14071F4B8 (PiDevCfgRequestDriverConfigurations.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14072A5D8 (PiAuditDeviceEnableDisableRequest.c)
 *     PipClearDevNodeUserFlags @ 0x14082F904 (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x140833844 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14088F39C (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgInitDeviceContext @ 0x140890EB0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x140891014 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgFindDeviceDriver @ 0x1408914DC (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDriverNode @ 0x140891C44 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140936F00 (SeAuditingWithTokenForSubcategory.c)
 *     _CmSetDeviceRegProp @ 0x140950F0C (_CmSetDeviceRegProp.c)
 *     _CmIsRootEnumeratedDevice @ 0x140954D08 (_CmIsRootEnumeratedDevice.c)
 *     PiPnpRtlSetObjectProperty @ 0x140955470 (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 *     PiDevCfgSetObjectProperty @ 0x140A740D0 (PiDevCfgSetObjectProperty.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r13
  int v6; // esi
  bool v7; // di
  unsigned int v8; // r15d
  int inited; // r14d
  char v10; // al
  int v11; // eax
  bool v12; // al
  char v13; // di
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rdx
  char v31; // di
  int v32; // eax
  int v33; // r12d
  int v34; // r13d
  const WCHAR *v35; // r15
  unsigned int v36; // esi
  int v37; // edi
  int v38; // edi
  int *v39; // [rsp+40h] [rbp-C0h]
  int v40; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+64h] [rbp-9Ch] BYREF
  int v43; // [rsp+68h] [rbp-98h] BYREF
  int v44; // [rsp+6Ch] [rbp-94h] BYREF
  int v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  int v47; // [rsp+80h] [rbp-80h] BYREF
  int v48; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  int v50; // [rsp+90h] [rbp-70h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v53[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-40h]
  int v55; // [rsp+D0h] [rbp-30h] BYREF
  PCWSTR SourceString; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v59; // [rsp+130h] [rbp+30h] BYREF
  int v60; // [rsp+138h] [rbp+38h]
  PVOID *v61; // [rsp+140h] [rbp+40h]
  int v62; // [rsp+14Ch] [rbp+4Ch]
  int v63; // [rsp+150h] [rbp+50h]
  __int64 *v64; // [rsp+158h] [rbp+58h]
  int v65; // [rsp+160h] [rbp+60h]
  PVOID *v66; // [rsp+168h] [rbp+68h]
  int v67; // [rsp+174h] [rbp+74h]
  int v68; // [rsp+178h] [rbp+78h]
  char v69; // [rsp+1D0h] [rbp+D0h]
  __int64 v70; // [rsp+1D8h] [rbp+D8h]
  char v72; // [rsp+1E8h] [rbp+E8h]

  v5 = 0LL;
  memset_0(&v55, 0, 0x48uLL);
  v6 = 0;
  P[0] = 0LL;
  v7 = 0;
  P[1] = 0LL;
  v8 = 0;
  v53[0] = 0LL;
  v53[1] = 0LL;
  v46 = 0LL;
  v41 = 0;
  v45 = 0;
  v69 = 0;
  v43 = 0;
  v49 = 0LL;
  v44 = 1;
  v42 = 0;
  v52 = 0LL;
  v72 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_42;
  }
  v5 = a1 + 40;
  v54 = a1 + 40;
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, &v55);
  if ( inited >= 0 )
  {
    v10 = v55;
    if ( (a3 & 1) != 0 )
    {
      v10 = v55 | 1;
      v55 |= 1u;
    }
    if ( !a2 )
      a2 = v57;
    v70 = a2;
    if ( (v10 & 1) != 0 || PnpBootMode )
      goto LABEL_8;
    memset_0(&v59, 0, 0x50uLL);
    v60 = 8210;
    v65 = 8210;
    v26 = *(_QWORD *)(a1 + 48);
    v59 = DEVPKEY_Device_PendingConfigurationIds;
    v62 = 6;
    v61 = P;
    v64 = DEVPKEY_Device_RequestConfigurationIds;
    v66 = v53;
    v67 = 6;
    inited = PiDevCfgQueryObjectProperties(6, v26, 1, a2, (__int64)&v59, 2);
    if ( inited >= 0 )
    {
      if ( v63 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
      if ( v68 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)v53, 0LL);
      if ( P[1] && !*(_WORD *)P[1] )
      {
        v7 = 1;
        v8 = -1073740656;
        goto LABEL_15;
      }
LABEL_8:
      inited = PiDevCfgFindDeviceDriver(&v55, P[1], &v46);
      if ( inited >= 0 )
      {
        if ( v53[1] )
        {
          inited = PiDevCfgRequestDriverConfigurations((__int64)&v55, v46);
        }
        else
        {
          v11 = PiDevCfgConfigureDevice(a1, &v55, v46, &v41, &v45);
          inited = v11;
          if ( v11 >= 0 )
            v6 = v41;
          v12 = v11 >= 0;
          v69 = v12;
          if ( inited != -1073740653 )
          {
            v69 = v12;
            if ( inited != -1073740651 )
            {
              v72 = 1;
              v69 = v12;
            }
          }
        }
      }
LABEL_15:
      if ( P[1] && (v46 || v7) )
      {
        v40 = 0;
        HIDWORD(v39) = 0;
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)&v55, *(_QWORD *)(a1 + 48), 1, a2);
      }
      if ( v53[1] )
        goto LABEL_35;
      if ( !P[1] )
      {
        if ( v7 )
          goto LABEL_118;
        if ( v46 )
        {
          if ( *(int *)(v46 + 444) >= 0 )
            goto LABEL_21;
          v8 = *(_DWORD *)(v46 + 444);
LABEL_118:
          v32 = PiDevCfgConfigureDevice(a1, &v55, 0LL, &v41, &v45);
          inited = v32;
          if ( v32 < 0 )
          {
            v13 = v69;
            if ( v32 == -1073740653 || v32 == -1073740651 )
            {
LABEL_22:
              if ( v13 )
              {
                if ( PnpBootMode || (a3 & 2) != 0 )
                  v6 |= 0x40000u;
                v14 = *(_DWORD *)(a1 + 704);
                if ( (v6 & 0x40) != 0 )
                  v15 = v14 & 0xFFFFFFFE;
                else
                  v15 = v14 | 1;
                *(_DWORD *)(a1 + 704) = v15;
              }
              v16 = *(_QWORD *)(a1 + 48);
              v42 = 4;
              if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v16, a2, 11, (__int64)&v44, (__int64)&v41, (__int64)&v42, 0) < 0
                || v44 != 4
                || v42 != 4 )
              {
                v41 = 0;
              }
              v18 = *(_DWORD *)(a1 + 396) & 0x2000;
              if ( inited < 0 )
              {
                if ( v18 )
                {
                  v29 = *(unsigned int *)(a1 + 404);
                  if ( (_DWORD)v29 == 1 || (_DWORD)v29 == 18 )
                    PipSetDevNodeProblem(a1, v29, (unsigned int)inited);
                }
                goto LABEL_33;
              }
              v41 &= 0xFFF7FB9F;
              v6 &= ~0x20u;
              if ( v18 )
              {
                if ( *(_DWORD *)(a1 + 404) == 1 || (v28 = *(_DWORD *)(a1 + 404), v28 == 28) || v28 == 18 || v28 == 56 )
                  PipClearDevNodeProblem(a1);
              }
              v22 = *(_DWORD *)(a1 + 300);
              if ( ((v22 - 771) & 0xFFFFFFEE) == 0 && v22 != 787 )
              {
                v23 = *(_DWORD *)(a1 + 396);
                if ( (v23 & 0x6000) != 0 )
                {
                  if ( (v23 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v45 & 0x70) == 0 )
                  {
                    PipClearDevNodeProblem(a1);
                    PipClearDevNodeUserFlags(a1, 4);
                  }
                }
                else if ( (v45 & 0x70) == 0 || PnpBootMode )
                {
                  if ( (v6 & 0x40) != 0 )
                    PipSetDevNodeProblem(a1, 28LL, v8);
                }
                else
                {
                  v24 = 0LL;
                  if ( (v45 & 0x10) != 0 )
                  {
                    v24 = 128LL;
                    v25 = 128LL;
                    v49 = 128LL;
                  }
                  else
                  {
                    v25 = v49;
                  }
                  if ( (v45 & 0x20) != 0 )
                  {
                    v25 = v24 | 0x10;
                    v49 = v24 | 0x10;
                    v24 |= 0x10uLL;
                  }
                  if ( (v45 & 0x40) != 0 )
                  {
                    v25 = v24 | 0x200;
                    v49 = v24 | 0x200;
                  }
                  PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), v17, v25);
                  PipSetDevNodeProblem(a1, 14LL, 3221226194LL);
                  PipSetDevNodeUserFlags(a1, 4u);
                }
              }
              if ( v43 && (v6 & 0x40) != 0 )
              {
                v40 = 0;
                v39 = &v43;
              }
              else
              {
                if ( (v55 & 1) != 0 )
                {
LABEL_33:
                  if ( v13 || v6 )
                  {
                    v41 |= v6;
                    v33 = PiPnpRtlCtx;
                    v34 = v57;
                    v35 = SourceString;
                    v36 = 0;
                    v37 = (v55 & 1) << 17;
                    DestinationString = 0LL;
                    v47 = 0;
                    v50 = 0;
                    v48 = 0;
                    if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
                    {
                      v47 = 4;
                      if ( (int)CmGetDeviceRegProp(
                                  v33,
                                  (_DWORD)v35,
                                  v34,
                                  11,
                                  (__int64)&v50,
                                  (__int64)&v48,
                                  (__int64)&v47,
                                  0) < 0
                        || v47 != 4
                        || v50 != 4 )
                      {
                        v48 = 0;
                      }
                      v36 = v41;
                    }
                    v38 = CmSetDeviceRegProp(v33, (_DWORD)v35, v34, 11, 4, (__int64)&v41, 4, v37);
                    if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(138LL, 0LL) )
                    {
                      RtlInitUnicodeString(&DestinationString, v35);
                      PiAuditDeviceEnableDisableRequest((__int64)&DestinationString, v48, v36, v38 >= 0);
                    }
                    v5 = v54;
                    LODWORD(a2) = v70;
                    if ( v69 )
                    {
                      v27 = *(_QWORD *)(v54 + 8);
                      v52 = MEMORY[0xFFFFF78000000014];
                      LODWORD(v39) = 8;
                      PiPnpRtlSetObjectProperty(
                        *(_QWORD *)&PiPnpRtlCtx,
                        v27,
                        1LL,
                        v70,
                        0LL,
                        &DEVPKEY_Device_InstallDate,
                        16,
                        &v52,
                        v39,
                        (v55 & 1) << 17,
                        v40);
                      if ( (unsigned int)PnpGetObjectProperty(
                                           PiPnpRtlCtx,
                                           *(_QWORD *)(v5 + 8),
                                           1,
                                           v70,
                                           0LL,
                                           (__int64)&DEVPKEY_Device_FirstInstallDate,
                                           (__int64)&v44,
                                           0LL,
                                           0,
                                           (__int64)&v42,
                                           0) != -1073741789
                        || v42 != 8 )
                      {
                        PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)&v55, *(_QWORD *)(v5 + 8), 1, v70);
                      }
                    }
                  }
LABEL_35:
                  if ( v72 )
                  {
                    v20 = *(_QWORD *)(v5 + 8);
                    v42 = 8;
                    if ( (int)PnpGetObjectProperty(
                                PiPnpRtlCtx,
                                v20,
                                1,
                                a2,
                                0LL,
                                (__int64)&DEVPKEY_Device_RebootRequiredReason,
                                (__int64)&v44,
                                (__int64)&v49,
                                8,
                                (__int64)&v42,
                                0) >= 0
                      && v44 == 9
                      && v42 == 8 )
                    {
                      v21 = v49;
                    }
                    else
                    {
                      v21 = 0LL;
                      v49 = 0LL;
                    }
                    PiDevCfgLogDeviceConfigured(a1, (__int64)&v55, v46, v45, inited, v21, (int *)&v52);
                  }
                  goto LABEL_36;
                }
                v40 = 0;
                HIDWORD(v39) = 0;
              }
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)&v55, *(_QWORD *)(a1 + 48), 1, a2);
              goto LABEL_33;
            }
          }
          else
          {
            v6 = v41;
            v69 = 1;
            switch ( v8 )
            {
              case 0xC0000490:
                v43 = -536870360;
                break;
              case 0xC0000491:
                v43 = -536870320;
                break;
              case 0xC0000492:
                v43 = -536870319;
                break;
              case 0xC0000493:
                v43 = -536870318;
                break;
              case 0xC0000494:
                v43 = -536870375;
                break;
            }
          }
          v72 = 1;
LABEL_21:
          v13 = v69;
          goto LABEL_22;
        }
        if ( inited != -1073740656 || (HIBYTE(NlsMbCodePageTag) & 2) == 0 )
          goto LABEL_21;
        if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
        {
          if ( (unsigned __int8)CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
          {
            v30 = *(_QWORD *)(a1 + 48);
            v42 = 4;
            if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v30, a2, 11, (__int64)&v44, (__int64)&v41, (__int64)&v42, 0) >= 0
              && v44 == 4
              && v42 == 4 )
            {
              v31 = v41;
            }
            else
            {
              v31 = 0;
              v41 = 0;
            }
            v7 = (v31 & 0x20) != 0;
          }
          else
          {
            v7 = 1;
          }
        }
        else
        {
          v6 = 32;
        }
        if ( (unsigned __int8)CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
        {
          if ( (int)PiDevCfgMigrateRootDevice(a1, (__int64)&v55, (__int64)&v41) >= 0 )
          {
            v6 |= v41;
            if ( (v41 & 1) != 0 )
            {
              v7 = 0;
              v6 &= ~0x20u;
            }
          }
        }
        v8 = -1073740656;
      }
      if ( !v7 )
        goto LABEL_21;
      goto LABEL_118;
    }
  }
LABEL_36:
  if ( v46 )
    PiDevCfgFreeDriverNode(v46);
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v53[1] )
  {
    ExFreePool(v53[1]);
    *(_OWORD *)v53 = 0LL;
  }
LABEL_42:
  PiDevCfgFreeDeviceContext(&v55);
  if ( v5 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, (unsigned __int16 *)v5, inited);
  return (unsigned int)inited;
}
