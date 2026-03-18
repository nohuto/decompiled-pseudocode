/*
 * XREFs of ExpSecurePoolCreate @ 0x140658620
 * Callers:
 *     ExCreatePool @ 0x140653E80 (ExCreatePool.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x140420674 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x140420E2C (RtlpHpMetadataFree.c)
 *     VslSecurePoolCreate @ 0x14058E3FC (VslSecurePoolCreate.c)
 *     VslSecurePoolDestroy @ 0x14058E490 (VslSecurePoolDestroy.c)
 */

__int64 __fastcall ExpSecurePoolCreate(int a1, __int64 a2, ULONG_PTR *a3)
{
  int v5; // ebx
  __int128 v6; // xmm6
  unsigned __int64 v7; // rax
  ULONG_PTR v8; // rdi
  __int64 v9; // rcx
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == 2 && a2 )
  {
    v11 = 0LL;
    *(_WORD *)((char *)&v11 + 1) = 1;
    LOBYTE(v11) = 3;
    v6 = v11;
    v7 = RtlpHpMetadataAlloc(0x10uLL, 0x10uLL, 0, (unsigned __int64 *)&v11);
    v8 = v7;
    if ( v7 )
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_DWORD *)v7 = -1347437123;
      *(_DWORD *)(v7 + 4) = 2;
      v5 = VslSecurePoolCreate(a2, (_QWORD *)(v7 + 8));
      if ( v5 < 0 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( v9 )
          VslSecurePoolDestroy(v9);
        v11 = v6;
        RtlpHpMetadataFree(v8, &v11);
      }
      else
      {
        *a3 = v8;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
