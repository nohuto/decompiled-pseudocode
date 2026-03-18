/*
 * XREFs of ?GetResolution@CBitmap@@UEAAJPEAN0@Z @ 0x1802226F0
 * Callers:
 *     ?GetResolution@CBitmap@@WCA@EAAJPEAN0@Z @ 0x1802557B0 (-GetResolution@CBitmap@@WCA@EAAJPEAN0@Z.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CBitmap::GetResolution(struct _RTL_CRITICAL_SECTION *this, double *a2, double *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = this + 1;
  v8 = this + 1;
  EnterCriticalSection(this + 1);
  if ( a2 && a3 )
  {
    *a2 = *(float *)&this[2].OwningThread;
    *a3 = *((float *)&this[2].OwningThread + 1);
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
    return 0LL;
  }
  else
  {
    if ( v3 )
      LeaveCriticalSection(v3);
    return 2147942487LL;
  }
}
