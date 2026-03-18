/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___ @ 0x180248D8C
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180014604 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x1801F788C (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___()
{
  int i; // ebx
  unsigned int TemporaryConfigurationAxis; // eax
  _BYTE *v2; // r9
  __int64 v3; // r11
  __int64 v4; // r10
  int v5; // r8d
  __int64 result; // rax

  for ( i = 0; i < 3; ++i )
  {
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(i);
    LOBYTE(v2) = *v2;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, int))(v4 + 200))(
               v3 + 72,
               TemporaryConfigurationAxis,
               0LL,
               v2,
               v5);
  }
  return result;
}
