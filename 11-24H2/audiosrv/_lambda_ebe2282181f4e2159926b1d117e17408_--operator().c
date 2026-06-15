/*
 * XREFs of _lambda_ebe2282181f4e2159926b1d117e17408_::operator() @ 0x180112DA8
 * Callers:
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x1801138A8 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z @ 0x1800498A0 (-Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x18006E164 (-Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAV?$unique_ptr@UVolumeControlData@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@Z @ 0x180112FB8 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAV-$unique_ptr@UVolumeContr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_ebe2282181f4e2159926b1d117e17408_::operator()(_QWORD *a1)
{
  HRESULT Guid; // edi
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Guid = CoCreateGuid((GUID *)(*a1 + 264LL));
  if ( Guid < 0 )
  {
    v3 = 1499LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)Guid);
    return (unsigned int)Guid;
  }
  Guid = CVolumeHardware::FindVolumeControlForEndpoint(*a1, *(_QWORD *)a1[1], a1[2]);
  if ( Guid < 0 )
  {
    v3 = 1502LL;
    goto LABEL_3;
  }
  Guid = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 256LL) + 24LL))(
           *(_QWORD *)(*a1 + 256LL),
           *a1 + 284LL);
  if ( Guid < 0 )
  {
    v3 = 1505LL;
    goto LABEL_3;
  }
  Guid = CVolumeControlBase::Initialize((CVolumeControlBase *)*a1, *(struct IMMDevice **)a1[1]);
  if ( Guid < 0 )
  {
    v3 = 1509LL;
    goto LABEL_3;
  }
  VolumeHardwareLogger::Initialize((char *)(*a1 + 296LL), (struct CVolumeHardware *)*a1);
  return 0LL;
}
