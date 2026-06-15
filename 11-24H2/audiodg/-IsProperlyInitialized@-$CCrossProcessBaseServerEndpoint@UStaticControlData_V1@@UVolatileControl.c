/*
 * XREFs of ?IsProperlyInitialized@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@MEAAJXZ @ 0x140081600
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEvent@@$$QEAPEAX@Z @ 0x14001D1D8 (--$MakeAndInitialize@VCStandardEvent@@UICrossProcessEvent@@PEAX@Details@WRL@Microsoft@@YAJPEAPEA.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::IsProperlyInitialized(
        __int64 a1)
{
  __int64 *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 432);
  if ( *(_QWORD *)(a1 + 432) )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 448);
  if ( !v3 )
    return 0LL;
  _InterlockedExchange64((volatile __int64 *)(a1 + 440), v3);
  v4 = *(_QWORD *)(a1 + 440);
  if ( v4 )
  {
    v9 = v4;
    wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset(v1);
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CStandardEvent,ICrossProcessEvent,void *>(v1, &v9);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPBaseEndpoint.h",
        (const char *)(unsigned int)v5);
      return v6;
    }
    *(_QWORD *)(a1 + 448) = 0LL;
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDB,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPBaseEndpoint.h",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
