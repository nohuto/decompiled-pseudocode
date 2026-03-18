/*
 * XREFs of DpiGetDbgInfoAdapters @ 0x140064774
 * Callers:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x140071260 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z @ 0x1403816F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_NIPEAX@Z.c)
 * Callees:
 *     DpiFdoIsPostDevice @ 0x14004DB50 (DpiFdoIsPostDevice.c)
 */

__int64 __fastcall DpiGetDbgInfoAdapters(__int64 a1)
{
  unsigned int v1; // r11d
  _QWORD *v3; // r10
  __int64 *v4; // r9
  __int64 v5; // r8
  bool IsPostDevice; // al
  int v7; // edx
  __int64 v8; // r8
  int v9; // r11d

  v1 = 0;
  v3 = (_QWORD *)qword_14015DD88;
  if ( (_QWORD *)*v3 != v3 )
  {
    do
    {
      if ( v1 >= 7 )
        break;
      v4 = (__int64 *)v3[7];
      if ( (__int64 *)*v4 != v4 )
      {
        do
        {
          if ( *((_DWORD *)v4 + 4) == 1953656900 && *((_DWORD *)v4 + 5) == 2 && *((_DWORD *)v4 + 59) == 2 )
          {
            if ( v1 >= 7 )
              break;
            v5 = 2LL * v1;
            *(_DWORD *)(a1 + 8 * v5) = *(_DWORD *)(v4[504] + 3004);
            *(_DWORD *)(a1 + 8 * v5 + 4) = *((_DWORD *)v4 + 281);
            *(_DWORD *)(a1 + 8 * v5 + 8) = *((_DWORD *)v4 + 282);
            *(_DWORD *)(a1 + 8 * v5 + 12) = (*(_DWORD *)(v4[504] + 200) == 1) | *(_DWORD *)(a1 + 16LL * v1 + 12) & 0xFFFFFFFE;
            IsPostDevice = DpiFdoIsPostDevice(v4[3]);
            *(_DWORD *)(a1 + 8 * v8 + 12) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(2 * IsPostDevice)) & 2;
            v1 = v9 + 1;
          }
          v4 = (__int64 *)*v4;
        }
        while ( *v4 != v3[7] );
      }
      v3 = (_QWORD *)*v3;
    }
    while ( *v3 != qword_14015DD88 );
  }
  return 0LL;
}
