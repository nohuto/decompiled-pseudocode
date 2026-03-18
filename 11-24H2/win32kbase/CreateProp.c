/*
 * XREFs of CreateProp @ 0x14004135C
 * Callers:
 *     RealInternalSetProp @ 0x140168EA0 (RealInternalSetProp.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x140042B50 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char *__fastcall CreateProp(const void **a1)
{
  unsigned int *v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  int v5; // ecx
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  _DWORD *v9; // rax

  LockRefactorStagingAssertOwned((const struct tagObjLock *)a1);
  v2 = (unsigned int *)a1[3];
  if ( v2 )
  {
    v3 = *v2;
    if ( v2[1] != (_DWORD)v3 )
    {
LABEL_3:
      v4 = a1[3];
      v5 = v4[1];
      v4[1] = v5 + 1;
      return (char *)&v4[4 * v5 + 2];
    }
    v7 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 16 * v3 + 24, 0x79707355u);
    v8 = v7;
    if ( v7 )
    {
      memmove(v7, a1[3], 16LL * (unsigned int)(*(_DWORD *)a1[3] - 1) + 24);
      GreDeleteFastMutex((char *)a1[3]);
      a1[3] = v8;
      ++*v8;
      goto LABEL_3;
    }
  }
  else
  {
    v9 = (_DWORD *)Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x79707355u);
    a1[3] = v9;
    if ( v9 )
    {
      *v9 = 1;
      goto LABEL_3;
    }
  }
  return 0LL;
}
