/*
 * XREFs of KiComputeTopologyConstantsAmd @ 0x1405C6050
 * Callers:
 *     KiComputeTopologyConstants @ 0x1405C5F38 (KiComputeTopologyConstants.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B2278 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall KiComputeTopologyConstantsAmd(unsigned int a1, unsigned int *a2, __int64 a3, int *a4)
{
  unsigned __int8 v13; // r8
  int v14; // ecx
  int v25; // r15d
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // eax
  char v31; // si
  int v32; // r10d
  int v38; // esi
  unsigned int v39; // r8d
  int v40; // ecx
  unsigned int v41; // ebx
  unsigned int v42; // eax
  int v43; // r9d
  int v44; // edx
  int v45; // ecx
  int i; // r9d
  unsigned int v52; // ecx
  int v58; // ecx
  int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // edx
  unsigned int v62; // eax
  int v63; // eax

  if ( a1 < 0x80000008 )
    return;
  _RAX = 2147483656LL;
  __asm { cpuid }
  v13 = _RCX;
  v14 = (unsigned __int16)_RCX >> 12;
  if ( !v14 )
    _BitScanReverse((unsigned int *)&v14, 2 * v13 + 1);
  *a4 |= 2u;
  a4[3] = 1 << v14;
  if ( a1 < 0x80000026 )
  {
    if ( a1 < 0x8000001E )
      return;
  }
  else
  {
    _RAX = 2147483686LL;
    __asm { cpuid }
    if ( (_WORD)_RBX )
    {
      _RAX = 2147483686LL;
      __asm { cpuid }
      v25 = 0;
      a4[6] = _RDX;
      *a4 |= 0x10u;
      while ( 1 )
      {
        v31 = _RAX;
        if ( !(_WORD)_RBX )
          break;
        v26 = (unsigned int)_RCX >> 8;
        switch ( (unsigned __int8)v26 )
        {
          case 1u:
            *a4 |= 1u;
            a4[2] = 1 << (_RAX & 0x1F);
            break;
          case 2u:
            if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline() )
            {
              *a4 |= 0x20u;
              a4[7] = 1 << (v31 & 0x1F);
            }
            break;
          case 3u:
            v28 = (1 << (_RAX & 0x1F)) / (unsigned int)a4[2];
            *a4 |= 4u;
            a4[4] = v28;
            break;
          case 4u:
            v27 = (1 << (_RAX & 0x1F)) / (unsigned int)a4[2];
            *a4 |= 2u;
            a4[3] = v27;
            break;
        }
        ++v25;
        _RAX = 2147483686LL;
        __asm { cpuid }
      }
      return;
    }
  }
  if ( !_bittest((const signed __int32 *)(a3 + 8), 0x16u) )
    return;
  v32 = *a4;
  _RAX = 2147483678LL;
  __asm { cpuid }
  v38 = _RAX;
  v39 = _RCX;
  LODWORD(_RBX) = BYTE1(_RBX) + 1;
  LODWORD(_RAX) = a4[3] / (unsigned int)_RBX;
  v40 = *a4 | 3;
  a4[2] = _RBX;
  v41 = _RAX;
  a4[3] = _RAX;
  v42 = *a2;
  v43 = (*a2 >> 8) & 0xF;
  *a4 = v40;
  if ( v43 == 15 )
    v44 = (unsigned __int8)(v42 >> 20) + 15;
  else
    v44 = v43;
  if ( v44 == 23 )
  {
    v45 = v40 | 4;
    goto LABEL_27;
  }
  v45 = v32 | 7;
  if ( v44 == 25 )
  {
LABEL_27:
    a4[4] = 8;
    if ( v41 < 8 )
      a4[4] = v41;
    goto LABEL_30;
  }
  a4[4] = v41 / (((v39 >> 8) & 7) + 1);
LABEL_30:
  a4[6] = v38;
  *a4 = v45 | 0x10;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline() )
  {
    _RAX = 2147483649LL;
    __asm { cpuid }
    if ( (_RCX & 0x400000) != 0 )
    {
      for ( i = 0; ; ++i )
      {
        _RAX = 2147483677LL;
        __asm { cpuid }
        v58 = (int)((_DWORD)_RAX << 27) >> 27;
        if ( !v58 )
          break;
        if ( v58 == 3 && ((unsigned __int8)_RAX & 0xE0u) <= 0x60 )
        {
          _BitScanReverse(&v52, 2 * (((unsigned int)_RAX >> 14) & 0xFFF) + 1);
          *a4 |= 0x20u;
          a4[7] = 1 << v52;
        }
      }
      if ( (*a4 & 0x20) != 0 )
      {
        v59 = a4[2];
        v60 = a4[4] * v59;
        v61 = a4[7];
        if ( v61 > v60 )
        {
          a4[7] = v60;
          v61 = v60;
        }
        v62 = a4[3] * v59;
        if ( v61 > v62 )
          a4[7] = v62;
      }
    }
    if ( (*a4 & 0x20) == 0 )
    {
      v63 = a4[2] * a4[4];
      *a4 |= 0x20u;
      a4[7] = v63;
    }
  }
}
