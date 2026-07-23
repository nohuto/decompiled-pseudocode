/*
 * XREFs of KiSetStandardizedCacheInformation @ 0x140B5C570
 * Callers:
 *     KiSetCacheInformation @ 0x140B5B7B0 (KiSetCacheInformation.c)
 *     KiSetCacheInformationAmd @ 0x140B5B8F4 (KiSetCacheInformationAmd.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetStandardizedCacheInformation(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r14
  __int64 result; // rax
  unsigned int v9; // edi
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  char v14; // al
  __int64 v15; // r13
  int v16; // edi
  unsigned int v17; // ecx
  __int64 v18; // rdi
  int v19; // ebx
  int v20; // r12d
  __int64 v21; // rbp
  int v22; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+28h] [rbp-60h]

  v2 = 0;
  v3 = a1 + 35672;
  v22 = 0;
  result = a2;
  v24 = a1 + 35672;
  do
  {
    __asm { cpuid }
    v9 = result;
    v10 = (int)((_DWORD)result << 27) >> 27;
    if ( !v10 )
      break;
    v11 = v10 - 1;
    if ( !v11 )
    {
      *(_DWORD *)(v3 + 8) = 2;
      goto LABEL_11;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      *(_DWORD *)(v3 + 8) = 1;
      goto LABEL_11;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      *(_DWORD *)(v3 + 8) = 0;
      goto LABEL_11;
    }
    if ( v13 == 2 )
    {
      *(_DWORD *)(v3 + 8) = 3;
LABEL_11:
      if ( (result & 0x200) != 0 )
        v14 = -1;
      else
        v14 = ((unsigned int)_RBX >> 22) + 1;
      *(_BYTE *)(v3 + 1) = v14;
      *(_BYTE *)v3 = (v9 >> 5) & 7;
      *(_WORD *)(v3 + 2) = (_RBX & 0xFFF) + 1;
      v15 = 264LL * v2;
      *(_DWORD *)(v3 + 4) = (_RCX + 1)
                          * ((_RBX & 0xFFF) + 1)
                          * (((unsigned int)_RBX >> 22) + 1)
                          * ((((unsigned int)_RBX >> 12) & 0x3FF) + 1);
      KeAddGroupAffinityEx(
        (unsigned __int16 *)(v15 + a1 + 44800),
        *(unsigned __int8 *)(a1 + 208),
        *(_QWORD *)(a1 + 200));
      v16 = (v9 >> 14) & 0xFFF;
      if ( v16 )
      {
        _BitScanReverse(&v17, 2 * v16 + 1);
        v18 = 0LL;
        v19 = ~((1 << v17) - 1);
        v20 = v19 & *(_DWORD *)(a1 + 212);
        if ( (_DWORD)KeNumberProcessors_0 )
        {
          do
          {
            v21 = KiProcessorBlock[v18];
            if ( (v19 & *(_DWORD *)(v21 + 212)) == v20 )
            {
              KeAddGroupAffinityEx(
                (unsigned __int16 *)(v15 + 44800 + a1),
                *(unsigned __int8 *)(v21 + 208),
                *(_QWORD *)(v21 + 200));
              KeAddGroupAffinityEx(
                (unsigned __int16 *)(v21 + v15 + 44800),
                *(unsigned __int8 *)(a1 + 208),
                *(_QWORD *)(a1 + 200));
            }
            v18 = (unsigned int)(v18 + 1);
          }
          while ( (unsigned int)v18 < (unsigned int)KeNumberProcessors_0 );
          v3 = v24;
          v2 = v22;
        }
      }
      v3 += 12LL;
      ++*(_DWORD *)(a1 + 35732);
      v24 = v3;
    }
    result = a2;
    v22 = ++v2;
  }
  while ( *(_DWORD *)(a1 + 35732) < 5u );
  return result;
}
