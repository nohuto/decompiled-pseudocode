/*
 * XREFs of HvpInitMap @ 0x140981C6C
 * Callers:
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E37DC (HvpBuildMapForMemoryBackedHive.c)
 *     HvLoadHive @ 0x14098133C (HvLoadHive.c)
 * Callees:
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HvpAllocateMap @ 0x140983854 (HvpAllocateMap.c)
 *     HvpFreeMap @ 0x140A51610 (HvpFreeMap.c)
 */

__int64 __fastcall HvpInitMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r15d
  __int64 v5; // r12
  void *v6; // r13
  void *v7; // rbp
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v14; // esi
  void *v15; // rax
  void *v16; // rbx
  _QWORD *v17; // rax
  void *v18; // rsi
  unsigned int v20; // ebx
  void *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0LL;
  v7 = 0LL;
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( (v9 & 0xFFF) != 0 )
  {
    v20 = -1073741492;
    SetFailureLocation(v5, 0, 5, -1073741492, 0);
  }
  else
  {
    v10 = v9 >> 12;
    if ( v9 >> 12 )
      v11 = (v10 - 1) >> 9;
    else
      v11 = 0;
    *(_DWORD *)(a1 + 280) = v9;
    if ( *(_QWORD *)(a1 + 96) )
      goto LABEL_10;
    v4 = (v10 + 3) & 0xFFFFFFFC;
    LOBYTE(a2) = 1;
    if ( !v4 )
      v4 = 4;
    v6 = (void *)guard_dispatch_icall_no_overrides(v4, a2, 926043459LL, a4);
    if ( v6 )
    {
      LOBYTE(v12) = 1;
      v7 = (void *)guard_dispatch_icall_no_overrides(v4, v12, 926043459LL, v13);
      if ( !v7 )
      {
        v20 = -1073741801;
        SetFailureLocation(v5, 0, 5, -1073741801, 32);
        goto LABEL_22;
      }
      memset_0(v6, 0, v4);
      memset_0(v7, 0, v4);
      *(_QWORD *)(a1 + 96) = v6;
      v14 = v9 >> 9;
      *(_DWORD *)(a1 + 88) = v14;
      *(_DWORD *)(a1 + 112) = v14;
      *(_QWORD *)(a1 + 120) = v7;
      *(_DWORD *)(a1 + 108) = v4;
LABEL_10:
      if ( v11 )
      {
        v21 = (void *)guard_dispatch_icall_no_overrides(0x2000LL, 0LL, 942820675LL, a4);
        v18 = v21;
        if ( v21 )
        {
          memset_0(v21, 0, 0x2000uLL);
          if ( (unsigned __int8)HvpAllocateMap(a1, v18, 0LL, v11) )
          {
            v17 = (_QWORD *)(a1 + 296);
            v16 = 0LL;
            goto LABEL_13;
          }
          v20 = -1073741670;
          SetFailureLocation(v5, 0, 5, -1073741670, 64);
          HvpFreeMap(a1, v18, 0LL, v11);
          guard_dispatch_icall_no_overrides(v18, 0x2000LL, v24, v25);
LABEL_24:
          if ( !v6 )
          {
LABEL_25:
            if ( v7 )
            {
              if ( *(void **)(a1 + 120) == v7 )
                *(_QWORD *)(a1 + 120) = 0LL;
              guard_dispatch_icall_no_overrides(v7, v4, v22, v23);
            }
            return v20;
          }
LABEL_22:
          if ( *(void **)(a1 + 96) == v6 )
            *(_QWORD *)(a1 + 96) = 0LL;
          guard_dispatch_icall_no_overrides(v6, v4, v22, v23);
          goto LABEL_25;
        }
        v26 = 48;
      }
      else
      {
        v15 = (void *)guard_dispatch_icall_no_overrides(12288LL, 0LL, 909266243LL, a4);
        v16 = v15;
        if ( v15 )
        {
          memset_0(v15, 0, 0x3000uLL);
          v17 = (_QWORD *)(a1 + 296);
          v18 = (void *)(a1 + 296);
LABEL_13:
          *(_QWORD *)(a1 + 288) = v18;
          *v17 = v16;
          return 0LL;
        }
        v26 = 32;
      }
      v20 = -1073741670;
      SetFailureLocation(v5, 0, 5, -1073741670, v26);
      goto LABEL_24;
    }
    v20 = -1073741801;
    SetFailureLocation(v5, 0, 5, -1073741801, 16);
  }
  return v20;
}
