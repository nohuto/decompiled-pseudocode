/*
 * XREFs of RegisterKernelCStates @ 0x140034694
 * Callers:
 *     RegisterKernelIdleStates @ 0x140034BC0 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x14000D660 (__security_check_cookie.c)
 *     DecodeAcpi2CState @ 0x1400244F0 (DecodeAcpi2CState.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  char v18; // al
  unsigned int v19; // ecx
  _BYTE v21[8]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+58h] [rbp-28h] BYREF
  int v27; // [rsp+68h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 528);
  v4 = 0;
  v23 = a1;
  v27 = 0;
  v22 = 0LL;
  v7 = a1;
  v26 = 0LL;
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
    v21[0] = 0;
    if ( *(_BYTE *)(v3 + 16) != 1 )
    {
      LOBYTE(v26) = 127;
      BYTE12(v26) = 1;
      HIWORD(v26) = 0;
      v27 = 0;
      DecodeAcpi2CState(a1, (__int64)&v26, (__int64)&v22, (__int64)v21, a3 + 48);
      v8 = 2;
      *(_DWORD *)(a2 + 104) = *(_DWORD *)(a2 + 104) & 0x7FFFFF80 | (v21[0] << 31) | 0xF;
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
          v7 = v23;
        }
        v14 = 88LL * *(unsigned int *)(a2 + 96) + 48;
        v24 = 32LL * *(unsigned int *)(a2 + 96);
        *(_QWORD *)(a3 + v14) = v3 + 4 * (i + 4LL * i + 1);
        v25 = v3 + 4 * (i + 4LL * i + 1);
        if ( (int)DecodeAcpi2CState(v7, v25, (__int64)&v22, (__int64)v21, a3 + v14) < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v7 + 1112), 8u);
        }
        else
        {
          v15 = v24;
          v16 = v25;
          v17 = *(_DWORD *)(v24 + a2 + 104) ^ ((unsigned __int8)*(_DWORD *)(v24 + a2 + 104) ^ (unsigned __int8)(8 * v8)) & 0x78 | 7;
          *(_DWORD *)(v24 + a2 + 104) = v17;
          *(_DWORD *)(v15 + a2 + 104) = v17 & 0x7FFFFFFF | (v21[0] << 31);
          *(_DWORD *)(v15 + a2 + 108) = 10 * *(unsigned __int16 *)(v16 + 14);
          *(_DWORD *)(v15 + a2 + 116) = *(_DWORD *)(v16 + 16);
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
    v18 = *(_BYTE *)(a3 + 40);
    v19 = 0;
    *(_BYTE *)(a3 + 20) = v18;
    if ( v18 )
    {
      do
      {
        *(_BYTE *)(v19 + a3 + 21) = v19;
        ++v19;
      }
      while ( v19 < *(unsigned __int8 *)(a3 + 20) );
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
