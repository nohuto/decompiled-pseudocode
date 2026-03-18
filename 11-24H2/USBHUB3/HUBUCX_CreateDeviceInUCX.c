/*
 * XREFs of HUBUCX_CreateDeviceInUCX @ 0x140026698
 * Callers:
 *     HUBDSM_CreatingUCXDevice30 @ 0x140021820 (HUBDSM_CreatingUCXDevice30.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     Feature_UISCSF__private_IsEnabledDeviceUsageNoInline @ 0x1400261BC (Feature_UISCSF__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBUCX_CreateDeviceInUCX(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 *v2; // rdi
  __int64 v3; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  int v6; // ecx
  int v7; // edi

  v1 = *a1;
  v2 = a1 + 21;
  v3 = a1[1];
  *((_DWORD *)a1 + 42) = 32;
  IsEnabledDeviceUsageNoInline = Feature_UISCSF__private_IsEnabledDeviceUsageNoInline();
  v6 = *((_DWORD *)a1 + 366);
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( (v6 & 0x800) == 0 )
    {
      if ( (v6 & 0x100) != 0 )
      {
        *((_DWORD *)a1 + 43) = 2;
        goto LABEL_9;
      }
      if ( (v6 & 0x400) != 0 )
      {
        *((_DWORD *)a1 + 43) = 0;
        goto LABEL_20;
      }
LABEL_8:
      *((_DWORD *)a1 + 43) = 1;
      goto LABEL_9;
    }
LABEL_15:
    *((_DWORD *)a1 + 43) = 3;
    *((_DWORD *)a1 + 40) = 512;
    goto LABEL_10;
  }
  if ( (v6 & 0x800) != 0 )
    goto LABEL_15;
  if ( (v6 & 0x100) != 0 )
  {
    *((_DWORD *)a1 + 43) = 2;
    *((_DWORD *)a1 + 48) = 2;
LABEL_9:
    *((_DWORD *)a1 + 40) = 64;
    goto LABEL_10;
  }
  if ( (v6 & 0x400) == 0 )
  {
    *((_DWORD *)a1 + 48) = 1;
    goto LABEL_8;
  }
  *((_DWORD *)a1 + 43) = 0;
  *((_DWORD *)a1 + 48) = 0;
LABEL_20:
  *((_DWORD *)a1 + 40) = 8;
LABEL_10:
  *((_DWORD *)a1 + 44) = *(unsigned __int16 *)(v3 + 200);
  a1[23] = (__int64)a1;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *))(v1 + 408))(*(_QWORD *)(v1 + 248), v2, a1 + 3);
  if ( v7 >= 0 )
  {
    a1[193] = a1[3];
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 1432),
        2u,
        5u,
        0x26u,
        (__int64)&WPP_6f1e94dad5dd3d9188df346061fdcafd_Traceguids,
        v7);
    *((_DWORD *)a1 + 393) = -1073737728;
    *((_DWORD *)a1 + 392) = -1073741670;
  }
  return ((v7 >> 31) & 0xFFFFFFF4) + 4077;
}
