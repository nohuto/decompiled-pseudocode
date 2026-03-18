/*
 * XREFs of MiReferenceCfgVad @ 0x140A9ED54
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x140905760 (MiCfgInitializeProcess.c)
 * Callees:
 *     MiUnlockVadShared @ 0x1402A6620 (MiUnlockVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 */

char __fastcall MiReferenceCfgVad(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r12
  __int64 v7; // r15
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  int v10; // eax
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)(v3 + 1040) + 32 * (a3 + 37LL);
  v8 = MiObtainReferencedVadEx(a2, 2, &v12);
  v9 = *(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32);
  MiUnlockVadShared(a1, v8);
  v10 = 0;
  *(_QWORD *)v7 = a2;
  *(_QWORD *)(v7 + 16) = v8;
  *(_DWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 8) = ((v9 << 12) | 0xFFF) - a2 + 1;
  if ( a3 == 1 )
  {
    LOBYTE(v10) = *(_WORD *)(v3 + 1772) == 452;
    *(_DWORD *)(v7 + 24) = v10;
  }
  return v10;
}
