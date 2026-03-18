/*
 * XREFs of ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14020E1C0
 * Callers:
 *     ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x140146F90 (-OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E4F04 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x14020DD24 (--1CPTPProcessor@@AEAA@XZ.c)
 */

void __fastcall CPTPProcessorFactory::RemoveProcessor(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  char *v1; // rbx

  v1 = (char *)*((_QWORD *)a1 + 133);
  if ( v1 )
  {
    CPTPProcessor::~CPTPProcessor(*((CPTPProcessor **)a1 + 133));
    GreDeleteFastMutex(v1);
    *((_QWORD *)a1 + 133) = 0LL;
  }
}
