/*
 * XREFs of ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x180091418
 * Callers:
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800381F8 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ReportHangInternal2 @ 0x18006BBCC (ReportHangInternal2.c)
 *     ReportHangInternal @ 0x18009C0A8 (ReportHangInternal.c)
 */

__int64 __fastcall HampSystemReportHang(int a1, void *a2, unsigned int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // eax
  __int64 result; // rax

  switch ( a4 )
  {
    case 256:
LABEL_8:
      v6 = ReportHangInternal(a1, (_DWORD)a2, a3, a5, 507964);
      break;
    case 3328:
      v6 = ReportHangInternal(a1, (_DWORD)a2, a3, a5, 245948);
      break;
    case 3584:
      v6 = ReportHangInternal2(a2, a3, a5);
      break;
    case 5120:
      goto LABEL_8;
    default:
      v5 = -1073741582;
      goto LABEL_10;
  }
  v5 = v6;
LABEL_10:
  result = 0LL;
  if ( v5 < 0 )
    return (unsigned int)v5;
  return result;
}
