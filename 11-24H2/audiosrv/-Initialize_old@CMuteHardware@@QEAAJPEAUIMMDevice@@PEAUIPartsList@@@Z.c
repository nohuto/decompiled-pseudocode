/*
 * XREFs of ?Initialize_old@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180102274
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x180101EF8 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x1800496E0 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMuteControlForEndpoint_old@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18010195C (-FindMuteControlForEndpoint_old@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 */

__int64 __fastcall CMuteHardware::Initialize_old(CMuteHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  int MuteControlForEndpoint_old; // ebx

  v6 = UuidCreate((UUID *)((char *)this + 68));
  MuteControlForEndpoint_old = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      MuteControlForEndpoint_old = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    MuteControlForEndpoint_old = CMuteHardware::FindMuteControlForEndpoint_old(this, a2, a3);
    if ( MuteControlForEndpoint_old < 0 )
    {
LABEL_7:
      AudSrvTraceLoggingErrorHelper("CMuteHardware::Initialize_old", 635, MuteControlForEndpoint_old);
      return (unsigned int)MuteControlForEndpoint_old;
    }
    MuteControlForEndpoint_old = CMuteControlBase::Initialize(this, a2);
  }
  if ( MuteControlForEndpoint_old < 0 )
    goto LABEL_7;
  return (unsigned int)MuteControlForEndpoint_old;
}
