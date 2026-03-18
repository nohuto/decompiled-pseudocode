/*
 * XREFs of RootHub_PrepareHardware @ 0x14007E08C
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079ED0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     RootHub_DumpPortData @ 0x140009750 (RootHub_DumpPortData.c)
 *     XilRegister_ReadUlong @ 0x1400099C0 (XilRegister_ReadUlong.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     Controller_IsSecureDevice @ 0x140034338 (Controller_IsSecureDevice.c)
 *     XilRegister_ReadBufferUlong @ 0x1400354B0 (XilRegister_ReadBufferUlong.c)
 *     Register_FindFirstExtendedCapability @ 0x140036228 (Register_FindFirstExtendedCapability.c)
 *     Register_FindNextExtendedCapability @ 0x140036294 (Register_FindNextExtendedCapability.c)
 *     XilRegister_GetOperationalRegisters @ 0x14003CD04 (XilRegister_GetOperationalRegisters.c)
 *     Feature_UXTM__private_IsEnabledDeviceUsageNoInline @ 0x140044560 (Feature_UXTM__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_SF_dddd @ 0x140044E38 (WPP_RECORDER_SF_dddd.c)
 *     RootHub_InitializeReadModifyWriteLock @ 0x140049F0C (RootHub_InitializeReadModifyWriteLock.c)
 *     WPP_RECORDER_SF_cccc @ 0x14004B62C (WPP_RECORDER_SF_cccc.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     RootHub_PopulatePortFlagsFromRegistry @ 0x1400824C8 (RootHub_PopulatePortFlagsFromRegistry.c)
 */

__int64 __fastcall RootHub_PrepareHardware(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rcx
  unsigned int *FirstExtendedCapability; // rax
  __int64 Pool2; // rax
  unsigned int v8; // edi
  unsigned int i; // edx
  __int64 v10; // rcx
  unsigned int *NextExtendedCapability; // rax
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  int v17; // edi
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdi
  int Ulong; // eax
  char v22; // cl
  unsigned int v23; // eax
  unsigned int v24; // r15d
  int v25; // eax
  int v26; // r9d
  __int64 v27; // rcx
  char IsSecureDevice; // al
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // r9
  int v32; // eax
  int v33; // edx
  unsigned int *v34; // rdi
  __int64 v35; // rcx
  char v36; // al
  int v37; // r8d
  int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // r9d
  unsigned int j; // esi
  __int64 v45; // r14
  int v47; // [rsp+28h] [rbp-99h]
  char v48; // [rsp+58h] [rbp-69h]
  unsigned int v49; // [rsp+5Ch] [rbp-65h] BYREF
  __int128 v50; // [rsp+60h] [rbp-61h] BYREF
  __int128 v51; // [rsp+70h] [rbp-51h]
  __int64 v52; // [rsp+80h] [rbp-41h]
  __int128 v53; // [rsp+88h] [rbp-39h] BYREF
  __int128 v54; // [rsp+98h] [rbp-29h]
  __int128 v55; // [rsp+A8h] [rbp-19h]
  void *v56; // [rsp+B8h] [rbp-9h]
  unsigned int v57; // [rsp+C0h] [rbp-1h]
  unsigned int v58; // [rsp+C4h] [rbp+3h]
  unsigned int *v59; // [rsp+C8h] [rbp+7h]
  int v60; // [rsp+D0h] [rbp+Fh]
  unsigned int v61; // [rsp+D4h] [rbp+13h]
  __int128 v62; // [rsp+D8h] [rbp+17h] BYREF

  LODWORD(v56) = 0;
  LODWORD(v52) = 0;
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  v53 = 0LL;
  v48 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v4 = *(_QWORD *)(v3 + 88);
  v62 = 0LL;
  *(_DWORD *)(a1 + 16) = *(unsigned __int8 *)(v4 + 87);
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = (unsigned __int8)*(_WORD *)(v4 + 100);
  *(_WORD *)(a1 + 26) = *(_WORD *)(v4 + 102);
  *(_QWORD *)(a1 + 32) = XilRegister_GetOperationalRegisters(v4);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(v4 + 32) + 1024LL;
  if ( Register_FindFirstExtendedCapability(v5, 0xAu) )
    *(_BYTE *)(a1 + 56) = 1;
  if ( (unsigned int)Feature_UXTM__private_IsEnabledDeviceUsageNoInline() )
  {
    v49 = 0;
    FirstExtendedCapability = Register_FindFirstExtendedCapability(v4, 0x12u);
    if ( FirstExtendedCapability )
    {
      XilRegister_ReadBufferUlong(v4, (__int64)FirstExtendedCapability, &v49, 1u);
      if ( (v49 & 0x10000) != 0 )
        *(_BYTE *)(a1 + 58) = 1;
    }
  }
  Pool2 = ExAllocatePool2(64LL, 120LL * *(unsigned int *)(a1 + 16), 1229146200LL);
  *(_QWORD *)(a1 + 48) = Pool2;
  if ( Pool2 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); *(_DWORD *)(v10 + 8) = i )
    {
      v10 = *(_QWORD *)(a1 + 48) + 120LL * i++;
      *(_QWORD *)v10 = a1;
    }
    NextExtendedCapability = Register_FindFirstExtendedCapability(v4, 2u);
    v59 = NextExtendedCapability;
    if ( NextExtendedCapability )
    {
      while ( 1 )
      {
        XilRegister_ReadBufferUlong(v4, (__int64)NextExtendedCapability, &v62, 4u);
        if ( DWORD1(v62) == 541217621 )
        {
          v15 = v62;
          v58 = v62;
          if ( BYTE3(v62) - 2 <= 1u )
          {
            v16 = DWORD2(v62);
            v12 = BYTE9(v62);
            v17 = BYTE8(v62);
            v57 = BYTE9(v62);
            v60 = BYTE8(v62);
            if ( BYTE3(v62) == 3 )
              *(_DWORD *)(v4 + 140) = BYTE8(v62);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_dddd(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                4u,
                0xBu,
                0x15u,
                (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
              v15 = v58;
              v12 = v57;
              v16 = DWORD2(v62);
            }
            if ( v17 && v12 && v12 + v17 - 1 <= *(_DWORD *)(a1 + 16) )
            {
              v18 = 0;
              v48 = 1;
              v49 = 0;
              v12 = HIBYTE(v15);
              v61 = HIBYTE(v15);
              while ( 1 )
              {
                v19 = v18 + v17 - 1;
                v20 = *(_QWORD *)(a1 + 48) + 120 * v19;
                if ( *(_BYTE *)(v20 + 13) )
                  break;
                if ( v12 == 2 )
                  ++*(_WORD *)(a1 + 20);
                else
                  ++*(_WORD *)(a1 + 22);
                *(_BYTE *)(v20 + 12) = BYTE2(v15);
                *(_BYTE *)(v20 + 15) = (v16 & 0x20000) != 0;
                *(_BYTE *)(v20 + 13) = v12;
                *(_BYTE *)(v20 + 16) = (v16 & 0x40000) != 0;
                Ulong = XilRegister_ReadUlong(v4, (unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v19));
                v16 = DWORD2(v62);
                v22 = 0;
                *(_BYTE *)(v20 + 19) = 0;
                if ( (v16 & 0x80000) != 0 )
                {
                  *(_BYTE *)(v20 + 19) = 1;
                  v22 = 1;
                }
                if ( (v16 & 0x100000) != 0 )
                  *(_BYTE *)(v20 + 19) = v22 | 2;
                if ( (Ulong & 0x40000000) == 0 )
                  *(_BYTE *)(v20 + 17) = 1;
                BYTE2(v15) = BYTE2(v58);
                v12 = v61;
                *(_BYTE *)(v20 + 14) = (v16 >> 25) & 7;
                *(_WORD *)(v20 + 54) = v16 >> 28;
                *(_QWORD *)(v20 + 56) = v59 + 4;
                v17 = v60;
                v18 = v49 + 1;
                v49 = v18;
                if ( v18 >= v57 )
                {
                  v2 = 0;
                  goto LABEL_39;
                }
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v26 = 23;
                goto LABEL_105;
              }
              goto LABEL_106;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_106;
            v26 = 22;
LABEL_105:
            LOBYTE(v12) = 2;
            WPP_RECORDER_SF_(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              v12,
              11,
              v26,
              (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
            goto LABEL_106;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              2u,
              0xBu,
              0x18u,
              (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_cccc(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), DWORD1(v62), v13, v14, v47);
        }
LABEL_39:
        NextExtendedCapability = Register_FindNextExtendedCapability(v4, v59);
        v59 = NextExtendedCapability;
        if ( !NextExtendedCapability )
        {
          if ( !v48 )
            break;
          v23 = *(_DWORD *)(a1 + 16);
          if ( v23 )
          {
            do
            {
              RootHub_DumpPortData(*(_QWORD *)(a1 + 40) + 16LL * v2, *(_QWORD *)(a1 + 8));
              v23 = *(_DWORD *)(a1 + 16);
              ++v2;
            }
            while ( v2 < v23 );
          }
          v8 = 0;
          v24 = 0;
          if ( !v23 )
          {
LABEL_93:
            RootHub_PopulatePortFlagsFromRegistry(a1);
            return v8;
          }
          while ( 1 )
          {
            v25 = RootHub_InitializeReadModifyWriteLock((_QWORD *)a1, v24);
            v8 = v25;
            if ( v25 < 0 )
              break;
            v52 = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            if ( WdfClientVersionHigherThanFramework )
            {
              if ( (unsigned int)WdfStructureCount <= 0x37 )
                LODWORD(v50) = -1;
              else
                LODWORD(v50) = *(_DWORD *)(WdfStructures + 440);
            }
            else
            {
              LODWORD(v50) = 40;
            }
            LODWORD(v51) = 0;
            DWORD2(v51) = 0;
            *((_QWORD *)&v50 + 1) = RootHub_WdfEvtTimerPortOperationPendingTimerDpc;
            BYTE4(v51) = 1;
            LOBYTE(v52) = 1;
            v56 = 0LL;
            v53 = 0LL;
            v54 = 0LL;
            v55 = 0LL;
            if ( WdfClientVersionHigherThanFramework )
            {
              if ( (unsigned int)WdfStructureCount <= 0x26 )
                LODWORD(v53) = -1;
              else
                LODWORD(v53) = *(_DWORD *)(WdfStructures + 304);
            }
            else
            {
              LODWORD(v53) = 56;
            }
            v27 = *(_QWORD *)(a1 + 8);
            v56 = off_14006B268;
            *(_QWORD *)&v55 = *(_QWORD *)a1;
            *((_QWORD *)&v54 + 1) = 0x100000001LL;
            IsSecureDevice = Controller_IsSecureDevice(v27);
            v30 = v29;
            if ( IsSecureDevice )
              v30 = 2;
            v31 = *(_QWORD *)(a1 + 48) + 72LL;
            DWORD2(v54) = v30;
            v59 = (unsigned int *)(120LL * v24);
            v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, char *))(WdfFunctions_01033
                                                                                                 + 2544))(
                    WdfDriverGlobals,
                    &v50,
                    &v53,
                    (char *)v59 + v31);
            v8 = v32;
            if ( v32 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_107;
              v43 = 28;
              goto LABEL_100;
            }
            v34 = v59;
            *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                         WdfDriverGlobals,
                         *(_QWORD *)((char *)v59 + *(_QWORD *)(a1 + 48) + 72),
                         off_14006B268) = (char *)v34 + *(_QWORD *)(a1 + 48);
            v52 = 0LL;
            v50 = 0LL;
            v51 = 0LL;
            if ( WdfClientVersionHigherThanFramework )
            {
              if ( (unsigned int)WdfStructureCount <= 0x37 )
                LODWORD(v50) = -1;
              else
                LODWORD(v50) = *(_DWORD *)(WdfStructures + 440);
            }
            else
            {
              LODWORD(v50) = 40;
            }
            LODWORD(v51) = 0;
            DWORD2(v51) = 0;
            *((_QWORD *)&v50 + 1) = RootHub_WdfEvtTimerPortOperationRecoveryTimerDpc;
            BYTE4(v51) = 1;
            LOBYTE(v52) = 1;
            v56 = 0LL;
            v53 = 0LL;
            v54 = 0LL;
            v55 = 0LL;
            if ( WdfClientVersionHigherThanFramework )
            {
              if ( (unsigned int)WdfStructureCount <= 0x26 )
                LODWORD(v53) = -1;
              else
                LODWORD(v53) = *(_DWORD *)(WdfStructures + 304);
            }
            else
            {
              LODWORD(v53) = 56;
            }
            v35 = *(_QWORD *)(a1 + 8);
            v56 = off_14006B268;
            *(_QWORD *)&v55 = *(_QWORD *)a1;
            *((_QWORD *)&v54 + 1) = 0x100000001LL;
            v36 = Controller_IsSecureDevice(v35);
            v38 = v37;
            if ( v36 )
              v38 = 2;
            v39 = *(_QWORD *)(a1 + 48) + 80LL;
            DWORD2(v54) = v38;
            v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033
                                                                                                  + 2544))(
                    WdfDriverGlobals,
                    &v50,
                    &v53,
                    120LL * v24 + v39);
            v8 = v32;
            if ( v32 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_107;
              v43 = 29;
              goto LABEL_100;
            }
            *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                         WdfDriverGlobals,
                         *(_QWORD *)(120LL * v24 + *(_QWORD *)(a1 + 48) + 80),
                         off_14006B268) = *(_QWORD *)(a1 + 48) + 120LL * v24;
            if ( *(_BYTE *)(120LL * v24 + *(_QWORD *)(a1 + 48) + 13) == 2 )
            {
              v52 = 0LL;
              v50 = 0LL;
              v51 = 0LL;
              if ( WdfClientVersionHigherThanFramework )
              {
                if ( (unsigned int)WdfStructureCount <= 0x37 )
                  LODWORD(v50) = -1;
                else
                  LODWORD(v50) = *(_DWORD *)(WdfStructures + 440);
              }
              else
              {
                LODWORD(v50) = 40;
              }
              LODWORD(v51) = 0;
              DWORD2(v51) = 0;
              *((_QWORD *)&v50 + 1) = RootHub_WdfEvtTimer20PortResumeCompleteDpc;
              BYTE4(v51) = 1;
              LOBYTE(v52) = 1;
              v56 = 0LL;
              v53 = 0LL;
              v54 = 0LL;
              v55 = 0LL;
              if ( WdfClientVersionHigherThanFramework )
              {
                if ( (unsigned int)WdfStructureCount <= 0x26 )
                  LODWORD(v53) = -1;
                else
                  LODWORD(v53) = *(_DWORD *)(WdfStructures + 304);
              }
              else
              {
                LODWORD(v53) = 56;
              }
              v40 = *(_QWORD *)(a1 + 8);
              v56 = off_14006B268;
              *(_QWORD *)&v55 = *(_QWORD *)a1;
              *((_QWORD *)&v54 + 1) = 0x100000001LL;
              if ( Controller_IsSecureDevice(v40) )
              {
                DWORD2(v54) = 2;
                v41 = v42;
              }
              v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
                      WdfDriverGlobals,
                      &v50,
                      &v53,
                      120LL * v24 + v41 + 40);
              v8 = v32;
              if ( v32 < 0 )
              {
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  goto LABEL_107;
                v43 = 30;
LABEL_100:
                LOBYTE(v33) = 2;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                  v33,
                  11,
                  v43,
                  (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
                  v32);
                goto LABEL_107;
              }
              *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                           WdfDriverGlobals,
                           *(_QWORD *)(120LL * v24 + *(_QWORD *)(a1 + 48) + 40),
                           off_14006B268) = *(_QWORD *)(a1 + 48) + 120LL * v24;
            }
            if ( ++v24 >= *(_DWORD *)(a1 + 16) )
              goto LABEL_93;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dD(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
              2u,
              0xBu,
              0x1Bu,
              (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids,
              v25,
              v24);
          goto LABEL_107;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v26 = 26;
      goto LABEL_105;
    }
LABEL_106:
    v8 = -1073741811;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2,
        11,
        20,
        (__int64)&WPP_e351447cda05377d20ca116ee7000203_Traceguids);
    v8 = -1073741670;
  }
LABEL_107:
  if ( *(_QWORD *)(a1 + 48) )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 16); ++j )
    {
      v45 = 120LL * j;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 48) + v45 + 72) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(v45 + *(_QWORD *)(a1 + 48) + 72) = 0LL;
      }
      if ( *(_QWORD *)(v45 + *(_QWORD *)(a1 + 48) + 80) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01033 + 1664))(WdfDriverGlobals);
        *(_QWORD *)(v45 + *(_QWORD *)(a1 + 48) + 80) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0x49434858u);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return v8;
}
