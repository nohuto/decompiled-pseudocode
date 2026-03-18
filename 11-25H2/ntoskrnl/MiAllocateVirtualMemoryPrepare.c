/*
 * XREFs of MiAllocateVirtualMemoryPrepare @ 0x1408FD950
 * Callers:
 *     MmAllocateUserStack @ 0x1408FD254 (MmAllocateUserStack.c)
 *     NtAllocateVirtualMemory @ 0x1408FD450 (NtAllocateVirtualMemory.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1408FD730 (MiAllocateVirtualMemoryCommon.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiHugePagesSupported @ 0x140496578 (MiHugePagesSupported.c)
 *     xHalUnmaskInterrupt @ 0x1404D7A50 (xHalUnmaskInterrupt.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     MiValidateZeroBits @ 0x1408FEBC0 (MiValidateZeroBits.c)
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
  __int64 v14; // rbx
  unsigned __int64 v16; // r15
  _QWORD *p_Lock; // r13
  int v18; // edi
  int v19; // esi
  unsigned int v20; // r11d
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r10d
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  int v30; // esi
  __int64 result; // rax
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rcx
  unsigned int v36; // r10d
  char v37; // r9
  _QWORD *v38; // rax
  PVOID v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  bool v42; // zf
  int v43; // eax
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rax
  int ProtectionMask; // eax
  int v48; // eax
  bool v49; // zf
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v51; // [rsp+48h] [rbp-40h]
  int v52; // [rsp+90h] [rbp+8h]
  __int64 v53; // [rsp+98h] [rbp+10h]
  __int64 v54; // [rsp+A0h] [rbp+18h] BYREF

  v54 = a3;
  v13 = 0;
  v14 = a12;
  v51 = a2;
  v16 = a2;
  Object = 0LL;
  p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
  *(_QWORD *)(a12 + 96) = p_Lock;
  if ( a1 != -1LL )
  {
    v30 = ObpReferenceObjectByHandleWithTag(a1, 8, (__int64)PsProcessType, a8, 0x6D566D4Du, &Object, 0LL, 0LL);
    if ( v30 < 0 )
      goto LABEL_41;
    p_Lock = Object;
  }
  v18 = a5;
  v19 = a6 & 0x7F800;
  v20 = a6 & 0xFFF807FF;
  *(_QWORD *)(v14 + 88) = p_Lock;
  *(_QWORD *)(v14 + 32) = a4;
  LODWORD(a12) = v19;
  a6 = v20;
  if ( (v18 & 0x9E038FFF) != 0 || (v18 & 0x1083000) == 0 )
    goto LABEL_40;
  v21 = 0x200000LL;
  if ( (v18 & 0x61EC4000) != 0 )
  {
    if ( (v18 & 0x80000) != 0 )
    {
      v42 = v18 == 0x80000;
    }
    else
    {
      if ( (v18 & 0x1000000) == 0 )
      {
        if ( (v18 & 0x200000) != 0 && ((a9 & 0x90040000) != 0 || (v18 & 0x2000) == 0) )
          goto LABEL_40;
        goto LABEL_88;
      }
      v42 = v18 == 0x1000000;
    }
    if ( !v42 )
      goto LABEL_40;
LABEL_88:
    v43 = v18 & 0x20400000;
    if ( (v18 & 0x20400000) == 0x20400000 )
    {
      if ( (v18 & 0x40800000) != 0 )
        goto LABEL_40;
    }
    else if ( v43 == 0x20000000 && (v18 & 0x40C00000) != 0 )
    {
      goto LABEL_40;
    }
    if ( (v18 & 0x800000) != 0 )
    {
      if ( (v18 & 0x40400000) != 0 )
        goto LABEL_40;
      if ( (v20 & 0xFFFFF9F9) == 0 )
        goto LABEL_93;
    }
    else
    {
      if ( v43 != 0x400000 )
      {
        if ( (v18 & 0x40000000) != 0 && (v18 & 0x100000) != 0 )
          goto LABEL_40;
LABEL_93:
        if ( (v18 & 0x40000) != 0 )
        {
          if ( (v18 & 0x2000) == 0 || (v18 & 0xBFEBDFFF) != 0 || v20 != 1 )
            goto LABEL_40;
        }
        else if ( (v18 & 0x4000) != 0 && ((v18 & 0x2000) == 0 || (v18 & 0xDF9F8FFF) != 0) )
        {
          goto LABEL_40;
        }
        goto LABEL_5;
      }
      if ( (v18 & 0x2000) == 0 || (v18 & 0xFF8F9FFF) != 0 )
        goto LABEL_40;
      ProtectionMask = MiMakeProtectionMask(v20);
      if ( ProtectionMask != -1 && (ProtectionMask & 0xFFFFFFF8) != 0x10 )
      {
        v48 = ProtectionMask & 7;
        if ( v48 != 4 && v48 != 1 )
        {
          v30 = -1073741755;
          goto LABEL_41;
        }
        goto LABEL_93;
      }
    }
    v30 = -1073741755;
    goto LABEL_41;
  }
LABEL_5:
  if ( v19 )
  {
    v30 = xHalUnmaskInterrupt();
    if ( v30 < 0 )
      goto LABEL_41;
    v19 = a12;
  }
  if ( (v18 & 0x1000) != 0 && !v16 )
    v18 |= 0x2000u;
  v22 = a7;
  if ( *(_QWORD *)(a7 + 24)
    && (v18 & 0x20400000) != 0x20000000
    && ((v18 & 0x20400000) != 0x20400000 || (*(_BYTE *)(a7 + 56) & 2) == 0) )
  {
    goto LABEL_40;
  }
  v23 = *(_QWORD *)(a7 + 56);
  if ( (v23 & 0xFFFFFFFFFFFFFFA0uLL) != 0 )
    goto LABEL_40;
  if ( (v20 & 0xF0) != 0 )
    *(_DWORD *)(v14 + 60) |= 8u;
  if ( (v20 & 0x40000000) != 0 )
  {
    if ( (v20 & 0xF0) == 0 )
      goto LABEL_40;
    v20 &= ~0x40000000u;
    v13 = 2;
    a6 = v20;
  }
  if ( (v23 & 0x40) != 0 )
  {
    if ( (v20 & 0xF0) == 0 )
      goto LABEL_40;
    v13 |= 8u;
  }
  v24 = 0x10000LL;
  v53 = 0x10000LL;
  if ( (v18 & 0x20400000) == 0x20000000 )
  {
    v24 = v21;
    v53 = v21;
  }
  v25 = v23 & 0x1A;
  v52 = v25;
  if ( (v23 & 0x1A) != 0 )
  {
    if ( ((v25 - 1) & v25) != 0 )
      goto LABEL_40;
    if ( (v25 & 2) != 0 )
    {
      v49 = (v18 & 0x20400000) == 541065216;
    }
    else
    {
      if ( (v25 & 0x10) != 0 )
      {
        if ( !(unsigned int)MiHugePagesSupported() )
        {
          v30 = -1073741637;
          goto LABEL_41;
        }
        v24 = 0x40000000LL;
      }
      else if ( (v25 & 8) != 0 )
      {
        v24 = v21;
      }
      v53 = v24;
      v49 = (v18 & 0x20400000) == 0x20000000;
    }
    if ( v49 )
    {
LABEL_20:
      if ( ((v18 & 0x2000) == 0 || v16) && (*(_QWORD *)v22 || *(_QWORD *)(v22 + 8) || *(_QWORD *)(v22 + 16)) )
        goto LABEL_40;
      if ( v54 )
      {
        v30 = MiValidateZeroBits(&v54);
        if ( v30 < 0 )
          goto LABEL_41;
        if ( (v18 & 0x2000) != 0 && !v16 )
        {
          v45 = 0x7FFFFFFEFFFFLL;
          if ( v54 )
          {
            v45 = 0xFFFFFFFFFFFFFFFFuLL >> v54;
            if ( 0xFFFFFFFFFFFFFFFFuLL >> v54 > 0x7FFFFFFEFFFFLL )
              v45 = 0x7FFFFFFEFFFFLL;
          }
          v46 = p_Lock[109] - 1LL;
          if ( v45 <= v46 )
            v46 = v45;
          *(_QWORD *)(v22 + 8) = v46;
        }
        v20 = a6;
        v19 = a12;
        v25 = v52;
      }
      if ( (v18 & 0x40000) != 0 )
      {
        *(_DWORD *)(v14 + 64) |= 0x8000000u;
        if ( (v18 & 0x4000) == 0 )
          goto LABEL_27;
      }
      else
      {
        if ( (v18 & 0x4000) == 0 )
        {
LABEL_27:
          if ( (v18 & 0x2000) == 0 )
          {
            v26 = 4096LL;
            goto LABEL_29;
          }
          if ( (v18 & 0x40000000) == 0 )
            goto LABEL_70;
          if ( (v18 & 0x20400000) == 0x20400000 || (v18 & 0x20400000) == 0x20000000 )
            goto LABEL_40;
          v26 = 4096LL;
          goto LABEL_29;
        }
        if ( *(_QWORD *)v22 || *(_QWORD *)(v22 + 8) || *(_QWORD *)(v22 + 16) )
          goto LABEL_40;
        *(_DWORD *)(v14 + 64) |= 0x4000000u;
      }
      if ( v25 || (v18 & 0x20400000) == 0x20000000 )
      {
LABEL_70:
        v26 = v53;
        goto LABEL_29;
      }
      v26 = 4096LL;
LABEL_29:
      v27 = *(_QWORD *)(v22 + 16);
      if ( v27 )
      {
        if ( v27 < v26 || ((v27 - 1) & v27) != 0 || v27 >= 0x7FFFFFFF0000LL || (v18 & 0x40000000) != 0 && v27 != 4096 )
          goto LABEL_40;
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
        goto LABEL_40;
      }
      v28 = v16 + a4;
      v29 = v16 + a4 - 1;
      if ( v29 > 0x7FFFFFFEFFFFLL || v29 < v16 )
        goto LABEL_40;
      if ( (v18 & 0x2000) != 0 )
      {
        if ( (v18 & 0x40000000) != 0 )
        {
          if ( (((unsigned __int16)v16 | (unsigned __int16)a4) & 0xFFF) != 0 )
            goto LABEL_40;
        }
        else if ( (v18 & 0x4000) != 0 )
        {
          if ( ((a4 | v16) & (v26 - 1)) != 0 )
            goto LABEL_40;
        }
        else
        {
          v16 &= -(__int64)v26;
          if ( (v18 & 0x20400000) == 0x20400000 || (v18 & 0x20400000) == 0x20000000 )
            v28 = v16 + a4;
          else
            v28 = (v28 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        }
      }
      else if ( v18 == 0x1000000 || v18 == 0x80000 )
      {
        v44 = ~(v26 - 1);
        v16 = v44 & (v26 + v16 - 1);
        v28 &= v44;
        if ( v16 >= v28 )
        {
          v30 = -1073741800;
          goto LABEL_41;
        }
      }
      else
      {
        v40 = ~(v26 - 1);
        v16 &= v40;
        v28 = v40 & (v26 + v28 - 1);
      }
      v32 = v51;
      v33 = v28 - v16;
      if ( v51 )
        *(_QWORD *)v22 = v16;
      v34 = *(_QWORD *)v22;
      if ( ((*(_QWORD *)(v22 + 16) - 1LL) & *(_QWORD *)v22) != 0 )
        goto LABEL_40;
      v35 = *(_QWORD *)(v22 + 8);
      if ( v35 )
      {
        if ( v35 > 0x7FFFFFFEFFFFLL || (((_WORD)v35 + 1) & 0xFFF) != 0 )
          goto LABEL_40;
      }
      else if ( (v18 & 0x2000) == 0 || v32 || (v18 & 0x4000) != 0 )
      {
        if ( v34 + v33 < v34 )
          goto LABEL_40;
        v35 = v34 + v33 - 1;
        *(_QWORD *)(v22 + 8) = v35;
        if ( v35 > 0x7FFFFFFEFFFFLL )
          goto LABEL_40;
      }
      else
      {
        v35 = p_Lock[109] - 1LL;
        if ( v35 >= 0x7FFFFFFEFFFFLL )
          v35 = 0x7FFFFFFEFFFFLL;
        *(_QWORD *)(v22 + 8) = v35;
        if ( v25 && (v25 & 2) == 0 )
        {
          if ( (v25 & 8) != 0 )
          {
            v41 = -2097152LL;
            goto LABEL_188;
          }
          if ( (v25 & 0x10) != 0 )
          {
            v41 = -1073741824LL;
LABEL_188:
            v35 = (v41 & v35) - 1;
            *(_QWORD *)(v22 + 8) = v35;
          }
        }
      }
      if ( v34 < v35 && v35 - v34 + 1 >= v33 && (v18 & 0x7F) == 0 )
      {
        v36 = *(_DWORD *)(v22 + 32);
        if ( v36 <= (unsigned __int16)KeNumberNodes )
        {
          v37 = *(_BYTE *)(v22 + 49);
          if ( !v37 || v52 || (v18 & 0x20400000) == 0x20000000 )
          {
            *(_QWORD *)(v14 + 16) = *(_QWORD *)(v22 + 16);
            *(_BYTE *)(v14 + 57) = a8;
            *(_DWORD *)(v14 + 64) |= a9;
            *(_DWORD *)(v14 + 68) = a10;
            *(_QWORD *)(v14 + 72) = a11;
            *(_QWORD *)(v14 + 104) = *(_QWORD *)(v22 + 40);
            *(_QWORD *)(v14 + 112) = *(_QWORD *)(v22 + 56);
            v38 = a13;
            *(_QWORD *)(v14 + 8) = v35;
            v39 = Object;
            *(_QWORD *)v14 = v34;
            *v38 = v39;
            result = 0LL;
            *(_QWORD *)(v14 + 24) = v33;
            *(_DWORD *)(v14 + 40) = v18 & 0xFFFBBFFF;
            *(_DWORD *)(v14 + 44) = v20;
            *(_DWORD *)(v14 + 48) = v19;
            *(_DWORD *)(v14 + 52) = v36;
            *(_BYTE *)(v14 + 56) = v37;
            *(_DWORD *)(v14 + 120) = v13;
            return result;
          }
        }
      }
      goto LABEL_40;
    }
    if ( (v18 & 0x20400000) != 0x400000 )
      goto LABEL_40;
  }
  else
  {
    if ( (v23 & 4) != 0 )
      goto LABEL_40;
    if ( (v18 & 0x20400000) != 0x400000 )
      goto LABEL_20;
  }
  if ( (v23 & 0xFFFFFFFFFFFFFFE0uLL) == 0 )
    goto LABEL_20;
LABEL_40:
  v30 = -1073741811;
LABEL_41:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  return (unsigned int)v30;
}
