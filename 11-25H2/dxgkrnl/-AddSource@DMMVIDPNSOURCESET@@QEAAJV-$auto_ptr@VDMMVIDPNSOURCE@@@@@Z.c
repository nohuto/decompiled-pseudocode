/*
 * XREFs of ?AddSource@DMMVIDPNSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDPNSOURCE@@@@@Z @ 0x1402C5AC4
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1402C532C (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ??$Add@VDMMVIDPNSOURCE@@@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@@@Z @ 0x140042B40 (--$Add@VDMMVIDPNSOURCE@@@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDPNSOURCE@.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNSOURCESET::AddSource(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v6; // eax

  v3 = 0;
  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 745;
  }
  v6 = IndexedSet<DMMVIDPNSOURCE>::Add<DMMVIDPNSOURCE>(a1, *a2, a3);
  switch ( v6 )
  {
    case 1:
      WdLogSingleEntry2(2LL, *a2, a1);
      WdLogGlobalForLineNumber = 767;
      v3 = -1071774953;
      break;
    case 2:
      WdLogSingleEntry3(2LL, *(unsigned int *)(*a2 + 24), *a2, a1);
      WdLogGlobalForLineNumber = 776;
      v3 = -1071774927;
      break;
    case 3:
      *a2 = 0LL;
      break;
    default:
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 782;
      v3 = -1073741823;
      break;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}
