/*
 * XREFs of HvRecoverFlushProtocolStateFromFiles @ 0x1407CFB7C
 * Callers:
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x1407CEE08 (CmpRecoverFlushProtocolStateFromFiles.c)
 * Callees:
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1409F8638 (HvpLogTypeToLogArrayIndex.c)
 *     HvpGetHiveHeader @ 0x1409F926C (HvpGetHiveHeader.c)
 *     HvAnalyzeLogFiles @ 0x1409F9BC4 (HvAnalyzeLogFiles.c)
 *     HvpHeaderCheckSum @ 0x140BA9850 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvRecoverFlushProtocolStateFromFiles(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v5; // r14
  int HiveHeader; // eax
  int v7; // r8d
  __int64 v8; // r13
  int v9; // r12d
  int v10; // edi
  int v11; // r9d
  unsigned int v12; // edi
  int v13; // ecx
  _DWORD *v14; // rax
  __int64 v15; // rdx
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // eax
  unsigned int *v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r9
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
  v8 = v29;
  v9 = 2;
  v10 = HiveHeader;
  if ( HiveHeader == 2 )
  {
    v27 = 0;
LABEL_3:
    v11 = -1073741670;
    v12 = -1073741670;
LABEL_4:
    SetFailureLocation(a2, 0, 38, v11, v27);
    goto LABEL_31;
  }
  if ( HiveHeader == 7 )
  {
    v12 = -1073741491;
    v27 = 16;
LABEL_7:
    v11 = v12;
    goto LABEL_4;
  }
  if ( !HiveHeader )
  {
    v12 = -1073741476;
    v27 = 32;
    goto LABEL_7;
  }
  if ( HiveHeader == 3 )
  {
    v12 = 0;
  }
  else
  {
    if ( HiveHeader == 5 )
      v2 = *(_DWORD *)(v29 + 8);
    if ( *(_DWORD *)(a1 + 168) == 1 )
    {
      Privileges[0] = (PPRIVILEGE_SET)a1;
      v31 = HvpRecoverDataReadRoutine;
      v9 = 1;
      DWORD1(v37) = 1;
      v32 = Privileges;
      v30[0] = 1;
    }
    else
    {
      v13 = 4;
      v14 = (_DWORD *)&v37 + 1;
      v15 = 2LL;
      do
      {
        *(_QWORD *)(v14 - 5) = a1;
        *v14 = v13++;
        v14 += 6;
        --v15;
      }
      while ( v15 );
      v30[0] = 4;
      v31 = HvpRecoverDataReadRoutine;
      v34 = HvpRecoverDataReadRoutine;
      v35 = (char *)&v37 + 8;
      v32 = Privileges;
      LODWORD(v33) = 5;
    }
    v16 = v10 == 4;
    if ( v10 == 4 )
    {
      v5 = guard_dispatch_icall_no_overrides(4096LL);
      if ( !v5 )
      {
        v27 = 48;
        goto LABEL_3;
      }
      v16 = 1;
    }
    LOBYTE(v7) = v16;
    v17 = HvAnalyzeLogFiles((unsigned int)&v28, v2, v7, (unsigned int)v30, v9, (__int64)v39, v5);
    v12 = v17;
    if ( v17 >= 0 )
    {
      *(_DWORD *)(a1 + 184) = v42;
      *(_DWORD *)(a1 + 168) = v43;
      *(_DWORD *)(a1 + 172) = v45;
      *(_DWORD *)(a1 + 176) = v44;
      *(_DWORD *)(a1 + 180) = v46;
      v18 = v41;
      *(_BYTE *)(a1 + 194) = 0;
      if ( v18 )
      {
        v19 = (unsigned int *)&v40;
        v20 = v18;
        do
        {
          v21 = HvpLogTypeToLogArrayIndex(*(unsigned int *)&v39[24 * *v19 + 8], v19, v20);
          v19 = (unsigned int *)(v22 + 4);
          *(_BYTE *)(v21 + a1 + 192) = 1;
          v20 = v23 - 1;
        }
        while ( v20 );
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 12LL) = v28;
      v24 = HvpHeaderCheckSum(*(_QWORD *)(a1 + 64));
      *(_DWORD *)(v25 + 508) = v24;
      v12 = 0;
    }
    else
    {
      SetFailureLocation(a2, 0, 38, v17, 64);
    }
    if ( v5 )
      guard_dispatch_icall_no_overrides(v5);
  }
LABEL_31:
  if ( v8 )
    guard_dispatch_icall_no_overrides(v8);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v38[0] )
    CmSiFreeMemory(v38[0]);
  return v12;
}
