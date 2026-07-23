/*
 * XREFs of MmProtectVirtualMemory @ 0x1408DAC60
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     KiTpWriteUmMemory @ 0x1405C6EEC (KiTpWriteUmMemory.c)
 *     NtProtectVirtualMemory @ 0x1408DA8B0 (NtProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiVadMapsLargeImage @ 0x1403C7440 (MiVadMapsLargeImage.c)
 *     MiGetVadPageSize @ 0x14041B130 (MiGetVadPageSize.c)
 *     MiAllowProtectionChange @ 0x1404389E8 (MiAllowProtectionChange.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 *     xHalUnmaskInterrupt @ 0x1404CFCD0 (xHalUnmaskInterrupt.c)
 *     MiIsRangeFullyCommitted @ 0x1408DBA3C (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x1408DBE18 (MiCheckSecuredVad.c)
 *     MiCommitVadMetadataBits @ 0x14091D290 (MiCommitVadMetadataBits.c)
 */

__int64 __fastcall MmProtectVirtualMemory(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3,
        __int64 *a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // r11
  unsigned int v7; // r10d
  unsigned __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r15d
  unsigned int v11; // ebx
  unsigned int ProtectionMask; // r12d
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  ULONG_PTR v16; // rdi
  char v17; // r9
  unsigned int v18; // edx
  int v19; // r8d
  int v20; // r10d
  int v21; // eax
  int v22; // r15d
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  int v25; // ecx
  void *v26; // rcx
  __int64 result; // rax
  PVOID v28; // rcx
  __int64 VadPageSize; // rax
  int v30; // r8d
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // edx
  unsigned __int64 v34; // rcx
  __int16 v35; // ax
  int v36; // edx
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rcx
  unsigned int v39; // [rsp+60h] [rbp-C8h] BYREF
  char v40; // [rsp+64h] [rbp-C4h]
  unsigned int v41; // [rsp+68h] [rbp-C0h]
  unsigned int v42; // [rsp+6Ch] [rbp-BCh]
  int v43; // [rsp+70h] [rbp-B8h] BYREF
  int v44; // [rsp+74h] [rbp-B4h] BYREF
  _QWORD *v45; // [rsp+78h] [rbp-B0h]
  unsigned __int64 v46; // [rsp+80h] [rbp-A8h]
  int v47; // [rsp+88h] [rbp-A0h]
  int v48; // [rsp+8Ch] [rbp-9Ch]
  PVOID P; // [rsp+90h] [rbp-98h]
  unsigned __int64 v50; // [rsp+98h] [rbp-90h]
  unsigned int v51; // [rsp+A4h] [rbp-84h]
  __int64 v52; // [rsp+A8h] [rbp-80h]
  _QWORD *Teb; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v54; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v55; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v56; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v57; // [rsp+D0h] [rbp-58h]
  _QWORD v58[10]; // [rsp+D8h] [rbp-50h] BYREF
  char v63[8]; // [rsp+150h] [rbp+28h]

  v6 = a2;
  v7 = a5;
  v39 = 0;
  v43 = 0;
  *a6 = 1;
  v44 = 0;
  v41 = 0;
  v40 = 1;
  v8 = *a3;
  v50 = v8;
  v54 = v8;
  v9 = *a4;
  v52 = v9;
  v55 = v9;
  v42 = a5 & 0x7F800;
  if ( (a5 & 0x7F800) == 0 || (result = xHalUnmaskInterrupt(), v39 = result, (int)result >= 0) )
  {
    v48 = a5 >> 31;
    LODWORD(P) = a5 >> 31;
    v10 = a5 & 0xB0000000;
    v51 = a5 & 0xB0000000;
    v11 = a5 & 0x4FF807FF;
    if ( (a5 & 0x40000000) != 0 )
    {
      if ( (v7 & 0xF0) == 0 )
        return 3221225714LL;
      v40 = 0;
      v11 = v7 & 0xFF807FF;
    }
    if ( v11 )
    {
      ProtectionMask = MiMakeProtectionMask(v11);
      v47 = ProtectionMask;
      if ( ProtectionMask != -1 )
        goto LABEL_5;
    }
    else if ( v10 == 0x10000000 || v10 == 0x80000000 )
    {
      ProtectionMask = 24;
      v47 = 24;
LABEL_5:
      v13 = (v9 + v8 - 1) | 0xFFF;
      v57 = v13;
      v14 = v8 & 0xFFFFFFFFFFFFF000uLL;
      v56 = v8 & 0xFFFFFFFFFFFFF000uLL;
      Teb = 0LL;
      v45 = 0LL;
      v46 = 0LL;
      if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 )
      {
        if ( KeGetCurrentThread()->ApcStateIndex == 1
          || *(_QWORD *)(v6 + 784) && ((v35 = *(_WORD *)(v6 + 1772), v35 == 332) || v35 == 452) )
        {
          v34 = v46;
        }
        else
        {
          Teb = KeGetCurrentThread()->Teb;
          v45 = Teb;
          v34 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
          v46 = v34;
        }
        v45 = (_QWORD *)v34;
      }
      P = 0LL;
      v55 = v13 >> 12;
      v15 = MiObtainReferencedVadEx(v14, 0LL, (int *)&v39, v9);
      v16 = v15;
      v54 = v15;
      if ( v15 )
      {
        P = (PVOID)v15;
        if ( v55 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
        {
          result = 3221225496LL;
          goto LABEL_38;
        }
        if ( (*(_DWORD *)(v15 + 48) & 0x4200000) == 0x4200000 )
        {
          if ( !v42 )
          {
            result = 3221225541LL;
            goto LABEL_38;
          }
        }
        else if ( v42 )
        {
          result = 3221225541LL;
          goto LABEL_38;
        }
        v17 = 0;
        v63[0] = 0;
        if ( (ProtectionMask & 2) != 0 )
        {
          result = MiAllowProtectionChange(a2, a1, v15, ProtectionMask, v14, v13);
          v39 = result;
          if ( (int)result < 0 )
            goto LABEL_39;
          v30 = *(_DWORD *)(v16 + 48);
          if ( (v30 & 0x100) != 0 || !v40 )
          {
            v31 = v41;
          }
          else
          {
            v32 = PdcCreateWatchdogAroundClientCall();
            v31 = v33 | 4;
            if ( !v32 )
              v31 = v33;
            v41 = v31;
          }
          if ( v31 )
          {
            if ( (v30 & 8) != 0 )
            {
              result = MiCheckSecuredVad(v16, v50, v52, ProtectionMask, KeGetCurrentThread()->PreviousMode, 0LL);
              v39 = result;
              if ( (int)result < 0 )
                goto LABEL_39;
              v63[0] = 1;
              v45 = (_QWORD *)v46;
              v31 = v41;
            }
            v58[0] = v14;
            v58[1] = v13;
            result = MiCommitVadMetadataBits(v16, v58, v31);
            v39 = result;
            if ( (int)result < 0 )
              goto LABEL_39;
            v17 = v63[0];
          }
          else
          {
            v17 = 0;
          }
        }
        v18 = *(_DWORD *)(v16 + 48);
        v19 = v18 & 0x200000;
        if ( ((v18 & 0x200000) == 0 || (v18 & 0x800000) == 0 && (v18 & 0x180000) < 0x100000) && (v18 & 0x70) != 0x50 )
        {
          v20 = v50;
          goto LABEL_14;
        }
        if ( (v18 & 0xA00000) == 0xA00000 )
        {
          VadPageSize = MiGetVadPageSize(v16);
          v20 = v50;
          if ( ((v50 | (v13 + 1)) & ((VadPageSize << 12) - 1)) == 0 )
          {
LABEL_14:
            if ( v19 && (v18 & 0xC000000) == 0x8000000 )
            {
              v39 = MiProtectEnclavePages(a2, a1, v16, v14, v13, v11, ProtectionMask, v10, a6, a3, a4);
              v28 = (PVOID)v16;
              goto LABEL_40;
            }
            if ( (v10 & 0x5FFFFFFF) != 0 )
            {
              result = 3221225541LL;
              goto LABEL_38;
            }
            if ( !v11 )
            {
              result = 3221225541LL;
              goto LABEL_38;
            }
            v21 = v18 & 0x70;
            if ( v21 == 48 )
            {
              v39 = MiProtectAweRegion(v14, v13, ProtectionMask, v42, &v43);
              if ( (v39 & 0x80000000) == 0 )
              {
                MiUnlockAndDereferenceVad((PVOID)v16);
                *a4 = v13 - v14 + 1;
                *a3 = v14;
                *a6 = v43;
                return v39;
              }
              result = 3221225496LL;
              goto LABEL_38;
            }
            if ( v21 == 16 )
            {
              result = 3221225496LL;
              goto LABEL_38;
            }
            v22 = v48;
            if ( v48 && ((v18 & 0x200000) != 0 || (*(_DWORD *)(**(_QWORD **)(v16 + 72) + 56LL) & 0x20) != 0) )
              goto LABEL_66;
            if ( (v18 & 8) == 0 || v17 )
            {
              v23 = (unsigned __int64)v45;
            }
            else
            {
              result = MiCheckSecuredVad(v16, v20, v52, ProtectionMask, KeGetCurrentThread()->PreviousMode, 0LL);
              v39 = result;
              if ( (int)result < 0 )
                goto LABEL_39;
              v23 = v46;
            }
            v24 = *(unsigned int *)(v16 + 48);
            if ( (v24 & 0x200000) == 0 )
            {
              if ( (v11 & 0x600) == 0 )
              {
                if ( (v24 & 0x70) == 0x20 )
                {
                  if ( (v11 & 4) != 0 )
                    v11 = v11 & 0xFFFFFFF3 | 8;
                  if ( (v11 & 0x40) != 0 )
                    v11 = v11 & 0xFFFFFF3F | 0x80;
                }
                v25 = MmCompatibleProtectionMask[(v24 >> 7) & 7] | 0x700;
                if ( (v11 | v25) != v25 )
                {
                  result = 3221225550LL;
                  goto LABEL_38;
                }
                if ( (*(_DWORD *)(**(_QWORD **)(v16 + 72) + 56LL) & 0xA0) != 0x80 )
                {
                  if ( (unsigned int)MiVadMapsLargeImage(v16) )
                  {
                    if ( v11 == 8 || v11 == 128 )
                    {
                      MiUnlockAndDereferenceVad(v26);
                      *a4 = v13 - v14 + 1;
                      *a3 = v14;
                      *a6 = MmProtectToValue[ProtectionMask];
                      return 0LL;
                    }
                    result = 3221225550LL;
                    goto LABEL_38;
                  }
                  if ( !(unsigned int)MiIsRangeFullyCommitted(v26, v14, v13) )
                  {
                    result = 3221225517LL;
                    goto LABEL_38;
                  }
                }
                result = MiSetProtectionOnSection(a2, v16, v14, v13, v11, v22, &v43, &v44);
                v39 = result;
                if ( (int)result < 0 )
                  goto LABEL_39;
LABEL_34:
                MiUnlockAndDereferenceVad((PVOID)v16);
                *a4 = v13 - v14 + 1;
                *a3 = v14;
                *a6 = v43;
                return v44 != 0 ? 0x40000017 : 0;
              }
LABEL_66:
              result = 3221225714LL;
              goto LABEL_38;
            }
            if ( (v11 & 0x88) != 0 || v22 )
              goto LABEL_66;
            if ( (v24 & 0x70) == 0x40 )
            {
              if ( (v11 & 0xFFFFF9F9) != 0 )
              {
                result = 3221225541LL;
                goto LABEL_38;
              }
              v11 &= 0x7FFFF9FFu;
              v36 = *(_DWORD *)(v16 + 48) & 0xC00;
              if ( (*(_DWORD *)(v16 + 48) & 0x380) != 0 && v36 == 3072 )
              {
                v11 |= 0x400u;
              }
              else if ( v36 == 1024 )
              {
                v11 |= 0x200u;
              }
              ProtectionMask = MiMakeProtectionMask(v11);
            }
            result = MiProtectPrivateMemory(v16, v14, v13, ProtectionMask, v11, v42, &v43, (__int64)&v44);
            v39 = result;
            if ( (int)result >= 0 )
            {
              if ( v23 )
              {
                if ( v23 < v13 )
                {
                  v37 = v23 >> 12;
                  if ( v37 >= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) )
                  {
                    v38 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
                    if ( v37 <= v38 && (v13 + 1) >> 12 <= v38 )
                      Teb[2] = v13 + 1;
                  }
                }
              }
              goto LABEL_34;
            }
LABEL_39:
            v28 = P;
            if ( !P )
              return result;
LABEL_40:
            MiUnlockAndDereferenceVad(v28);
            return v39;
          }
          result = 3221225496LL;
LABEL_38:
          v39 = result;
          goto LABEL_39;
        }
        if ( ProtectionMask == ((v18 >> 7) & 0x1F) )
        {
          MiUnlockAndDereferenceVad((PVOID)v16);
          *a4 = v13 - v14 + 1;
          *a3 = v14;
          *a6 = MmProtectToValue[ProtectionMask];
          return 0LL;
        }
      }
      else
      {
        result = v39;
        if ( v39 != -1073741664 )
          goto LABEL_39;
      }
      result = 3221225496LL;
      goto LABEL_38;
    }
    return 3221225541LL;
  }
  return result;
}
