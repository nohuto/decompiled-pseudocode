/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007DD60
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x1C003A080 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C015D0D0 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C015F0C0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C003C880 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E0F4 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C004C7D0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  PVOID v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
  v4 = 112;
  v5 = *(_DWORD *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
  v6 = *(_DWORD *)(v3 + 24);
  if ( v5 < v6 && *(_DWORD *)v3 > 0x70u || v5 > 0x70 && *(_DWORD *)v3 <= 0x70u )
  {
    if ( v6 > 0x70 )
      v4 = *(_DWORD *)(v3 + 24);
    v14 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v14, v4);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v14);
    if ( !v14 )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v14);
      return 0LL;
    }
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&v14);
    RGNMEMOBJTMP::~RGNMEMOBJTMP(&v14);
  }
  v7 = *(_QWORD *)this;
  v8 = v7 + 48;
  if ( !v7 )
    v8 = 24LL;
  v9 = v7 + 32;
  *(_DWORD *)v8 = *(_DWORD *)(v3 + 24);
  v10 = v7 + 52;
  if ( !v7 )
    v10 = 28LL;
  *(_DWORD *)v10 = *(_DWORD *)(v3 + 28);
  v11 = v7 + 56;
  if ( !v7 )
    v11 = 32LL;
  *(_OWORD *)v11 = *(_OWORD *)(v3 + 32);
  if ( !v7 )
    v9 = 8LL;
  memmove(*(void **)v9, *(const void **)(v3 + 8), *(unsigned int *)(v3 + 24));
  v12 = v7 + 40;
  if ( !v7 )
    v12 = 16LL;
  *(_QWORD *)v12 = *(_QWORD *)v9 + *(_DWORD *)(v3 + 16) - *(_DWORD *)(v3 + 8);
  return 1LL;
}
