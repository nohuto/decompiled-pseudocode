/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x140158344
 * Callers:
 *     InputInitialize @ 0x140218A5C (InputInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsGetInputSensorThreadingModelSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5344LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
