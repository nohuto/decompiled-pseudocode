/*
 * XREFs of ??1MODE_PARAMS@@QEAA@XZ @ 0x1800273BC
 * Callers:
 *     ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x1800268E0 (-SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z.c)
 *     ??R?$default_delete@UMODE_PARAMS@@@std@@QEBAXPEAUMODE_PARAMS@@@Z @ 0x18002735C (--R-$default_delete@UMODE_PARAMS@@@std@@QEBAXPEAUMODE_PARAMS@@@Z.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18002738C (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??1?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAA@XZ @ 0x18001F3F8 (--1-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@.c)
 */

void __fastcall MODE_PARAMS::~MODE_PARAMS(void **this)
{
  std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::~unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>(this + 1);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this);
}
