/*
 * XREFs of ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x1400399A0
 * Callers:
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x1400398DC (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x14003995C (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ?CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@I@Z @ 0x14004A088 (-CreateBridgeToApo@CBridgeToAPOProcessNode@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_.c)
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x1400500D8 (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x140058084 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@X.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ @ 0x140058474 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1400585FC (--1-$out_param_t@V-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@std@@@.c)
 * Callees:
 *     ??1CEndpointInstance@@QEAA@XZ @ 0x1400399CC (--1CEndpointInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CEndpointInstance *__fastcall CEndpointInstance::`scalar deleting destructor'(CEndpointInstance *this)
{
  CEndpointInstance::~CEndpointInstance(this);
  operator delete(this);
  return this;
}
