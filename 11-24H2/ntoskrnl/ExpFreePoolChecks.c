/*
 * XREFs of ExpFreePoolChecks @ 0x14035B160
 * Callers:
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     ExRemovePoolTag @ 0x1403985B4 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x140398994 (ExpFreeHeapSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     ExpCheckForWorker @ 0x140261AEC (ExpCheckForWorker.c)
 *     ExpCheckForResource @ 0x14048C4AC (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14049464C (ExpCheckForLookaside.c)
 *     KeCheckForTimer @ 0x1404C7E48 (KeCheckForTimer.c)
 *     VfPtFreePoolNotification @ 0x140BAB6EC (VfPtFreePoolNotification.c)
 */

__int64 __fastcall ExpFreePoolChecks(ULONG_PTR BugCheckParameter3, unsigned int a2, __int64 a3, char a4, __int64 a5)
{
  __int16 v5; // ax
  __int64 result; // rax
  volatile CCHAR v10; // al
  volatile CCHAR v11; // al
  volatile CCHAR v12; // al

  v5 = *(_WORD *)&KeNumberProcessorsGroup0[9];
  if ( (v5 & 0x207) != 0 )
  {
    if ( (a4 & 0xC0) != 0 && (v5 & 0x200) != 0 )
      ExpCheckForLookaside(BugCheckParameter3, a3);
    v10 = KeNumberProcessorsGroup0[9];
    if ( (v10 & 1) != 0 )
      KeCheckForTimer(BugCheckParameter3);
    v11 = KeNumberProcessorsGroup0[9];
    if ( (v11 & 4) != 0 )
      ExpCheckForResource(BugCheckParameter3, a3);
    v12 = KeNumberProcessorsGroup0[9];
    if ( (v12 & 2) != 0 )
      ExpCheckForWorker(BugCheckParameter3, a3);
  }
  LODWORD(result) = *(_DWORD *)&KeNumberProcessorsGroup0[9];
  result = (unsigned int)result;
  if ( (result & 0x10) != 0 )
    return VfPtFreePoolNotification(BugCheckParameter3, a2, a3, a5);
  return result;
}
