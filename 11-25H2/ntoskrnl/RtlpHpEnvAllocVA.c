/*
 * XREFs of RtlpHpEnvAllocVA @ 0x1402C26C0
 * Callers:
 *     RtlpHpAllocVA @ 0x1402FA5FC (RtlpHpAllocVA.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14035E0AC (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrAllocAligned @ 0x1403CC0A0 (RtlpHpVaMgrAllocAligned.c)
 *     RtlpHpVaMgrRangeCommit @ 0x1405F98E8 (RtlpHpVaMgrRangeCommit.c)
 *     RtlCSparseBitmapStart @ 0x1405FAD34 (RtlCSparseBitmapStart.c)
 * Callees:
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiCommitPoolMemory @ 0x1402C2C90 (MiCommitPoolMemory.c)
 *     RtlpHpEnvFreeVA @ 0x1402FAA1C (RtlpHpEnvFreeVA.c)
 *     MmFreePoolMemory @ 0x1402FAA60 (MmFreePoolMemory.c)
 *     MiGetLargePoolPages @ 0x140378D28 (MiGetLargePoolPages.c)
 *     MiGetPoolPages @ 0x140378DE4 (MiGetPoolPages.c)
 *     MiReservePoolMemory @ 0x14038E638 (MiReservePoolMemory.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MmKasanCommitRegion @ 0x14066E2FC (MmKasanCommitRegion.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall RtlpHpEnvAllocVA(
        unsigned __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        ULONG_PTR a5,
        int a6,
        int a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  unsigned __int64 v11; // rcx
  int v14; // edx
  __int64 v15; // r15
  ULONG_PTR v16; // rsi
  ULONG_PTR BugCheckParameter4; // r12
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r13
  unsigned int v20; // ebx
  unsigned __int64 v21; // r8
  int v22; // ebx
  unsigned __int8 CurrentIrql; // al
  unsigned int ProtectionMask; // eax
  ULONG_PTR v25; // r8
  unsigned __int64 v26; // r9
  int v27; // ecx
  __int16 v28; // ax
  unsigned __int16 *v29; // rcx
  __int16 v30; // ax
  int v31; // r14d
  unsigned int v32; // ebx
  int LargePoolPages; // eax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  bool v39; // zf
  int v40; // eax
  unsigned __int64 v41; // rdx
  ULONG_PTR v42; // rsi
  unsigned __int64 v43; // [rsp+30h] [rbp-89h] BYREF
  __int64 v44; // [rsp+38h] [rbp-81h] BYREF
  __int64 v45; // [rsp+40h] [rbp-79h]
  _QWORD v46[2]; // [rsp+50h] [rbp-69h] BYREF
  __int128 v47; // [rsp+60h] [rbp-59h]
  __int64 v48; // [rsp+70h] [rbp-49h]
  __int64 v49; // [rsp+78h] [rbp-41h]
  __int64 v50; // [rsp+80h] [rbp-39h]
  __int64 v51; // [rsp+88h] [rbp-31h]
  __int64 v52; // [rsp+90h] [rbp-29h]
  void *v53; // [rsp+98h] [rbp-21h]
  unsigned __int64 v54; // [rsp+A0h] [rbp-19h]
  __int64 v55; // [rsp+A8h] [rbp-11h]
  unsigned int v56; // [rsp+B0h] [rbp-9h]
  __int16 v57; // [rsp+B4h] [rbp-5h]
  unsigned __int8 v58; // [rsp+B6h] [rbp-3h]
  unsigned __int64 v61; // [rsp+110h] [rbp+57h] BYREF

  v11 = 1LL;
  if ( a3 )
    v11 = a3;
  v43 = v11;
  if ( (a4 & 0x20001000) == 0x20001000 )
    v14 = 3;
  else
    v14 = a7;
  v15 = *a2;
  if ( (a4 & 0x2000) != 0 )
  {
    v15 = v15 - (((_DWORD)v15 - 1) & 0x1FFFFF) + 0x1FFFFF;
    v44 = v15;
    v16 = v15;
    a8 = v15;
    if ( v11 > 0x200000 )
    {
      v16 = v15 + v11;
      a8 = v15 + v11;
    }
  }
  else
  {
    v44 = *a2;
    v16 = v15;
    a8 = v15;
  }
  BugCheckParameter4 = (unsigned int)a5;
  v18 = 64LL;
  if ( !v14 )
    v18 = 256LL;
  if ( (a5 & 0x60) != 0 && v14 )
    v18 = 128LL;
  v19 = *a1;
  v20 = a9;
  v61 = *a1;
  LODWORD(a5) = a9 + 1;
  memset_0(v46, 0, 0x68uLL);
  if ( v20 == -1 || v20 + 1 > (unsigned __int16)KeNumberNodes )
    return (unsigned int)-1073741583;
  v56 = v20;
  v21 = v19;
  a7 = a4 & 0x2000;
  if ( (a4 & 0x2000) != 0 )
  {
    v35 = MiReservePoolMemory(0LL, (v18 >> 8) & 1 | 4, v16, v20);
    v19 = v35;
    v21 = v35;
    if ( !v35 )
      return (unsigned int)-1073741801;
    v61 = v35;
  }
  v22 = 0;
  if ( (a4 & 0x1000) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v58 = CurrentIrql;
    v46[0] = v19;
    v50 = 0LL;
    v54 = (((v21 + v16 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v55 = 0LL;
    v51 = 0LL;
    v46[1] = ((__int64)((((v21 + v16 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((v21 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
    v49 = 0LL;
    ProtectionMask = MiMakeProtectionMask((unsigned int)BugCheckParameter4, 0xFFFFF68000000000uLL, v21);
    if ( ProtectionMask > 0x18 || (v27 = 16777298, !_bittest(&v27, ProtectionMask)) )
      KeBugCheckEx(0x1Au, 0x5300uLL, v25, v16, BugCheckParameter4);
    v28 = 8 * (ProtectionMask & 0x1F);
    v57 = v28;
    if ( (a4 & 0x40000000) != 0 )
    {
      v28 |= 0x200u;
      v57 = v28;
    }
    v52 = 4LL;
    v48 = 0LL;
    v29 = (unsigned __int16 *)&unk_140E38140;
    v53 = &unk_140E38140;
    v47 = 0LL;
    if ( (v18 & 0x100) != 0 )
    {
      v29 = (unsigned __int16 *)&unk_140E37D80;
      LODWORD(v52) = 5;
      v53 = &unk_140E37D80;
      v30 = v28 | 2;
    }
    else
    {
      if ( (a4 & 0x20000000) == 0 )
        goto LABEL_21;
      v30 = v28 | 4;
    }
    v57 = v30;
LABEL_21:
    if ( (v57 & 2) != 0 )
    {
      v22 = -1073741670;
      if ( (unsigned int)MiChargeCommit(*((_QWORD *)qword_140E2FD48 + v29[87]), v26, 1) )
        v22 = 0;
    }
    else
    {
      if ( (v57 & 4) != 0 )
        LargePoolPages = MiGetLargePoolPages(v46);
      else
        LargePoolPages = MiGetPoolPages(v46);
      v22 = LargePoolPages;
    }
    if ( v22 < 0 || (v22 = MiCommitPoolMemory(v46), v22 < 0) )
    {
      if ( a7 )
      {
        v61 = v19;
        MmFreePoolMemory(&v61, &a8, 0x8000LL);
      }
      v19 = 0LL;
      v61 = 0LL;
    }
    v16 = (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  v31 = v22;
  if ( v22 >= 0 )
  {
    if ( (a4 & 0x2000) == 0 )
      goto LABEL_29;
    v36 = v19;
    v19 = -(__int64)v43 & (v19 + v43 - 1);
    v61 = v19;
    v37 = v19 - v36;
    if ( v19 != v36 )
    {
      v38 = v37 - ((v36 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL);
      v43 = (v36 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      v39 = v36 + v38 == 0;
      v37 = v36 + v38;
      v45 = v37;
      a8 = v37;
      if ( v39 )
      {
        v31 = 0;
      }
      else
      {
        v40 = MmFreePoolMemory(&v43, &a8, 0x8000LL);
        v37 = v45;
        v31 = v40;
      }
    }
    v41 = v15 + v19;
    v42 = v16 - v37 - v15;
    if ( v42 )
    {
      v32 = 0x8000;
      v43 = (v41 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      a8 = v41 - v43 + v42;
      if ( a8 )
        v31 = MmFreePoolMemory(&v43, &a8, 0x8000LL);
      else
        v31 = 0;
    }
    else
    {
LABEL_29:
      v32 = 0x8000;
    }
    if ( (a4 & 0x1000) == 0 )
      goto LABEL_34;
    if ( !byte_140FCDC68 || !v15 )
    {
      v31 = 0;
LABEL_34:
      *a1 = v19;
      *a2 = v15;
      return (unsigned int)v31;
    }
    if ( v19 >= 0xFFFF800000000000uLL )
    {
      if ( v15 + v19 >= v19 )
      {
        if ( (unsigned int)a5 <= (unsigned __int16)KeNumberNodes )
        {
          v31 = MmKasanCommitRegion(
                  KasaniShadow + ((v19 + 0x800000000000LL) >> 3),
                  KasaniShadow + ((v15 + v19 - (((_BYTE)v15 - 1) & 7) + 0x800000000006LL) >> 3));
          if ( v31 >= 0 )
            goto LABEL_34;
        }
        else
        {
          v31 = -1073741583;
        }
      }
      else
      {
        v31 = -1073741675;
      }
    }
    else
    {
      v31 = -1073741585;
    }
    if ( v19 )
    {
      if ( (a4 & 0x2000) == 0 )
        v32 = 0x4000;
      RtlpHpEnvFreeVA(&v61, &v44, v32);
    }
  }
  return (unsigned int)v31;
}
