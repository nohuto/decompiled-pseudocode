/*
 * XREFs of HUBCONNECTOR_RegisterPort @ 0x1400865D4
 * Callers:
 *     HUBCONNECTOR_MapExternalHubPorts @ 0x140085F78 (HUBCONNECTOR_MapExternalHubPorts.c)
 *     HUBCONNECTOR_MapHubPorts @ 0x14008605C (HUBCONNECTOR_MapHubPorts.c)
 *     HUBCONNECTOR_MapIntegratedHubPorts @ 0x14008619C (HUBCONNECTOR_MapIntegratedHubPorts.c)
 *     HUBCONNECTOR_MapRootHubPorts @ 0x140086298 (HUBCONNECTOR_MapRootHubPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBCONNECTOR_RegisterPort(__int64 a1)
{
  __int64 v2; // r15
  unsigned int v3; // esi
  __int64 v4; // rax
  _QWORD *v5; // r14
  _QWORD *i; // rax
  _QWORD *v7; // rdi
  __int64 Pool2; // rax
  int v9; // edx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  int v12; // eax
  int v13; // edx
  unsigned __int16 v14; // r9
  unsigned int v15; // r8d
  __int64 v16; // rcx
  int v17; // eax
  int v18; // r9d
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // cx
  __int64 v21; // rax
  __int64 v23; // [rsp+28h] [rbp-20h]

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(v4 + 56),
    0LL);
  v5 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                    WdfDriverGlobals,
                    WdfDriverGlobals->Driver,
                    off_14006C1E8)
                + 40);
  for ( i = (_QWORD *)*v5; ; i = (_QWORD *)v7[10] )
  {
    v7 = i - 10;
    if ( v5 == i )
      goto LABEL_7;
    if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
      break;
  }
  if ( v7 )
  {
LABEL_14:
    v12 = *(_DWORD *)(a1 + 208);
    v13 = 512;
    if ( v12 == 512 )
    {
      if ( v7[7] )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_49;
        v18 = 11;
        goto LABEL_24;
      }
      if ( (*(_DWORD *)(a1 + 204) & 0x200) != 0 )
      {
        v16 = v7[8];
        if ( v16 && (*(_DWORD *)(v16 + 204) & 0x200) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v19 = 12;
          goto LABEL_48;
        }
        *(_WORD *)(a1 + 236) = *(_WORD *)(a1 + 200);
      }
      v7[7] = a1;
    }
    else
    {
      if ( v12 != 768 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_55;
        v14 = 17;
        LODWORD(v23) = *(_DWORD *)(a1 + 208);
        v15 = 6;
        goto LABEL_18;
      }
      v16 = v7[8];
      v17 = *(_DWORD *)(a1 + 204) & 0x200;
      if ( v16 )
      {
        if ( !v17 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v18 = 15;
          goto LABEL_24;
        }
        if ( v7[9] )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
LABEL_49:
            v3 = -1073741823;
            goto LABEL_50;
          }
          v18 = 13;
LABEL_24:
          LOBYTE(v13) = 2;
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 1432),
            v13,
            6,
            v18,
            (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
          goto LABEL_49;
        }
        if ( (*(_DWORD *)(v16 + 204) & 0x200) == 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_49;
          v19 = 14;
LABEL_48:
          WPP_RECORDER_SF_d(
            *(_QWORD *)(a1 + 1432),
            2u,
            6u,
            v19,
            (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
            *(unsigned __int8 *)(v16 + 1341));
          goto LABEL_49;
        }
        v20 = *(_WORD *)(v16 + 200);
        if ( v20 >= *(_WORD *)(a1 + 200) )
          v20 = *(_WORD *)(a1 + 200);
        *(_WORD *)(a1 + 236) = v20;
        *(_WORD *)(v7[8] + 236LL) = v20;
        v7[9] = a1;
      }
      else
      {
        if ( v17 )
        {
          v16 = v7[7];
          if ( v16 && (*(_DWORD *)(v16 + 204) & 0x200) == 0 )
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_49;
            v19 = 16;
            goto LABEL_48;
          }
          *(_WORD *)(a1 + 236) = *(_WORD *)(a1 + 200);
        }
        v7[8] = a1;
      }
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 204), 0x20u);
    goto LABEL_55;
  }
LABEL_7:
  Pool2 = ExAllocatePool2(64LL, 96LL, 1882409045LL);
  v7 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_OWORD *)Pool2 = *(_OWORD *)(a1 + 1368);
    *(_OWORD *)(Pool2 + 16) = *(_OWORD *)(a1 + 1384);
    *(_OWORD *)(Pool2 + 32) = *(_OWORD *)(a1 + 1400);
    *(_QWORD *)(Pool2 + 48) = *(_QWORD *)(a1 + 1416);
    v10 = (_QWORD *)(Pool2 + 80);
    v11 = *(_QWORD **)(v2 + 48);
    if ( *v11 != v2 + 40 )
      __fastfail(3u);
    *v10 = v2 + 40;
    v10[1] = v11;
    *v11 = v10;
    *(_QWORD *)(v2 + 48) = v10;
    goto LABEL_14;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 1432), v9, 4, 10, (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids);
  }
  v3 = -1073741670;
LABEL_50:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = 18;
    LODWORD(v23) = v3;
    v15 = 4;
LABEL_18:
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 1432),
      2u,
      v15,
      v14,
      (__int64)&WPP_e747a75ab0a43332580ac19f3a627527_Traceguids,
      v23);
  }
LABEL_55:
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          WdfDriverGlobals->Driver,
          off_14006C1E8);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(v21 + 56));
  return v3;
}
