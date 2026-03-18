/*
 * XREFs of ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1400ED2B0
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DAD6C (W32CalloutDispatchWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CompositionObject::OkToClose(struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *a1)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)a1 + 3);
  if ( *((_BYTE *)a1 + 40) && (unsigned int)PsGetProcessSessionIdEx(*((_QWORD *)a1 + 2)) == -1 )
    return 3221225506LL;
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *))(**(_QWORD **)(v2 + 8) + 32LL))(
             *(_QWORD *)(v2 + 8),
             a1);
}
