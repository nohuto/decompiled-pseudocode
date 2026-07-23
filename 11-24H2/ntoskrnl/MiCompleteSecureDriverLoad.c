/*
 * XREFs of MiCompleteSecureDriverLoad @ 0x140A33D90
 * Callers:
 *     MiFinalizeDriverCfgState @ 0x140A331C8 (MiFinalizeDriverCfgState.c)
 *     MiMarkKernelImageCfgBits @ 0x140A33650 (MiMarkKernelImageCfgBits.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiUnlockDriverPages @ 0x140A33EDC (MiUnlockDriverPages.c)
 *     VslCompleteSecureDriverLoad @ 0x140A33F88 (VslCompleteSecureDriverLoad.c)
 */

__int64 __fastcall MiCompleteSecureDriverLoad(__int64 a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // eax
  _QWORD v8[3]; // [rsp+20h] [rbp-78h] BYREF
  int v9; // [rsp+38h] [rbp-60h]

  memset_0(v8, 0, 0x68uLL);
  v2 = *(_DWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 112);
  v8[0] = a1;
  v5 = *(_QWORD *)(a1 + 48);
  v9 = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  v6 = VslCompleteSecureDriverLoad(v4, v5);
  if ( v6 < 0 )
    v3 = v6;
  MiUnlockDriverPages(v8);
  return v3;
}
