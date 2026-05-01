/*
 * XREFs of _lambda_5c8612707d1ce1f8a03bb177e1540ce1_::__lambda_5c8612707d1ce1f8a03bb177e1540ce1_ @ 0x180291BC4
 * Callers:
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18029185C (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___::_CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___ @ 0x18046C664 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8612707d1ce1f8a03bb177e1540ce1___--_CTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180083CE0 (--1OnInputAppRequestedShowActivity_Queued@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

void __fastcall lambda_5c8612707d1ce1f8a03bb177e1540ce1_::__lambda_5c8612707d1ce1f8a03bb177e1540ce1_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::~OnInputAppRequestedShowActivity_Queued((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued *)(a1 + 96));
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 80));
  std::vector<Geometry::CRect>::_Tidy(a1 + 56);
}
