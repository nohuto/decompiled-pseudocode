/*
 * XREFs of RtlpHpEnvAllocVA @ 0x14034C090
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x1402197E0 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrAllocAligned @ 0x14021BB5C (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpAllocVA @ 0x14034AEE8 (RtlpHpAllocVA.c)
 *     RtlpHpVaMgrRangeCommit @ 0x140603268 (RtlpHpVaMgrRangeCommit.c)
 *     RtlCSparseBitmapStart @ 0x140604674 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14020C540 (MmFreePoolMemory.c)
 *     RtlpHpEnvFreeVA @ 0x14020C9AC (RtlpHpEnvFreeVA.c)
 *     MiReservePoolMemory @ 0x14026C688 (MiReservePoolMemory.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiGetPoolPages @ 0x14034B598 (MiGetPoolPages.c)
 *     MiGetLargePoolPages @ 0x14034B858 (MiGetLargePoolPages.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiCommitPoolMemory @ 0x14034C650 (MiCommitPoolMemory.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MmKasanCommitRegion @ 0x14067AD88 (MmKasanCommitRegion.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        ULONG_PTR *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        ULONG_PTR a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  __int64 v9; // r12
  unsigned __int64 v12; // rcx
  int v13; // edx
  unsigned __int64 v14; // rdi
  ULONG_PTR BugCheckParameter4; // r15
  unsigned __int64 v16; // r14
  ULONG_PTR v17; // r13
  unsigned int v18; // ebx
  ULONG_PTR v19; // r8
  int v20; // ebx
  unsigned __int8 CurrentIrql; // al
  unsigned int ProtectionMask; // eax
  ULONG_PTR v23; // r8
  unsigned __int64 v24; // r9
  int v25; // ecx
  __int16 v26; // ax
  unsigned __int16 *v27; // rcx
  __int16 v28; // ax
  int v29; // r14d
  int v30; // ebx
  int LargePoolPages; // eax
  __int64 v33; // rax
  ULONG_PTR v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  bool v37; // zf
  int v38; // eax
  ULONG_PTR v39; // rdx
  unsigned __int64 v40; // rdi
  signed __int64 v41; // [rsp+30h] [rbp-89h] BYREF
  __int64 v42; // [rsp+38h] [rbp-81h] BYREF
  __int64 v43; // [rsp+40h] [rbp-79h]
  _QWORD v44[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v45; // [rsp+60h] [rbp-59h]
  __int64 v46; // [rsp+70h] [rbp-49h]
  __int64 v47; // [rsp+78h] [rbp-41h]
  __int64 v48; // [rsp+80h] [rbp-39h]
  __int64 v49; // [rsp+88h] [rbp-31h]
  __int64 v50; // [rsp+90h] [rbp-29h]
  void *v51; // [rsp+98h] [rbp-21h]
  unsigned __int64 v52; // [rsp+A0h] [rbp-19h]
  __int64 v53; // [rsp+A8h] [rbp-11h]
  unsigned int v54; // [rsp+B0h] [rbp-9h]
  __int16 v55; // [rsp+B4h] [rbp-5h]
  unsigned __int8 v56; // [rsp+B6h] [rbp-3h]
  ULONG_PTR v59; // [rsp+110h] [rbp+57h] BYREF

  v9 = *a2;
  v12 = 1LL;
  if ( a3 )
    v12 = a3;
  v13 = 3;
  v41 = v12;
  if ( (a4 & 0x20001000) != 0x20001000 )
    v13 = a7;
  if ( (a4 & 0x2000) != 0 )
  {
    v9 = v9 - (((_DWORD)v9 - 1) & 0x1FFFFF) + 0x1FFFFF;
    v42 = v9;
    v14 = v9;
    a8 = v9;
    if ( v12 > 0x200000 )
    {
      v14 = v9 + v12;
      a8 = v9 + v12;
    }
  }
  else
  {
    v42 = v9;
    v14 = v9;
    a8 = v9;
  }
  BugCheckParameter4 = (unsigned int)a5;
  v16 = 64LL;
  if ( !v13 )
    v16 = 256LL;
  if ( (a5 & 0x60) != 0 && v13 )
    v16 = 128LL;
  v17 = *a1;
  v18 = a9;
  v59 = *a1;
  LODWORD(a5) = a9 + 1;
  memset_0(v44, 0, 0x68uLL);
  if ( v18 == -1 || v18 + 1 > (unsigned __int16)KeNumberNodes )
    return (unsigned int)-1073741583;
  v54 = v18;
  v19 = v17;
  a7 = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 )
  {
    v33 = MiReservePoolMemory(0LL, (v16 >> 8) & 1 | 4, v14, v18);
    v17 = v33;
    v19 = v33;
    if ( !v33 )
      return (unsigned int)-1073741801;
    v59 = v33;
  }
  v20 = 0;
  if ( (a4 & 0x1000) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v56 = CurrentIrql;
    v44[0] = v17;
    v48 = 0LL;
    v52 = (((v19 + v14 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v53 = 0LL;
    v49 = 0LL;
    v44[1] = ((__int64)((((v19 + v14 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((v19 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
    v47 = 0LL;
    ProtectionMask = MiMakeProtectionMask((unsigned int)BugCheckParameter4, 0xFFFFF68000000000uLL, v19);
    if ( ProtectionMask > 0x18 || (v25 = 16777298, !_bittest(&v25, ProtectionMask)) )
      KeBugCheckEx(0x1Au, 0x5300uLL, v23, v14, BugCheckParameter4);
    v26 = 8 * (ProtectionMask & 0x1F);
    v55 = v26;
    if ( (a4 & 0x40000000) != 0 )
    {
      v26 |= 0x200u;
      v55 = v26;
    }
    v50 = 4LL;
    v46 = 0LL;
    v27 = (unsigned __int16 *)&unk_140E384C0;
    v51 = &unk_140E384C0;
    v45 = 0LL;
    if ( (v16 & 0x100) != 0 )
    {
      v27 = (unsigned __int16 *)&unk_140E38100;
      LODWORD(v50) = 5;
      v51 = &unk_140E38100;
      v28 = v26 | 2;
    }
    else
    {
      if ( (a4 & 0x20000000) == 0 )
        goto LABEL_21;
      v28 = v26 | 4;
    }
    v55 = v28;
LABEL_21:
    if ( (v55 & 2) != 0 )
    {
      v20 = -1073741670;
      if ( (unsigned int)MiChargeCommit(*((_QWORD *)qword_140E300C8 + v27[87]), v24, 1) )
        v20 = 0;
    }
    else
    {
      if ( (v55 & 4) != 0 )
        LargePoolPages = MiGetLargePoolPages((__int64)v44);
      else
        LargePoolPages = MiGetPoolPages((__int64)v44);
      v20 = LargePoolPages;
    }
    if ( v20 < 0 || (v20 = MiCommitPoolMemory(v44), v20 < 0) )
    {
      if ( a7 )
      {
        v59 = v17;
        MmFreePoolMemory(&v59, &a8);
      }
      v17 = 0LL;
      v59 = 0LL;
    }
    v14 = (v14 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  v29 = v20;
  if ( v20 >= 0 )
  {
    if ( (a4 & 0x2000) == 0 )
      goto LABEL_29;
    v34 = v17;
    v17 = -v41 & (v17 + v41 - 1);
    v59 = v17;
    v35 = v17 - v34;
    if ( v17 != v34 )
    {
      v36 = v35 - ((v34 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL);
      v41 = (v34 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      v37 = v34 + v36 == 0;
      v35 = v34 + v36;
      v43 = v35;
      a8 = v35;
      if ( v37 )
      {
        v29 = 0;
      }
      else
      {
        v38 = MmFreePoolMemory((ULONG_PTR *)&v41, &a8);
        v35 = v43;
        v29 = v38;
      }
    }
    v39 = v9 + v17;
    v40 = v14 - v35 - v9;
    if ( v40 )
    {
      v30 = 0x8000;
      v41 = (v39 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      a8 = v39 - v41 + v40;
      if ( a8 )
        v29 = MmFreePoolMemory((ULONG_PTR *)&v41, &a8);
      else
        v29 = 0;
    }
    else
    {
LABEL_29:
      v30 = 0x8000;
    }
    if ( (a4 & 0x1000) == 0 )
      goto LABEL_34;
    if ( !byte_140FCECA8 || !v9 )
    {
      v29 = 0;
LABEL_34:
      *a1 = v17;
      *a2 = v9;
      return (unsigned int)v29;
    }
    if ( v17 >= 0xFFFF800000000000uLL )
    {
      if ( v9 + v17 >= v17 )
      {
        if ( (unsigned int)a5 <= (unsigned __int16)KeNumberNodes )
        {
          v29 = MmKasanCommitRegion(
                  KasaniShadow + ((v17 + 0x800000000000LL) >> 3),
                  KasaniShadow + ((v9 + v17 - (((_BYTE)v9 - 1) & 7) + 0x800000000006LL) >> 3),
                  (unsigned int)a5);
          if ( v29 >= 0 )
            goto LABEL_34;
        }
        else
        {
          v29 = -1073741583;
        }
      }
      else
      {
        v29 = -1073741675;
      }
    }
    else
    {
      v29 = -1073741585;
    }
    if ( v17 )
    {
      if ( (a4 & 0x2000) == 0 )
        v30 = 0x4000;
      RtlpHpEnvFreeVA(&v59, (ULONG_PTR *)&v42, v30);
    }
  }
  return (unsigned int)v29;
}
