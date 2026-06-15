/*
 * XREFs of _lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator() @ 0x180129660
 * Callers:
 *     ?PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ @ 0x18012D76C (-PublishProcessingModeTelemetry@EffectPack@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_7e2fae5cc5bdf6b522954fc2836cce6e_::operator()(__int64 *a1, int a2, _QWORD *a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r11d
  __int64 v6; // r10
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx

  v4 = *a1;
  v5 = 0;
  v6 = a2;
  v9 = *(unsigned __int16 *)(*a1 + 2LL * a2);
  if ( *(_WORD *)(*a1 + 2LL * a2) )
  {
    v10 = a1[1];
    v11 = 20LL * a2;
    while ( 1 )
    {
      if ( *(_QWORD *)(v10 + 20 * (v11 + v5)) == *a3 )
      {
        result = *(_QWORD *)(v10 + 20 * (v11 + v5) + 8);
        if ( result == a3[1] )
          break;
      }
      if ( ++v5 >= (unsigned int)v9 )
        goto LABEL_6;
    }
    *(_DWORD *)(v10 + 20 * (v11 + v5) + 16) |= a4;
  }
  else
  {
LABEL_6:
    result = a2;
    v13 = 20LL * a2;
    if ( (unsigned int)v9 < 0x14 )
    {
      v14 = a1[1];
      *(_OWORD *)(v14 + 20 * (v13 + v9)) = *(_OWORD *)a3;
      result = 5 * (v13 + *(unsigned __int16 *)(v4 + 2 * v6));
      *(_DWORD *)(v14 + 20 * (v13 + (unsigned __int16)(*(_WORD *)(v4 + 2 * v6))++) + 16) = a4;
    }
  }
  return result;
}
