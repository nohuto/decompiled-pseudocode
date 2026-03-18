/*
 * XREFs of PerfInfoLogSysCallEntry @ 0x1403D7280
 * Callers:
 *     KiSystemCall64 @ 0x1406B2B40 (KiSystemCall64.c)
 *     KiTrackSystemCallEntry @ 0x140731440 (KiTrackSystemCallEntry.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogSysCallEntry(__int64 a1)
{
  __int64 CurrentServerSilo; // rdi
  unsigned int v3; // ebx
  bool v4; // zf
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+4Ch] [rbp-1Ch]

  v12 = a1;
  v13 = &v12;
  v15 = 0;
  v14 = 8;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v3 = *(_DWORD *)(EtwpHostSiloState + 4248);
  while ( 1 )
  {
    v4 = !_BitScanForward((unsigned int *)&v5, v3);
    if ( v4 )
      break;
    v3 &= v3 - 1;
    v6 = EtwpHostSiloState + 32LL * (unsigned int)v5 + 4284;
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 8) & 0x40) != 0 )
        EtwpLogKernelEvent(
          (struct _KTHREAD *)&v13,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v5 + 4232),
          1u,
          0xF33u,
          0x601802u);
    }
  }
  if ( CurrentServerSilo )
  {
    v8 = *((_QWORD *)PsGetServerSiloGlobals(CurrentServerSilo) + 104);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 + 4248);
      while ( 1 )
      {
        v4 = !_BitScanForward((unsigned int *)&v10, v9);
        if ( v4 )
          break;
        v9 &= v9 - 1;
        v11 = v8 + 32LL * (unsigned int)v10 + 4284;
        if ( v11 && (*(_DWORD *)(v11 + 8) & 0x40) != 0 )
          EtwpLogKernelEvent(
            (struct _KTHREAD *)&v13,
            v8,
            *(unsigned __int8 *)(v8 + 2 * v10 + 4232),
            1u,
            0xF33u,
            0x601802u);
      }
    }
  }
  return a1;
}
