/*
 * XREFs of MiFreePhysicalPageChain @ 0x140266C0C
 * Callers:
 *     MiDeleteVaFinal @ 0x140266630 (MiDeleteVaFinal.c)
 *     NtFreeUserPhysicalPages @ 0x1407FA340 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FAB20 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     MiGetAweInfoPartition @ 0x140266FBC (MiGetAweInfoPartition.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiGetLeafPfnBuddy @ 0x14042D1D0 (MiGetLeafPfnBuddy.c)
 *     MiFreeContiguousLargePageRun @ 0x1406833D4 (MiFreeContiguousLargePageRun.c)
 *     MiFreePhysicalRange @ 0x140683670 (MiFreePhysicalRange.c)
 *     MiReadyLargeAwePageForFree @ 0x140683BF8 (MiReadyLargeAwePageForFree.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiReturnProcessPhysicalPages @ 0x140A9CFC8 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiFreePhysicalPageChain(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // r13
  unsigned __int64 v4; // rbx
  __int64 v5; // r12
  unsigned int v6; // r14d
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // r15
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned __int64 v29; // r8
  __int64 v30; // [rsp+20h] [rbp-E0h]
  __int64 v31; // [rsp+20h] [rbp-E0h]
  __int64 LeafPfnBuddy; // [rsp+30h] [rbp-D0h]
  __int64 v34; // [rsp+30h] [rbp-D0h]
  __int64 v35; // [rsp+38h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  _BYTE v40[4096]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (_QWORD *)*a2;
  v3 = a1;
  memset_0(&BugCheckParameter2, 0, 0x1030uLL);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  result = MiGetAweInfoPartition(v3);
  v8 = *(unsigned int *)(v3 + 8);
  v9 = *(_QWORD *)(v3 + 16);
  v35 = result;
  v30 = v9;
  if ( (v8 & 8) != 0 )
  {
    if ( v2 )
    {
      v10 = ((__int64)v2 - qword_140E30100) >> 3;
      if ( (v10 & 0x3FFFFF) != 0 )
      {
        do
        {
          v10 &= 0x3FFFFFuLL;
          v11 = *(_QWORD *)(qword_140E30100 + 8 * v10) >> 17;
          v4 = v11 ^ (v11 ^ v4) & 0xFFFFFFFFFFC00000uLL;
          result = MiFreePhysicalRange(v8, v9 * v10);
          LODWORD(v10) = v4;
        }
        while ( (v11 & 0x3FFFFF) != 0 );
      }
    }
    return result;
  }
  if ( v9 != 1 )
  {
    v12 = -1LL;
    v31 = 0LL;
    v13 = 0LL;
    if ( !v2 )
      return result;
    while ( 1 )
    {
      LeafPfnBuddy = MiGetLeafPfnBuddy(v2, 0LL, 0xFFFFDE0000000000uLL, 0xAAAAAAAAAAAAAAABuLL);
      v5 += v9;
      v16 = v15 * (((__int64)v2 - v14) >> 4);
      MiReadyLargeAwePageForFree(v2);
      v17 = qword_140E300C8;
      v18 = (v2[5] >> 43) & 0x3FFLL;
      if ( v12 == -1 )
        goto LABEL_15;
      if ( *((_QWORD *)qword_140E300C8 + v18) != v31 )
        goto LABEL_14;
      if ( v13 + v12 != v16 )
        break;
      v13 += v9;
LABEL_17:
      result = LeafPfnBuddy;
      v2 = (_QWORD *)LeafPfnBuddy;
      if ( !LeafPfnBuddy )
      {
        if ( v13 )
        {
          v19 = v12;
          v3 = a1;
          result = MiFreeContiguousLargePageRun(a1, v19, v13);
        }
        else
        {
          v3 = a1;
        }
        goto LABEL_28;
      }
    }
    if ( v9 + v16 == v12 )
    {
      v13 += v9;
    }
    else
    {
LABEL_14:
      MiFreeContiguousLargePageRun(a1, v12, v13);
      v17 = qword_140E300C8;
      v18 = (v2[5] >> 43) & 0x3FFLL;
LABEL_15:
      v13 = v9;
      v31 = v17[v18];
    }
    v12 = v16;
    goto LABEL_17;
  }
  if ( v2 )
  {
    v20 = (__int64 *)v40;
    do
    {
      v21 = MiGetLeafPfnBuddy(v2, 0LL, 0xFFFFDE0000000000uLL, 0xAAAAAAAAAAAAAAABuLL);
      v34 = v23 * (((__int64)v2 - v22) >> 4);
      v24 = MiLockPageInline(v2);
      v25 = v2[3];
      v26 = v25 + 1;
      v27 = v25 ^ (v25 + 1);
      LOBYTE(v25) = v24;
      v2[3] = v26 ^ v27 & 0xC000000000000000uLL;
      v2[2] = 0LL;
      MiUnlockPage(v2, v25);
      if ( v6 == 512 )
      {
        BugCheckParameter2 = 0LL;
        v37 = 135216;
        v38 = 0LL;
        v39 = 0x200000LL;
        MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0, 0, v3);
        v5 += 512LL;
        v20 = (__int64 *)v40;
        v6 = 0;
      }
      result = v34;
      ++v6;
      *v20 = v34;
      v2 = (_QWORD *)v21;
      ++v20;
    }
    while ( v21 );
    v9 = v30;
    if ( v6 )
    {
      BugCheckParameter2 = 0LL;
      v39 = v6 << 12;
      v38 = 0LL;
      LOWORD(v37) = 8 * (v6 + 6);
      HIWORD(v37) = 2;
      MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0, 0, v3);
      result = v6;
      v5 += v6;
    }
LABEL_28:
    if ( v5 )
    {
      v28 = v35;
      v29 = -v5;
      _InterlockedAdd64((volatile signed __int64 *)(v35 + 19624), -v5);
      result = *(unsigned int *)(v3 + 8);
      if ( (result & 1) != 0 )
      {
        result = MiReturnProcessPhysicalPages(KeGetCurrentThread()->ApcState.Process, v5);
        v28 = v35;
      }
      if ( v9 != 1 )
        _InterlockedAdd64((volatile signed __int64 *)(v28 + 19648), v29);
    }
  }
  return result;
}
