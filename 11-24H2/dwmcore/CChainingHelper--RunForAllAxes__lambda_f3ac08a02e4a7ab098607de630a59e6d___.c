/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___ @ 0x1801F77A0
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180014604 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x1801F788C (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___(__int64 a1, __int64 *a2)
{
  int v2; // ebx
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned int TemporaryConfigurationAxis; // eax
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 result; // rax

  v2 = 0;
  v4 = 0LL;
  do
  {
    v5 = *a2;
    LOBYTE(v5) = (*(_BYTE *)(v4 + *a2) & 4) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)v2,
                                   a2,
                                   *(unsigned int *)(v4 + *a2 + 8),
                                   v5);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v7 + 200))(v8 + 72, TemporaryConfigurationAxis, 1LL);
    ++v2;
    v4 += 12LL;
  }
  while ( v2 < 3 );
  return result;
}
