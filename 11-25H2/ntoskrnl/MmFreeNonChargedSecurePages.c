/*
 * XREFs of MmFreeNonChargedSecurePages @ 0x140413B08
 * Callers:
 *     PspIumFreePartitionPages @ 0x140411C58 (PspIumFreePartitionPages.c)
 *     PspIumAllocatePartitionState @ 0x1405DA068 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x1405DA584 (PspIumFreePartitionState.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     PsDereferencePartition @ 0x140302710 (PsDereferencePartition.c)
 *     MiFreePagesFromMdl @ 0x14038CC40 (MiFreePagesFromMdl.c)
 *     MiFreeSecureKernelPage @ 0x140413C84 (MiFreeSecureKernelPage.c)
 *     MiPartitionObjectToPartition @ 0x1404156EC (MiPartitionObjectToPartition.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall MmFreeNonChargedSecurePages(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // r15
  ULONG_PTR v10; // [rsp+44h] [rbp-BCh] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v12; // [rsp+58h] [rbp-A8h]
  __int16 v13; // [rsp+5Ah] [rbp-A6h]
  __int64 v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+7Ch] [rbp-84h]

  v4 = a3;
  memset_0(&BugCheckParameter2a, 0, 0xB0uLL);
  LODWORD(v10) = 0;
  v8 = MiPartitionObjectToPartition(BugCheckParameter2);
  KeGetCurrentIrql();
  v9 = &a4[v4];
  while ( a4 < v9 )
  {
    MiFreeSecureKernelPage(*a4, v8, 0LL, &BugCheckParameter2a, &v10);
    if ( !a2 && _InterlockedDecrement64((volatile signed __int64 *)(v8 + 432)) < 0 )
      KeBugCheckEx(0x1Au, 0x42403uLL, v8, 0LL, 0LL);
    ++a4;
  }
  if ( (_DWORD)v10 )
  {
    BugCheckParameter2a = 0LL;
    v14 = 0LL;
    v16 = 0;
    v15 = (_DWORD)v10 << 12;
    v13 = 2;
    v12 = 8 * (v10 + 6);
    MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2a, 0, 0, 0);
  }
  if ( a2 )
    MiReleaseNonPagedResources(v8, v4);
}
