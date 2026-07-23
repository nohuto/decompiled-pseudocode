/*
 * XREFs of FsRtlpOplockEnqueueRH @ 0x1402E2018
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1404DAB70 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x1404DB6D0 (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     IoSetOplockPrivateFoExt @ 0x1402E2088 (IoSetOplockPrivateFoExt.c)
 *     FsRtlpOplockDequeueRH @ 0x14044E644 (FsRtlpOplockDequeueRH.c)
 */

__int64 __fastcall FsRtlpOplockEnqueueRH(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // r9d
  _OWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  _QWORD *v12; // [rsp+48h] [rbp-10h]

  v2 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = a1;
  *(_QWORD *)(v2 + 8) = a2;
  *a1 = (__int64)a2;
  v4 = a2[3];
  v11 = 0LL;
  v12 = a2;
  memset(v10, 0, sizeof(v10));
  v5 = IoSetOplockPrivateFoExt(v4, v10);
  v8 = v5;
  if ( v5 < 0 )
    FsRtlpOplockDequeueRH(a2, v6, v7, (unsigned int)v5);
  return v8;
}
