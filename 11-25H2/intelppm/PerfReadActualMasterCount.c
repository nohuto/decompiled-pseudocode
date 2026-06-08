/*
 * XREFs of PerfReadActualMasterCount @ 0x140004B00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PerfReadActualMasterCount(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  void (__fastcall *v4)(_QWORD, __int64, __int64 *, __int64 *); // rax
  char v7; // di
  __int64 result; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = (void (__fastcall *)(_QWORD, __int64, __int64 *, __int64 *))a1[6];
  v11 = 0LL;
  v10 = 0LL;
  v7 = a2;
  LOBYTE(a2) = 1;
  v4(a1[7], a2, &v10, &v11);
  if ( !v7 )
  {
    a1[3] += v10;
    a1[2] += v11;
  }
  *a3 = a1[3];
  result = a1[2];
  *a4 = result;
  return result;
}
