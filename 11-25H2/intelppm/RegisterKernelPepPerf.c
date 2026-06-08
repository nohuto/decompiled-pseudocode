/*
 * XREFs of RegisterKernelPepPerf @ 0x1400384A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x140004B78 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     ResetEnumerationContext @ 0x1400053BC (ResetEnumerationContext.c)
 *     PepNotifyPerfConstraints @ 0x14000EE08 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     PepTranslateLimitReason @ 0x1400298B4 (PepTranslateLimitReason.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x1400299E0 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetPerfDomain @ 0x140045878 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x140046EC0 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall RegisterKernelPepPerf(__int64 a1)
{
  void (__fastcall *v2)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // rbx
  char *Pool2; // r15
  int v7; // edi
  BOOL v8; // r13d
  int PerfDomain; // eax
  _BYTE *v10; // r14
  char *v11; // r12
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned __int16 v15; // r9
  int v16; // edi
  __int64 inited; // rax
  int v18; // ecx
  bool v19; // al
  bool v20; // al
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  __int64 v24; // r12
  _QWORD *v25; // r14
  char *v26; // rdi
  int v27; // r11d
  int v28; // esi
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdx
  void *v34; // rax
  int v35; // eax
  bool v36; // zf
  __int64 v37; // rcx
  void *v38; // rax
  __int64 v39; // r11
  int v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+38h] [rbp-40h] BYREF
  __int64 v43; // [rsp+40h] [rbp-38h]
  _OWORD v44[3]; // [rsp+48h] [rbp-30h] BYREF
  int v46; // [rsp+C8h] [rbp+50h] BYREF
  int v47; // [rsp+D0h] [rbp+58h]
  int v48; // [rsp+D8h] [rbp+60h]

  v42 = 0LL;
  v2 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v46 = 0;
  memset(v44, 0, 32);
  v2(WdfDriverGlobals, qword_140019188, 0LL);
  v4 = *(_QWORD *)(a1 + 1184);
  v5 = 0LL;
  Pool2 = 0LL;
  v43 = v4;
  v41 = *(_DWORD *)(v4 + 20);
  if ( v41 )
  {
    v47 = *(_DWORD *)(v4 + 52);
    v8 = v47 != -1;
    PerfDomain = GetPerfDomain(a1, v44, &v46);
    v10 = *(_BYTE **)(a1 + 560);
    v48 = PerfDomain;
    if ( !v10 || !v10[48] )
      v10 = 0LL;
    Pool2 = (char *)ExAllocatePool2(64LL, (unsigned int)(72 * PerfDomain), 1919119952LL);
    if ( !Pool2 )
      goto LABEL_9;
    ResetEnumerationContext((__int64 *)v44);
    v11 = Pool2 + 40;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) )
    {
      v12 = v42;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(v42 + 1120);
      *(_QWORD *)v11 = *(_QWORD *)(v12 + 1184);
      v7 = PepNotifyPerfConstraints(v12, (_DWORD *)v11 + 6, (_DWORD *)v11 + 4);
      if ( v7 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_68;
        v15 = 47;
        goto LABEL_19;
      }
      v13 = *((_DWORD *)v11 + 6);
      v14 = *(_DWORD *)(v4 + 8);
      if ( v13 > v14 || v13 < *(_DWORD *)(v4 + 16) )
      {
        v7 = -1073741811;
        goto LABEL_68;
      }
      *((_DWORD *)v11 + 7) = 100 * v13 / v14;
      v11 += 72;
    }
    v16 = v48;
    inited = AllocateAndInitKernelPerfStatesRegistration(a1, v48, v8 + 1);
    v5 = inited;
    if ( inited )
    {
      v18 = v46;
      *(_WORD *)(inited + 4) = v46;
      if ( *(_BYTE *)(v4 + 37) )
      {
        *(_QWORD *)(inited + 464) = PepPerfStateControlHandler;
        *(_QWORD *)(inited + 448) = PepPerfStateSelectionHandler;
        if ( (*(_DWORD *)(a1 + 280) & 0x400000) != 0 && (v18 == 254 || v16 == 1) && v10 && v10[58] )
        {
          *(_BYTE *)(inited + 11) = 1;
          v19 = !_bittest64((const signed __int64 *)(a1 + 280), 0x22u) || !v10[57];
          *(_BYTE *)(v5 + 12) = v19;
          *(_DWORD *)(v5 + 48) = 1000;
        }
      }
      else
      {
        *(_QWORD *)(inited + 464) = PepPerfControlHandler;
        *(_QWORD *)(inited + 448) = PepPerfSelectionHandler;
        *(_QWORD *)(inited + 384) = PepSetTimeWindow;
      }
      *(_BYTE *)(v5 + 6) = 0;
      v20 = v10 && v10[59];
      *(_BYTE *)(v5 + 7) = v20;
      *(_DWORD *)(v5 + 20) = v41;
      *(_DWORD *)(v5 + 24) = *(_DWORD *)(v4 + 24);
      v21 = *(_DWORD *)(v4 + 28);
      *(_DWORD *)(v5 + 28) = v21;
      v22 = *(_DWORD *)(v4 + 32);
      *(_DWORD *)(v5 + 32) = v22;
      if ( !v21 )
        *(_DWORD *)(v5 + 28) = 1;
      if ( !v22 )
        *(_DWORD *)(v5 + 32) = 1;
      *(_QWORD *)(v5 + 56) = *(unsigned int *)(v4 + 16);
      *(_QWORD *)(v5 + 64) = *(unsigned int *)(v4 + 8);
      if ( *(_BYTE *)(v4 + 37) )
        v23 = *(_DWORD *)(*(_QWORD *)(v4 + 40) + 4LL);
      else
        v23 = (unsigned int)(*(_DWORD *)(v4 + 4) * v41 + (*(_DWORD *)(v4 + 8) >> 1)) / *(_DWORD *)(v4 + 8);
      *(_DWORD *)(v5 + 44) = v23;
      if ( *(_BYTE *)(v4 + 36) )
        *(_BYTE *)(v5 + 9) = 1;
      *(_BYTE *)(v5 + 52) = *(_BYTE *)v4;
      if ( *(_BYTE *)v4 == 1 )
        *(_QWORD *)(v5 + 416) = AcpiCStateIdleComplete;
      v24 = *(_QWORD *)(v5 + 568);
      v25 = *(_QWORD **)(v5 + 576);
      v26 = Pool2;
      ResetEnumerationContext((__int64 *)v44);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) )
      {
        v28 = v47;
        do
        {
          v29 = PepTranslateLimitReason(*((_DWORD *)v26 + 14));
          InitCommonPerfStateContext(v42, (_DWORD)v26, v24, *((_DWORD *)v26 + 17), v29);
          *(_QWORD *)(a1 + 216) = v26;
          *v25++ = v26;
          if ( v28 != -1 )
            *v25++ = v26;
          LODWORD(v24) = v24 + 32;
          v26 += 72;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) );
        v4 = v43;
        v27 = 1;
      }
      v30 = *(unsigned int *)(v4 + 48);
      v31 = 100LL;
      v32 = *(_QWORD *)(v5 + 560);
      *(_DWORD *)(v32 + 12) = 0;
      *(_BYTE *)(v32 + 16) = v27 & *(_BYTE *)(v4 + 8 * v30 + 56);
      v33 = *(_DWORD *)(v4 + 8 * v30 + 56) & 6;
      *(_BYTE *)(v32 + 17) = (_DWORD)v33 == 2;
      *(_BYTE *)(v32 + 18) = v27 & (*(_DWORD *)(v4 + 8 * v30 + 56) >> 7);
      v34 = PepInstantaneousFrequencyRead;
      if ( (_DWORD)v33 == 2 )
        v34 = PepDifferentialFrequencyRead;
      *(_QWORD *)v32 = v34;
      v35 = 100;
      if ( (_DWORD)v33 == 2 )
        v35 = 0x10000;
      v36 = v47 == -1;
      *(_DWORD *)(v32 + 8) = v35;
      *(_DWORD *)(v5 + 36) = v27;
      if ( !v36 )
      {
        v37 = *(unsigned int *)(v4 + 52);
        v32 = *(_QWORD *)(v5 + 560);
        *(_DWORD *)(v32 + 36) = v27;
        *(_BYTE *)(v32 + 40) = v27 & *(_BYTE *)(v4 + 8 * v37 + 56);
        v33 = *(_DWORD *)(v4 + 8 * v37 + 56) & 6;
        *(_BYTE *)(v32 + 41) = (_DWORD)v33 == 2;
        *(_BYTE *)(v32 + 42) = v27 & (*(_DWORD *)(v4 + 8 * v37 + 56) >> 7);
        v38 = PepInstantaneousPerfRead;
        if ( (_DWORD)v33 == 2 )
        {
          v38 = PepDifferentialPerfRead;
          v31 = 0x10000LL;
        }
        *(_QWORD *)(v32 + 24) = v38;
        *(_DWORD *)(v32 + 32) = v31;
        *(_DWORD *)(v5 + 36) += v27;
      }
      *(_BYTE *)(v5 + 15) = v27;
      v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1400194A0)(v5, v33, v32, v31);
      if ( v7 >= 0 )
      {
        ResetEnumerationContext((__int64 *)v44);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) )
        {
          Pool2 = 0LL;
          do
            *(_QWORD *)(v42 + 1192) = v39;
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v44, &v42) );
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 48;
LABEL_19:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          v15,
          (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids,
          v7);
      }
    }
    else
    {
LABEL_9:
      v7 = -1073741670;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        3,
        46,
        (__int64)&WPP_98f9ac7a230638fb843a3fa300c5ade8_Traceguids);
    }
    v7 = -1073741823;
  }
LABEL_68:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019188);
  if ( v5 )
    ExFreePoolWithTag((PVOID)v5, (ULONG)1919119952);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, (ULONG)1919119952);
  return (unsigned int)v7;
}
