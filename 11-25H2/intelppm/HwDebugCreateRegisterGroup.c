/*
 * XREFs of HwDebugCreateRegisterGroup @ 0x140045E74
 * Callers:
 *     HwDebugInitializeProcessorSupport @ 0x14003A4F4 (HwDebugInitializeProcessorSupport.c)
 * Callees:
 *     HwDebugUpdateRegister @ 0x1400013D0 (HwDebugUpdateRegister.c)
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x140004084 (ProcLibTraceRegisterGroupEvents.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     memset @ 0x140010340 (memset.c)
 *     GetPackageAffinity @ 0x140035700 (GetPackageAffinity.c)
 *     HwDebugInitializeRegister @ 0x140046E34 (HwDebugInitializeRegister.c)
 */

__int64 __fastcall HwDebugCreateRegisterGroup(__int64 a1, int a2, __int64 a3, unsigned __int8 *a4, _QWORD *a5, int a6)
{
  int v9; // edi
  unsigned __int8 *v10; // r8
  __int64 v11; // r14
  __int64 v12; // r10
  __int64 v13; // r9
  _DWORD *v14; // rdx
  bool v15; // zf
  int v16; // ecx
  int PackageAffinity; // ebx
  _QWORD **v18; // rsi
  _QWORD *i; // rbx
  __int64 Pool2; // rax
  int v21; // edx
  _BYTE *v22; // rdi
  __int64 v23; // rsi
  __int64 j; // rbx
  __int64 v25; // r12
  __int64 *v26; // rcx
  _QWORD **v27; // rsi
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h]
  _QWORD **v33; // [rsp+40h] [rbp-C0h]
  _QWORD *v34; // [rsp+48h] [rbp-B8h]
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-B0h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[272]; // [rsp+70h] [rbp-90h] BYREF

  v34 = a5;
  memset(v37, 0, 0x108uLL);
  v31 = 0LL;
  *a5 = 0LL;
  v9 = 0;
  v10 = a4;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  v11 = 2LL;
  v12 = 2LL;
  do
  {
    if ( *v10 )
    {
      v13 = *v10;
      v14 = (_DWORD *)(*((_QWORD *)v10 + 1) + 12LL);
      do
      {
        v15 = *v14 == a2;
        v16 = v9 + 1;
        v14 += 10;
        if ( !v15 )
          v16 = v9;
        v9 = v16;
        --v13;
      }
      while ( v13 );
    }
    v10 += 16;
    --v12;
  }
  while ( v12 );
  if ( !v9 )
    return 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (unsigned int)-1073741823;
    KeInitializeAffinityEx2(v37, 32LL);
    KeAddProcessorAffinityEx(v37, *(unsigned int *)(a1 + 56));
  }
  else
  {
    KeInitializeAffinityEx2(v37, 32LL);
    PackageAffinity = GetPackageAffinity(a1, (__int64)v37);
    if ( PackageAffinity < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x22u,
          (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
          PackageAffinity,
          v31);
      return (unsigned int)PackageAffinity;
    }
  }
  v18 = (_QWORD **)((char *)&unk_1400191A8 + 16 * a6);
  v33 = v18;
  for ( i = *v18; i != v18; i = (_QWORD *)*i )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(v37, i + 2) )
    {
      *a5 = i;
      return 0;
    }
  }
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(24 * (v9 + 13)), 1919119952LL);
  v22 = (_BYTE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 304) = a2;
    KeInitializeAffinityEx2(Pool2 + 16, 32LL);
    KeCopyAffinityEx2(v22 + 16, v37);
    PackageAffinity = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _BYTE *))(WdfFunctions_01015 + 2520))(
                        WdfDriverGlobals,
                        0LL,
                        v22 + 280);
    if ( PackageAffinity >= 0 )
    {
      v32 = KeQueryInterruptTimePrecise(&v31);
      KeFirstGroupAffinityEx(&Affinity, v37);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v23 = v32;
      do
      {
        for ( j = 0LL; (unsigned int)j < *a4; j = (unsigned int)(j + 1) )
        {
          v25 = *((_QWORD *)a4 + 1) + 40 * j;
          if ( *(_DWORD *)(v25 + 12) == a2
            && (int)HwDebugInitializeRegister(v25, &v22[24 * (unsigned __int8)v22[308] + 312]) >= 0 )
          {
            v26 = (__int64 *)&v22[24 * (unsigned __int8)v22[308] + 312];
            *v26 = v25;
            HwDebugUpdateRegister(v26, v23);
            ++v22[308];
          }
        }
        a4 += 16;
        --v11;
      }
      while ( v11 );
      v27 = v33;
      v28 = v33[1];
      if ( (_QWORD **)*v28 != v33 )
        __fastfail(3u);
      *((_QWORD *)v22 + 1) = v28;
      *(_QWORD *)v22 = v27;
      *v28 = v22;
      v29 = v34;
      v27[1] = v22;
      *v29 = v22;
      ProcLibTraceRegisterGroupEvents((__int64)v22, 0);
      PackageAffinity = 0;
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0x24u,
          (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids,
          PackageAffinity,
          v31);
      ExFreePoolWithTag(v22, (ULONG)1919119952);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v21) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v21,
        4,
        35,
        (__int64)&WPP_b952c7c2e916330752044d57dc17ed95_Traceguids);
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)PackageAffinity;
}
