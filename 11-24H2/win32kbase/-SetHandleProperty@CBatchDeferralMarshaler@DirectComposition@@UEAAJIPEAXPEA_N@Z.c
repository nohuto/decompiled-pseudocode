/*
 * XREFs of ?SetHandleProperty@CBatchDeferralMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x140239960
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x14006E390 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 */

__int64 __fastcall DirectComposition::CBatchDeferralMarshaler::SetHandleProperty(
        struct DirectComposition::CEvent **this,
        __int64 a2,
        void *a3,
        bool *a4)
{
  __int64 result; // rax

  result = 3221225485LL;
  *a4 = 0;
  if ( a3 && !(_DWORD)a2 && !this[7] )
  {
    result = DirectComposition::CEvent::Create(a3, a2, this + 7);
    if ( (int)result >= 0 )
      *a4 = 1;
  }
  return result;
}
