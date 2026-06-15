/*
 * XREFs of ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x14003E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140026310 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 *     ?ValidateStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x14003E9D8 (-ValidateStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?SubMixDescriptorFromStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14003EA54 (-SubMixDescriptorFromStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUB.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 */

__int64 __fastcall CStreamGroup::Initialize(
        CStreamGroup *this,
        struct STREAM_GROUP_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  enum PIPE_TYPE v9; // edx
  __int64 v10; // rdx
  _BYTE v12[176]; // [rsp+20h] [rbp-1C8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+D0h] [rbp-118h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  v6 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v6, "SrvStreamGroup_Initialize", 0LL);
  *((_BYTE *)this + 337) = *((_DWORD *)a2 + 1) != 0;
  v7 = ValidateStreamGroupDescriptor(a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 61LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_7;
  }
  memset_0(v12, 0, sizeof(v12));
  v7 = SubMixDescriptorFromStreamGroupDescriptor(a2, v9, (struct SUBMIX_DESCRIPTOR *)v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 65LL;
    goto LABEL_6;
  }
  v7 = CSubmixImpl::Initialize((CStreamGroup *)((char *)this + 24), (struct SUBMIX_DESCRIPTOR *)v12, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 68LL;
    goto LABEL_6;
  }
  v8 = 0;
LABEL_7:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v8;
}
