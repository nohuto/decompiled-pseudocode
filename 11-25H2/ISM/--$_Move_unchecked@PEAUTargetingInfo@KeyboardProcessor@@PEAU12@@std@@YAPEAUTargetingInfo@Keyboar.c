/*
 * XREFs of ??$_Move_unchecked@PEAUTargetingInfo@KeyboardProcessor@@PEAU12@@std@@YAPEAUTargetingInfo@KeyboardProcessor@@PEAU12@00@Z @ 0x18002CBA0
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18002D040 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z @ 0x18002CA90 (--4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__int64 __fastcall std::_Move_unchecked<KeyboardProcessor::TargetingInfo *,KeyboardProcessor::TargetingInfo *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 i; // rdi

  for ( i = a1; i != a2; i += 384LL )
  {
    KeyboardProcessor::TargetingInfo::operator=(a3, i);
    a3 += 384LL;
  }
  return a3;
}
