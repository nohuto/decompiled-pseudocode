/*
 * XREFs of KiComputeTopologyConstantsIntelCompatible @ 0x1405C8BF8
 * Callers:
 *     KiComputeTopologyConstants @ 0x1405C8808 (KiComputeTopologyConstants.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall KiComputeTopologyConstantsIntelCompatible(__int64 _RCX, __int64 _RDX, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rdi
  unsigned int v6; // r15d
  int v7; // r13d
  __int64 v8; // r8
  unsigned int v9; // r10d
  int v19; // r11d
  __int64 v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  unsigned int v34; // eax
  __int64 v37; // r8
  __int64 i; // r9
  unsigned int v39; // ebx
  unsigned __int64 v40; // rax
  unsigned int v41; // eax
  int v45; // eax
  __int64 result; // rax
  int j; // r9d
  unsigned int v48; // ecx
  int v53; // ecx
  int v54; // ecx
  __int128 v55; // [rsp+38h] [rbp-28h]
  __int64 v56; // [rsp+48h] [rbp-18h]

  v56 = 0LL;
  v5 = (unsigned int *)a4;
  v6 = _RDX;
  v7 = _RCX;
  v8 = 31LL;
  v9 = 11;
  v55 = 0LL;
  if ( (unsigned int)_RDX < 0x1F )
  {
    if ( (unsigned int)_RDX < 0xB )
    {
      if ( (unsigned int)_RDX < 4 )
        goto LABEL_23;
      goto LABEL_22;
    }
  }
  else
  {
    _RAX = 31LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX )
    {
      v9 = 31;
      goto LABEL_6;
    }
  }
  _RAX = 11LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX )
  {
LABEL_6:
    *(_DWORD *)a4 |= 0x10u;
    v19 = 0;
    *(_DWORD *)(a4 + 24) = _RDX;
    a4 = 0LL;
    do
    {
      _RAX = v9;
      __asm { cpuid }
      v25 = (unsigned int)_RCX >> 8;
      ++v19;
      v8 = (unsigned int)_RAX;
      if ( (_BYTE)v25 )
      {
        switch ( (unsigned __int8)v25 )
        {
          case 1u:
            v8 = _RAX & 0x1F;
            LOBYTE(v25) = _RAX & 0x1F;
            a4 = 1LL;
            *v5 |= 1u;
            v5[2] = 1 << (_RAX & 0x1F);
            DWORD1(v55) = 1 << (_RAX & 0x1F);
            break;
          case 2u:
            v8 = _RAX & 0x1F;
            LOBYTE(v25) = _RAX & 0x1F;
            a4 = 2LL;
            DWORD2(v55) = 1 << (_RAX & 0x1F);
            break;
          case 3u:
            *v5 |= 8u;
            v8 = _RAX & 0x1F;
            v28 = (unsigned int)a4;
            a4 = 3LL;
            v25 = *((unsigned int *)&v55 + v28);
            v5[5] = v25;
            LOBYTE(v25) = v8;
            HIDWORD(v55) = 1 << v8;
            break;
          default:
            v26 = (unsigned __int8)v25 - 4;
            if ( (unsigned __int8)v25 == 4 )
            {
              v8 &= 0x1Fu;
              LOBYTE(v25) = v8;
              a4 = 4LL;
              LODWORD(v56) = 1 << v8;
            }
            else
            {
              v8 &= 0x1Fu;
              LOBYTE(v25) = v8;
              if ( v26 == 1 )
              {
                v27 = *((_DWORD *)&v55 + (unsigned int)a4) / v5[2];
                *v5 |= 4u;
                a4 = 5LL;
                v5[4] = v27;
                HIDWORD(v56) = 1 << v8;
              }
              else
              {
                *((_DWORD *)&v55 + (unsigned int)a4) = 1 << v8;
              }
            }
            break;
        }
      }
    }
    while ( (_WORD)_RBX );
    v30 = *((_DWORD *)&v55 + (unsigned int)a4) % v5[2];
    v29 = *((_DWORD *)&v55 + (unsigned int)a4) / v5[2];
    *v5 |= 2u;
    v5[3] = v29;
    goto LABEL_27;
  }
LABEL_22:
  _RAX = 4LL;
  __asm { cpuid }
  _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
  *(_DWORD *)a4 |= 2u;
  *(_DWORD *)(a4 + 12) = 1 << _RCX;
LABEL_23:
  if ( (*(_DWORD *)(a3 + 12) & 0x10000000) != 0 )
  {
    HIDWORD(v30) = 0;
    _BitScanReverse((unsigned int *)&v25, 2 * *(unsigned __int8 *)(a3 + 6) - 1);
    LODWORD(v30) = (unsigned int)(1 << v25) % *(_DWORD *)(a4 + 12);
    v34 = (unsigned int)(1 << v25) / *(_DWORD *)(a4 + 12);
    *(_DWORD *)a4 |= 1u;
    *(_DWORD *)(a4 + 8) = v34;
  }
  else if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(_RCX, _RDX, 31LL, a4) )
  {
    *v5 |= 1u;
    v5[2] = 1;
  }
LABEL_27:
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(v25, v30, v8, a4) )
  {
    if ( v7 == 2 )
    {
      i = *v5;
      if ( (i & 4) == 0 )
      {
        v37 = BYTE1(*(_DWORD *)a3) & 0xF;
        if ( (_DWORD)v37 == 15 )
        {
          _RCX = *(_DWORD *)a3 >> 20;
          _RDX = (unsigned int)(unsigned __int8)_RCX + 15;
          v39 = (*(_DWORD *)a3 & 0xF0 | (*(_DWORD *)a3 >> 8) & 0xF00u) >> 4;
          if ( (unsigned __int8)_RCX != -9 )
            goto LABEL_39;
        }
        else
        {
          if ( (_DWORD)v37 != 6 )
            goto LABEL_39;
          v39 = (*(_DWORD *)a3 & 0xF0 | (*(_DWORD *)a3 >> 8) & 0xF00u) >> 4;
        }
        if ( v39 == 173 )
        {
          _RCX = 23LL;
          v40 = __readmsr(0x17u);
          _RDX = (unsigned __int64)HIDWORD(v40) << 32;
          if ( (((_RDX | (unsigned __int64)(unsigned int)v40) >> 50) & 7) == 1 )
          {
            v41 = v5[3];
            i = (unsigned int)i | 4;
            v5[4] = 64;
            *v5 = i;
            if ( v41 < 0x40 )
              v5[4] = v41;
          }
        }
      }
    }
  }
LABEL_39:
  if ( (*v5 & 8) == 0 && v7 == 2 && v6 >= 4 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      _RAX = 4LL;
      __asm { cpuid }
      v37 = (unsigned int)_RAX;
      v45 = (int)((_DWORD)_RAX << 27) >> 27;
      if ( !v45 )
        break;
      if ( v45 == 3 && (v37 & 0xE0) == 0x40 )
      {
        v37 = ((unsigned int)v37 >> 14) & 0xFFF;
        _BitScanReverse((unsigned int *)&_RCX, 2 * v37 + 1);
        *v5 |= 8u;
        v5[5] = 1 << _RCX;
        break;
      }
    }
  }
  result = Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(_RCX, _RDX, v37, i);
  if ( (_DWORD)result )
  {
    result = *v5;
    if ( (result & 0x20) == 0 && v6 >= 4 )
    {
      for ( j = 0; ; ++j )
      {
        _RAX = 4LL;
        __asm { cpuid }
        v53 = (int)((_DWORD)result << 27) >> 27;
        if ( !v53 )
          break;
        if ( v53 == 3 && ((unsigned __int8)result & 0xE0u) <= 0x60 )
        {
          _BitScanReverse(&v48, 2 * (((unsigned int)result >> 14) & 0xFFF) + 1);
          *v5 |= 0x20u;
          v5[7] = 1 << v48;
        }
      }
      v54 = *v5;
      if ( (*v5 & 0x20) != 0 )
      {
        result = v54 & 5;
        if ( (_BYTE)result == 5 )
        {
          result = v5[2] * v5[4];
          if ( v5[7] > (unsigned int)result )
            v5[7] = result;
        }
        if ( (v54 & 3) == 3 )
        {
          result = v5[2] * v5[3];
          if ( v5[7] > (unsigned int)result )
            v5[7] = result;
        }
      }
    }
  }
  return result;
}
