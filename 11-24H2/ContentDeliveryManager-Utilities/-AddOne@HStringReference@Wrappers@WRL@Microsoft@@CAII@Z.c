/*
 * XREFs of ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D44C
 * Callers:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024214 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x180088D4C (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEB_WI@Z @ 0x180093BE4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEB_WI@Z.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180036FEC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HStringReference::AddOne(unsigned int a1, int a2, unsigned int a3)
{
  __int64 result; // rax

  result = a1 + 1;
  if ( (unsigned int)result < a1 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    __debugbreak();
  }
  return result;
}
