/*
 * XREFs of HvlpInitializePowerStatistics @ 0x140586C90
 * Callers:
 *     HvlPhase1Initialize @ 0x14057FDE0 (HvlPhase1Initialize.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  __int64 result; // rax
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  __int16 v3; // ax
  unsigned int v4; // ebx
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h]
  __int64 v7; // [rsp+38h] [rbp-28h]
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]
  __int64 v10; // [rsp+58h] [rbp-8h]

  result = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v5 = 0LL;
  v6 = 0LL;
  LODWORD(v7) = 0;
  if ( (HvlEnlightenments & 0x400) != 0 )
  {
    v1 = HvlpAcquireHypercallPage((__int64)&v8, 1, 0LL, 8LL);
    v2 = HvlpAcquireHypercallPage((__int64)&v5, 2, 0LL, 520LL);
    *v1 = 0LL;
    *(_DWORD *)v1 = 4;
    v3 = HvcallInitiateHypercall(155);
    if ( !v3 )
    {
      xmmword_140E3EE10 = *(_OWORD *)v2;
      xmmword_140E3EE20 = *((_OWORD *)v2 + 1);
      unk_140E3EE30 = *((_OWORD *)v2 + 2);
      qword_140E3EE40 = v2[6];
    }
    v4 = v3 != 0 ? 0xC0000001 : 0;
    HvlpReleaseHypercallPage((unsigned int *)&v5);
    HvlpReleaseHypercallPage((unsigned int *)&v8);
    return v4;
  }
  return result;
}
