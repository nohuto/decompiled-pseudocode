/*
 * XREFs of KiComputeTopologyConstantsAmd @ 0x1405C4698
 * Callers:
 *     KiComputeTopologyConstants @ 0x1405C45E8 (KiComputeTopologyConstants.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall KiComputeTopologyConstantsAmd(unsigned int a1, unsigned int *a2, __int64 a3, int *a4)
{
  unsigned __int8 v12; // r8
  int v13; // ecx
  int v24; // r11d
  unsigned int v25; // eax
  unsigned int v26; // eax
  int v29; // edi
  int v35; // esi
  unsigned int v36; // r10d
  int v37; // ecx
  unsigned int v38; // ebx
  unsigned int v39; // eax
  int v40; // r11d
  int v41; // edx
  int v42; // ecx

  if ( a1 < 0x80000008 )
    return;
  _RAX = 2147483656LL;
  __asm { cpuid }
  v12 = _RCX;
  v13 = (unsigned __int16)_RCX >> 12;
  if ( !v13 )
    _BitScanReverse((unsigned int *)&v13, 2 * v12 + 1);
  *a4 |= 2u;
  a4[3] = 1 << v13;
  if ( a1 < 0x80000026 )
  {
    if ( a1 < 0x8000001E )
      return;
LABEL_17:
    if ( (*(_DWORD *)(a3 + 8) & 0x400000) == 0 )
      return;
    v29 = *a4;
    _RAX = 2147483678LL;
    __asm { cpuid }
    v35 = _RAX;
    v36 = _RCX;
    LODWORD(_RBX) = BYTE1(_RBX) + 1;
    LODWORD(_RAX) = a4[3] / (unsigned int)_RBX;
    v37 = *a4 | 3;
    a4[2] = _RBX;
    v38 = _RAX;
    a4[3] = _RAX;
    v39 = *a2;
    v40 = (*a2 >> 8) & 0xF;
    *a4 = v37;
    if ( v40 == 15 )
      v41 = (unsigned __int8)(v39 >> 20) + 15;
    else
      v41 = v40;
    if ( v41 == 23 )
    {
      v42 = v37 | 4;
    }
    else
    {
      v42 = v29 | 7;
      if ( v41 != 25 )
      {
        a4[4] = v38 / (((v36 >> 8) & 7) + 1);
LABEL_27:
        a4[6] = v35;
        *a4 = v42 | 0x10;
        return;
      }
    }
    a4[4] = 8;
    if ( v38 < 8 )
      a4[4] = v38;
    goto LABEL_27;
  }
  _RAX = 2147483686LL;
  __asm { cpuid }
  if ( !(_WORD)_RBX )
    goto LABEL_17;
  _RAX = 2147483686LL;
  __asm { cpuid }
  v24 = 0;
  a4[6] = _RDX;
  *a4 |= 0x10u;
  while ( (_WORD)_RBX )
  {
    switch ( BYTE1(_RCX) )
    {
      case 1u:
        *a4 |= 1u;
        a4[2] = 1 << (_RAX & 0x1F);
        break;
      case 3u:
        v26 = (1 << (_RAX & 0x1F)) / (unsigned int)a4[2];
        *a4 |= 4u;
        a4[4] = v26;
        break;
      case 4u:
        v25 = (1 << (_RAX & 0x1F)) / (unsigned int)a4[2];
        *a4 |= 2u;
        a4[3] = v25;
        break;
    }
    ++v24;
    _RAX = 2147483686LL;
    __asm { cpuid }
  }
}
