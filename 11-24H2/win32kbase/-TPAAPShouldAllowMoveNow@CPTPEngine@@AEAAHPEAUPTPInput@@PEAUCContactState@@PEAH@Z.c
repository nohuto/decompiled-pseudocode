/*
 * XREFs of ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x1400EF180
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC0FC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x1400EF2C8 (-TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z.c)
 */

__int64 __fastcall CPTPEngine::TPAAPShouldAllowMoveNow(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        int *a4)
{
  int v8; // ebp
  int v9; // esi
  int v10; // r9d
  unsigned __int64 v11; // r11
  int v12; // ecx
  int v13; // ecx

  if ( (*(_DWORD *)a3 & 0x1000) != 0 )
  {
    v8 = 0;
LABEL_3:
    v9 = 0;
    goto LABEL_4;
  }
  v8 = 1;
  if ( (*(_DWORD *)a3 & 0x100) == 0 )
    goto LABEL_3;
  v9 = 1;
LABEL_4:
  v10 = CPTPEngine::TPAAPShouldAllowNow(this, a2, 0x20u, 0);
  if ( *((_DWORD *)this + 706) != 2 )
  {
    if ( v9 && (*(_DWORD *)a3 & 0x2000) != 0 )
      return 0LL;
    v11 = *((_QWORD *)this + 12);
    if ( *((_DWORD *)this + 5) )
      v12 = *((_DWORD *)this + 43);
    else
      v12 = 0;
    if ( v8 || (__int64)(1000LL * (*(_QWORD *)a2 - *((_QWORD *)a3 + 8)) / v11) < *((unsigned int *)this + v12 + 827) )
    {
      v13 = 0;
      if ( v8 )
      {
LABEL_10:
        if ( v13 || v10 )
          return 1LL;
        goto LABEL_19;
      }
    }
    else
    {
      v13 = 1;
    }
    if ( (__int64)(1000LL * (*(_QWORD *)a2 - *((_QWORD *)this + 380)) / v11) <= *((unsigned int *)this + 843) )
      return 1LL;
    goto LABEL_10;
  }
  if ( !v9 || v10 )
    return 1LL;
  *a4 = 1;
LABEL_19:
  *(_DWORD *)a3 |= 0x2000u;
  return 0LL;
}
