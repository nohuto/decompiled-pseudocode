/*
 * XREFs of ??1MPCSixDofProcessor@@UEAA@XZ @ 0x1801B307C
 * Callers:
 *     ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x1801B4010 (--_EMPCSixDofProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180015AA8 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??1?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEAA@XZ @ 0x1800BF0FC (--1-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     ??1?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAA@XZ @ 0x1800C16F0 (--1-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 */

void __fastcall MPCSixDofProcessor::~MPCSixDofProcessor(MPCSixDofProcessor *this)
{
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 10816);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD *)this + 520);
  std::unique_ptr<MPCSlateDeadzoneHelper>::~unique_ptr<MPCSlateDeadzoneHelper>((_QWORD *)this + 519);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 518);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 517);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 516);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 515);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 514);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 513);
  std::unique_ptr<MPCSpatialGestureRecognizerHandler>::~unique_ptr<MPCSpatialGestureRecognizerHandler>((_QWORD *)this + 512);
  *((_DWORD *)this + 915) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
}
