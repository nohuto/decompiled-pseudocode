/*
 * XREFs of ??$Shell_BroadcastDVRComponent_SendShellNotificationToDVR@AEAKAEAPEBGAEAPEAXAEA_NAEA_NAEA_NAEAK@GameDVRTraceProvider@@SAXAEAKAEAPEBGAEAPEAXAEA_N330@Z @ 0x180059EF8
 * Callers:
 *     ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x180059A30 (-BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z.c)
 * Callees:
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180059FE0 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U4@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@663@Z @ 0x1801C9B8C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 */

const struct _tlgProvider_t *__fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_SendShellNotificationToDVR<unsigned long &,unsigned short const * &,void * &,bool &,bool &,bool &,unsigned long &>(
        int *a1,
        __int64 *a2,
        __int64 *a3,
        char *a4,
        char *a5,
        _BYTE *a6,
        int *a7)
{
  const struct _tlgProvider_t *result; // rax
  int v12; // r8d
  char v13; // dl
  char v14; // cl
  int v15; // r11d
  char v16; // [rsp+60h] [rbp-20h] BYREF
  char v17; // [rsp+61h] [rbp-1Fh] BYREF
  _BYTE v18[2]; // [rsp+62h] [rbp-1Eh] BYREF
  int v19; // [rsp+64h] [rbp-1Ch] BYREF
  int v20; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h] BYREF
  __int64 v22; // [rsp+78h] [rbp-8h] BYREF

  result = GameDVRTraceProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v21 = *a3;
    v13 = *a5;
    v14 = *a4;
    LOBYTE(v12) = *a6;
    v15 = *a7;
    v22 = *a2;
    v20 = *a1;
    v17 = v13;
    v18[0] = v14;
    v19 = v15;
    v16 = v12;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807E4B34,
                                            v12,
                                            (_DWORD)a6,
                                            (__int64)&v20,
                                            (__int64)&v22,
                                            (__int64)&v21,
                                            (__int64)v18,
                                            (__int64)&v17,
                                            (__int64)&v16,
                                            (__int64)&v19);
  }
  return result;
}
