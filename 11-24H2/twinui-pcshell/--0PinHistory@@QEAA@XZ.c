/*
 * XREFs of ??0PinHistory@@QEAA@XZ @ 0x1805E3188
 * Callers:
 *     ??0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1802A4DEC (--0PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?PinHistoryCreated@PinManagerTelemetry@@SAXXZ @ 0x1802901A4 (-PinHistoryCreated@PinManagerTelemetry@@SAXXZ.c)
 *     ??0?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA@XZ @ 0x1802C7BE0 (--0-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chrono@.c)
 */

// Hidden C++ exception states: #wind=3
PinHistory *__fastcall PinHistory::PinHistory(PinHistory *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>((_QWORD *)this + 8);
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>((_QWORD *)this + 13);
  *((_QWORD *)this + 18) = 50LL;
  *((_QWORD *)this + 19) = 50LL;
  *((_QWORD *)this + 20) = 5000000000LL;
  *((_DWORD *)this + 42) = 10;
  *((_QWORD *)this + 22) = 30000000000LL;
  *((_QWORD *)this + 23) = 300000000000LL;
  *((_DWORD *)this + 48) = 2;
  *((_QWORD *)this + 25) = 30000000000LL;
  *((_DWORD *)this + 52) = 4;
  *((_QWORD *)this + 27) = 259200000000000LL;
  PinManagerTelemetry::PinHistoryCreated();
  return this;
}
