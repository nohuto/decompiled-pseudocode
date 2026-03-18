/*
 * XREFs of ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x1400715E8
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x140071260 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 TdrGatherPowerTriage()
{
  char v0; // di
  char v1; // bl
  _QWORD **v2; // r8
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // rax
  char v6; // al
  char v7; // bl
  char v8; // al
  __int64 v10; // [rsp+30h] [rbp+8h]

  v0 = 0;
  v1 = 0;
  v10 = 0LL;
  v2 = (_QWORD **)((char *)DXGGLOBAL::GetGlobal() + 768);
  v3 = *v2;
  while ( v3 != v2 && v3 )
  {
    v4 = v3;
    v3 = (_QWORD *)*v3;
    v5 = v4[27];
    if ( v5 && *(_DWORD *)(*(_QWORD *)(v5 + 64) + 4432LL) )
    {
      if ( (v1 & 1) != 0 || (v6 = 0, v4[392]) )
        v6 = 1;
      v7 = v6 | v1 & 0xFE;
      if ( (v7 & 2) != 0 || (v8 = 0, *((_DWORD *)v4 + 1201)) )
        v8 = 2;
      v1 = v8 | v7 & 0xFD;
      LOBYTE(v10) = v1;
    }
  }
  if ( (v1 & 1) != 0 || (v1 = v10, g_TdrRecoveryInProgress) )
    v0 = 1;
  LOBYTE(v10) = v0 | v1 & 0xFE;
  return v10;
}
