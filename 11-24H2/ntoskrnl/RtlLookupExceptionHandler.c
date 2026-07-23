/*
 * XREFs of RtlLookupExceptionHandler @ 0x1405E5E28
 * Callers:
 *     RtlDispatchException @ 0x140231750 (RtlDispatchException.c)
 *     KiLockServiceTable @ 0x1406964A8 (KiLockServiceTable.c)
 *     KiFatalExceptionFilter @ 0x140C5E818 (KiFatalExceptionFilter.c)
 * Callees:
 *     RtlpLookupPrimaryFunctionEntry @ 0x14047EFD0 (RtlpLookupPrimaryFunctionEntry.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlLookupExceptionHandler(
        _BYTE *a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  _BYTE *v8; // r9
  int v9; // eax
  __int64 v10; // rdx

  v8 = (_BYTE *)(a2 + *((unsigned int *)RtlpLookupPrimaryFunctionEntry(a1, a2, a2 + *(unsigned int *)a1) + 2));
  if ( a2 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)v8 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( ((*v8 >> 3) & a3) != 0 )
  {
    v9 = (unsigned __int8)v8[2];
    v10 = (unsigned int)(v9 + 1);
    if ( (v9 & 1) == 0 )
      v10 = (unsigned __int8)v8[2];
    if ( a6 )
      *a6 = &v8[2 * (unsigned int)(v10 + 2) + 4];
    if ( a5 )
      *a5 = a2 + *(unsigned int *)&v8[2 * v10 + 4];
  }
  return 0LL;
}
