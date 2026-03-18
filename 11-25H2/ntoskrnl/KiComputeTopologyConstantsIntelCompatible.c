/*
 * XREFs of KiComputeTopologyConstantsIntelCompatible @ 0x1405C488C
 * Callers:
 *     KiComputeTopologyConstants @ 0x1405C45E8 (KiComputeTopologyConstants.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KiComputeTopologyConstantsIntelCompatible(int a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  unsigned int v6; // r14d
  int v16; // r15d
  unsigned int v17; // r11d
  unsigned int v23; // ecx
  char v24; // r8
  char v25; // r8
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  __int64 result; // rax
  int i; // r11d
  unsigned int v43; // r8d
  unsigned int v44; // ecx
  __int128 v45; // [rsp+18h] [rbp-28h]
  __int64 v46; // [rsp+28h] [rbp-18h]

  v46 = 0LL;
  v45 = 0LL;
  v6 = 11;
  if ( a2 < 0x1F )
  {
    if ( a2 < 0xB )
    {
      if ( a2 < 4 )
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
      v6 = 31;
      goto LABEL_6;
    }
  }
  _RAX = 11LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX )
  {
LABEL_6:
    *a4 |= 0x10u;
    v16 = 0;
    v17 = 0;
    a4[6] = _RDX;
    do
    {
      _RAX = v6;
      __asm { cpuid }
      v23 = (unsigned int)_RCX >> 8;
      ++v16;
      v24 = _RAX;
      if ( (_BYTE)v23 )
      {
        switch ( (unsigned __int8)v23 )
        {
          case 1u:
            v17 = 1;
            *a4 |= 1u;
            a4[2] = 1 << (_RAX & 0x1F);
            DWORD1(v45) = 1 << (_RAX & 0x1F);
            break;
          case 2u:
            v17 = 2;
            DWORD2(v45) = 1 << (_RAX & 0x1F);
            break;
          case 3u:
            *a4 |= 8u;
            v27 = v17;
            v17 = 3;
            a4[5] = *((_DWORD *)&v45 + v27);
            HIDWORD(v45) = 1 << (v24 & 0x1F);
            break;
          case 4u:
            v17 = 4;
            LODWORD(v46) = 1 << (_RAX & 0x1F);
            break;
          default:
            v25 = _RAX & 0x1F;
            if ( (unsigned __int8)v23 == 5 )
            {
              v26 = *((_DWORD *)&v45 + v17) / a4[2];
              *a4 |= 4u;
              v17 = 5;
              a4[4] = v26;
              HIDWORD(v46) = 1 << v25;
            }
            else
            {
              *((_DWORD *)&v45 + v17) = 1 << v25;
            }
            break;
        }
      }
    }
    while ( (_WORD)_RBX );
    v28 = *((_DWORD *)&v45 + v17) / a4[2];
    *a4 |= 2u;
    a4[3] = v28;
    goto LABEL_25;
  }
LABEL_22:
  _RAX = 4LL;
  __asm { cpuid }
  _BitScanReverse((unsigned int *)&_RCX, 2 * ((unsigned int)_RAX >> 26) + 1);
  *a4 |= 2u;
  a4[3] = 1 << _RCX;
LABEL_23:
  if ( (*(_DWORD *)(a3 + 12) & 0x10000000) != 0 )
  {
    _BitScanReverse(&v34, 2 * *(unsigned __int8 *)(a3 + 6) - 1);
    v35 = (1 << v34) / a4[3];
    *a4 |= 1u;
    a4[2] = v35;
  }
LABEL_25:
  result = *a4;
  if ( (result & 8) == 0 && a1 == 2 && a2 >= 4 )
  {
    for ( i = 0; ; ++i )
    {
      _RAX = 4LL;
      __asm { cpuid }
      v43 = _RAX;
      result = (unsigned int)((int)((_DWORD)_RAX << 27) >> 27);
      if ( !(_DWORD)result )
        break;
      if ( (_DWORD)result == 3 && (v43 & 0xE0) == 0x40 )
      {
        result = 2 * ((v43 >> 14) & 0xFFF) + 1;
        _BitScanReverse(&v44, result);
        *a4 |= 8u;
        a4[5] = 1 << v44;
        return result;
      }
    }
  }
  return result;
}
