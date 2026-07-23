/*
 * XREFs of sub_1407B8A00 @ 0x1407B8A00
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140419080 (KiQueryUnbiasedInterruptTime.c)
 *     KeQueryTimeIncrement @ 0x14043CEE0 (KeQueryTimeIncrement.c)
 *     ExpGetLicenseTamperState @ 0x140653EA0 (ExpGetLicenseTamperState.c)
 *     ExpLicUpdateChecksum @ 0x14065400C (ExpLicUpdateChecksum.c)
 *     ExpSetLicenseTamperState @ 0x140654224 (ExpSetLicenseTamperState.c)
 *     sub_1407B873C @ 0x1407B873C (sub_1407B873C.c)
 *     ntoskrnl_20 @ 0x14095B5C0 (ntoskrnl_20.c)
 *     ExpGetKernelDataProtection @ 0x14095B830 (ExpGetKernelDataProtection.c)
 */

__int64 __fastcall sub_1407B8A00(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD *a5, _BYTE *a6)
{
  _DWORD *v8; // rbx
  signed __int64 *v10; // rsi
  char *v11; // rbx
  __int64 v12; // rbx
  bool v13; // r15
  unsigned int v14; // ecx
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rax
  char *v18; // rbx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // esi
  __int64 v23; // rdx
  int updated; // ecx
  __int64 v25; // r9
  int v26; // edx
  int v27; // eax
  __int64 v28; // rbx
  unsigned int v29; // ecx
  _DWORD *v30; // r9
  __int128 v32; // [rsp+30h] [rbp-89h] BYREF
  __int128 v33; // [rsp+40h] [rbp-79h]
  __int128 v34; // [rsp+50h] [rbp-69h]
  __int128 v35; // [rsp+68h] [rbp-51h] BYREF
  __int128 v36; // [rsp+78h] [rbp-41h]
  __int128 v37; // [rsp+88h] [rbp-31h]
  _OWORD v38[6]; // [rsp+98h] [rbp-21h] BYREF
  int v39; // [rsp+110h] [rbp+57h] BYREF
  _DWORD *v40; // [rsp+118h] [rbp+5Fh]

  v40 = a2;
  v8 = a2;
  v39 = 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( !*(_QWORD *)a1 && *(_QWORD *)(a1 + 46832) )
  {
    v10 = (signed __int64 *)(a1 + 47024);
    v11 = (char *)KeAbPreAcquire(a1 + 47024, 0LL);
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v10, 0, v11, (__int64)v10);
    if ( v11 )
      v11[10] = 1;
    v12 = *(_QWORD *)(a1 + 47016);
    v13 = v12 == 0;
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    if ( !v12 )
      goto LABEL_16;
    if ( (int)ExpGetKernelDataProtection(a1, &v35) >= 0 && (_QWORD)v36 )
    {
      v14 = 900000;
      if ( *(_DWORD *)(a1 + 47032) < 0xDBBA0u )
        v14 = *(_DWORD *)(a1 + 47032);
      v15 = v36 + v14;
      if ( !__OFSUB__(v15, (_QWORD)v36) )
      {
        v16 = MEMORY[0xFFFFF78000000320];
        if ( v15 > v16 * KeQueryTimeIncrement() / 10000 )
        {
LABEL_16:
          if ( !v13 )
            goto LABEL_44;
        }
      }
    }
    memset(v38, 0, 48);
    if ( *(_QWORD *)a1 || !*(_QWORD *)(a1 + 46832) )
      goto LABEL_44;
    v17 = (char *)KeAbPreAcquire((__int64)v10, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v17, (__int64)v10);
    if ( v18 )
      v18[10] = 1;
    v19 = *(_QWORD *)(a1 + 47016);
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    if ( !v19 )
    {
      ExpSetLicenseTamperState(a1, 5);
LABEL_44:
      v8 = v40;
      goto LABEL_45;
    }
    v20 = *(_QWORD *)(a1 + 46832);
    v21 = *(unsigned int *)(a1 + 46824);
    HIDWORD(v32) = 0;
    *(_DWORD *)((char *)&v34 + 9) = 0;
    *(_WORD *)((char *)&v34 + 13) = 0;
    HIBYTE(v34) = 0;
    if ( !v20 || (_DWORD)v21 && a1 == -24 )
      goto LABEL_44;
    v22 = 4;
    *(_QWORD *)&v32 = 0LL;
    DWORD2(v32) = 4;
    v33 = 0uLL;
    *(_QWORD *)&v34 = 0LL;
    BYTE8(v34) = 1;
    updated = ExpLicUpdateChecksum(v20 + 20, v21, &v32);
    if ( !updated && (_DWORD)v23 )
    {
      if ( (unsigned __int64)(16 * v23) > 0xFFFFFFFF )
      {
        updated = -1073741675;
        v26 = -1073741675;
        goto LABEL_36;
      }
      updated = ExpLicUpdateChecksum(v25, v23, &v32);
    }
    v26 = updated;
    if ( !updated )
    {
LABEL_37:
      v27 = 0;
      if ( !updated )
        v27 = v26;
      v35 = v32;
      v36 = v33;
      v37 = v34;
      if ( !v27 && (int)ExpGetKernelDataProtection(a1, v38) >= 0 )
      {
        if ( *(_QWORD *)&v38[0] != (_QWORD)v35 )
        {
          DWORD2(v35) = 4;
          v22 = 6;
        }
        v28 = MEMORY[0xFFFFF78000000320];
        *(_QWORD *)&v36 = v28 * KeQueryTimeIncrement() / 10000;
        ntoskrnl_20(a1, &v35, v22, 0LL);
      }
      goto LABEL_44;
    }
LABEL_36:
    *(_QWORD *)&v32 = 0LL;
    DWORD2(v32) = 4;
    goto LABEL_37;
  }
LABEL_45:
  if ( *(_QWORD *)a1 && KiQueryUnbiasedInterruptTime() / 0x989680uLL > 0x2A30 )
  {
    ExpSetLicenseTamperState(a1, 2);
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
    ntoskrnl_20(a1, &v32, 32LL, 0LL);
  }
  ExpGetLicenseTamperState(a1, &v39);
  if ( v39 )
  {
    v30 = a5;
    *a6 = 1;
    return (unsigned int)sub_1407B873C(v8, a3, a4, v30, 0);
  }
  else
  {
    v29 = -1073741772;
    *a6 = 0;
  }
  return v29;
}
