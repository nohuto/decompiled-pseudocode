/*
 * XREFs of HvRecoverFlushProtocolStateFromFiles @ 0x1407DF454
 * Callers:
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407DE6E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 * Callees:
 *     SetFailureLocation @ 0x1404649E0 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140981264 (HvpLogTypeToLogArrayIndex.c)
 *     HvpGetHiveHeader @ 0x14098195C (HvpGetHiveHeader.c)
 *     HvAnalyzeLogFiles @ 0x140983108 (HvAnalyzeLogFiles.c)
 *     HvpHeaderCheckSum @ 0x140BB97A0 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvRecoverFlushProtocolStateFromFiles(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v5; // r14
  int HiveHeader; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  int v11; // r12d
  int v12; // edi
  int v13; // r9d
  unsigned int v14; // edi
  int v15; // ecx
  _DWORD *v16; // rax
  bool v17; // zf
  int v18; // eax
  unsigned int v19; // eax
  unsigned int *v20; // rdx
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  int v27; // [rsp+20h] [rbp-E0h]
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v30[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+58h] [rbp-A8h]
  PPRIVILEGE_SET *v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v34)(); // [rsp+70h] [rbp-90h]
  char *v35; // [rsp+78h] [rbp-88h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v37; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET v38[2]; // [rsp+A0h] [rbp-60h]
  _BYTE v39[52]; // [rsp+B0h] [rbp-50h] BYREF
  char v40; // [rsp+E4h] [rbp-1Ch] BYREF
  unsigned int v41; // [rsp+ECh] [rbp-14h]
  int v42; // [rsp+F4h] [rbp-Ch]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]
  int v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+104h] [rbp+4h]

  v2 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30[1] = 0;
  v33 = 0LL;
  v34 = 0LL;
  v5 = 0LL;
  v35 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v37 = 0LL;
  *(_OWORD *)v38 = 0LL;
  memset_0(v39, 0, 0x5CuLL);
  HiveHeader = HvpGetHiveHeader(a1, &v29, &v28);
  v10 = v29;
  v11 = 2;
  v12 = HiveHeader;
  if ( HiveHeader == 2 )
  {
    v27 = 0;
LABEL_3:
    v13 = -1073741670;
    v14 = -1073741670;
LABEL_4:
    SetFailureLocation(a2, 0, 38, v13, v27);
    goto LABEL_31;
  }
  if ( HiveHeader == 7 )
  {
    v14 = -1073741491;
    v27 = 16;
LABEL_7:
    v13 = v14;
    goto LABEL_4;
  }
  if ( !HiveHeader )
  {
    v14 = -1073741476;
    v27 = 32;
    goto LABEL_7;
  }
  if ( HiveHeader == 3 )
  {
    v14 = 0;
  }
  else
  {
    if ( HiveHeader == 5 )
      v2 = *(_DWORD *)(v29 + 8);
    if ( *(_DWORD *)(a1 + 168) == 1 )
    {
      Privileges[0] = (PPRIVILEGE_SET)a1;
      v31 = HvpRecoverDataReadRoutine;
      v11 = 1;
      DWORD1(v37) = 1;
      v32 = Privileges;
      v30[0] = 1;
    }
    else
    {
      v15 = 4;
      v16 = (_DWORD *)&v37 + 1;
      v7 = 2LL;
      do
      {
        *(_QWORD *)(v16 - 5) = a1;
        *v16 = v15++;
        v16 += 6;
        --v7;
      }
      while ( v7 );
      v30[0] = 4;
      v31 = HvpRecoverDataReadRoutine;
      v34 = HvpRecoverDataReadRoutine;
      v35 = (char *)&v37 + 8;
      v32 = Privileges;
      LODWORD(v33) = 5;
    }
    v17 = v12 == 4;
    if ( v12 == 4 )
    {
      LOBYTE(v7) = 1;
      v5 = guard_dispatch_icall_no_overrides(4096LL, v7, 875777347LL, 1LL);
      if ( !v5 )
      {
        v27 = 48;
        goto LABEL_3;
      }
      v17 = 1;
    }
    LOBYTE(v8) = v17;
    v18 = HvAnalyzeLogFiles((unsigned int)&v28, v2, v8, (unsigned int)v30, v11, (__int64)v39, v5);
    v14 = v18;
    if ( v18 >= 0 )
    {
      *(_DWORD *)(a1 + 184) = v42;
      *(_DWORD *)(a1 + 168) = v43;
      *(_DWORD *)(a1 + 172) = v45;
      *(_DWORD *)(a1 + 176) = v44;
      *(_DWORD *)(a1 + 180) = v46;
      v19 = v41;
      *(_BYTE *)(a1 + 194) = 0;
      if ( v19 )
      {
        v20 = (unsigned int *)&v40;
        v21 = v19;
        do
        {
          v22 = HvpLogTypeToLogArrayIndex(*(unsigned int *)&v39[24 * *v20 + 8], v20, v21);
          v20 = (unsigned int *)(v23 + 4);
          *(_BYTE *)(v22 + a1 + 192) = 1;
          v21 = v24 - 1;
        }
        while ( v21 );
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 12LL) = v28;
      v25 = HvpHeaderCheckSum(*(_QWORD *)(a1 + 64));
      *(_DWORD *)(v9 + 508) = v25;
      v14 = 0;
    }
    else
    {
      SetFailureLocation(a2, 0, 38, v18, 64);
    }
    if ( v5 )
      guard_dispatch_icall_no_overrides(v5, 4096LL, v8, v9);
  }
LABEL_31:
  if ( v10 )
    guard_dispatch_icall_no_overrides(v10, *(unsigned int *)(a1 + 132), v8, v9);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v38[0] )
    CmSiFreeMemory(v38[0]);
  return v14;
}
