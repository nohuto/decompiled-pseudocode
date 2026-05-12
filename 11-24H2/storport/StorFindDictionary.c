/*
 * XREFs of StorFindDictionary @ 0x1400304A0
 * Callers:
 *     NvmeControllerGetNamespace @ 0x1400EEC74 (NvmeControllerGetNamespace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorFindDictionary(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 (__fastcall *v3)(_QWORD *); // r14
  __int64 (__fastcall *v4)(__int64, __int64); // r15
  _QWORD **v7; // rdi
  _QWORD *i; // rbx
  __int64 v9; // rax
  __int64 result; // rax

  v3 = *(__int64 (__fastcall **)(_QWORD *))(a1 + 24);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 32);
  v7 = (_QWORD **)(*(_QWORD *)(a1 + 16)
                 + 16LL * ((*(unsigned int (__fastcall **)(__int64))(a1 + 40))(a2) % *(_DWORD *)(a1 + 4)));
  for ( i = *v7; ; i = (_QWORD *)*i )
  {
    if ( i == v7 )
      return 3221226021LL;
    v9 = v3(i);
    result = v4(v9, a2);
    if ( !(_DWORD)result )
    {
      if ( a3 )
        *a3 = i;
      return result;
    }
    if ( (int)result < 0 )
      break;
  }
  result = 3221226021LL;
  if ( a3 )
    *a3 = 0LL;
  return result;
}
