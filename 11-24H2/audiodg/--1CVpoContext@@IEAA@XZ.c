/*
 * XREFs of ??1CVpoContext@@IEAA@XZ @ 0x140073824
 * Callers:
 *     ??1?$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x140073794 (--1-$CComAggObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 *     ??1?$CComObject@VCVpoContext@@@ATL@@UEAA@XZ @ 0x1400737D8 (--1-$CComObject@VCVpoContext@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002C920 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140073C68 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 *     ?RemoveAt@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAHH@Z @ 0x140073F90 (-RemoveAt@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@.c)
 */

void __fastcall CVpoContext::~CVpoContext(CVpoContext *this)
{
  __int64 v2; // rcx
  unsigned int Key; // eax
  __int64 v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+30h] [rbp+8h] BYREF

  EnterCriticalSection(&CVpoContext::s_csMapVpoContext);
  v5 = &CVpoContext::s_csMapVpoContext;
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          v2,
          (char *)this + 88);
  if ( Key != -1 )
    ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAt(
      v4,
      Key);
  CSAutoLock<1>::~CSAutoLock<1>(&v5);
  ATL::CComSafeDeleteCriticalSection::~CComSafeDeleteCriticalSection((CVpoContext *)((char *)this + 24));
}
