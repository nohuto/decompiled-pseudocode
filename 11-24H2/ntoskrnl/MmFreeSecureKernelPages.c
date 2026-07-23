/*
 * XREFs of MmFreeSecureKernelPages @ 0x1404331CC
 * Callers:
 *     PspIumFreePhysicalPages @ 0x140432FA8 (PspIumFreePhysicalPages.c)
 *     PspIumAllocatePhysicalPages @ 0x1405E39B4 (PspIumAllocatePhysicalPages.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MiFreeSecureKernelPage @ 0x140433D48 (MiFreeSecureKernelPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall MmFreeSecureKernelPages(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v6; // r12
  char result; // al
  _DWORD v8[4]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v10; // [rsp+58h] [rbp-A8h]
  __int16 v11; // [rsp+5Ah] [rbp-A6h]
  __int64 v12; // [rsp+70h] [rbp-90h]
  int v13; // [rsp+78h] [rbp-88h]
  int v14; // [rsp+7Ch] [rbp-84h]

  memset_0(&BugCheckParameter2, 0, 0xB0uLL);
  v4 = (_QWORD *)(a1 + 48);
  v5 = a1 + 48 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 40) >> 12);
  v6 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48LL * *(_QWORD *)(a1 + 48) - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
  result = KeGetCurrentIrql();
  v8[0] = 0;
  if ( a1 + 48 < v5 )
  {
    do
      result = MiFreeSecureKernelPage(*v4++, v6, a2, &BugCheckParameter2, v8);
    while ( (unsigned __int64)v4 < v5 );
    if ( v8[0] )
    {
      BugCheckParameter2 = 0LL;
      v12 = 0LL;
      v14 = 0;
      v13 = v8[0] << 12;
      v10 = 8 * (LOWORD(v8[0]) + 6);
      v11 = 2;
      result = MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0, 0, 0);
    }
  }
  *(_WORD *)(a1 + 10) &= ~2u;
  return result;
}
