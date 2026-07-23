/*
 * XREFs of PspReleaseReferenceToSession @ 0x140A81850
 * Callers:
 *     PsSessionObjectDelete @ 0x14077B8F0 (PsSessionObjectDelete.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PspFreeSessionId @ 0x14077BA8C (PspFreeSessionId.c)
 *     PspUnlinkSessionId @ 0x14077BFAC (PspUnlinkSessionId.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall PspReleaseReferenceToSession(__int64 P)
{
  unsigned int v2; // edi
  __int64 v3; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v4; // [rsp+38h] [rbp-30h]
  int v5; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(P + 12), 0xFFFFFFFF) == 1 )
  {
    PspUnlinkSessionId(P);
    v2 = *(_DWORD *)(P + 8);
    if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400000) != 0 )
    {
      v5 = 0;
      v8 = 0;
      v6 = &v3;
      v4 = v2;
      v3 = P;
      v7 = 12;
      EtwTraceKernelEvent((int)&v6, 1, 0x20400000u, 590, 5249026);
    }
    PspFreeSessionId(v2);
    ExFreePoolWithTag((PVOID)P, 0);
  }
}
