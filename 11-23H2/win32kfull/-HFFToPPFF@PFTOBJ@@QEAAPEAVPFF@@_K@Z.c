/*
 * XREFs of ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C026A214
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02E0410 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013DEC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall PFTOBJ::HFFToPPFF(PFTOBJ *this, __int64 a2)
{
  __int64 v4; // r8
  __int64 i; // rbx
  struct PFF *j; // rcx
  struct PFF *result; // rax

  Gre::Base::Globals(this);
  v4 = *(_QWORD *)this;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 24LL); i = (unsigned int)(i + 1) )
  {
    for ( j = *(struct PFF **)(v4 + 8 * i + 40); ; j = (struct PFF *)*((_QWORD *)result + 1) )
    {
      result = SkipInvalidPff(j);
      if ( !result )
        break;
      if ( a2 == *((_QWORD *)result + 10) )
        return result;
    }
    v4 = *(_QWORD *)this;
  }
  return 0LL;
}
