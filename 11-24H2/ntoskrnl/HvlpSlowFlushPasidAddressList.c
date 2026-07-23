/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x140585F34
 * Callers:
 *     HvlFlushPasid @ 0x140491C30 (HvlFlushPasid.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14039E000 (HvlpCopyFlushVaList.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     HvlpFlushPasidAddressSpace @ 0x140491D60 (HvlpFlushPasidAddressSpace.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HvlpSlowFlushPasidAddressList(int a1, int a2, unsigned int a3, void *a4, char a5)
{
  __int64 v5; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int128 v12; // [rsp+28h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v5 = a3;
  v12 = 0LL;
  v13 = 0LL;
  LODWORD(v14) = 0;
  v9 = HvlpAcquireHypercallPage((__int64)&v12, 5, 0LL, 0LL);
  v10 = v9;
  if ( !v9 )
    return HvlpFlushPasidAddressSpace(a1, a2);
  v9[1] = 0LL;
  *((_DWORD *)v9 + 1) = a1;
  *(_DWORD *)v9 = a2;
  if ( a5 )
  {
    memmove(v9 + 2, a4, 8 * v5);
    *((_DWORD *)v10 + 2) |= 1u;
  }
  else
  {
    HvlpCopyFlushVaList(v5, (__int64 *)a4, 0, (__int64)(v9 + 2));
  }
  HvcallInitiateHypercall(161);
  return HvlpReleaseHypercallPage((unsigned int *)&v12);
}
