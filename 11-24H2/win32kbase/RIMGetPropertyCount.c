/*
 * XREFs of RIMGetPropertyCount @ 0x14012A434
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x140129E5C (RIMRetrieveLinkCollection.c)
 *     RIMCreatePointerDeviceInfo @ 0x1401DECF0 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _IsValidParallelValue @ 0x1401071A4 (_IsValidParallelValue.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, USHORT a2, USHORT a3, struct _HIDP_PREPARSED_DATA *a4)
{
  unsigned int v8; // r13d
  USHORT v9; // r14
  NTSTATUS SpecificValueCaps; // ebx
  __int64 v11; // rax
  USHORT v12; // di
  USHORT v13; // cx
  CTouchProcessor **v14; // rcx
  bool v15; // di
  bool v16; // r14
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx
  struct _HIDP_VALUE_CAPS *v20; // r12
  struct _HIDP_PREPARSED_DATA *v21; // rsi
  USHORT v22; // r8
  USHORT v23; // si
  struct _HIDP_PREPARSED_DATA *v24; // r14
  int v25; // edi
  struct _HIDP_VALUE_CAPS *v26; // rdx
  int valid; // eax
  USHORT v28; // r14
  USHORT v29; // si
  struct _HIDP_PREPARSED_DATA *v30; // rbx
  struct _HIDP_VALUE_CAPS *v31; // rdx
  __int64 v32; // rax
  USHORT v34[2]; // [rsp+40h] [rbp-79h] BYREF
  USHORT v35; // [rsp+44h] [rbp-75h]
  USHORT v36; // [rsp+48h] [rbp-71h] BYREF
  NTSTATUS v37; // [rsp+50h] [rbp-69h]
  int v38; // [rsp+54h] [rbp-65h]
  USHORT ValueCapsLength[2]; // [rsp+58h] [rbp-61h] BYREF
  USHORT v40; // [rsp+5Ch] [rbp-5Dh] BYREF
  USHORT v41; // [rsp+60h] [rbp-59h]
  PHIDP_PREPARSED_DATA v42; // [rsp+68h] [rbp-51h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-49h] BYREF

  v41 = a2;
  v36 = a3;
  v34[0] = a3;
  v42 = a4;
  v8 = 0;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v40 = 1;
  v9 = a2;
  ValueCapsLength[0] = 0;
  SpecificValueCaps = -1073741668;
  v38 = 0;
  if ( !a3 )
  {
    v37 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2275LL);
  }
  v11 = *(_QWORD *)(a1 + 768);
  v12 = a3;
  v35 = a3;
  if ( v11 )
  {
    v13 = *(_WORD *)(v11 + 8);
    v35 = a3;
    if ( v13 )
    {
      v9 = v13;
      LOWORD(v37) = v13;
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, v13, 0, 0LL, ValueCapsLength, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v32 = *(_QWORD *)(a1 + 768);
        v34[0] = ValueCapsLength[0];
        v12 = ValueCapsLength[0] + v36;
        v35 = ValueCapsLength[0] + v36;
        *(_WORD *)(v32 + 10) = ValueCapsLength[0];
        v38 = 1;
      }
      else
      {
        v14 = &WPP_GLOBAL_Control;
        v15 = 0;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v14 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( ((unsigned __int8)v14 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v15 = 1;
        }
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(v14);
          LOBYTE(v18) = v16;
          LOBYTE(v19) = v15;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v19,
            v18,
            *(_QWORD *)(UserSessionState + 19392),
            3,
            1,
            30,
            (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
        }
        v9 = v37;
        v12 = a3;
        v35 = a3;
      }
    }
  }
  if ( v12 > 1u )
  {
    v20 = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * v12, 0x63707352u);
    if ( v20 )
    {
      v21 = v42;
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 1u, v9, 0x30u, &ValueCaps, &v40, v42);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(a1 + 832) = ValueCaps.ReportID;
        v37 = HidP_GetSpecificValueCaps(HidP_Input, 0, v9, 0, v20, v34, v21);
        SpecificValueCaps = v37;
        if ( v37 >= 0 )
        {
          v22 = v34[0];
          v23 = 0;
          v24 = v42;
          if ( v34[0] )
          {
            v25 = v38;
            do
            {
              v26 = &v20[v23];
              if ( v26->ReportID == ValueCaps.ReportID )
              {
                if ( v25
                  || (*(_DWORD *)(a1 + 368) & 2) == 0
                  || (valid = IsValidParallelValue(a1, &v26->UsagePage, v24), v22 = v34[0], valid) )
                {
                  ++v8;
                }
              }
              ++v23;
            }
            while ( v23 < v22 );
            SpecificValueCaps = v37;
            v12 = v35;
          }
          if ( v38 )
          {
            v37 = HidP_GetSpecificValueCaps(HidP_Input, 0, v41, 0, &v20[v22], &v36, v24);
            SpecificValueCaps = v37;
            if ( v37 >= 0 )
            {
              v28 = 0;
              v29 = v34[0];
              if ( v36 )
              {
                v30 = v42;
                do
                {
                  if ( v29 >= v12 )
                    break;
                  v31 = &v20[v29];
                  if ( v31->ReportID == ValueCaps.ReportID
                    && ((*(_DWORD *)(a1 + 368) & 2) == 0 || (unsigned int)IsValidParallelValue(a1, &v31->UsagePage, v30)) )
                  {
                    ++v8;
                  }
                  ++v29;
                  ++v28;
                }
                while ( v28 < v36 );
                SpecificValueCaps = v37;
              }
            }
          }
          if ( v8 <= 1 )
          {
            v38 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2374LL);
          }
          *(_DWORD *)(a1 + 392) = v8;
        }
      }
      GreDeleteFastMutex((char *)v20);
    }
  }
  return SpecificValueCaps >= 0;
}
