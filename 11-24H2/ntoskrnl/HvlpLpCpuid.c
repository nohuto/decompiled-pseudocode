/*
 * XREFs of HvlpLpCpuid @ 0x14070CCC4
 * Callers:
 *     HvlpDiscoverTopologyAmd @ 0x140C1B5AC (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x140C1B7B8 (HvlpDiscoverTopologyIntel.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvcallInitInputControl @ 0x140450570 (HvcallInitInputControl.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 __fastcall HvlpLpCpuid(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 result; // rax
  _DWORD *v13; // rbx
  _DWORD *v14; // rdi
  int v15; // ecx
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  __int128 v17; // [rsp+28h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+48h] [rbp-28h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h]

  v16 = 0LL;
  v21 = 0LL;
  LODWORD(v22) = 0;
  v18 = 0LL;
  LODWORD(v19) = 0;
  v20 = 0LL;
  v17 = 0LL;
  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a4 = result;
    a4[1] = _RBX;
    a4[2] = _RCX;
    a4[3] = _RDX;
  }
  else
  {
    HvcallInitInputControl(136, &v16);
    HIDWORD(v16) = HIDWORD(v16) & 0xF000F000 | 1;
    v13 = HvlpAcquireHypercallPage((__int64)&v20, 1, 0LL, 16LL);
    v14 = HvlpAcquireHypercallPage((__int64)&v17, 2, 0LL, 16LL);
    v15 = v16;
    *v13 = a1;
    v13[1] = 0x10000;
    v13[2] = a2;
    v13[3] = a3;
    HvcallInitiateHypercall(v15);
    *a4 = *v14;
    a4[1] = v14[1];
    a4[2] = v14[2];
    a4[3] = v14[3];
    HvlpReleaseHypercallPage((unsigned int *)&v17);
    return HvlpReleaseHypercallPage((unsigned int *)&v20);
  }
  return result;
}
