/*
 * XREFs of KiAttemptFastRemoveQueue @ 0x140409130
 * Callers:
 *     KeRemoveQueueEx @ 0x1402D4100 (KeRemoveQueueEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall KiAttemptFastRemoveQueue(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3)
{
  __int64 **v3; // r9
  __int64 result; // rax
  __int64 *v6; // rdx
  __int64 v9; // r8
  __int64 **v10; // rcx
  __int64 v11; // rcx

  v3 = (__int64 **)(BugCheckParameter2 + 24);
  LODWORD(result) = 0;
  v6 = *(__int64 **)(BugCheckParameter2 + 24);
  do
  {
    --*(_DWORD *)(BugCheckParameter2 + 4);
    v9 = *v6;
    if ( !*v6 )
      KeBugCheckEx(0x96u, (ULONG_PTR)v6, BugCheckParameter2, ExWorkerQueue, v6[2]);
    if ( *(__int64 **)(v9 + 8) != v6 || (v10 = (__int64 **)v6[1], *v10 != v6) )
      __fastfail(3u);
    *v10 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v10;
    v11 = (unsigned int)result;
    result = (unsigned int)(result + 1);
    *v6 = 0LL;
    *(_QWORD *)(a2 + 8 * v11) = v6;
    v6 = *v3;
  }
  while ( *v3 != (__int64 *)v3 && (unsigned int)result < a3 );
  return result;
}
