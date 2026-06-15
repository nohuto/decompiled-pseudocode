/*
 * XREFs of _lambda_48ab4a51811d1fd17847d009bb0945ca_::operator() @ 0x180101338
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x180101EF8 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x1800496E0 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18010161C (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@AEAV-$unique_any_.c)
 */

__int64 __fastcall lambda_48ab4a51811d1fd17847d009bb0945ca_::operator()(__int64 a1)
{
  HRESULT Guid; // edi
  __int64 v3; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Guid = CoCreateGuid((GUID *)(*(_QWORD *)a1 + 68LL));
  if ( Guid < 0 )
  {
    v3 = 586LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
      (const char *)(unsigned int)Guid);
    return (unsigned int)Guid;
  }
  Guid = CMuteHardware::FindMuteControlForEndpoint(
           *(CMuteHardware **)a1,
           **(struct IMMDevice ***)(a1 + 8),
           **(struct IPartsList ***)(a1 + 16),
           *(unsigned int **)(a1 + 32));
  if ( Guid < 0 )
  {
    v3 = 589LL;
    goto LABEL_3;
  }
  v5 = CMuteControlBase::Initialize(*(CMuteControlBase **)a1, **(struct IMMDevice ***)(a1 + 8));
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x250,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
