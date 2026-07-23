/*
 * XREFs of HvpInitMap @ 0x14096A47C
 * Callers:
 *     HvpBuildMapForMemoryBackedHive @ 0x1407E3D2C (HvpBuildMapForMemoryBackedHive.c)
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 * Callees:
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     HvpAllocateMap @ 0x14096C064 (HvpAllocateMap.c)
 *     HvpFreeMap @ 0x140A486DC (HvpFreeMap.c)
 */

__int64 __fastcall HvpInitMap(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r12
  void *v4; // r13
  void *v5; // rbp
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  unsigned int v11; // esi
  void *v12; // rax
  void *v13; // rbx
  _QWORD *v14; // rax
  void *v15; // rsi
  unsigned int v17; // ebx
  void *v18; // rax
  int v19; // [rsp+20h] [rbp-38h]

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  v4 = 0LL;
  v5 = 0LL;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL);
  if ( (v7 & 0xFFF) != 0 )
  {
    v17 = -1073741492;
    SetFailureLocation(v3, 0, 5, -1073741492, 0);
  }
  else
  {
    v8 = v7 >> 12;
    if ( v7 >> 12 )
      v9 = (v8 - 1) >> 9;
    else
      v9 = 0;
    *(_DWORD *)(a1 + 280) = v7;
    if ( *(_QWORD *)(a1 + 96) )
      goto LABEL_10;
    v2 = (v8 + 3) & 0xFFFFFFFC;
    LOBYTE(a2) = 1;
    if ( !v2 )
      v2 = 4;
    v4 = (void *)guard_dispatch_icall_no_overrides(v2, a2);
    if ( v4 )
    {
      LOBYTE(v10) = 1;
      v5 = (void *)guard_dispatch_icall_no_overrides(v2, v10);
      if ( !v5 )
      {
        v17 = -1073741801;
        SetFailureLocation(v3, 0, 5, -1073741801, 32);
        goto LABEL_22;
      }
      memset_0(v4, 0, v2);
      memset_0(v5, 0, v2);
      *(_QWORD *)(a1 + 96) = v4;
      v11 = v7 >> 9;
      *(_DWORD *)(a1 + 88) = v11;
      *(_DWORD *)(a1 + 112) = v11;
      *(_QWORD *)(a1 + 120) = v5;
      *(_DWORD *)(a1 + 108) = v2;
LABEL_10:
      if ( v9 )
      {
        v18 = (void *)guard_dispatch_icall_no_overrides(0x2000LL, 0LL);
        v15 = v18;
        if ( v18 )
        {
          memset_0(v18, 0, 0x2000uLL);
          if ( (unsigned __int8)HvpAllocateMap(a1, v15, 0LL, v9) )
          {
            v14 = (_QWORD *)(a1 + 296);
            v13 = 0LL;
            goto LABEL_13;
          }
          v17 = -1073741670;
          SetFailureLocation(v3, 0, 5, -1073741670, 64);
          HvpFreeMap(a1, v15, 0LL, v9);
          guard_dispatch_icall_no_overrides(v15, 0x2000LL);
LABEL_24:
          if ( !v4 )
          {
LABEL_25:
            if ( v5 )
            {
              if ( *(void **)(a1 + 120) == v5 )
                *(_QWORD *)(a1 + 120) = 0LL;
              guard_dispatch_icall_no_overrides(v5, v2);
            }
            return v17;
          }
LABEL_22:
          if ( *(void **)(a1 + 96) == v4 )
            *(_QWORD *)(a1 + 96) = 0LL;
          guard_dispatch_icall_no_overrides(v4, v2);
          goto LABEL_25;
        }
        v19 = 48;
      }
      else
      {
        v12 = (void *)guard_dispatch_icall_no_overrides(12288LL, 0LL);
        v13 = v12;
        if ( v12 )
        {
          memset_0(v12, 0, 0x3000uLL);
          v14 = (_QWORD *)(a1 + 296);
          v15 = (void *)(a1 + 296);
LABEL_13:
          *(_QWORD *)(a1 + 288) = v15;
          *v14 = v13;
          return 0LL;
        }
        v19 = 32;
      }
      v17 = -1073741670;
      SetFailureLocation(v3, 0, 5, -1073741670, v19);
      goto LABEL_24;
    }
    v17 = -1073741801;
    SetFailureLocation(v3, 0, 5, -1073741801, 16);
  }
  return v17;
}
