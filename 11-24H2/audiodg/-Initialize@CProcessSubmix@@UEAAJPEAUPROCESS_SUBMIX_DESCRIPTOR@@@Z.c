/*
 * XREFs of ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x14003E250
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026310 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?SubMixDescriptorFromProcessSubmixDescriptor@@YAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14003E330 (-SubMixDescriptorFromProcessSubmixDescriptor@@YAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@W4PIPE_TYPE@@PEA.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 */

__int64 __fastcall CProcessSubmix::Initialize(CProcessSubmix *this, struct PROCESS_SUBMIX_DESCRIPTOR *a2)
{
  const struct _tlgProvider_t *v4; // rax
  enum PIPE_TYPE v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  _BYTE v10[176]; // [rsp+20h] [rbp-1B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+D0h] [rbp-108h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v4 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v4, "SrvProcessSubmix_Initialize", 0LL);
  memset_0(v10, 0, sizeof(v10));
  v6 = SubMixDescriptorFromProcessSubmixDescriptor(a2, v5, (struct SUBMIX_DESCRIPTOR *)v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = CSubmixImpl::Initialize((CProcessSubmix *)((char *)this + 16), (struct SUBMIX_DESCRIPTOR *)v10, 0LL);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_4;
    }
    v8 = 61LL;
  }
  else
  {
    v8 = 58LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
    (const char *)(unsigned int)v6);
LABEL_4:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v7;
}
