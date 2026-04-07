/*
 * XREFs of ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x1800223B0
 * Callers:
 *     ?GetResolution@CBitmap@@WBI@EAAJPEAN0@Z @ 0x1800666C0 (-GetResolution@CBitmap@@WBI@EAAJPEAN0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180022A44 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetResolution(CBitmap *this, double *a2, double *a3)
{
  char *v5; // rcx
  char *v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = (char *)this + 96;
  v8 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( a2 && a3 )
  {
    *a2 = *((float *)this + 44);
    *a3 = *((float *)this + 45);
    CGuard<CMTALock>::~CGuard<CMTALock>(&v8);
    return 0LL;
  }
  else
  {
    CGuard<CMTALock>::~CGuard<CMTALock>(&v8);
    return 2147942487LL;
  }
}
