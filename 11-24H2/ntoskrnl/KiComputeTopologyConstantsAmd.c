/*
 * XREFs of KiComputeTopologyConstantsAmd @ 0x1405C8920
 * Callers:
 *     KiComputeTopologyConstants @ 0x1405C8808 (KiComputeTopologyConstants.c)
 * Callees:
 *     Feature_PpmParkEx__private_IsEnabledNoReportingNoInline @ 0x1405B5004 (Feature_PpmParkEx__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall KiComputeTopologyConstantsAmd(unsigned int a1, unsigned int *a2, __int64 a3, int *a4)
{
  __int64 v6; // r9
  __int64 v13; // r8
  int v14; // ecx
  int v25; // r15d
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  char v30; // si
  int v31; // r10d
  int v37; // esi
  __int64 v38; // r8
  int v39; // ecx
  unsigned int v40; // ebx
  unsigned int v41; // eax
  __int64 v42; // r9
  __int64 v43; // rdx
  int v44; // ecx
  __int64 v45; // rcx
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
  v6 = a1;
  __asm { cpuid }
  v13 = (unsigned int)_RCX;
  v14 = (unsigned __int16)_RCX >> 12;
  if ( !v14 )
    _BitScanReverse((unsigned int *)&v14, 2 * (unsigned __int8)v13 + 1);
  *a4 |= 2u;
  a4[3] = 1 << v14;
  if ( (unsigned int)v6 < 0x80000026 )
  {
    if ( (unsigned int)v6 < 0x8000001E )
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
        v30 = _RAX;
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
            if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(v26, _RDX, v13, v6) )
            {
              *a4 |= 0x20u;
              a4[7] = 1 << (v30 & 0x1F);
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
  v31 = *a4;
  _RAX = 2147483678LL;
  __asm { cpuid }
  v37 = _RAX;
  v38 = (unsigned int)_RCX;
  LODWORD(_RBX) = BYTE1(_RBX) + 1;
  LODWORD(_RAX) = a4[3] / (unsigned int)_RBX;
  v39 = *a4 | 3;
  a4[2] = _RBX;
  v40 = _RAX;
  a4[3] = _RAX;
  v41 = *a2;
  v42 = (*a2 >> 8) & 0xF;
  *a4 = v39;
  if ( (_DWORD)v42 == 15 )
    v43 = (unsigned int)(unsigned __int8)(v41 >> 20) + 15;
  else
    v43 = (unsigned int)v42;
  if ( (_DWORD)v43 == 23 )
  {
    v44 = v39 | 4;
    goto LABEL_27;
  }
  v44 = v31 | 7;
  if ( (_DWORD)v43 == 25 )
  {
LABEL_27:
    a4[4] = 8;
    if ( v40 < 8 )
      a4[4] = v40;
    goto LABEL_30;
  }
  HIDWORD(v43) = 0;
  v38 = (((unsigned int)v38 >> 8) & 7) + 1;
  LODWORD(v43) = v40 % (unsigned int)v38;
  a4[4] = v40 / (unsigned int)v38;
LABEL_30:
  v45 = v44 | 0x10u;
  a4[6] = v37;
  *a4 = v45;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledNoReportingNoInline(v45, v43, v38, v42) )
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
