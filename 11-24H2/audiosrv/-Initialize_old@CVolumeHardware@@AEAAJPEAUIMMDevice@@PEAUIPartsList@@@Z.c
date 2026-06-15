/*
 * XREFs of ?Initialize_old@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180113FEC
 * Callers:
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x1801138A8 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z @ 0x1800498A0 (-Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z.c)
 *     ?Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z @ 0x18006E164 (-Initialize@VolumeHardwareLogger@@QEAAXPEAVCVolumeHardware@@@Z.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAV?$unique_ptr@UVolumeControlData@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@Z @ 0x180112FB8 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAV-$unique_ptr@UVolumeContr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVolumeHardware::Initialize_old(CVolumeHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  RPC_STATUS v5; // eax
  int VolumeControlForEndpoint; // ebx

  v5 = UuidCreate((UUID *)((char *)this + 264));
  VolumeControlForEndpoint = v5;
  if ( v5 )
  {
    if ( v5 > 0 )
      VolumeControlForEndpoint = (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    VolumeControlForEndpoint = CVolumeHardware::FindVolumeControlForEndpoint((__int64)this, (__int64 *)a2, 0LL);
    if ( VolumeControlForEndpoint < 0 )
      goto LABEL_8;
    VolumeControlForEndpoint = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 32) + 24LL))(
                                 *((_QWORD *)this + 32),
                                 (char *)this + 284);
    if ( VolumeControlForEndpoint < 0 )
      goto LABEL_8;
    VolumeControlForEndpoint = CVolumeControlBase::Initialize(this, a2);
    if ( VolumeControlForEndpoint >= 0 )
    {
      VolumeHardwareLogger::Initialize((char *)this + 296, this);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x23u,
          (__int64)&WPP_658f1c7cc29732d428a1952a824bf53f_Traceguids,
          this);
      }
      return (unsigned int)VolumeControlForEndpoint;
    }
  }
  if ( VolumeControlForEndpoint < 0 )
LABEL_8:
    AudSrvTraceLoggingErrorHelper("CVolumeHardware::Initialize_old", 1600, VolumeControlForEndpoint);
  return (unsigned int)VolumeControlForEndpoint;
}
