/*
 * XREFs of ?GetBudgetAndVisibilityState@VIDMM_DEVICE@@QEAAXPEA_NPEAW4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1400F4458
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DEVICE::GetBudgetAndVisibilityState(
        VIDMM_DEVICE *this,
        bool *a2,
        enum VIDMM_BUDGET_PRIORITY_BAND *a3)
{
  __int64 v3; // r10
  unsigned int i; // r9d
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // r11

  v3 = *((_QWORD *)this + 2);
  *a2 = 0;
  if ( v3 )
  {
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6944LL); ++i )
    {
      v6 = *(_QWORD *)(v3 + 16);
      v7 = 304LL * (unsigned __int16)i;
      if ( *(_QWORD *)(v7 + v6 + 208) > *(_QWORD *)(v7 + v6 + 32)
        || *(_QWORD *)(v7 + v6 + 216) > *(_QWORD *)(v7 + v6 + 40) )
      {
        *a2 = 1;
        break;
      }
    }
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 32LL);
    if ( (*(_DWORD *)(v5 + 408) & 4) != 0 )
      *(_BYTE *)a3 = 0;
    else
      *(_BYTE *)a3 = 2 - ((*(_DWORD *)(v5 + 416) & 1) != 0);
  }
  else
  {
    *(_BYTE *)a3 = 2;
  }
}
