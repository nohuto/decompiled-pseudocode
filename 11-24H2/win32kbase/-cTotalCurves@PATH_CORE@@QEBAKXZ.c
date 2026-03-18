/*
 * XREFs of ?cTotalCurves@PATH_CORE@@QEBAKXZ @ 0x1400F4D00
 * Callers:
 *     ?cTotalCurves@EPATHOBJ@@QEAAKXZ @ 0x1400F4CE0 (-cTotalCurves@EPATHOBJ@@QEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PATH_CORE::cTotalCurves(PATH_CORE *this)
{
  __int64 *v1; // r8
  unsigned int v2; // edx
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edx

  v1 = (__int64 *)*((_QWORD *)this + 1);
  v2 = 0;
  while ( v1 )
  {
    v3 = *((_DWORD *)v1 + 4);
    v4 = v2 + 1;
    if ( (v3 & 8) == 0 )
      v4 = v2;
    v5 = *((_DWORD *)v1 + 5);
    if ( (v3 & 0x10) != 0 )
    {
      v2 = v4 + v5 / 3;
    }
    else
    {
      v2 = v4 + v5;
      if ( (v3 & 1) != 0 )
        --v2;
    }
    v1 = (__int64 *)*v1;
  }
  return v2;
}
