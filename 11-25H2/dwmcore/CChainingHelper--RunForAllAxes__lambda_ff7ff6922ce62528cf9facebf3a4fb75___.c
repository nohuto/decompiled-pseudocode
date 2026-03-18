/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___ @ 0x18003DC5C
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x18003BA34 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x18003DCD0 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___(__int64 a1, __int64 *a2)
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
    LOBYTE(v5) = (*(_BYTE *)(v4 + *a2) & 2) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)v2,
                                   a2,
                                   *(unsigned int *)(v4 + *a2 + 4),
                                   v5);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v7 + 200))(v8 + 72, TemporaryConfigurationAxis, 0LL);
    ++v2;
    v4 += 12LL;
  }
  while ( v2 < 3 );
  return result;
}
