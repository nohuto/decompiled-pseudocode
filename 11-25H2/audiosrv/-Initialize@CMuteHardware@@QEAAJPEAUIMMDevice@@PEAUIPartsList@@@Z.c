/*
 * XREFs of ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800864E8
 * Callers:
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x18008B4A0 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180054560 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180086580 (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 */

__int64 __fastcall CMuteHardware::Initialize(CMuteHardware *this, struct IMMDevice *a2, struct IPartsList *a3)
{
  RPC_STATUS v6; // eax
  int MuteControlForEndpoint; // ebx

  v6 = UuidCreate((UUID *)((char *)this + 68));
  MuteControlForEndpoint = v6;
  if ( v6 )
  {
    if ( v6 > 0 )
      MuteControlForEndpoint = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    MuteControlForEndpoint = CMuteHardware::FindMuteControlForEndpoint(this, a2, a3);
    if ( MuteControlForEndpoint < 0 )
    {
LABEL_7:
      AudSrvTraceLoggingErrorHelper("CMuteHardware::Initialize", 472, MuteControlForEndpoint);
      return (unsigned int)MuteControlForEndpoint;
    }
    MuteControlForEndpoint = CMuteControlBase::Initialize(this, a2);
  }
  if ( MuteControlForEndpoint < 0 )
    goto LABEL_7;
  return (unsigned int)MuteControlForEndpoint;
}
