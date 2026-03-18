/*
 * XREFs of ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1402F0510
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EBED8 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x140005D0C (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

__int64 __fastcall SimpleHapticsController::SetDevicePropertyData(
        SimpleHapticsController *this,
        const struct _DEVPROPKEY *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        PVOID Data)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  NTSTATUS v10; // eax
  const char *v12; // [rsp+58h] [rbp+18h] BYREF
  int v13; // [rsp+68h] [rbp+28h]

  v13 = a4;
  v12 = (const char *)a2;
  if ( (unsigned int)dword_140398C60 > 4 )
  {
    v13 = 0;
    v12 = "SimpleHapticsController::SendDeviceIOControl entry";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398C60,
      (__int64)&unk_140369B27,
      a3,
      a4,
      &v12);
  }
  v8 = *((_QWORD *)this + 7);
  if ( v8 )
  {
    v10 = IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(v8 + 8),
            &DEVPKEY_InteractiveControl_DeviceType,
            0,
            0,
            7u,
            4u,
            Data);
    v9 = v10;
    if ( v10 < 0 && (unsigned int)dword_140398C60 > 2 )
    {
      v13 = v10;
      v12 = "Function failed.";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (__int64)&dword_140398C60,
        (__int64)&unk_140369A7F,
        a3,
        a4,
        &v12);
    }
  }
  else
  {
    v9 = -1073741436;
  }
  if ( (unsigned int)dword_140398C60 > 4 )
  {
    v13 = v9;
    v12 = "SimpleHapticsController::SendDeviceIOControl exit";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)&dword_140398C60,
      (__int64)&unk_140369B27,
      a3,
      a4,
      &v12);
  }
  return v9;
}
