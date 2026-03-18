/*
 * XREFs of ?TranslateExecutePresentResult@CDDisplaySwapChain@@IEAAJW4DisplayPresentStatus@Core@Display@Devices@Windows@@W4DisplaySourceStatus@3456@PEA_N@Z @ 0x1801FE380
 * Callers:
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1802BEBD4 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUD.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180096750 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::TranslateExecutePresentResult(__int64 a1, int a2, int a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  int v7; // edx
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  int v12; // eax
  void (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  int v14; // eax
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+58h] [rbp+18h] BYREF

  v4 = 0;
  if ( !a2 )
    return 0LL;
  v7 = a2 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
      return (unsigned int)-2005270523;
    return (unsigned int)-2003304442;
  }
  if ( !a3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
    return v4;
  }
  v8 = a3 - 1;
  if ( !v8 )
    return 142213121;
  v9 = v8 - 1;
  if ( !v9 )
  {
    v13 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 424);
    v16 = 0;
    v15[0] = 0LL;
    (**v13)(v13, &GUID_3c27105f_c15d_59c7_9466_ab281cf08ab7, v15);
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15[0] + 48LL))(v15[0], &v16);
    v4 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x446u, 0LL);
    if ( v16 )
      v4 = -2003304442;
    else
      *a4 = 1;
    goto LABEL_21;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 424);
      v16 = 0;
      v15[0] = 0LL;
      (**v11)(v11, &GUID_3c27105f_c15d_59c7_9466_ab281cf08ab7, v15);
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15[0] + 48LL))(v15[0], &v16);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x421u, 0LL);
      if ( v16 )
      {
        v4 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x427u, 0LL);
      }
      else
      {
        *a4 = 1;
      }
LABEL_21:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v15);
      return v4;
    }
    return (unsigned int)-2003304442;
  }
  return 142213121;
}
