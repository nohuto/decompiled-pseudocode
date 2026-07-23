/*
 * XREFs of MiAllocateVirtualMemoryPrepare @ 0x1409157C0
 * Callers:
 *     MmAllocateUserStack @ 0x1409150D0 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1409152C0 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1409155A0 (MiAllocateVirtualMemoryCommon.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiHugePagesSupported @ 0x1404900F8 (MiHugePagesSupported.c)
 *     xHalUnmaskInterrupt @ 0x1404CFCD0 (xHalUnmaskInterrupt.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x1409169F0 (MiValidateZeroBits.c)
 */

__int64 __fastcall MiAllocateVirtualMemoryPrepare(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        int a9,
        int a10,
        __int64 a11,
        __int64 a12,
        _QWORD *a13)
{
  int v13; // ebp
  __int64 v14; // rsi
  unsigned __int64 v15; // r15
  __int64 Process; // r14
  void *v17; // r12
  int v18; // edi
  int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // r10
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // ebx
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rcx
  int v28; // ebx
  __int64 result; // rax
  int v30; // eax
  int v31; // eax
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rax
  bool v34; // zf
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rcx
  unsigned int v40; // r11d
  char v41; // r10
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  int ProtectionMask; // eax
  int v46; // eax
  bool v47; // zf
  __int64 v48; // rax
  __int64 v50; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v51; // [rsp+A8h] [rbp+10h]
  __int64 v52; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v53; // [rsp+B8h] [rbp+20h]

  v53 = a4;
  v52 = a3;
  v13 = 0;
  v14 = a12;
  v15 = a2;
  v50 = 0LL;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(a12 + 96) = Process;
  if ( a1 == -1LL )
  {
    v17 = (void *)v50;
  }
  else
  {
    v30 = ObpReferenceObjectByHandleWithTag(a1, 8, (__int64)PsProcessType, a8, 0x6D566D4Du, &v50, 0LL, 0LL);
    v17 = (void *)v50;
    v28 = v30;
    if ( v30 < 0 )
      goto LABEL_34;
    a4 = v53;
    Process = v50;
  }
  v18 = a5;
  v19 = a6 & 0x7F800;
  v20 = a6 & 0xFFF807FF;
  *(_QWORD *)(v14 + 88) = Process;
  *(_QWORD *)(v14 + 32) = a4;
  LODWORD(v50) = v19;
  a6 = v20;
  if ( (v18 & 0x9E038FFF) != 0 || (v18 & 0x1083000) == 0 )
    goto LABEL_33;
  v21 = 0x200000LL;
  if ( (v18 & 0x61EC4000) == 0 )
    goto LABEL_6;
  if ( (v18 & 0x80000) != 0 )
  {
    if ( v18 != 0x80000 )
      goto LABEL_33;
  }
  else if ( (v18 & 0x1000000) != 0 )
  {
    if ( v18 != 0x1000000 )
      goto LABEL_33;
  }
  else if ( (v18 & 0x200000) != 0 && ((a9 & 0x90040000) != 0 || (v18 & 0x2000) == 0) )
  {
    goto LABEL_33;
  }
  v31 = v18 & 0x20400000;
  if ( (v18 & 0x20400000) == 0x20400000 )
  {
    if ( (v18 & 0x40800000) != 0 )
      goto LABEL_33;
  }
  else if ( v31 == 0x20000000 && (v18 & 0x40C00000) != 0 )
  {
    goto LABEL_33;
  }
  if ( (v18 & 0x800000) != 0 )
  {
    if ( (v18 & 0x40400000) != 0 )
      goto LABEL_33;
    if ( (v20 & 0xFFFFF9F9) == 0 )
      goto LABEL_53;
    goto LABEL_138;
  }
  if ( v31 == 0x400000 )
  {
    if ( (v18 & 0x2000) == 0 || (v18 & 0xFF8F9FFF) != 0 )
      goto LABEL_33;
    ProtectionMask = MiMakeProtectionMask(v20);
    if ( ProtectionMask != -1 && (ProtectionMask & 0xFFFFFFF8) != 0x10 )
    {
      v46 = ProtectionMask & 7;
      if ( v46 != 4 && v46 != 1 )
      {
        v28 = -1073741755;
        goto LABEL_34;
      }
      v19 = v50;
      v20 = a6;
      goto LABEL_53;
    }
LABEL_138:
    v28 = -1073741755;
    goto LABEL_34;
  }
  if ( (v18 & 0x40000000) != 0 && (v18 & 0x100000) != 0 )
    goto LABEL_33;
LABEL_53:
  if ( (v18 & 0x40000) != 0 )
  {
    if ( (v18 & 0x2000) == 0 || (v18 & 0xBFEBDFFF) != 0 || v20 != 1 )
      goto LABEL_33;
  }
  else if ( (v18 & 0x4000) != 0 && ((v18 & 0x2000) == 0 || (v18 & 0xDF9F8FFF) != 0) )
  {
    goto LABEL_33;
  }
LABEL_6:
  if ( !v19 || (v28 = xHalUnmaskInterrupt(), v28 >= 0) )
  {
    if ( (v18 & 0x1000) != 0 && !v15 )
      v18 |= 0x2000u;
    v22 = a7;
    if ( *(_QWORD *)(a7 + 24)
      && (v18 & 0x20400000) != 0x20000000
      && ((v18 & 0x20400000) != 0x20400000 || (*(_BYTE *)(a7 + 56) & 2) == 0) )
    {
      goto LABEL_33;
    }
    v23 = *(_QWORD *)(a7 + 56);
    if ( (v23 & 0xFFFFFFFFFFFFFFA0uLL) != 0 )
      goto LABEL_33;
    if ( (v20 & 0xF0) != 0 )
      *(_DWORD *)(v14 + 60) |= 8u;
    if ( (v20 & 0x40000000) != 0 )
    {
      if ( (v20 & 0xF0) == 0 )
        goto LABEL_33;
      v20 &= ~0x40000000u;
      v13 = 2;
      a6 = v20;
    }
    if ( (v23 & 0x40) != 0 )
    {
      if ( (v20 & 0xF0) == 0 )
        goto LABEL_33;
      v13 |= 8u;
    }
    v24 = 0x10000LL;
    v51 = 0x10000LL;
    if ( (v18 & 0x20400000) == 0x20000000 )
    {
      v24 = v21;
      v51 = v21;
    }
    v25 = v23 & 0x1A;
    LODWORD(a12) = v25;
    if ( (v23 & 0x1A) != 0 )
    {
      if ( ((v25 - 1) & v25) != 0 )
        goto LABEL_33;
      if ( (v25 & 2) != 0 )
      {
        v47 = (v18 & 0x20400000) == 541065216;
      }
      else
      {
        if ( (v25 & 0x10) != 0 )
        {
          if ( !(unsigned int)MiHugePagesSupported() )
          {
            v28 = -1073741637;
            goto LABEL_34;
          }
          v24 = 0x40000000LL;
        }
        else if ( (v25 & 8) != 0 )
        {
          v24 = v21;
        }
        v51 = v24;
        v47 = (v18 & 0x20400000) == 0x20000000;
      }
      if ( v47 )
        goto LABEL_21;
      if ( (v18 & 0x20400000) != 0x400000 )
        goto LABEL_33;
    }
    else
    {
      if ( (v23 & 4) != 0 )
        goto LABEL_33;
      if ( (v18 & 0x20400000) != 0x400000 )
      {
LABEL_21:
        if ( ((v18 & 0x2000) == 0 || v15) && (*(_QWORD *)v22 || *(_QWORD *)(v22 + 8) || *(_QWORD *)(v22 + 16)) )
          goto LABEL_33;
        if ( v52 )
        {
          v28 = MiValidateZeroBits(&v52);
          if ( v28 < 0 )
            goto LABEL_34;
          if ( (v18 & 0x2000) != 0 && !v15 )
          {
            v35 = 0x7FFFFFFEFFFFLL;
            if ( v52 )
            {
              v35 = 0xFFFFFFFFFFFFFFFFuLL >> v52;
              if ( 0xFFFFFFFFFFFFFFFFuLL >> v52 > 0x7FFFFFFEFFFFLL )
                v35 = 0x7FFFFFFEFFFFLL;
            }
            v36 = *(_QWORD *)(Process + 872) - 1LL;
            if ( v35 <= v36 )
              v36 = v35;
            *(_QWORD *)(v22 + 8) = v36;
          }
          a4 = v53;
          v20 = a6;
          v25 = a12;
        }
        if ( (v18 & 0x40000) != 0 )
        {
          *(_DWORD *)(v14 + 64) |= 0x8000000u;
          if ( (v18 & 0x4000) == 0 )
            goto LABEL_28;
        }
        else
        {
          if ( (v18 & 0x4000) == 0 )
          {
LABEL_28:
            if ( (v18 & 0x2000) == 0 )
            {
              v26 = 4096LL;
LABEL_30:
              v27 = *(_QWORD *)(v22 + 16);
              if ( v27 )
              {
                if ( v27 < v26
                  || ((v27 - 1) & v27) != 0
                  || v27 >= 0x7FFFFFFF0000LL
                  || (v18 & 0x40000000) != 0 && v27 != 4096 )
                {
                  goto LABEL_33;
                }
              }
              else
              {
                *(_QWORD *)(v22 + 16) = v26;
              }
              if ( !a4
                || (v18 & 0x2000) != 0
                && ((v18 & 0x20400000) == 0x20400000 || (v18 & 0x20400000) == 0x20000000)
                && ((v18 & 0x20400000) != 541065216 && (v18 & 0x1000) == 0 && !v25 || ((v26 - 1) & a4) != 0) )
              {
                goto LABEL_33;
              }
              v32 = v15 + a4;
              v33 = v15 + a4 - 1;
              if ( v33 > 0x7FFFFFFEFFFFLL || v33 < v15 )
                goto LABEL_33;
              if ( (v18 & 0x2000) == 0 )
              {
                if ( v18 == 0x1000000 || v18 == 0x80000 )
                {
                  v44 = ~(v26 - 1);
                  v15 = v44 & (v26 + v15 - 1);
                  v32 &= v44;
                  if ( v15 >= v32 )
                  {
                    v28 = -1073741800;
                    goto LABEL_34;
                  }
                }
                else
                {
                  v43 = ~(v26 - 1);
                  v15 &= v43;
                  v32 = v43 & (v26 + v32 - 1);
                }
                goto LABEL_92;
              }
              if ( (v18 & 0x40000000) == 0 )
              {
                if ( (v18 & 0x4000) == 0 )
                {
                  v15 &= -(__int64)v26;
                  if ( (v18 & 0x20400000) == 0x20400000 || (v18 & 0x20400000) == 0x20000000 )
                    v32 = v15 + a4;
                  else
                    v32 = (v32 + 4095) & 0xFFFFFFFFFFFFF000uLL;
                  goto LABEL_92;
                }
                v34 = ((a4 | v15) & (v26 - 1)) == 0;
                goto LABEL_143;
              }
              if ( (v15 & 0xFFF) == 0 )
              {
                v34 = (a4 & 0xFFF) == 0;
LABEL_143:
                if ( !v34 )
                  goto LABEL_33;
LABEL_92:
                v37 = v32 - v15;
                if ( a2 )
                  *(_QWORD *)v22 = v15;
                v38 = *(_QWORD *)v22;
                if ( ((*(_QWORD *)(v22 + 16) - 1LL) & *(_QWORD *)v22) != 0 )
                  goto LABEL_33;
                v39 = *(_QWORD *)(v22 + 8);
                if ( v39 )
                {
                  if ( v39 > 0x7FFFFFFEFFFFLL || (((_WORD)v39 + 1) & 0xFFF) != 0 )
                    goto LABEL_33;
                }
                else if ( (v18 & 0x2000) == 0 || a2 || (v18 & 0x4000) != 0 )
                {
                  if ( v38 + v37 < v38 )
                    goto LABEL_33;
                  v39 = v38 + v37 - 1;
                  *(_QWORD *)(v22 + 8) = v39;
                  if ( v39 > 0x7FFFFFFEFFFFLL )
                    goto LABEL_33;
                }
                else
                {
                  v39 = *(_QWORD *)(Process + 872) - 1LL;
                  if ( v39 >= 0x7FFFFFFEFFFFLL )
                    v39 = 0x7FFFFFFEFFFFLL;
                  *(_QWORD *)(v22 + 8) = v39;
                  if ( v25 && (v25 & 2) == 0 )
                  {
                    if ( (v25 & 8) != 0 )
                    {
                      v48 = -2097152LL;
LABEL_194:
                      v39 = (v48 & v39) - 1;
                      *(_QWORD *)(v22 + 8) = v39;
                      goto LABEL_102;
                    }
                    if ( (v25 & 0x10) != 0 )
                    {
                      v48 = -1073741824LL;
                      goto LABEL_194;
                    }
                  }
                }
LABEL_102:
                if ( v38 < v39 && v39 - v38 + 1 >= v37 && (v18 & 0x7F) == 0 )
                {
                  v40 = *(_DWORD *)(v22 + 32);
                  if ( v40 <= (unsigned __int16)KeNumberNodes )
                  {
                    v41 = *(_BYTE *)(v22 + 49);
                    if ( !v41 || v25 || (v18 & 0x20400000) == 0x20000000 )
                    {
                      *(_QWORD *)(v14 + 16) = *(_QWORD *)(v22 + 16);
                      *(_DWORD *)(v14 + 48) = v50;
                      *(_BYTE *)(v14 + 57) = a8;
                      *(_DWORD *)(v14 + 64) |= a9;
                      *(_DWORD *)(v14 + 68) = a10;
                      *(_QWORD *)(v14 + 72) = a11;
                      *(_QWORD *)(v14 + 104) = *(_QWORD *)(v22 + 40);
                      *(_QWORD *)(v14 + 112) = *(_QWORD *)(v22 + 56);
                      v42 = a13;
                      *(_QWORD *)v14 = v38;
                      *(_QWORD *)(v14 + 8) = v39;
                      *(_QWORD *)(v14 + 24) = v37;
                      *v42 = v17;
                      result = 0LL;
                      *(_DWORD *)(v14 + 40) = v18 & 0xFFFBBFFF;
                      *(_DWORD *)(v14 + 44) = v20;
                      *(_DWORD *)(v14 + 52) = v40;
                      *(_BYTE *)(v14 + 56) = v41;
                      *(_DWORD *)(v14 + 120) = v13;
                      return result;
                    }
                  }
                }
              }
LABEL_33:
              v28 = -1073741811;
              goto LABEL_34;
            }
            if ( (v18 & 0x40000000) != 0 )
            {
              if ( (v18 & 0x20400000) == 0x20400000 || (v18 & 0x20400000) == 0x20000000 )
                goto LABEL_33;
              v26 = 4096LL;
              goto LABEL_30;
            }
LABEL_40:
            v26 = v51;
            goto LABEL_30;
          }
          if ( *(_QWORD *)v22 || *(_QWORD *)(v22 + 8) || *(_QWORD *)(v22 + 16) )
            goto LABEL_33;
          *(_DWORD *)(v14 + 64) |= 0x4000000u;
        }
        if ( !v25 && (v18 & 0x20400000) != 0x20000000 )
        {
          v26 = 4096LL;
          goto LABEL_30;
        }
        goto LABEL_40;
      }
    }
    if ( (v23 & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      goto LABEL_33;
    goto LABEL_21;
  }
LABEL_34:
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x6D566D4Du);
  return (unsigned int)v28;
}
