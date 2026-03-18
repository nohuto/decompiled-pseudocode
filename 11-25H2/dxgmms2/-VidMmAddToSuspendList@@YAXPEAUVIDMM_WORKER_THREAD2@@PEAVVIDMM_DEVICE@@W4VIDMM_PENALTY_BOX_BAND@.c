/*
 * XREFs of ?VidMmAddToSuspendList@@YAXPEAUVIDMM_WORKER_THREAD2@@PEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x14009FB14
 * Callers:
 *     VidMmSuspendDevice @ 0x140090BA8 (VidMmSuspendDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall VidMmAddToSuspendList(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 *v3; // rax
  __int64 v4; // r10
  __int64 **v5; // rcx
  char result; // al

  v3 = (__int64 *)(a2 + 184);
  v4 = a1 + 5880 + 16LL * ((unsigned int)a3 - 1);
  v5 = *(__int64 ***)(v4 + 8);
  if ( *v5 != (__int64 *)v4 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 192) = v5;
  *v3 = v4;
  *v5 = v3;
  *(_QWORD *)(v4 + 8) = v3;
  result = *(_BYTE *)(a2 + 312);
  *(_BYTE *)(a2 + 312) = result ^ (a3 ^ result) & 7;
  return result;
}
