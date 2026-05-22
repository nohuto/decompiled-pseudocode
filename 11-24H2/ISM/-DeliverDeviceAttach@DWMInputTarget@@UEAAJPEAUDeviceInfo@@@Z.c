/*
 * XREFs of ?DeliverDeviceAttach@DWMInputTarget@@UEAAJPEAUDeviceInfo@@@Z @ 0x18002F930
 * Callers:
 *     <none>
 * Callees:
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z @ 0x18002F9BC (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUDeviceInfo@@@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z @ 0x180031450 (-DeliverDeviceAttach@InputTarget@InputETW@@SAXPEAUDeviceInfo@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DWMInputTarget::DeliverDeviceAttach(DWMInputTarget *this, struct DeviceInfo *a2)
{
  int v4; // ebx
  int v6; // [rsp+20h] [rbp-28h]
  int v7; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  InputEventPayloadBuffer::InputEventPayloadBuffer(&v7, 1LL, a2);
  v4 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, __int64, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                         + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 64,
         v8,
         v7);
  InputETW::InputTarget::DeliverDeviceAttach(a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v4,
      v6);
  else
    v4 = 0;
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v8);
  return (unsigned int)v4;
}
