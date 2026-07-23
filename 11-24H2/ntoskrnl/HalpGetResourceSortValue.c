/*
 * XREFs of HalpGetResourceSortValue @ 0x140C10904
 * Callers:
 *     HalpReportResourceUsage @ 0x140C10954 (HalpReportResourceUsage.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpGetResourceSortValue(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // rax

  if ( *(_BYTE *)a1 == 1 )
  {
    *a2 = 1;
LABEL_9:
    v3 = *(_QWORD *)(a1 + 4);
    goto LABEL_10;
  }
  if ( *(_BYTE *)a1 != 2 )
  {
    if ( *(_BYTE *)a1 != 3 && *(_BYTE *)a1 != 7 )
    {
      *a3 = 0LL;
      *a2 = 4;
      return;
    }
    *a2 = 2;
    goto LABEL_9;
  }
  *a2 = 0;
  v3 = *(unsigned __int16 *)(a1 + 4);
LABEL_10:
  *a3 = v3;
}
