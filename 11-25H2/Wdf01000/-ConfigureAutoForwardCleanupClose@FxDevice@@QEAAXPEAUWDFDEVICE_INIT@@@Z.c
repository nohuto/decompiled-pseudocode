/*
 * XREFs of ?ConfigureAutoForwardCleanupClose@FxDevice@@QEAAXPEAUWDFDEVICE_INIT@@@Z @ 0x14004EAA8
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004E398 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDevice::ConfigureAutoForwardCleanupClose(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  _LIST_ENTRY *Blink; // rax
  _WDF_TRI_STATE Flink; // r8d
  __int32 v4; // r8d

  Blink = DeviceInit->CxDeviceInitListHead.Blink;
  Flink = WdfUseDefault;
  while ( Blink != &DeviceInit->CxDeviceInitListHead )
  {
    if ( BYTE4(Blink[13].Flink) )
    {
      Flink = (_WDF_TRI_STATE)Blink[13].Flink;
      if ( Flink == WdfFalse )
      {
        if ( Blink[11].Flink )
          goto LABEL_5;
      }
    }
    Blink = Blink->Blink;
  }
  if ( DeviceInit->FileObject.Set )
    Flink = DeviceInit->FileObject.AutoForwardCleanupClose;
LABEL_5:
  if ( Flink == WdfFalse )
    goto LABEL_9;
  v4 = Flink - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    if ( DeviceInit->InitType == FxDeviceInitTypeFdo && DeviceInit->Fdo.Filter )
    {
      this->m_AutoForwardCleanupClose = 1;
      return;
    }
    goto LABEL_9;
  }
  this->m_AutoForwardCleanupClose = 1;
  if ( this->m_Legacy )
LABEL_9:
    this->m_AutoForwardCleanupClose = 0;
}
