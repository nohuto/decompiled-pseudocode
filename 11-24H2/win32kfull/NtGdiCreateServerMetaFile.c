/*
 * XREFs of NtGdiCreateServerMetaFile @ 0x14030FC00
 * Callers:
 *     <none>
 * Callees:
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001FD60 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiCreateServerMetaFile(int a1, __int64 a2, const void *a3, int a4, int a5, int a6)
{
  unsigned __int64 v8; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  OBJECT *v13; // rbx

  v8 = (unsigned int)a2;
  v10 = 0LL;
  if ( a1 != 1480934989 && a1 != 1599096397
    || !a3
    || (unsigned int)a2 > 0xFFFFFFCF
    || (unsigned __int64)(unsigned int)a2 + 48 > 0x2710000 )
  {
    return 0LL;
  }
  v11 = (unsigned int)(a2 + 48);
  LOBYTE(a2) = 21;
  v12 = HmgAlloc(v11, a2, 9LL);
  v13 = (OBJECT *)v12;
  if ( v12 )
  {
    v10 = *(_QWORD *)v12;
    *(_DWORD *)(v12 + 24) = a1;
    *(_DWORD *)(v12 + 28) = a4;
    *(_DWORD *)(v12 + 32) = a5;
    *(_DWORD *)(v12 + 36) = a6;
    *(_DWORD *)(v12 + 40) = v8;
    if ( (_DWORD)v8 )
      GreProbeAndReadFromUntrustedVa((void *)(v12 + 44), v8, a3, v8, 1uLL);
    if ( v10 )
      OBJECT::InterlockedDecrementExclusiveLockCount(v13);
    else
      HmgFree(*(_QWORD *)v13);
  }
  return v10;
}
