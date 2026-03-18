/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x14007E370
 * Callers:
 *     xxxSetClassData @ 0x14007D32C (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x14007E01C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ClassUnlock @ 0x14007E328 (ClassUnlock.c)
 * Callees:
 *     DestroyClass @ 0x1400B4778 (DestroyClass.c)
 */

struct tagCLS *__fastcall ClassUnlockWorker(struct tagCLS *a1)
{
  __int64 v1; // rax
  struct tagCLS **v3; // rbx
  struct tagCLS *i; // rdx
  __int64 CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 18);
  v1 = *((_QWORD *)a1 + 7);
  if ( a1 == (struct tagCLS *)v1 )
    return a1;
  --*(_DWORD *)(v1 + 72);
  if ( *((_DWORD *)a1 + 18) )
    return a1;
  v3 = (struct tagCLS **)(*((_QWORD *)a1 + 7) + 64LL);
  for ( i = *v3; i != a1; i = *(struct tagCLS **)i )
    v3 = (struct tagCLS **)i;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  DestroyClass(CurrentProcessWin32Process, v3);
  return 0LL;
}
