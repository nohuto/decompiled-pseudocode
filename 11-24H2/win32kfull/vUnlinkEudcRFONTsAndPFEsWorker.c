/*
 * XREFs of vUnlinkEudcRFONTsAndPFEsWorker @ 0x14030D168
 * Callers:
 *     vUnlinkEudcRFONTsAndPFEs @ 0x14030D064 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     vMakeInactiveHelper @ 0x14030CC74 (vMakeInactiveHelper.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030DCEC (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vUnlinkEudcRFONTsAndPFEsWorker(_QWORD *a1, __int64 a2, struct PFF *a3)
{
  char *v6; // rsi
  char *i; // rbx
  unsigned int v8; // edx
  int v9; // ebp
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rax
  struct PFF *result; // rax
  struct PFF *v17; // rdi

  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v17 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 13) & 8) != 0 )
      goto LABEL_23;
    v6 = (char *)result + 72;
    for ( i = (char *)*((_QWORD *)result + 9); ; i = *(char **)i )
    {
      v13 = 0LL;
      if ( i == v6 )
        break;
      v8 = *((_DWORD *)i + 90);
      v9 = 1;
      if ( !v8 )
        goto LABEL_12;
      v10 = *((_QWORD *)i + 33);
      while ( 1 )
      {
        v11 = *(_QWORD *)(v10 + 8 * v13);
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 120);
          v9 = 0;
          if ( v12 == *a1 || v12 == a1[1] )
            break;
        }
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= v8 )
          goto LABEL_12;
      }
      vMakeInactiveHelper((struct _LIST_ENTRY **)(v10 + 8 * v13));
      if ( *(_QWORD *)(*((_QWORD *)i - 46) + 120LL) != a2 )
      {
LABEL_12:
        if ( !*((_QWORD *)i + 33) || !v9 )
          goto LABEL_17;
      }
      v14 = (__int64 *)*((_QWORD *)i + 33);
      if ( v14 != (__int64 *)(i + 272) )
        Win32FreePool(v14);
      *((_QWORD *)i + 33) = 0LL;
      *((_DWORD *)i + 90) = 0;
      *((_DWORD *)i + 88) = 0;
      *((_DWORD *)i + 89) = 0;
LABEL_17:
      *((_DWORD *)i + 58) = 0;
    }
    if ( *((_DWORD *)v17 + 54) )
    {
      do
      {
        v15 = *((_QWORD *)v17 + v13 + 28);
        if ( *(_QWORD *)(v15 + 120) == a2 )
          *(_QWORD *)(v15 + 120) = 0LL;
        v13 = (unsigned int)(v13 + 1);
      }
      while ( (unsigned int)v13 < *((_DWORD *)v17 + 54) );
    }
LABEL_23:
    a3 = (struct PFF *)*((_QWORD *)v17 + 1);
  }
}
