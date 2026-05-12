/*
 * XREFs of StorpCSExitTelemetry @ 0x14003B750
 * Callers:
 *     RaidPowerSettingCallback @ 0x140044FA0 (RaidPowerSettingCallback.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpCSExitTelemetry(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // ecx
  unsigned __int64 v13; // rcx
  __int64 *i; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  int v23; // ecx
  unsigned __int64 v24; // rcx
  char v25; // [rsp+30h] [rbp-D0h] BYREF
  char v26; // [rsp+31h] [rbp-CFh] BYREF
  char v27; // [rsp+32h] [rbp-CEh] BYREF
  char v28; // [rsp+33h] [rbp-CDh] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  int v35; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  int *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  int *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  __int64 *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]
  __int64 *v56; // [rsp+120h] [rbp+20h]
  __int64 v57; // [rsp+128h] [rbp+28h]
  __int64 *v58; // [rsp+130h] [rbp+30h]
  __int64 v59; // [rsp+138h] [rbp+38h]
  int *v60; // [rsp+140h] [rbp+40h]
  __int64 v61; // [rsp+148h] [rbp+48h]
  int *v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v64; // [rsp+160h] [rbp+60h]
  __int64 v65; // [rsp+168h] [rbp+68h]
  __int64 *v66; // [rsp+170h] [rbp+70h]
  __int64 v67; // [rsp+178h] [rbp+78h]
  __int64 *v68; // [rsp+180h] [rbp+80h]
  __int64 v69; // [rsp+188h] [rbp+88h]
  __int64 *v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v72; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1A8h] [rbp+A8h]
  int *v74; // [rsp+1B0h] [rbp+B0h]
  __int64 v75; // [rsp+1B8h] [rbp+B8h]
  int *v76; // [rsp+1C0h] [rbp+C0h]
  __int64 v77; // [rsp+1C8h] [rbp+C8h]
  int *v78; // [rsp+1D0h] [rbp+D0h]
  __int64 v79; // [rsp+1D8h] [rbp+D8h]
  __int64 *v80; // [rsp+1E0h] [rbp+E0h]
  __int64 v81; // [rsp+1E8h] [rbp+E8h]
  __int64 *v82; // [rsp+1F0h] [rbp+F0h]
  __int64 v83; // [rsp+1F8h] [rbp+F8h]
  __int64 *v84; // [rsp+200h] [rbp+100h]
  __int64 v85; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v86; // [rsp+210h] [rbp+110h]
  __int64 v87; // [rsp+218h] [rbp+118h]

  if ( a1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v2 = MEMORY[0xFFFFF78000000008];
    v3 = *(_QWORD *)(a1 + 5224);
    if ( v3 )
      *(_QWORD *)(a1 + 5232) += (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
    if ( *(_QWORD *)(a1 + 4960) )
    {
      v4 = *(_QWORD *)(a1 + 5248);
      if ( v4 )
        *(_QWORD *)(a1 + 5256) += (v2 - v4) / 0x2710uLL;
      v5 = *(_QWORD *)(a1 + 5328);
      if ( v5 )
        *(_QWORD *)(a1 + 5336) += (v2 - v5) / 0x2710uLL;
      v6 = *(_QWORD *)(a1 + 5264);
      if ( v6 )
        *(_QWORD *)(a1 + 5272) += (v2 - v6) / 0x2710uLL;
      v7 = *(_QWORD *)(a1 + 5240);
      if ( v7 )
        v7 -= *(_QWORD *)(a1 + 5216);
      if ( (unsigned int)dword_140170178 > 5 && (unsigned __int8)tlgKeywordOn(v7, 0x400000000000LL) )
      {
        v47 = 16LL;
        v46 = a1 + 5064;
        v29 = *(_DWORD *)(a1 + 56);
        v48 = &v29;
        v11 = *(_QWORD *)(v10 + 8);
        v49 = 4LL;
        v51 = 4LL;
        v53 = 8LL;
        v12 = *(_DWORD *)(v11 + 12);
        v50 = &v30;
        v30 = v12;
        v13 = v2 - *(_QWORD *)(a1 + 5216);
        v55 = 8LL;
        v52 = &v36;
        v37 = *(_QWORD *)(a1 + 5232);
        v54 = &v37;
        v38 = *(_QWORD *)(a1 + 5272);
        v56 = &v38;
        v39 = *(_QWORD *)(a1 + 5256);
        v58 = &v39;
        v31 = *(_DWORD *)(a1 + 5300);
        v60 = &v31;
        v32 = *(_DWORD *)(a1 + 5304);
        v62 = &v32;
        v33 = *(_DWORD *)(a1 + 5308);
        v64 = (unsigned __int64 *)&v33;
        v34 = *(_DWORD *)(a1 + 5312);
        v66 = (__int64 *)&v34;
        v68 = &v40;
        v41 = *(_QWORD *)(a1 + 5280);
        v70 = &v41;
        v42 = *(_QWORD *)(a1 + 5288);
        v72 = &v42;
        v35 = *(_DWORD *)(a1 + 5296);
        v74 = &v35;
        v36 = v13 / 0x2710;
        v57 = 8LL;
        v59 = 8LL;
        v61 = 4LL;
        v63 = 4LL;
        v65 = 4LL;
        v67 = 4LL;
        v40 = v9;
        v69 = 8LL;
        v71 = 8LL;
        v73 = 8LL;
        v75 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(v13, (unsigned __int8 *)dword_140160F56, v8, v9, 0x11u, v45);
      }
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
    for ( i = *(__int64 **)(a1 + 144); i != (__int64 *)(a1 + 144); i = (__int64 *)*i )
    {
      if ( RaidUnitCheckAndAcquirePoFx((__int64)(i - 8)) )
      {
        v15 = i[259];
        if ( v15 )
          i[260] += (v2 - v15) / 0x2710uLL;
        v16 = i[261];
        if ( v16 )
          i[262] += (v2 - v16) / 0x2710uLL;
        v17 = i[269];
        if ( v17 )
          i[270] += (v2 - v17) / 0x2710uLL;
        v18 = i[258];
        if ( v18 )
          v18 -= *(_QWORD *)(a1 + 5216);
        if ( (unsigned int)dword_140170178 > 5 )
        {
          if ( (unsigned __int8)tlgKeywordOn(v18, 0x400000000000LL) )
          {
            v21 = i[226];
            v46 = a1 + 5064;
            v47 = 16LL;
            v48 = (int *)(i + 255);
            v35 = *(_DWORD *)(a1 + 56);
            v50 = &v35;
            v25 = *((_BYTE *)i + 40);
            v52 = (unsigned __int64 *)&v25;
            v26 = *((_BYTE *)i + 41);
            v54 = (__int64 *)&v26;
            v27 = *((_BYTE *)i + 42);
            v56 = (__int64 *)&v27;
            v22 = *(_QWORD *)(v21 + 8);
            v49 = 16LL;
            v51 = 4LL;
            v53 = 1LL;
            v23 = *(_DWORD *)(v22 + 12);
            v58 = (__int64 *)&v34;
            v33 = *(_DWORD *)(v21 + 24);
            v60 = &v33;
            LOBYTE(v22) = (*(_DWORD *)(v21 + 32) & 0x800) != 0;
            v34 = v23;
            v28 = v22;
            v24 = v2 - *(_QWORD *)(a1 + 5216);
            v62 = (int *)&v28;
            v55 = 1LL;
            v64 = &v42;
            v41 = *(_QWORD *)(a1 + 5232);
            v66 = &v41;
            v40 = i[260];
            v68 = &v40;
            v39 = i[262];
            v70 = &v39;
            v32 = *((_DWORD *)i + 531);
            v72 = (unsigned __int64 *)&v32;
            v31 = *((_DWORD *)i + 532);
            v74 = &v31;
            LODWORD(v22) = *((_DWORD *)i + 533);
            v57 = 1LL;
            v59 = 4LL;
            v61 = 4LL;
            v63 = 1LL;
            v42 = v24 / 0x2710;
            v65 = 8LL;
            v67 = 8LL;
            v69 = 8LL;
            v71 = 8LL;
            v73 = 4LL;
            v75 = 4LL;
            v30 = v22;
            v77 = 4LL;
            v76 = &v30;
            v29 = *((_DWORD *)i + 534);
            v78 = &v29;
            v80 = &v38;
            v37 = i[263];
            v82 = &v37;
            v43 = i[264];
            v84 = &v43;
            LODWORD(v36) = *((_DWORD *)i + 530);
            v86 = &v36;
            v79 = 4LL;
            v38 = v20;
            v81 = 8LL;
            v83 = 8LL;
            v85 = 8LL;
            v87 = 4LL;
            tlgWriteTransfer_EtwWriteTransfer(v24, (unsigned __int8 *)dword_140160ADA, v19, v20, 0x17u, v45);
          }
        }
        ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[225]);
      }
      *(__int64 *)((char *)i + 2124) = 0LL;
      *(__int64 *)((char *)i + 2132) = 0LL;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    *(_QWORD *)(a1 + 5300) = 0LL;
    *(_QWORD *)(a1 + 5308) = 0LL;
    *(_QWORD *)(a1 + 5216) = v2;
  }
}
