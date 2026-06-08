/*
 * XREFs of RegisterKernelCStates @ 0x14003DCFC
 * Callers:
 *     RegisterKernelIdleStates @ 0x14003D3B0 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     DecodeAcpi2CState @ 0x14003E348 (DecodeAcpi2CState.c)
 *     DecodeAcpiIdleState @ 0x14003E3A0 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall RegisterKernelCStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  __int64 v7; // r13
  unsigned __int8 v8; // r12
  unsigned int v9; // edx
  unsigned int i; // esi
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // ecx
  char v21; // al
  unsigned int v22; // ecx
  _QWORD *v24; // [rsp+38h] [rbp-31h]
  _BYTE v25[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h] BYREF
  __int64 v27; // [rsp+50h] [rbp-19h]
  __int64 v28; // [rsp+58h] [rbp-11h]
  _QWORD *v29; // [rsp+60h] [rbp-9h]
  __int64 v30; // [rsp+68h] [rbp-1h]
  __int128 v31; // [rsp+70h] [rbp+7h] BYREF
  int v32; // [rsp+80h] [rbp+17h]

  v3 = *(_QWORD *)(a1 + 528);
  v4 = 0;
  v27 = a1;
  v32 = 0;
  v26 = 0LL;
  v7 = a1;
  v31 = 0LL;
  if ( v3 && *(_DWORD *)v3 )
  {
    *(_BYTE *)(a2 + 19) = 1;
    *(_QWORD *)(a2 + 24) = AcpiCStatePreselect;
    v8 = 1;
    *(_DWORD *)(a2 + 96) = 0;
    *(_QWORD *)(a2 + 40) = AcpiCStateAvailabilityCheck;
    *(_QWORD *)(a2 + 64) = AcpiCStateIdleExecute;
    *(_QWORD *)(a2 + 72) = AcpiCStateIdleComplete;
    *(_QWORD *)(a2 + 80) = AcpiCStateIsHalted;
    *(_QWORD *)(a2 + 88) = AcpiCStateIsHalted;
    *(_BYTE *)(a2 + 16) = 0;
    *(_DWORD *)(a3 + 40) = 0;
    v25[0] = 0;
    if ( *(_BYTE *)(v3 + 16) != 1 )
    {
      LOBYTE(v31) = 127;
      BYTE12(v31) = 1;
      HIWORD(v31) = 0;
      v32 = 0;
      DecodeAcpi2CState(a1, (unsigned int)&v31, (unsigned int)&v26, (unsigned int)v25, a3 + 48);
      v8 = 2;
      *(_DWORD *)(a2 + 104) = *(_DWORD *)(a2 + 104) & 0x7FFFFF80 | (v25[0] << 31) | 0xF;
      *(_DWORD *)(a2 + 96) = 1;
      *(_DWORD *)(a3 + 40) = 1;
    }
    v9 = *(_DWORD *)v3;
    for ( i = 0; i < *(_DWORD *)v3; ++v8 )
    {
      if ( v8 > 3u )
        break;
      v11 = *(unsigned __int8 *)(v3 + 20LL * i + 16);
      if ( v11 > 3 )
        v11 = 3;
      if ( v11 == v8 )
      {
        v12 = i + 1;
        if ( (unsigned int)v12 < v9 )
        {
          do
          {
            v13 = *(unsigned __int8 *)(v3 + 20 * v12 + 16);
            if ( v13 > 3 )
              v13 = 3;
            if ( v13 != v8 )
              break;
            if ( *(_DWORD *)(v3 + 20 * v12 + 20) >= *(_DWORD *)(v3 + 20 * (i + 1LL)) )
              break;
            ++i;
            v12 = (unsigned int)(v12 + 1);
          }
          while ( (unsigned int)v12 < v9 );
          v7 = v27;
        }
        v14 = 88LL * *(unsigned int *)(a2 + 96);
        v30 = 32LL * *(unsigned int *)(a2 + 96);
        v24 = (_QWORD *)(a3 + v14 + 48);
        v15 = 4LL * i + 1;
        v29 = v24;
        v16 = v3 + 4 * (i + v15);
        *v24 = v16;
        v17 = *(unsigned __int8 *)(v16 + 12);
        v28 = v16;
        if ( (int)DecodeAcpiIdleState(v7, v3 + 4 * (i + v15), v17, 0, (__int64)&v26, (__int64)v25, 0LL, (__int64)v24) < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v7 + 1112), 8u);
        }
        else
        {
          v18 = v30;
          v19 = v28;
          *((_BYTE *)v29 + 82) = *(_BYTE *)(v28 + 12);
          v20 = *(_DWORD *)(v18 + a2 + 104) ^ ((unsigned __int8)*(_DWORD *)(v18 + a2 + 104) ^ (unsigned __int8)(8 * v8)) & 0x78 | 7;
          *(_DWORD *)(v18 + a2 + 104) = v20;
          *(_DWORD *)(v18 + a2 + 104) = v20 & 0x7FFFFFFF | (v25[0] << 31);
          *(_DWORD *)(v18 + a2 + 108) = 10 * *(unsigned __int16 *)(v19 + 14);
          *(_DWORD *)(v18 + a2 + 116) = *(_DWORD *)(v19 + 16);
          ++*(_DWORD *)(a2 + 96);
          ++*(_DWORD *)(a3 + 40);
        }
      }
      else
      {
        --i;
      }
      v9 = *(_DWORD *)v3;
      ++i;
    }
    v21 = *(_BYTE *)(a3 + 40);
    v22 = 0;
    *(_BYTE *)(a3 + 20) = v21;
    if ( v21 )
    {
      do
      {
        *(_BYTE *)(v22 + a3 + 21) = v22;
        ++v22;
      }
      while ( v22 < *(unsigned __int8 *)(a3 + 20) );
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
