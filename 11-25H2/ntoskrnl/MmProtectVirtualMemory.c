/*
 * XREFs of MmProtectVirtualMemory @ 0x1408F78C8
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     KiTpWriteUmMemory @ 0x1405C5190 (KiTpWriteUmMemory.c)
 *     NtProtectVirtualMemory @ 0x1408F7510 (NtProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiAllowProtectionChange @ 0x140246230 (MiAllowProtectionChange.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiMakeProtectionMask @ 0x1402C2BF0 (MiMakeProtectionMask.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiVadMapsLargeImage @ 0x1403D9300 (MiVadMapsLargeImage.c)
 *     MiGetVadPageSize @ 0x14042F920 (MiGetVadPageSize.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiProtectEnclavePages @ 0x1404CAFB0 (MiProtectEnclavePages.c)
 *     xHalUnmaskInterrupt @ 0x1404D7A50 (xHalUnmaskInterrupt.c)
 *     MiIsRangeFullyCommitted @ 0x1408F8634 (MiIsRangeFullyCommitted.c)
 *     MiCheckSecuredVad @ 0x1408F8A18 (MiCheckSecuredVad.c)
 *     MiCommitVadMetadataBits @ 0x140906D54 (MiCommitVadMetadataBits.c)
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
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int ProtectionMask; // r12d
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // r15
  ULONG_PTR v15; // rax
  ULONG_PTR v16; // r14
  char v17; // r8
  unsigned int v18; // edx
  int v19; // r10d
  int v20; // eax
  int v21; // r9d
  unsigned __int64 v22; // rcx
  int v23; // ecx
  char *v24; // rcx
  __int64 result; // rax
  char *v26; // rcx
  __int64 VadPageSize; // rax
  unsigned __int64 v28; // rcx
  int v29; // edx
  unsigned int v30; // r13d
  int v31; // eax
  unsigned int v32; // ecx
  __int16 v33; // ax
  char v34; // al
  unsigned int v35; // [rsp+60h] [rbp-C8h] BYREF
  char v36; // [rsp+64h] [rbp-C4h]
  unsigned int v37; // [rsp+68h] [rbp-C0h]
  int v38; // [rsp+6Ch] [rbp-BCh] BYREF
  unsigned int v39; // [rsp+70h] [rbp-B8h]
  unsigned int v40; // [rsp+74h] [rbp-B4h]
  int v41; // [rsp+78h] [rbp-B0h] BYREF
  int v42; // [rsp+7Ch] [rbp-ACh]
  unsigned int v43; // [rsp+80h] [rbp-A8h]
  PVOID P; // [rsp+88h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+90h] [rbp-98h]
  unsigned __int64 v46; // [rsp+98h] [rbp-90h]
  unsigned int v47; // [rsp+A0h] [rbp-88h]
  __int64 v48; // [rsp+A8h] [rbp-80h]
  _QWORD *Teb; // [rsp+B0h] [rbp-78h]
  _QWORD *v50; // [rsp+B8h] [rbp-70h]
  unsigned __int64 v51; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v52; // [rsp+C8h] [rbp-60h]
  _QWORD v53[11]; // [rsp+D0h] [rbp-58h] BYREF
  char v58; // [rsp+150h] [rbp+28h]

  v6 = a2;
  v7 = a5;
  v35 = 0;
  v38 = 0;
  *a6 = 1;
  v41 = 0;
  v43 = 0;
  v36 = 1;
  v8 = *a3;
  v45 = v8;
  v53[2] = v8;
  v9 = *a4;
  v48 = v9;
  v53[0] = v9;
  v37 = a5 & 0x7F800;
  if ( (a5 & 0x7F800) == 0 || (result = xHalUnmaskInterrupt(), v35 = result, (int)result >= 0) )
  {
    v39 = a5 >> 31;
    LODWORD(P) = a5 >> 31;
    v10 = a5 & 0xB0000000;
    v40 = a5 & 0xB0000000;
    v47 = a5 & 0xB0000000;
    v11 = a5 & 0x4FF807FF;
    if ( (a5 & 0x40000000) != 0 )
    {
      if ( (v7 & 0xF0) == 0 )
        return 3221225714LL;
      v36 = 0;
      v11 = v7 & 0xFF807FF;
    }
    if ( v11 )
    {
      ProtectionMask = MiMakeProtectionMask(v11);
      v42 = ProtectionMask;
      if ( ProtectionMask != -1 )
        goto LABEL_5;
    }
    else if ( v10 == 0x10000000 || v10 == 0x80000000 )
    {
      ProtectionMask = 24;
      v42 = 24;
LABEL_5:
      v13 = (v9 + v8 - 1) | 0xFFF;
      v52 = v13;
      v14 = v8 & 0xFFFFFFFFFFFFF000uLL;
      v51 = v8 & 0xFFFFFFFFFFFFF000uLL;
      Teb = 0LL;
      v46 = 0LL;
      if ( (ProtectionMask & 0xFFFFFFF8) == 0x10 && KeGetCurrentThread()->ApcStateIndex != 1 )
      {
        if ( !*(_QWORD *)(v6 + 784)
          || ((v33 = *(_WORD *)(v6 + 1772), v33 == 332) || v33 == 452 ? (v34 = 1) : (v34 = 0), !v34) )
        {
          Teb = KeGetCurrentThread()->Teb;
          v50 = Teb;
          v46 = Teb[2] & 0xFFFFFFFFFFFFF000uLL;
        }
      }
      P = 0LL;
      v15 = MiObtainReferencedVadEx(v14, 0, (int *)&v35);
      v16 = v15;
      v50 = (_QWORD *)v15;
      if ( v15 )
      {
        P = (PVOID)v15;
        if ( v13 >> 12 > (*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) )
          goto LABEL_35;
        if ( (*(_DWORD *)(v15 + 48) & 0x4200000) == 0x4200000 )
        {
          if ( !v37 )
            goto LABEL_87;
        }
        else if ( v37 )
        {
          goto LABEL_87;
        }
        v17 = 0;
        v58 = 0;
        if ( (ProtectionMask & 2) != 0 )
        {
          result = MiAllowProtectionChange(a2, a1, v15, ProtectionMask, v14, v13);
          v35 = result;
          if ( (int)result < 0 )
            goto LABEL_37;
          v29 = *(_DWORD *)(v16 + 48);
          if ( (v29 & 0x100) != 0 || !v36 )
          {
            v30 = v43;
          }
          else
          {
            v31 = PdcCreateWatchdogAroundClientCall();
            v30 = v32 | 4;
            if ( !v31 )
              v30 = v32;
          }
          if ( v30 )
          {
            if ( (v29 & 8) != 0 )
            {
              result = MiCheckSecuredVad(v16, v45, v48, ProtectionMask, KeGetCurrentThread()->PreviousMode, 0LL);
              v35 = result;
              if ( (int)result < 0 )
                goto LABEL_37;
              v58 = 1;
            }
            v53[0] = v14;
            v53[1] = v13;
            result = MiCommitVadMetadataBits(v16, v53, v30);
            v35 = result;
            if ( (int)result < 0 )
            {
LABEL_37:
              v26 = (char *)P;
              if ( !P )
                return result;
              goto LABEL_38;
            }
          }
          v17 = v58;
        }
        v18 = *(_DWORD *)(v16 + 48);
        if ( (v18 & 0x200000) != 0 && ((v18 & 0x800000) != 0 || (v18 & 0x180000) >= 0x100000) || (v18 & 0x70) == 0x50 )
        {
          if ( (v18 & 0xA00000) != 0xA00000 )
          {
            if ( ProtectionMask == ((v18 >> 7) & 0x1F) )
            {
              MiUnlockAndDereferenceVad((char *)v16);
              goto LABEL_90;
            }
            goto LABEL_35;
          }
          VadPageSize = MiGetVadPageSize(v16);
          v19 = v45;
          if ( ((v45 | (v13 + 1)) & ((VadPageSize << 12) - 1)) != 0 )
            goto LABEL_35;
        }
        else
        {
          v19 = v45;
        }
        if ( (v18 & 0xC200000) == 0x8200000 )
        {
          v35 = MiProtectEnclavePages(a2, a1, v16, v14, v13, v11, ProtectionMask, v40, a6, a3, a4);
          v26 = (char *)v16;
LABEL_38:
          MiUnlockAndDereferenceVad(v26);
          return v35;
        }
        if ( (v40 & 0x5FFFFFFF) != 0 || !v11 )
          goto LABEL_87;
        v20 = v18 & 0x70;
        if ( v20 == 48 )
        {
          v35 = MiProtectAweRegion(v14, v13, ProtectionMask, v37, &v38);
          if ( (v35 & 0x80000000) == 0 )
          {
            MiUnlockAndDereferenceVad((char *)v16);
            *a4 = v13 - v14 + 1;
            *a3 = v14;
            *a6 = v38;
            return v35;
          }
        }
        else if ( v20 != 16 )
        {
          v21 = v39;
          if ( v39 && ((v18 & 0x200000) != 0 || (*(_DWORD *)(**(_QWORD **)(v16 + 72) + 56LL) & 0x20) != 0) )
            goto LABEL_70;
          if ( (v18 & 8) != 0 && !v17 )
          {
            result = MiCheckSecuredVad(v16, v19, v48, ProtectionMask, KeGetCurrentThread()->PreviousMode, 0LL);
            v35 = result;
            if ( (int)result < 0 )
              goto LABEL_37;
            v21 = v39;
          }
          v22 = *(unsigned int *)(v16 + 48);
          if ( (v22 & 0x200000) == 0 )
          {
            if ( (v11 & 0x600) == 0 )
            {
              if ( (v22 & 0x70) == 0x20 )
              {
                if ( (v11 & 4) != 0 )
                  v11 = v11 & 0xFFFFFFF3 | 8;
                if ( (v11 & 0x40) != 0 )
                  v11 = v11 & 0xFFFFFF3F | 0x80;
              }
              v23 = MmCompatibleProtectionMask[(v22 >> 7) & 7] | 0x700;
              if ( (v11 | v23) != v23 )
                goto LABEL_111;
              if ( (*(_DWORD *)(**(_QWORD **)(v16 + 72) + 56LL) & 0xA0) == 0x80 )
              {
LABEL_28:
                result = MiSetProtectionOnSection(a2, v16, v14, v13, v11, v39, &v38, &v41);
                v35 = result;
                if ( (int)result < 0 )
                  goto LABEL_37;
LABEL_29:
                MiUnlockAndDereferenceVad((char *)v16);
                *a4 = v13 - v14 + 1;
                *a3 = v14;
                *a6 = v38;
                return v41 != 0 ? 0x40000017 : 0;
              }
              if ( !(unsigned int)MiVadMapsLargeImage(v16) )
              {
                if ( !(unsigned int)MiIsRangeFullyCommitted(v24, v14, v13) )
                {
                  result = 3221225517LL;
                  goto LABEL_36;
                }
                goto LABEL_28;
              }
              if ( v11 != 8 && v11 != 128 )
              {
LABEL_111:
                result = 3221225550LL;
                goto LABEL_36;
              }
              MiUnlockAndDereferenceVad(v24);
LABEL_90:
              *a4 = v13 - v14 + 1;
              *a3 = v14;
              *a6 = MmProtectToValue[ProtectionMask];
              return 0LL;
            }
LABEL_70:
            result = 3221225714LL;
            goto LABEL_36;
          }
          if ( (v11 & 0x88) != 0 || v21 )
            goto LABEL_70;
          if ( (v22 & 0x70) != 0x40 )
            goto LABEL_49;
          if ( (v11 & 0xFFFFF9F9) == 0 )
          {
            v11 &= 0x7FFFF9FFu;
            if ( (*(_DWORD *)(v16 + 48) & 0x380) != 0 && (*(_DWORD *)(v16 + 48) & 0xC00) == 3072 )
            {
              v11 |= 0x400u;
            }
            else if ( (*(_DWORD *)(v16 + 48) & 0xC00) == 0x400 )
            {
              v11 |= 0x200u;
            }
            ProtectionMask = MiMakeProtectionMask(v11);
LABEL_49:
            result = MiProtectPrivateMemory(v16, v14, v13, ProtectionMask, v11, v37, &v38, (__int64)&v41);
            v35 = result;
            if ( (int)result >= 0 )
            {
              if ( v46 )
              {
                if ( v46 < v13
                  && v46 >> 12 >= (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) )
                {
                  v28 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
                  if ( v46 >> 12 <= v28 && (v13 + 1) >> 12 <= v28 )
                    Teb[2] = v13 + 1;
                }
              }
              goto LABEL_29;
            }
            goto LABEL_37;
          }
LABEL_87:
          result = 3221225541LL;
          goto LABEL_36;
        }
      }
      else
      {
        result = v35;
        if ( v35 != -1073741664 )
          goto LABEL_37;
      }
LABEL_35:
      result = 3221225496LL;
LABEL_36:
      v35 = result;
      goto LABEL_37;
    }
    return 3221225541LL;
  }
  return result;
}
