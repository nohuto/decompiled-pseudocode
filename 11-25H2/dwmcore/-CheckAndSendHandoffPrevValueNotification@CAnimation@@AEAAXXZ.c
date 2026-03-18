/*
 * XREFs of ?CheckAndSendHandoffPrevValueNotification@CAnimation@@AEAAXXZ @ 0x1800B11D0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800AF9B0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x1800B0930 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimation::CheckAndSendHandoffPrevValueNotification(CAnimation *this)
{
  __int64 v2; // rax
  int v3; // xmm0_4
  __int64 v4; // [rsp+38h] [rbp-20h]
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( !*((_BYTE *)this + 298) && *((_DWORD *)this + 72) && *((_DWORD *)this + 71) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
           *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
           1LL);
    if ( v2 )
    {
      v3 = *((_DWORD *)this + 70);
      v5[0] = *((unsigned int *)this + 72);
      v5[1] = *((unsigned int *)this + 71);
      CoreUICallSend(v2, v5, 2LL, 1LL, 1, &unk_180336E50, v3, v4, v5[0]);
    }
    *((_BYTE *)this + 298) = 1;
  }
}
