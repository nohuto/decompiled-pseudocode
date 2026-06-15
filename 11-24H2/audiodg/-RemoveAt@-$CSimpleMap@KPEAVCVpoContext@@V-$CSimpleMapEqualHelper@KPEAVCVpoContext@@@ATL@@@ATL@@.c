/*
 * XREFs of ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140073F90
 * Callers:
 *     ??1CVpoContext@@IEAA@XZ @ 0x140073824 (--1CVpoContext@@IEAA@XZ.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C484 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x14000C4D0 (memmove_s.c)
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v3; // edx
  errno_t v4; // eax
  errno_t v5; // eax
  void *v6; // rax
  void *v7; // rax
  __int64 result; // rax

  v2 = a2;
  if ( a2 < 0 )
    return 0LL;
  v3 = dword_1400C47C0;
  if ( (int)v2 >= dword_1400C47C0 )
    return 0LL;
  if ( (_DWORD)v2 != dword_1400C47C0 - 1 )
  {
    v4 = memmove_s(
           (char *)CVpoContext::s_mapVpoContext + 4 * v2,
           4LL * (dword_1400C47C0 - (int)v2),
           (char *)CVpoContext::s_mapVpoContext + 4 * v2 + 4,
           4LL * (dword_1400C47C0 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v4);
    v5 = memmove_s(
           (char *)qword_1400C47B8 + 8 * v2,
           8LL * (dword_1400C47C0 - (int)v2),
           (char *)qword_1400C47B8 + 8 * v2 + 8,
           8LL * (dword_1400C47C0 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v5);
    v3 = dword_1400C47C0;
  }
  v6 = (void *)_o__recalloc(CVpoContext::s_mapVpoContext, v3 - 1, 4LL);
  if ( v6 || dword_1400C47C0 == 1 )
    CVpoContext::s_mapVpoContext = v6;
  v7 = (void *)_o__recalloc(qword_1400C47B8, dword_1400C47C0 - 1, 8LL);
  if ( v7 || dword_1400C47C0 == 1 )
    qword_1400C47B8 = v7;
  result = 1LL;
  --dword_1400C47C0;
  return result;
}
