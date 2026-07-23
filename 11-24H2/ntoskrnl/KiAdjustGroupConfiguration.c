/*
 * XREFs of KiAdjustGroupConfiguration @ 0x1405B8204
 * Callers:
 *     KiAllocateProcessorNumber @ 0x1405B857C (KiAllocateProcessorNumber.c)
 * Callees:
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KiAdjustGroupConfiguration(__int64 a1)
{
  __int64 v2; // rcx
  int *v3; // rdi
  int v4; // eax
  __int64 v5; // rdi
  unsigned __int16 *v6; // rdx
  unsigned __int16 i; // cx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // eax
  unsigned __int16 v13; // r9
  unsigned int v14; // r8d
  __int16 v15; // cx
  __int64 v16; // rcx
  int *v17; // rdi
  int v18; // eax
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  char v21; // al
  _QWORD *Pool2; // rbx
  __int64 v23; // rdi
  __int64 v24; // r8
  _QWORD *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rbp
  __int64 *v28; // rdx
  __int64 v29; // rcx
  char v30; // r14
  unsigned __int16 j; // bp
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned __int16 k; // dx
  __int64 v35; // r8
  __int16 v36; // ax
  unsigned __int16 v37; // cx
  unsigned int v38; // r10d
  unsigned int v39; // eax
  __int64 *v40; // r8
  __int64 v41; // rdx
  _DWORD v42[32]; // [rsp+20h] [rbp-138h] BYREF
  _DWORD Src[32]; // [rsp+A0h] [rbp-B8h] BYREF

  memset_0(v42, 0, sizeof(v42));
  if ( (*(_BYTE *)(a1 + 5) & 4) == 0 )
  {
    if ( KiMaximumGroups )
    {
      v2 = (unsigned __int16)KiMaximumGroups;
      v3 = v42;
      v4 = KiMaximumGroupSize;
      while ( v2 )
      {
        *v3++ = v4;
        --v2;
      }
    }
    if ( KiSubNodeCount )
    {
      v5 = (unsigned __int16)KiSubNodeCount;
      v6 = (unsigned __int16 *)(KiSubNodeConfigBlock + 6);
      do
      {
        if ( (*((_BYTE *)v6 - 1) & 1) != 0 )
          v42[*v6] -= *((unsigned __int8 *)v6 - 2);
        v6 += 12;
        --v5;
      }
      while ( v5 );
    }
    for ( i = 0; ; ++i )
    {
      v8 = (unsigned __int16)KiSubNodeCount;
      if ( i >= (unsigned __int16)KiSubNodeCount )
        break;
      v9 = KiSubNodeConfigBlock;
      v10 = 3LL * i;
      if ( (*(_BYTE *)(KiSubNodeConfigBlock + 24LL * i + 5) & 7) == 3
        && !*(_QWORD *)(KiSubNodeConfigBlock + 24LL * i + 16) )
      {
        v11 = *(unsigned __int8 *)(KiSubNodeConfigBlock + 24LL * i + 4);
        v12 = *(unsigned __int8 *)(a1 + 4);
        if ( (unsigned __int8)v11 <= (unsigned __int8)v12 )
        {
          v13 = *(_WORD *)(KiSubNodeConfigBlock + 24LL * i + 6);
          v14 = v12 - v11;
        }
        else
        {
          v13 = *(_WORD *)(a1 + 6);
          v14 = v11 - v12;
        }
        if ( v42[v13] >= v14 )
        {
          v15 = *(_WORD *)(KiSubNodeConfigBlock + 24LL * i + 6);
          *(_WORD *)(KiSubNodeConfigBlock + 8 * v10 + 6) = *(_WORD *)(a1 + 6);
          *(_BYTE *)(a1 + 5) |= 2u;
          *(_WORD *)(a1 + 6) = v15;
          *(_BYTE *)(v9 + 8 * v10 + 5) &= ~2u;
          return;
        }
      }
    }
    if ( KiMaximumGroups )
    {
      v16 = (unsigned __int16)KiMaximumGroups;
      v17 = Src;
      v18 = KiMaximumGroupSize;
      while ( v16 )
      {
        *v17++ = v18;
        --v16;
      }
    }
    if ( (_WORD)v8 )
    {
      v19 = v8;
      v20 = (_QWORD *)(KiSubNodeConfigBlock + 16);
      do
      {
        v21 = *((_BYTE *)v20 - 11);
        if ( (v21 & 1) != 0 && ((v21 & 4) != 0 || *v20) )
          Src[*((unsigned __int16 *)v20 - 5)] -= *((unsigned __int8 *)v20 - 12);
        v20 += 3;
        --v19;
      }
      while ( v19 );
    }
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 8LL * (unsigned __int16)KiSubNodeCount, 0x4347414Bu);
    if ( Pool2 )
    {
      LOWORD(v23) = 0;
      if ( KiSubNodeCount )
      {
        v24 = (unsigned __int16)KiSubNodeCount;
        v25 = (_QWORD *)(KiSubNodeConfigBlock + 16);
        do
        {
          if ( (*((_BYTE *)v25 - 11) & 5) == 1 && !*v25 )
          {
            v26 = (unsigned __int16)v23;
            LOWORD(v23) = v23 + 1;
            Pool2[v26] = v25 - 2;
          }
          v25 += 3;
          --v24;
        }
        while ( v24 );
      }
      v27 = (unsigned __int16)v23;
      qsort(Pool2, (unsigned __int16)v23, 8uLL, KiCompareSubNodeConfigurationCapacity);
      if ( (_WORD)v23 )
      {
        v28 = Pool2;
        do
        {
          v29 = *v28++;
          *(_WORD *)(v29 + 8) = *(_WORD *)(v29 + 6);
          --v27;
        }
        while ( v27 );
      }
      v30 = 0;
      for ( j = 0; j < (unsigned __int16)KiActiveGroups; ++j )
      {
        if ( KiMaximumGroups )
          memmove(v42, Src, 4LL * (unsigned __int16)KiMaximumGroups);
        v32 = *(unsigned __int8 *)(a1 + 4);
        v33 = v42[j];
        if ( v33 >= v32 )
        {
          *(_WORD *)(a1 + 6) = j;
          v42[j] = v33 - v32;
          for ( k = 0; k < (unsigned __int16)v23; ++k )
          {
            v35 = Pool2[k];
            if ( v35 != a1 )
            {
              v36 = KiMaximumGroups;
              v37 = 0;
              if ( KiMaximumGroups )
              {
                v38 = *(unsigned __int8 *)(v35 + 4);
                do
                {
                  v39 = v42[v37];
                  if ( v39 >= v38 )
                  {
                    *(_WORD *)(v35 + 6) = v37;
                    v42[v37] = v39 - v38;
                  }
                  v36 = KiMaximumGroups;
                  ++v37;
                }
                while ( v37 < (unsigned __int16)KiMaximumGroups );
              }
              if ( v37 == v36 )
                break;
            }
          }
          if ( k == (_WORD)v23 )
          {
            v30 = 1;
            break;
          }
        }
      }
      if ( (_WORD)v23 )
      {
        v40 = Pool2;
        v23 = (unsigned __int16)v23;
        do
        {
          v41 = *v40;
          if ( v30 )
            *(_BYTE *)(v41 + 5) = (*(_WORD *)(v41 + 6) < (unsigned __int16)KiActiveGroups ? 2 : 0) | *(_BYTE *)(v41 + 5) & 0xFD;
          else
            *(_WORD *)(v41 + 6) = *(_WORD *)(v41 + 8);
          ++v40;
          *(_WORD *)(v41 + 8) = 0;
          --v23;
        }
        while ( v23 );
      }
      ExFreePoolWithTag(Pool2, 0);
    }
  }
}
