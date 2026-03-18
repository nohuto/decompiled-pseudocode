/*
 * XREFs of PruneModesByDisplayDeviceCaps @ 0x14008F098
 * Callers:
 *     DrvBuildDevmodeList @ 0x1401180B8 (DrvBuildDevmodeList.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140015CF0 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PruneMode @ 0x14008F4E0 (PruneMode.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14008FA68 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     GetMonitorCapability @ 0x14008FB00 (GetMonitorCapability.c)
 *     ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14011E230 (--1EnsureMonitorDevices@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PruneModesByDisplayDeviceCaps(struct tagGRAPHICS_DEVICE *a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // edi
  struct tagGRAPHICS_DEVICE *v6; // rsi
  unsigned int v7; // r13d
  __int64 v8; // rax
  char *v9; // r14
  unsigned int v10; // r12d
  __int64 v11; // r15
  int v12; // esi
  unsigned int v13; // edi
  char v14; // al
  __int64 DxgkWin32kInterface; // rax
  __int64 v16; // r9
  int MonitorCapability; // eax
  PVOID v18; // rcx
  bool v19; // cf
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  bool v25; // zf
  unsigned int v26; // r15d
  __int64 v27; // rcx
  char *v28; // rdx
  int v29; // r11d
  __int64 v30; // r13
  struct tagGRAPHICS_DEVICE *v31; // r10
  int v32; // r9d
  int v33; // edx
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v40; // r14d
  __int64 v41; // r8
  char v42; // [rsp+30h] [rbp-89h]
  unsigned int v44; // [rsp+34h] [rbp-85h]
  char *v45; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v46; // [rsp+40h] [rbp-79h]
  unsigned int v47; // [rsp+44h] [rbp-75h]
  unsigned int v48; // [rsp+48h] [rbp-71h]
  unsigned int v49; // [rsp+4Ch] [rbp-6Dh]
  __int64 v50; // [rsp+50h] [rbp-69h]
  PVOID Object; // [rsp+58h] [rbp-61h] BYREF
  __int128 v52; // [rsp+60h] [rbp-59h] BYREF
  __int64 v53; // [rsp+70h] [rbp-49h]
  unsigned int v54; // [rsp+78h] [rbp-41h] BYREF
  int v55; // [rsp+7Ch] [rbp-3Dh]
  int v56; // [rsp+80h] [rbp-39h]
  int v57; // [rsp+84h] [rbp-35h]
  unsigned int v58; // [rsp+88h] [rbp-31h]
  int v59; // [rsp+8Ch] [rbp-2Dh]
  char v60[8]; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v61; // [rsp+98h] [rbp-21h]
  PVOID P; // [rsp+A0h] [rbp-19h]
  __int64 v63; // [rsp+A8h] [rbp-11h]
  struct tagGRAPHICS_DEVICE *v64; // [rsp+B0h] [rbp-9h]
  __int128 v65; // [rsp+B8h] [rbp-1h] BYREF
  int v66; // [rsp+C8h] [rbp+Fh]

  v3 = *((_DWORD *)a1 + 40);
  v63 = a3;
  v5 = a2;
  v6 = a1;
  v64 = a1;
  if ( (v3 & 0x800000) != 0 )
  {
    v42 = 1;
    v7 = 0;
  }
  else
  {
    v42 = 0;
    v7 = 56;
  }
  v54 = v7;
  v61 = 0;
  P = 0LL;
  v55 = -1;
  v46 = 0;
  v56 = 0;
  v47 = -1;
  v57 = -1;
  v48 = 0;
  v58 = 0;
  v49 = -1;
  v59 = -1;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v60, a1);
  if ( !v61 )
  {
    if ( !_bittest((const signed __int32 *)v6 + 40, 0x17u) )
      goto LABEL_53;
    v40 = 0;
    while ( v5 )
    {
      v41 = *(_QWORD *)(a3 + 16LL * --v5 + 8);
      if ( *(unsigned __int16 *)(v41 + 68) + *(unsigned __int16 *)(v41 + 70) != 244 || (*(_DWORD *)(v41 + 240) & 1) != 0 )
      {
        ++v40;
      }
      else
      {
        *(_DWORD *)(a3 + 16LL * v5) = 1;
        *((_DWORD *)v6 + 40) |= 0x8000000u;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    return v40;
  }
  v8 = PALLOCMEM(868 * v61, 1986356295LL);
  v9 = (char *)v8;
  if ( !v8 )
  {
    EnsureMonitorDevices::~EnsureMonitorDevices((EnsureMonitorDevices *)v60);
    return v5;
  }
  v10 = v61;
  v11 = 0LL;
  LODWORD(v45) = 0;
  v50 = v8 + 4LL * v61;
  if ( !v61 )
    goto LABEL_50;
  v12 = (int)v45;
  v13 = -1;
  do
  {
    v66 = 0;
    v65 = 0LL;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v60, v11, (struct tagVIDEO_MONITOR_DEVICE *)&v65);
    v14 = v65;
    *(_DWORD *)&v9[4 * v11] = 0;
    if ( (v14 & 3) == 3 )
    {
      v45 = 0LL;
      Object = 0LL;
      v53 = 0LL;
      v52 = 0LL;
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
      if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, char **))(DxgkWin32kInterface + 456))(
             (char *)&v65 + 8,
             DWORD1(v65),
             &Object,
             &v45) < 0 )
        goto LABEL_23;
      LOBYTE(v16) = v42;
      MonitorCapability = GetMonitorCapability(v45, v50, &v52, v16);
      v18 = Object;
      if ( v7 <= (unsigned int)v52 )
        v7 = v52;
      v19 = v13 < DWORD1(v52);
      *(_DWORD *)&v9[4 * v11] = MonitorCapability;
      if ( !v19 )
        v13 = DWORD1(v52);
      v20 = v46;
      v54 = v7;
      if ( v46 <= DWORD2(v52) )
        v20 = DWORD2(v52);
      v46 = v20;
      v56 = v20;
      v21 = v47;
      v55 = v13;
      if ( v47 >= HIDWORD(v52) )
        v21 = HIDWORD(v52);
      v47 = v21;
      v57 = v21;
      v22 = v48;
      if ( v48 <= (unsigned int)v53 )
        v22 = v53;
      v48 = v22;
      v58 = v22;
      v23 = v49;
      if ( v49 >= HIDWORD(v53) )
        v23 = HIDWORD(v53);
      v49 = v23;
      v59 = v23;
      ObfDereferenceObject(v18);
    }
    v24 = *(unsigned int *)&v9[4 * v11];
    v12 += v24;
    v50 += 24 * v24;
LABEL_23:
    v10 = v61;
    v11 = (unsigned int)(v11 + 1);
  }
  while ( (unsigned int)v11 < v61 );
  v5 = a2;
  v25 = v12 == 0;
  v6 = v64;
  if ( !v25 )
    goto LABEL_25;
LABEL_50:
  if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0 )
  {
LABEL_25:
    v26 = 0;
    if ( v5 )
    {
      v27 = v63;
      v28 = &v9[4 * v10];
      v45 = v28;
      do
      {
        Object = v28;
        --v5;
        v29 = (int)v28;
        v50 = 16LL * v5;
        v30 = 0LL;
        v31 = *(struct tagGRAPHICS_DEVICE **)(v50 + v27 + 8);
        v64 = v31;
        while ( (unsigned int)v30 < v10 )
        {
          v32 = 0;
          v33 = *((_DWORD *)P + 5 * v30);
          v34 = v33 & 1;
          if ( (v33 & 2) == 0 )
            v34 |= 2u;
          v35 = v34 | 0x80000000;
          if ( v33 < 0 )
            v35 = v34;
          v36 = v35 | 0x40000000;
          if ( (v33 & 0x40000000) != 0 )
            v36 = v35;
          v37 = *(_DWORD *)&v9[4 * v30];
          v44 = v37;
          if ( v37 )
          {
            v32 = PruneMode((_DWORD)v31, v29, v37, (unsigned int)&v54, v36);
            v31 = v64;
            v29 = (_DWORD)Object + 24 * v44;
            Object = (char *)Object + 24 * v44;
          }
          if ( (*((_DWORD *)v6 + 40) & 0x800000) != 0
            && *((unsigned __int16 *)v31 + 35) + *((unsigned __int16 *)v31 + 34) == 244 )
          {
            if ( (*((_DWORD *)v31 + 60) & 1) == 0 )
              goto LABEL_42;
          }
          else if ( v32 )
          {
LABEL_42:
            v27 = v63;
            *(_DWORD *)(v50 + v63) = 1;
            *((_DWORD *)v6 + 40) |= 0x8000000u;
            goto LABEL_43;
          }
          v30 = (unsigned int)(v30 + 1);
        }
        v27 = v63;
LABEL_43:
        v28 = v45;
        v38 = v26 + 1;
        if ( (_DWORD)v30 != v10 )
          v38 = v26;
        v26 = v38;
      }
      while ( v5 );
    }
    GreDeleteFastMutex(v9);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return v26;
  }
  else
  {
    GreDeleteFastMutex(v9);
LABEL_53:
    if ( P )
      ExFreePoolWithTag(P, 0);
    return v5;
  }
}
