/*
 * XREFs of HvpInitMap @ 0x1409F957C
 * Callers:
 *     HvpBuildMapForMemoryBackedHive @ 0x1407D3EFC (HvpBuildMapForMemoryBackedHive.c)
 *     HvLoadHive @ 0x1409F8C4C (HvLoadHive.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvpAllocateMap @ 0x1409FA274 (HvpAllocateMap.c)
 *     HvpFreeMap @ 0x140A4E184 (HvpFreeMap.c)
 */

__int64 __fastcall HvpInitMap(__int64 a1)
{
  __int64 v1; // r12
  void *v2; // r13
  void *v3; // rbp
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  unsigned int v9; // esi
  void *v10; // rax
  void *v11; // rbx
  _QWORD *v12; // rax
  void *v13; // rsi
  unsigned int v15; // ebx
  void *v16; // rax
  int v17; // [rsp+20h] [rbp-38h]

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 0LL;
  v3 = 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( (v5 & 0xFFF) != 0 )
  {
    v15 = -1073741492;
    SetFailureLocation(v1, 0, 5, -1073741492, 0);
  }
  else
  {
    v6 = v5 >> 12;
    if ( v5 >> 12 )
      v7 = (v6 - 1) >> 9;
    else
      v7 = 0;
    *(_DWORD *)(a1 + 280) = v5;
    if ( *(_QWORD *)(a1 + 96) )
      goto LABEL_10;
    v8 = (v6 + 3) & 0xFFFFFFFC;
    if ( !v8 )
      v8 = 4;
    v2 = (void *)guard_dispatch_icall_no_overrides(v8);
    if ( v2 )
    {
      v3 = (void *)guard_dispatch_icall_no_overrides(v8);
      if ( !v3 )
      {
        v15 = -1073741801;
        SetFailureLocation(v1, 0, 5, -1073741801, 32);
        goto LABEL_22;
      }
      memset_0(v2, 0, v8);
      memset_0(v3, 0, v8);
      *(_QWORD *)(a1 + 96) = v2;
      v9 = v5 >> 9;
      *(_DWORD *)(a1 + 88) = v9;
      *(_DWORD *)(a1 + 112) = v9;
      *(_QWORD *)(a1 + 120) = v3;
      *(_DWORD *)(a1 + 108) = v8;
LABEL_10:
      if ( v7 )
      {
        v16 = (void *)guard_dispatch_icall_no_overrides(0x2000LL);
        v13 = v16;
        if ( v16 )
        {
          memset_0(v16, 0, 0x2000uLL);
          if ( (unsigned __int8)HvpAllocateMap(a1, v13, 0LL, v7) )
          {
            v12 = (_QWORD *)(a1 + 296);
            v11 = 0LL;
            goto LABEL_13;
          }
          v15 = -1073741670;
          SetFailureLocation(v1, 0, 5, -1073741670, 64);
          HvpFreeMap(a1, v13, 0LL, v7);
          guard_dispatch_icall_no_overrides(v13);
LABEL_24:
          if ( !v2 )
          {
LABEL_25:
            if ( v3 )
            {
              if ( *(void **)(a1 + 120) == v3 )
                *(_QWORD *)(a1 + 120) = 0LL;
              guard_dispatch_icall_no_overrides(v3);
            }
            return v15;
          }
LABEL_22:
          if ( *(void **)(a1 + 96) == v2 )
            *(_QWORD *)(a1 + 96) = 0LL;
          guard_dispatch_icall_no_overrides(v2);
          goto LABEL_25;
        }
        v17 = 48;
      }
      else
      {
        v10 = (void *)guard_dispatch_icall_no_overrides(12288LL);
        v11 = v10;
        if ( v10 )
        {
          memset_0(v10, 0, 0x3000uLL);
          v12 = (_QWORD *)(a1 + 296);
          v13 = (void *)(a1 + 296);
LABEL_13:
          *(_QWORD *)(a1 + 288) = v13;
          *v12 = v11;
          return 0LL;
        }
        v17 = 32;
      }
      v15 = -1073741670;
      SetFailureLocation(v1, 0, 5, -1073741670, v17);
      goto LABEL_24;
    }
    v15 = -1073741801;
    SetFailureLocation(v1, 0, 5, -1073741801, 16);
  }
  return v15;
}
