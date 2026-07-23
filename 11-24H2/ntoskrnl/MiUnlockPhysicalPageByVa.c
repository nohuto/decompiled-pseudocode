/*
 * XREFs of MiUnlockPhysicalPageByVa @ 0x14066FD70
 * Callers:
 *     <none>
 * Callees:
 *     MiReleaseWalkLocks @ 0x14020BAF0 (MiReleaseWalkLocks.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiProbeUnlockPage @ 0x140299FB0 (MiProbeUnlockPage.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockPhysicalPageByVa(_QWORD *a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r9
  unsigned __int64 LeafVa; // r10
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned __int64 v17; // r9
  int v18; // esi
  __int64 v19; // rbx
  __int64 v20; // r15
  __int64 v21; // r8
  _QWORD *v22; // r9
  __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+10h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp+20h] BYREF

  v24 = a2;
  v6 = a1[23];
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = 1LL;
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 0x400) != 0 )
    {
      MiReleaseWalkLocks((__int64)a1);
      v23 = (__int64)(a2 << 25) >> 16;
      return 2LL;
    }
    v17 = v7;
    if ( qword_140E2DCC0 )
    {
      if ( (v7 & 0x10) != 0 )
        v17 = v7 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v17 = v7 & ~qword_140E2DCC0;
    }
    v9 = (v17 >> 12) & 0xFFFFFFFFFFLL;
    goto LABEL_18;
  }
  v9 = (v7 >> 12) & 0xFFFFFFFFFFLL;
  if ( a3 < 1 )
  {
LABEL_18:
    v18 = *(_DWORD *)v6 != 0 ? 0x80 : 0;
    if ( v8 )
    {
      v19 = 48 * v9 - 0x220000000000LL;
      v20 = v8;
      do
      {
        LODWORD(v23) = 1;
        BugCheckParameter4 = 0x3FFFFFFFFFLL;
        MiProbeUnlockPage(v19, v18 + 256, (__int64 *)&BugCheckParameter4, (int *)&v23);
        if ( BugCheckParameter4 != 0x3FFFFFFFFFLL )
          MiUnlockPageTableCharges(48 * BugCheckParameter4 - 0x220000000000LL, v23, v21, v22);
        v19 += 48LL;
        --v20;
      }
      while ( v20 );
    }
    *(_QWORD *)(v6 + 8) += v8;
    return 0LL;
  }
  if ( (v7 & 0x80u) != 0LL )
  {
    LeafVa = MiGetLeafVa(a2);
    v11 = LeafVa;
    if ( a1[5] > LeafVa )
      v11 = a1[5];
    v12 = 1LL;
    v13 = v11 >> 12;
    do
    {
      v9 += v12 * (v13 & 0x1FF);
      v13 >>= 9;
      v12 <<= 9;
      --a3;
    }
    while ( a3 );
    v14 = LeafVa + (v12 << 12);
    v15 = a1[6] + 1LL - v11;
    if ( a1[6] + 1LL >= v14 )
      v15 = v14 - v11;
    v8 = v15 >> 12;
    goto LABEL_18;
  }
  return 0LL;
}
