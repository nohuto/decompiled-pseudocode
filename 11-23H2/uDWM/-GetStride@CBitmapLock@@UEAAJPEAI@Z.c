/*
 * XREFs of ?GetStride@CBitmapLock@@UEAAJPEAI@Z @ 0x18005BC60
 * Callers:
 *     ?GetStride@CBitmapLock@@W7EAAJPEAI@Z @ 0x180066AA0 (-GetStride@CBitmapLock@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180022A44 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBitmapLock::GetStride(CBitmapLock *this, unsigned int *a2)
{
  char *v4; // rcx
  unsigned int v5; // ebx
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = (char *)this - 56;
  v7 = v4;
  if ( v4[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 8));
  if ( a2 )
  {
    if ( *((_BYTE *)this + 16) )
    {
      v5 = 0;
      *a2 = *((_DWORD *)this + 10);
    }
    else
    {
      v5 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x8Eu, 0LL);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x8Cu, 0LL);
  }
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v7);
  return v5;
}
