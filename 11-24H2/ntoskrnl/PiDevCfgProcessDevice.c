/*
 * XREFs of PiDevCfgProcessDevice @ 0x1409C9598
 * Callers:
 *     PpDevCfgProcessDevice @ 0x140A9A74C (PpDevCfgProcessDevice.c)
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x1402F0484 (PnpDiagnosticTraceObject.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14049AACC (PnpDiagnosticTraceObjectWithStatus.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpUpdateRebootRequiredReason @ 0x140721558 (PnpUpdateRebootRequiredReason.c)
 *     PiDevCfgMigrateRootDevice @ 0x140728400 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x140729428 (PiDevCfgRequestDriverConfigurations.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x140734798 (PiAuditDeviceEnableDisableRequest.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     _CmIsRootEnumeratedDevice @ 0x1408B63E8 (_CmIsRootEnumeratedDevice.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1408F2E10 (SeAuditingWithTokenForSubcategory.c)
 *     PipClearDevNodeUserFlags @ 0x140979A0C (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     PiDevCfgFindDeviceDriver @ 0x1409C86B4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgInitDeviceContext @ 0x1409C9D7C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1409C9EF4 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgConfigureDevice @ 0x1409CA478 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgSetObjectProperty @ 0x140A70328 (PiDevCfgSetObjectProperty.c)
 *     PipSetDevNodeUserFlags @ 0x140ABF118 (PipSetDevNodeUserFlags.c)
 *     PiDevCfgFreeDriverNode @ 0x140ABF4A0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140ABF650 (PiDevCfgLogDeviceConfigured.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgProcessDevice(__int64 a1, void *a2, char a3)
{
  __int64 v5; // r13
  int v6; // esi
  bool v7; // di
  int v8; // r15d
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
  WCHAR *v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  const WCHAR *v27; // rdx
  int v28; // eax
  int v29; // edx
  __int64 v30; // rdx
  char v31; // di
  int v32; // eax
  __int64 v33; // r12
  __int64 v34; // r13
  const WCHAR *v35; // r15
  unsigned int v36; // esi
  int v37; // edi
  int v38; // edi
  int v39; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+64h] [rbp-9Ch] BYREF
  int v41; // [rsp+68h] [rbp-98h]
  int v42; // [rsp+6Ch] [rbp-94h] BYREF
  int v43; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  int v45; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  int v48; // [rsp+90h] [rbp-70h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v51[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-40h]
  int v53; // [rsp+D0h] [rbp-30h] BYREF
  PCWSTR SourceString; // [rsp+D8h] [rbp-28h]
  void *v55; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v57; // [rsp+140h] [rbp+40h] BYREF
  int v58; // [rsp+148h] [rbp+48h]
  PVOID *v59; // [rsp+150h] [rbp+50h]
  int v60; // [rsp+15Ch] [rbp+5Ch]
  int v61; // [rsp+160h] [rbp+60h]
  __int64 *v62; // [rsp+168h] [rbp+68h]
  int v63; // [rsp+170h] [rbp+70h]
  PVOID *v64; // [rsp+178h] [rbp+78h]
  int v65; // [rsp+184h] [rbp+84h]
  int v66; // [rsp+188h] [rbp+88h]
  char v67; // [rsp+1E0h] [rbp+E0h]
  void *v68; // [rsp+1E8h] [rbp+E8h]
  char v70; // [rsp+1F8h] [rbp+F8h]

  v5 = 0LL;
  memset_0(&v53, 0, 0x58uLL);
  v6 = 0;
  P[0] = 0LL;
  v7 = 0;
  P[1] = 0LL;
  v8 = 0;
  v51[0] = 0LL;
  v51[1] = 0LL;
  v44 = 0LL;
  v39 = 0;
  v43 = 0;
  v67 = 0;
  v41 = 0;
  v47 = 0LL;
  v42 = 1;
  v40 = 0;
  v50 = 0LL;
  v70 = 0;
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_42;
  }
  v5 = a1 + 40;
  v52 = a1 + 40;
  PnpDiagnosticTraceObject(&KMPnPEvt_DeviceConfig_Start, (unsigned __int16 *)(a1 + 40));
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), a2, &v53);
  if ( inited >= 0 )
  {
    v10 = v53;
    if ( (a3 & 1) != 0 )
    {
      v10 = v53 | 1;
      v53 |= 1u;
    }
    if ( !a2 )
      a2 = v55;
    v68 = a2;
    if ( (v10 & 1) != 0 || PnpBootMode )
      goto LABEL_8;
    memset_0(&v57, 0, 0x50uLL);
    v58 = 8210;
    v63 = 8210;
    v26 = *(_QWORD *)(a1 + 48);
    v57 = DEVPKEY_Device_PendingConfigurationIds;
    v60 = 6;
    v59 = P;
    v62 = DEVPKEY_Device_RequestConfigurationIds;
    v64 = v51;
    v65 = 6;
    inited = PiDevCfgQueryObjectProperties(6, v26, 1, (_DWORD)a2, (__int64)&v57, 2);
    if ( inited >= 0 )
    {
      if ( v61 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)P, 0LL);
      if ( v66 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)v51, 0LL);
      if ( P[1] && !*(_WORD *)P[1] )
      {
        v7 = 1;
        v8 = -1073740656;
        goto LABEL_15;
      }
LABEL_8:
      inited = PiDevCfgFindDeviceDriver((__int64)&v53, (wchar_t *)P[1], &v44);
      if ( inited >= 0 )
      {
        if ( v51[1] )
        {
          inited = PiDevCfgRequestDriverConfigurations((__int64)&v53, v44);
        }
        else
        {
          v11 = PiDevCfgConfigureDevice(a1, &v53, v44, &v39, &v43);
          inited = v11;
          if ( v11 >= 0 )
            v6 = v39;
          v12 = v11 >= 0;
          v67 = v12;
          if ( inited != -1073740653 )
          {
            v67 = v12;
            if ( inited != -1073740651 )
            {
              v70 = 1;
              v67 = v12;
            }
          }
        }
      }
LABEL_15:
      if ( P[1] && (v44 || v7) )
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)&v53, *(_QWORD *)(a1 + 48), 1, (__int64)a2);
      if ( v51[1] )
        goto LABEL_35;
      if ( !P[1] )
      {
        if ( v7 )
          goto LABEL_117;
        if ( v44 )
        {
          if ( *(int *)(v44 + 444) >= 0 )
            goto LABEL_21;
          v8 = *(_DWORD *)(v44 + 444);
LABEL_117:
          v32 = PiDevCfgConfigureDevice(a1, &v53, 0LL, &v39, &v43);
          inited = v32;
          if ( v32 < 0 )
          {
            v13 = v67;
            if ( v32 == -1073740653 || v32 == -1073740651 )
              goto LABEL_22;
          }
          else
          {
            v6 = v39;
            v67 = 1;
            switch ( v8 )
            {
              case -1073740656:
                v41 = -536870360;
                break;
              case -1073740655:
                v41 = -536870320;
                break;
              case -1073740654:
                v41 = -536870319;
                break;
              case -1073740653:
                v41 = -536870318;
                break;
              case -1073740652:
                v41 = -536870375;
                break;
            }
          }
          v70 = 1;
LABEL_21:
          v13 = v67;
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
          v40 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v16,
                      (__int64)a2,
                      0xBu,
                      (__int64)&v42,
                      (__int64)&v39,
                      (__int64)&v40,
                      0) < 0
            || v42 != 4
            || v40 != 4 )
          {
            v39 = 0;
          }
          v18 = *(_DWORD *)(a1 + 396) & 0x2000;
          if ( inited >= 0 )
          {
            v39 &= 0xFFF7FB9F;
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
                if ( (v23 & 0x2000) != 0 && *(_DWORD *)(a1 + 404) == 14 && (v43 & 0x70) == 0 )
                {
                  PipClearDevNodeProblem(a1);
                  PipClearDevNodeUserFlags(a1, 4);
                }
              }
              else if ( (v43 & 0x70) == 0 || PnpBootMode )
              {
                if ( (v6 & 0x40) != 0 )
                  PipSetDevNodeProblem(a1, 28, v8);
              }
              else
              {
                v24 = 0LL;
                if ( (v43 & 0x10) != 0 )
                {
                  v24 = 128LL;
                  v25 = 128LL;
                  v47 = 128LL;
                }
                else
                {
                  v25 = v47;
                }
                if ( (v43 & 0x20) != 0 )
                {
                  v25 = v24 | 0x10;
                  v47 = v24 | 0x10;
                  v24 |= 0x10uLL;
                }
                if ( (v43 & 0x40) != 0 )
                {
                  v25 = v24 | 0x200;
                  v47 = v24 | 0x200;
                }
                PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), v17, v25);
                PipSetDevNodeProblem(a1, 14, -1073741102);
                PipSetDevNodeUserFlags(a1, 4LL);
              }
            }
            if ( v41 && (v6 & 0x40) != 0 || (v53 & 1) == 0 )
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)&v53, *(_QWORD *)(a1 + 48), 1, (__int64)a2);
          }
          else if ( v18 )
          {
            v29 = *(_DWORD *)(a1 + 404);
            if ( v29 == 1 || v29 == 18 )
              PipSetDevNodeProblem(a1, v29, inited);
          }
          if ( v13 || v6 )
          {
            v39 |= v6;
            v33 = *(_QWORD *)&PiPnpRtlCtx;
            v34 = (__int64)v55;
            v35 = SourceString;
            v36 = 0;
            v37 = (v53 & 1) << 17;
            DestinationString = 0LL;
            v45 = 0;
            v48 = 0;
            v46 = 0;
            if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
            {
              v45 = 4;
              if ( (int)CmGetDeviceRegProp(v33, (__int64)v35, v34, 0xBu, (__int64)&v48, (__int64)&v46, (__int64)&v45, 0) < 0
                || v45 != 4
                || v48 != 4 )
              {
                v46 = 0;
              }
              v36 = v39;
            }
            v38 = CmSetDeviceRegProp(v33, (__int64)v35, v34, 0xBu, 4, (__int64)&v39, 4, v37);
            if ( SeAuditingWithTokenForSubcategory(138, 0LL) )
            {
              RtlInitUnicodeString(&DestinationString, v35);
              PiAuditDeviceEnableDisableRequest((__int64)&DestinationString, v46, v36, v38 >= 0);
            }
            v5 = v52;
            a2 = v68;
            if ( v67 )
            {
              v27 = *(const WCHAR **)(v52 + 8);
              v50 = MEMORY[0xFFFFF78000000014];
              PiPnpRtlSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                v27,
                1,
                (__int64)v68,
                0LL,
                (__int64)&DEVPKEY_Device_InstallDate,
                16,
                (STRSAFE_PCNZWCH)&v50,
                8u,
                (v53 & 1) << 17);
              if ( (unsigned int)PnpGetObjectProperty(
                                   *(_QWORD **)&PiPnpRtlCtx,
                                   *(WCHAR **)(v5 + 8),
                                   1u,
                                   v68,
                                   0LL,
                                   (__int64)&DEVPKEY_Device_FirstInstallDate,
                                   &v42,
                                   0LL,
                                   0,
                                   (__int64)&v40,
                                   0) != -1073741789
                || v40 != 8 )
              {
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, (unsigned int)&v53, *(_QWORD *)(v5 + 8), 1, (__int64)v68);
              }
            }
          }
LABEL_35:
          if ( v70 )
          {
            v20 = *(WCHAR **)(v5 + 8);
            v40 = 8;
            if ( (int)PnpGetObjectProperty(
                        *(_QWORD **)&PiPnpRtlCtx,
                        v20,
                        1u,
                        a2,
                        0LL,
                        (__int64)DEVPKEY_Device_RebootRequiredReason,
                        &v42,
                        (const wchar_t *)&v47,
                        8u,
                        (__int64)&v40,
                        0) >= 0
              && v42 == 9
              && v40 == 8 )
            {
              v21 = v47;
            }
            else
            {
              v21 = 0LL;
              v47 = 0LL;
            }
            PiDevCfgLogDeviceConfigured(a1, (unsigned int)&v53, v44, v43, inited, v21, (__int64)&v50);
          }
          goto LABEL_36;
        }
        if ( inited != -1073740656 || (PiDevCfgMode & 2) == 0 )
          goto LABEL_21;
        if ( !PnpBootMode || (*(_DWORD *)(a1 + 560) & 0x100) != 0 )
        {
          if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
          {
            v30 = *(_QWORD *)(a1 + 48);
            v40 = 4;
            if ( (int)CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v30,
                        (__int64)a2,
                        0xBu,
                        (__int64)&v42,
                        (__int64)&v39,
                        (__int64)&v40,
                        0) >= 0
              && v42 == 4
              && v40 == 4 )
            {
              v31 = v39;
            }
            else
            {
              v31 = 0;
              v39 = 0;
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
        if ( CmIsRootEnumeratedDevice(*(PCWSTR *)(a1 + 48)) )
        {
          if ( (int)PiDevCfgMigrateRootDevice(a1, (__int64)&v53, (__int64)&v39) >= 0 )
          {
            v6 |= v39;
            if ( (v39 & 1) != 0 )
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
      goto LABEL_117;
    }
  }
LABEL_36:
  if ( v44 )
    PiDevCfgFreeDriverNode(v44);
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v51[1] )
  {
    ExFreePool(v51[1]);
    *(_OWORD *)v51 = 0LL;
  }
LABEL_42:
  PiDevCfgFreeDeviceContext(&v53);
  if ( v5 )
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DeviceConfig_Stop, (unsigned __int16 *)v5, inited);
  return (unsigned int)inited;
}
