/*
 * XREFs of StorpCSEntryTelemetry @ 0x1400AF51C
 * Callers:
 *     RaidPowerSettingCallback @ 0x140044FA0 (RaidPowerSettingCallback.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpCSEntryTelemetry(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  unsigned __int128 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  bool v7; // zf
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *i; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r10d
  int v18; // r11d
  char v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20; // [rsp+31h] [rbp-CFh] BYREF
  char v21; // [rsp+32h] [rbp-CEh] BYREF
  char v22; // [rsp+33h] [rbp-CDh] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+70h] [rbp-90h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  char *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  int *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  char *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+140h] [rbp+40h] BYREF
  __int64 v53; // [rsp+160h] [rbp+60h]
  __int64 v54; // [rsp+168h] [rbp+68h]
  int *v55; // [rsp+170h] [rbp+70h]
  __int64 v56; // [rsp+178h] [rbp+78h]
  __int64 *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]

  if ( a1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a1 + 5224) = 0LL;
    v4 = (unsigned __int64)(v3 - *(_QWORD *)(a1 + 5216)) * (unsigned __int128)0x346DC5D63886594BuLL;
    v5 = *(_QWORD *)(a1 + 4960);
    *(_QWORD *)(a1 + 5216) = v2;
    v6 = *((_QWORD *)&v4 + 1) >> 11;
    *(_QWORD *)(a1 + 5232) = 0LL;
    *(_QWORD *)(a1 + 5240) = 0LL;
    *(_QWORD *)(a1 + 5248) = 0LL;
    *(_QWORD *)(a1 + 5256) = 0LL;
    *(_QWORD *)(a1 + 5264) = 0LL;
    *(_QWORD *)(a1 + 5272) = 0LL;
    *(_QWORD *)(a1 + 5280) = 0LL;
    *(_QWORD *)(a1 + 5288) = 0LL;
    *(_QWORD *)(a1 + 5296) = 0LL;
    *(_QWORD *)(a1 + 5304) = 0LL;
    *(_DWORD *)(a1 + 5312) = 0;
    *(_QWORD *)(a1 + 5320) = 0LL;
    *(_QWORD *)(a1 + 5328) = 0LL;
    *(_QWORD *)(a1 + 5336) = 0LL;
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 20) & 2) != 0 )
      {
        if ( *(_DWORD *)(v5 + 16) )
          *(_QWORD *)(a1 + 5264) = v2;
      }
      else
      {
        v7 = (*(_BYTE *)(a1 + 109) & 0x40) == 0;
        *(_QWORD *)(a1 + 5240) = v2;
        *(_QWORD *)(a1 + 5248) = v2;
        if ( !v7 )
        {
          *(_QWORD *)(a1 + 5320) = v2;
          *(_QWORD *)(a1 + 5328) = v2;
        }
      }
      if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(v5, 0x400000000000LL) )
      {
        v54 = 16LL;
        v53 = a1 + 5064;
        v23 = *(_DWORD *)(a1 + 56);
        v55 = &v23;
        v57 = &v26;
        v56 = 4LL;
        v26 = v6;
        v58 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(v8, (unsigned __int8 *)dword_140162301, v9, v10, 5u, &v52);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    for ( i = *(__int64 **)(a1 + 144); i != (__int64 *)(a1 + 144); i = (__int64 *)*i )
    {
      i[258] = 0LL;
      i[259] = 0LL;
      i[260] = 0LL;
      i[261] = 0LL;
      i[262] = 0LL;
      i[263] = 0LL;
      i[264] = 0LL;
      i[265] = 0LL;
      i[266] = 0LL;
      *((_DWORD *)i + 534) = 0;
      i[268] = 0LL;
      i[269] = 0LL;
      i[270] = 0LL;
      if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 8)) )
      {
        v12 = i[226];
        v13 = *(unsigned int *)(v12 + 32);
        if ( (v13 & 8) != 0 )
        {
          if ( *(_DWORD *)(v12 + 16) )
            i[259] = v2;
        }
        else
        {
          v7 = (*((_BYTE *)i + 443) & 2) == 0;
          i[258] = v2;
          i[261] = v2;
          if ( !v7 )
          {
            i[268] = v2;
            i[269] = v2;
          }
        }
        if ( (unsigned int)dword_140170178 > 5 )
        {
          if ( tlgKeywordOn(v13, 0x400000000000LL) )
          {
            v31 = 16LL;
            v30 = a1 + 5064;
            v33 = 16LL;
            v32 = i + 255;
            v23 = *(_DWORD *)(a1 + 56);
            v34 = &v23;
            v19 = *((_BYTE *)i + 40);
            v36 = &v19;
            v20 = *((_BYTE *)i + 41);
            v38 = &v20;
            v21 = *((_BYTE *)i + 42);
            v40 = &v21;
            v42 = &v24;
            v44 = &v25;
            v46 = &v22;
            v48 = &v27;
            LODWORD(v26) = *((_DWORD *)i + 532);
            v50 = &v26;
            v35 = 4LL;
            v37 = 1LL;
            v39 = 1LL;
            v41 = 1LL;
            v24 = v17;
            v43 = 4LL;
            v25 = v18;
            v45 = 4LL;
            v22 = v16;
            v47 = 1LL;
            v27 = v6;
            v49 = 8LL;
            v51 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(v14, (unsigned __int8 *)dword_14016118F, v15, v16, 0xDu, &v29);
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[225]);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
