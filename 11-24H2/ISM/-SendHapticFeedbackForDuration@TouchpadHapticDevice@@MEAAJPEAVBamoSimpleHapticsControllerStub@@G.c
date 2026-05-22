/*
 * XREFs of ?SendHapticFeedbackForDuration@TouchpadHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x180186AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI@Z @ 0x180186A1C (-SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI.c)
 */

__int64 __fastcall TouchpadHapticDevice::SendHapticFeedbackForDuration(
        TouchpadHapticDevice *this,
        struct BamoSimpleHapticsControllerStub *a2,
        __int16 a3,
        float a4,
        unsigned int a5)
{
  InputTraceLogging::Haptics::SendHapticFeedbackForDuration((enum tagINPUT_MESSAGE_DEVICE_TYPE)16, a3, a4, a5);
  return 0LL;
}
