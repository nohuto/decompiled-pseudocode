/*
 * XREFs of ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x140074478
 * Callers:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z @ 0x14006B610 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHI@Z.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x140038F74 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??A?$CSimpleArray@PEAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAAEAPEAUHINSTANCE__@@H@Z @ 0x140074448 (--A-$CSimpleArray@PEAUHINSTANCE__@@V-$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAA.c)
 *     ?Lock@?$CComCritSecLock@VCComCriticalSection@ATL@@@ATL@@QEAAJXZ @ 0x1400744F4 (-Lock@-$CComCritSecLock@VCComCriticalSection@ATL@@@ATL@@QEAAJXZ.c)
 */

__int64 __fastcall ATL::CAtlBaseModule::GetHInstanceAt(ATL::CAtlBaseModule *this, int a2)
{
  __int64 v3; // rbx
  __int128 *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 0;
  v5 = &xmmword_1400C4808;
  if ( (int)ATL::CComCritSecLock<ATL::CComCriticalSection>::Lock(&v5) < 0 || a2 > dword_1400C4838 || a2 < 0 )
  {
    ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v5);
    return 0LL;
  }
  else
  {
    if ( a2 == dword_1400C4838 )
      v3 = qword_1400C47F0;
    else
      v3 = *(_QWORD *)ATL::CSimpleArray<HINSTANCE__ *,ATL::CSimpleArrayEqualHelper<HINSTANCE__ *>>::operator[](
                        (__int64)&qword_1400C4830,
                        a2);
    ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)&v5);
    return v3;
  }
}
