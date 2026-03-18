/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1401ED1F0
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1401ED0FC (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     vMakeInactiveHelper @ 0x14030CC74 (vMakeInactiveHelper.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(int a1, struct PFF *a2)
{
  struct PFF *result; // rax
  char *v4; // r14
  __int64 *i; // rbx
  unsigned int j; // esi
  __int64 *v7; // rcx
  unsigned int k; // ecx
  __int64 v9; // rax
  struct PFF *v10; // rdi

  for ( result = SkipInvalidPff(a2); ; result = SkipInvalidPff(*((struct PFF **)v10 + 1)) )
  {
    v10 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v4 = (char *)result + 72;
      for ( i = (__int64 *)*((_QWORD *)result + 9); i != (__int64 *)v4; i = (__int64 *)*i )
      {
        if ( i[30] )
          vMakeInactiveHelper();
        if ( i[31] )
          vMakeInactiveHelper();
        if ( i[32] )
          vMakeInactiveHelper();
        if ( a1 && i[33] )
        {
          for ( j = 0; j < *((_DWORD *)i + 90); ++j )
          {
            if ( *(_QWORD *)(i[33] + 8LL * j) )
              vMakeInactiveHelper();
          }
          v7 = (__int64 *)i[33];
          if ( v7 != i + 34 )
            Win32FreePool(v7);
          *(__int64 *)((char *)i + 356) = 0LL;
          i[33] = 0LL;
          *((_DWORD *)i + 88) = 0;
        }
        *((_DWORD *)i + 58) = 0;
      }
      if ( a1 )
      {
        for ( k = 0; k < *((_DWORD *)v10 + 54); ++k )
        {
          v9 = *((_QWORD *)v10 + k + 28);
          if ( *(_QWORD *)(v9 + 120) )
            *(_QWORD *)(v9 + 120) = 0LL;
        }
      }
    }
  }
  return result;
}
