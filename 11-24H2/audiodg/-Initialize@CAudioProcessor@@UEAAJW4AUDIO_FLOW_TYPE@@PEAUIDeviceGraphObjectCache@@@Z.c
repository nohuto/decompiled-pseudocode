/*
 * XREFs of ?Initialize@CAudioProcessor@@UEAAJW4AUDIO_FLOW_TYPE@@PEAUIDeviceGraphObjectCache@@@Z @ 0x140037800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140026C00 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x14003789C (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioProcessor::Initialize(
        CAudioProcessor *this,
        unsigned int a2,
        struct IDeviceGraphObjectCache *a3)
{
  struct IUnknown **v4; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 1 )
  {
    v6 = -2147024809;
    v7 = 1196LL;
  }
  else
  {
    v4 = (struct IUnknown **)((char *)this + 784);
    *((_DWORD *)this + 20) = a2 != 0;
    ATL::CComPtr<IDeviceGraphObjectCache>::operator=((_QWORD *)this + 98, (__int64)a3);
    if ( *((struct IUnknown **)this + 99) != *v4 )
      ATL::AtlComQIPtrAssign((struct IUnknown **)this + 99, *v4, &GUID_6749eb56_8b5f_4af1_861d_715c84e9094a);
    if ( *((_QWORD *)this + 99) )
    {
      *((_BYTE *)this + 776) = 1;
      return 0LL;
    }
    v6 = -2147467262;
    v7 = 1203LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
    (const char *)v6);
  return v6;
}
