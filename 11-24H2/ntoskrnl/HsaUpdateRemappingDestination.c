/*
 * XREFs of HsaUpdateRemappingDestination @ 0x140570EC0
 * Callers:
 *     <none>
 * Callees:
 *     IvtUpdateSingleTargetExtendedDestination @ 0x14056EB4C (IvtUpdateSingleTargetExtendedDestination.c)
 *     HsaGetDeviceAperture @ 0x140570398 (HsaGetDeviceAperture.c)
 *     HsaInvalidateRemappingTableEntries @ 0x140570844 (HsaInvalidateRemappingTableEntries.c)
 */

__int64 __fastcall HsaUpdateRemappingDestination(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int128 v5; // rax
  unsigned int v6; // ebp
  __int64 v7; // r15
  __int64 v8; // r12
  char v9; // bl
  __int64 i; // rsi
  _QWORD *v11; // r13
  unsigned int v12; // r14d
  __int64 v13; // rbp
  __int64 v14; // rdi
  volatile unsigned __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 updated; // rcx
  int v18; // r12d
  unsigned int v19; // esi
  int v20; // r15d
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // ebx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rbx
  __int128 v26; // rt0
  unsigned __int8 v27; // tt
  int v29; // [rsp+30h] [rbp-78h]
  unsigned int v30; // [rsp+34h] [rbp-74h]
  __int64 v31; // [rsp+38h] [rbp-70h]
  char v33; // [rsp+B8h] [rbp+10h]

  *((_QWORD *)&v5 + 1) = a2;
  v33 = BYTE8(v5);
  v6 = 0;
  v7 = a5;
  v8 = a3;
  v30 = 0;
  v9 = BYTE8(v5);
  for ( i = a1; v6 < HsaAllocatedDeviceApertures; v30 = v6 )
  {
    *(_QWORD *)&v5 = HsaGetDeviceAperture(v6 << 9);
    v31 = v5;
    v11 = (_QWORD *)(v5 + 16);
    if ( !v6 || *v11 )
    {
      v12 = 0;
      if ( *(_DWORD *)(i + 180) )
      {
        v13 = v5;
        do
        {
          v14 = *v11 + 16LL * v12;
          *((_QWORD *)&v5 + 1) = v12;
          v15 = *(_QWORD *)v14;
          if ( (*(_QWORD *)v14 & 1) != 0 )
          {
            if ( !v9
              || (*((_QWORD *)&v5 + 1) = (unsigned __int64)v12 >> 3,
                  BYTE8(v5) = *(char *)(*((_QWORD *)&v5 + 1) + *(_QWORD *)(v13 + 40)) >> (v12 & 7),
                  (BYTE8(v5) & 1) != 0) )
            {
              v16 = (*(unsigned __int8 *)(v14 + 15) << 24) | (v15 >> 8) & 0xFFFFFF;
              if ( (v15 & 0x40) != 0 )
              {
                updated = 0LL;
                v18 = (unsigned __int16)((unsigned int)v15 >> 8);
                v29 = 0;
                v19 = (*(unsigned __int8 *)(v14 + 15) << 24) | (v15 >> 8) & 0xFF0000;
                v20 = 1;
                if ( (unsigned __int16)((unsigned int)v15 >> 8) )
                {
                  v21 = a5;
                  v22 = a3;
                  do
                  {
                    if ( (v20 & v18) != 0 )
                    {
                      v19 = v20 | v19 & 0xFFFF0000;
                      v18 &= ~v20;
                      LODWORD(v5) = IvtUpdateSingleTargetExtendedDestination(v19, 1, v22, v21, a4);
                      updated = (unsigned int)v5 | v29;
                      v29 |= v5;
                    }
                    v20 *= 2;
                  }
                  while ( v18 );
                  v13 = v31;
                }
                i = a1;
                v7 = a5;
                v8 = a3;
              }
              else
              {
                updated = (unsigned int)IvtUpdateSingleTargetExtendedDestination(v16, 0, v8, v7, a4);
              }
              if ( v16 != (_DWORD)updated )
              {
                v23 = updated;
                v24 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFLL | ((updated & 0xFFFFFFFFFF000000uLL) << 32);
                v25 = *(_QWORD *)v14 & 0xFFFFFFFF000000FFuLL | ((unsigned __int64)(v23 & 0xFFFFFF) << 8);
                v5 = *(_OWORD *)v14;
                do
                {
                  v26 = v5;
                  v27 = _InterlockedCompareExchange128((volatile signed __int64 *)v14, v24, v25, (signed __int64 *)&v26);
                  v5 = v26;
                }
                while ( !v27 );
              }
              v9 = v33;
            }
          }
          ++v12;
        }
        while ( v12 < *(_DWORD *)(i + 180) );
        v6 = v30;
      }
    }
    ++v6;
  }
  return HsaInvalidateRemappingTableEntries((__int64 *)i, *((__int64 *)&v5 + 1), 0);
}
