/*
 * XREFs of MiReferenceCfgVad @ 0x140A91CA0
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14091A9E8 (MmInitializeProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14091BB10 (MiCfgInitializeProcess.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockVadShared @ 0x1403620A0 (MiUnlockVadShared.c)
 */

char __fastcall MiReferenceCfgVad(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v8; // r15
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // eax
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v8 = *(_QWORD *)(v4 + 1040) + 32 * (a3 + 37LL);
  v9 = MiObtainReferencedVadEx(a2, 2LL, &v13, a4);
  v10 = *(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32);
  MiUnlockVadShared(a1, v9);
  v11 = 0;
  *(_QWORD *)v8 = a2;
  *(_QWORD *)(v8 + 16) = v9;
  *(_DWORD *)(v8 + 24) = 0;
  *(_QWORD *)(v8 + 8) = ((v10 << 12) | 0xFFF) - a2 + 1;
  if ( a3 == 1 )
  {
    LOBYTE(v11) = *(_WORD *)(v4 + 1772) == 452;
    *(_DWORD *)(v8 + 24) = v11;
  }
  return v11;
}
