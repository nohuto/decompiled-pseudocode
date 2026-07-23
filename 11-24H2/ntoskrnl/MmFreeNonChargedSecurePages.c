/*
 * XREFs of MmFreeNonChargedSecurePages @ 0x140433BCC
 * Callers:
 *     PspIumFreePartitionPages @ 0x14043310C (PspIumFreePartitionPages.c)
 *     PspIumAllocatePartitionState @ 0x1405E37E8 (PspIumAllocatePartitionState.c)
 *     PspIumFreePartitionState @ 0x1405E3D04 (PspIumFreePartitionState.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiPartitionObjectToPartition @ 0x1403945BC (MiPartitionObjectToPartition.c)
 *     MiFreeSecureKernelPage @ 0x140433D48 (MiFreeSecureKernelPage.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall MmFreeNonChargedSecurePages(ULONG **BugCheckParameter2, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned __int64 v4; // rdi
  ULONG *v8; // rbx
  _QWORD *v9; // r15
  _BYTE v10[4]; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v11; // [rsp+44h] [rbp-BCh] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v13; // [rsp+58h] [rbp-A8h]
  __int16 v14; // [rsp+5Ah] [rbp-A6h]
  __int64 v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]

  v4 = a3;
  v10[0] = 0;
  memset_0(&BugCheckParameter2a, 0, 0xB0uLL);
  LODWORD(v11) = 0;
  v8 = MiPartitionObjectToPartition(BugCheckParameter2, 1, v10);
  KeGetCurrentIrql();
  v9 = &a4[v4];
  while ( a4 < v9 )
  {
    MiFreeSecureKernelPage(*a4, v8, 0LL, &BugCheckParameter2a, &v11);
    if ( !a2 && _InterlockedDecrement64((volatile signed __int64 *)v8 + 54) < 0 )
      KeBugCheckEx(0x1Au, 0x42403uLL, (ULONG_PTR)v8, 0LL, 0LL);
    ++a4;
  }
  if ( (_DWORD)v11 )
  {
    BugCheckParameter2a = 0LL;
    v15 = 0LL;
    v17 = 0;
    v16 = (_DWORD)v11 << 12;
    v14 = 2;
    v13 = 8 * (v11 + 6);
    MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2a, 0, 0, 0);
  }
  if ( a2 )
    MiReleaseNonPagedResources((__int64)v8, v4);
  if ( v10[0] )
    PsDereferencePartition(*((_QWORD *)v8 + 23));
}
