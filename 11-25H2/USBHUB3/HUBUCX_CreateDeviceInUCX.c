/*
 * XREFs of HUBUCX_CreateDeviceInUCX @ 0x140026608
 * Callers:
 *     HUBDSM_CreatingUCXDevice30 @ 0x1400217E0 (HUBDSM_CreatingUCXDevice30.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_CreateDeviceInUCX(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // r8
  int v5; // edi

  v2 = *a1;
  v3 = *((_DWORD *)a1 + 364);
  v4 = a1[1];
  *((_DWORD *)a1 + 42) = 24;
  if ( (v3 & 0x800) != 0 )
  {
    *((_DWORD *)a1 + 43) = 3;
    *((_DWORD *)a1 + 40) = 512;
    goto LABEL_9;
  }
  if ( (v3 & 0x100) != 0 )
  {
    *((_DWORD *)a1 + 43) = 2;
  }
  else
  {
    if ( (v3 & 0x400) != 0 )
    {
      *((_DWORD *)a1 + 43) = 0;
      *((_DWORD *)a1 + 40) = 8;
      goto LABEL_9;
    }
    *((_DWORD *)a1 + 43) = 1;
  }
  *((_DWORD *)a1 + 40) = 64;
LABEL_9:
  *((_DWORD *)a1 + 44) = *(unsigned __int16 *)(v4 + 200);
  a1[23] = (__int64)a1;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *))(v2 + 408))(*(_QWORD *)(v2 + 248), a1 + 21, a1 + 3);
  if ( v5 >= 0 )
  {
    a1[192] = a1[3];
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x26u,
        (__int64)&WPP_21d6231090f93e4afbb8b064742420ef_Traceguids,
        v5);
    *((_DWORD *)a1 + 391) = -1073737728;
    *((_DWORD *)a1 + 390) = -1073741670;
  }
  return ((v5 >> 31) & 0xFFFFFFF4) + 4077;
}
