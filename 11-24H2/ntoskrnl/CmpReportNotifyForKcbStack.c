/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x14086CA6C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpReportNotify @ 0x14086D768 (CmpReportNotify.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 */

__int64 __fastcall CmpReportNotifyForKcbStack(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  int v8; // ebx
  __int64 v9; // rdi
  __int64 result; // rax

  v4 = *(__int16 *)(a1 + 2);
  v8 = a1;
  _mm_lfence();
  if ( (int)v4 >= 2 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v4 - 16);
  else
    v9 = *(_QWORD *)(a1 + 8 * v4 + 8);
  result = CmpReportNotifyHelper(a1, *(_QWORD *)(v9 + 32), a2, a3, a4);
  if ( *(_QWORD *)(v9 + 32) != CmpMasterHive )
    return CmpReportNotifyHelper(v8, CmpMasterHive, a2, a3, a4);
  return result;
}
