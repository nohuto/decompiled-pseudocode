/*
 * XREFs of ConnectHwpInterrupt @ 0x14002A970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400050E8 (WPP_RECORDER_SF_D.c)
 *     IsHwpNativeInterruptEnabled @ 0x140006028 (IsHwpNativeInterruptEnabled.c)
 *     IsHgsEnabled @ 0x1400073EC (IsHgsEnabled.c)
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x14000FF30 (GetCpuIdInfo.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 *     IsHwpNativeInterruptSupported @ 0x1400292EC (IsHwpNativeInterruptSupported.c)
 *     IsHgsInterruptSupported @ 0x140029368 (IsHgsInterruptSupported.c)
 */

__int64 __fastcall ConnectHwpInterrupt(__int64 a1)
{
  int v1; // edx
  int v2; // ebx
  bool v3; // di
  char v4; // bl
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp-38h]
  unsigned __int64 v11; // [rsp+30h] [rbp-38h]
  unsigned __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF
  __int128 v14; // [rsp+48h] [rbp-20h] BYREF

  if ( IsHwpNativeInterruptEnabled(a1) )
  {
    BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = IsHwpNativeInterruptSupported();
    v3 = 0;
    v13 = 0LL;
    v14 = 0LL;
    GetCpuIdInfo(0, &v13);
    v4 = 1;
    if ( (unsigned int)v13 >= 6 )
    {
      GetCpuIdInfo(6u, &v14);
      v3 = (v14 & 0x8180) == 33152;
    }
    BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v3;
    if ( !IsHgsInterruptSupported() || !IsHgsEnabled() )
      v4 = 0;
    HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) = v4;
    if ( *(_WORD *)((char *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 5) )
    {
      v6 = __readmsr(0x773u);
      v10 = v6;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v6) = v6 & 0xFFFFFFFC;
        LODWORD(v10) = v6;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v10) = v6 & 0xFFFFFFFB;
      __writemsr(0x773u, v10);
      v7 = __readmsr(0x777u);
      v11 = v7;
      if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        LODWORD(v7) = v7 & 0xFFFFFFFA;
        LODWORD(v11) = v7;
      }
      if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
        LODWORD(v11) = v7 & 0xFFFFFFF7;
      v5 = HIDWORD(v11);
      __writemsr(0x777u, v11);
    }
    if ( v4 )
    {
      v12 = __readmsr(0x1B2u) & 0xFFFFFFFFFDFFFFFFuLL;
      v5 = HIDWORD(v12);
      __writemsr(0x1B2u, v12);
    }
    v2 = ((__int64 (__fastcall *)(char (__fastcall *)(__int64, __int64, __int64), unsigned __int64))HalPrivateDispatchTable[117])(
           HwpInterruptService,
           v5);
    if ( v2 >= 0 )
    {
      if ( HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      {
        v8 = __readmsr(0x1B1u);
        if ( (v8 & 0x4000000) != 0 )
        {
          if ( qword_140019AE0 )
            qword_140019AE0(433LL);
        }
      }
      return 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xEu,
        (__int64)&WPP_9b89ed0794b23191a81b3e1d548602ce_Traceguids,
        v2);
    }
  }
  else
  {
    v2 = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v1) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v1,
        3,
        13,
        (__int64)&WPP_9b89ed0794b23191a81b3e1d548602ce_Traceguids);
    }
  }
  return (unsigned int)v2;
}
