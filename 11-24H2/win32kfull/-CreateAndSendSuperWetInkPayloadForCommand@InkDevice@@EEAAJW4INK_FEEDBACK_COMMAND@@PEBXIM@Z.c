/*
 * XREFs of ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1402ED240
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1402ED3D8 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z @ 0x1402ED628 (-DoSuperWetInkStop@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_STOP_DATA@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU_tlgWrapperBinary@@@Z @ 0x1400068C0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPEAXK@Z @ 0x1402EAC38 (-PopulatePayloadReport@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@PEBXKPE.c)
 *     ?GetHidDesc@RimBackedDeviceBase@@QEBAPEBUtagHIDDESC@@XZ @ 0x1402ED7F0 (-GetHidDesc@RimBackedDeviceBase@@QEBAPEBUtagHIDDESC@@XZ.c)
 *     ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1402EDB40 (-PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@@QEBAJKPEAXK0KPEAK@Z @ 0x1402EE114 (-SendSynchronousIoControl@RimBackedDeviceBase@@QEBAJKPEAXK0KPEAK@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall InkDevice::CreateAndSendSuperWetInkPayloadForCommand(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  const struct tagHIDDESC *HidDesc; // r14
  struct _HIDP_PREPARSED_DATA *v9; // r15
  NTSTATUS v10; // ebx
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // [rsp+54h] [rbp-6Dh] BYREF
  __int64 v16; // [rsp+58h] [rbp-69h]
  __int64 v17; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-59h] BYREF
  __int16 v19; // [rsp+78h] [rbp-49h]
  CHAR v20[80]; // [rsp+80h] [rbp-41h] BYREF

  HidDesc = RimBackedDeviceBase::GetHidDesc((RimBackedDeviceBase *)a1);
  v9 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)HidDesc + 2);
  memset_0(v20, 0, 0x48uLL);
  v10 = Protocols::SuperWetInk::PopulatePayloadV1(a2, a3, a4);
  if ( v10 >= 0 )
  {
    v10 = InkDeviceParser::PopulatePayloadReport(
            v9,
            *(const struct UsageValueInfo **)(a1 + 152),
            v20,
            v11,
            *(PCHAR *)(a1 + 160),
            *((unsigned __int16 *)HidDesc + 23));
    if ( v10 >= 0 )
    {
      v10 = RimBackedDeviceBase::SendSynchronousIoControl(
              (RimBackedDeviceBase *)a1,
              0xB0195u,
              *(void **)(a1 + 160),
              *((unsigned __int16 *)HidDesc + 23),
              0LL,
              0,
              0LL);
      if ( v10 >= 0 && (unsigned int)dword_140398C98 > 4 )
      {
        v19 = 72;
        v18[1] = v20;
        v15 = 0;
        v17 = *(_QWORD *)(a1 + 80);
        v18[0] = "Sent super-wet ink payload";
        v16 = (a1 + 32) & -(__int64)(a1 != 0);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperBinary>(
          v16,
          (__int64)&unk_1403698E6,
          v12,
          v13,
          (__int64)&v15,
          v18,
          &v17);
      }
    }
  }
  return (unsigned int)v10;
}
