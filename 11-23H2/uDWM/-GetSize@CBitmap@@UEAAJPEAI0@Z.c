/*
 * XREFs of ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x18010F7E0
 * Callers:
 *     ?GetSize@CBitmap@@WBI@EAAJPEAI0@Z @ 0x1800666E0 (-GetSize@CBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x180022A44 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetSize(CBitmap *this, unsigned int *a2, unsigned int *a3)
{
  char *v5; // rcx
  char *v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = (char *)this + 96;
  v8 = v5;
  if ( v5[48] )
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 8));
  if ( a2 && a3 )
  {
    *a2 = *((_DWORD *)this + 42);
    *a3 = *((_DWORD *)this + 43);
    CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v8);
    return 0LL;
  }
  else
  {
    CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v8);
    return 2147942487LL;
  }
}
