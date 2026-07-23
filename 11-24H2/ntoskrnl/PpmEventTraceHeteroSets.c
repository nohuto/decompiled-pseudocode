/*
 * XREFs of PpmEventTraceHeteroSets @ 0x14042BE28
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x1404E5C48 (PpmParkEvaluateRestriction.c)
 *     PopInitializeHeteroProcessors @ 0x140AC57E0 (PopInitializeHeteroProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeIsEmptyGroupMask @ 0x14032FF20 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     KiQueryHeteroSetFromSubNode @ 0x14042C290 (KiQueryHeteroSetFromSubNode.c)
 *     KiQueryRestrictionAffinity @ 0x14042C2F8 (KiQueryRestrictionAffinity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PpmEventTraceHeteroSets(int a1)
{
  __int64 v1; // rax
  const EVENT_DESCRIPTOR *v2; // rsi
  int v3; // edi
  unsigned int v4; // r12d
  const EVENT_DESCRIPTOR *v5; // rax
  unsigned int v6; // ecx
  int *v7; // r8
  int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // r11
  char v13; // al
  char v14; // al
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v16; // r15
  unsigned int v17; // ebx
  unsigned int v18; // r14d
  int i; // r11d
  __int64 v20; // r9
  int v21; // r12d
  int v22; // eax
  int v23; // ebx
  int j; // ecx
  __int64 v25; // rax
  int v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v29; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v30; // [rsp+54h] [rbp-B4h] BYREF
  int v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  int v33; // [rsp+60h] [rbp-A8h]
  unsigned int v34; // [rsp+64h] [rbp-A4h]
  __int128 v35; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h]
  __int64 v37; // [rsp+80h] [rbp-88h]
  __int128 v38; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  int *v42; // [rsp+B8h] [rbp-50h]
  __int64 v43; // [rsp+C0h] [rbp-48h]
  int *v44; // [rsp+C8h] [rbp-40h]
  __int64 v45; // [rsp+D0h] [rbp-38h]
  int *v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+E0h] [rbp-28h]
  int *v48; // [rsp+E8h] [rbp-20h]
  __int64 v49; // [rsp+F0h] [rbp-18h]
  char *v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  char *v52; // [rsp+108h] [rbp+0h]
  __int64 v53; // [rsp+110h] [rbp+8h]
  _QWORD *v54; // [rsp+118h] [rbp+10h]
  __int64 v55; // [rsp+120h] [rbp+18h]
  _QWORD *v56; // [rsp+128h] [rbp+20h]
  __int64 v57; // [rsp+130h] [rbp+28h]
  _QWORD *v58; // [rsp+138h] [rbp+30h]
  __int64 v59; // [rsp+140h] [rbp+38h]
  _QWORD *v60; // [rsp+148h] [rbp+40h]
  __int64 v61; // [rsp+150h] [rbp+48h]
  int *v62; // [rsp+158h] [rbp+50h]
  __int64 v63; // [rsp+160h] [rbp+58h]
  _QWORD v64[14]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v65[14]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v66[14]; // [rsp+248h] [rbp+140h] BYREF
  _QWORD v67[14]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v68; // [rsp+328h] [rbp+220h]
  int v69; // [rsp+330h] [rbp+228h]
  __int16 v70; // [rsp+334h] [rbp+22Ch]
  __int64 v71; // [rsp+338h] [rbp+230h] BYREF
  int v72; // [rsp+340h] [rbp+238h]
  __int16 v73; // [rsp+344h] [rbp+23Ch]
  __int64 v74; // [rsp+348h] [rbp+240h] BYREF
  int v75; // [rsp+350h] [rbp+248h]
  __int16 v76; // [rsp+354h] [rbp+24Ch]

  v1 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_MULTI_CORE_HETERO_SET_RUNDOWN;
  v3 = 0;
  v33 = a1;
  v31 = 0;
  v28 = 0;
  v4 = *(_DWORD *)(v1 + 4);
  v5 = &PPM_ETW_MULTI_CORE_HETERO_SET_UPDATE;
  if ( a1 )
    v2 = &PPM_ETW_MULTI_CORE_HETERO_SET_UPDATE;
  v27 = 0;
  v38 = 0LL;
  v32 = 0;
  v29 = 0;
  v34 = v4;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v5) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v5 )
    {
      v30 = 0;
      if ( KeNumberNodes )
      {
        v6 = 0;
        do
        {
          v7 = KiDynamicHeteroCpuPolicy;
          v8 = 0;
          v9 = 0LL;
          v10 = KeNodeBlock[v6];
          v68 = 0LL;
          v69 = 0;
          v70 = 0;
          v71 = 0LL;
          v72 = 0;
          v73 = 0;
          v74 = 0LL;
          v75 = 0;
          v76 = 0;
          do
          {
            v11 = (unsigned int)(2 * v8);
            v12 = 2LL;
            do
            {
              v13 = *(_BYTE *)v7++;
              *((_BYTE *)&v68 + v11) = v13;
              *((_BYTE *)&v71 + v11) = KiMultiCoreHeteroLowerArchThreshold[v9];
              v14 = KiMultiCoreHeteroUpperArchThreshold[v9++];
              *((_BYTE *)&v74 + v11) = v14;
              v11 = (unsigned int)(v11 + 1);
              --v12;
            }
            while ( v12 );
            ++v8;
          }
          while ( v8 < 7 );
          v37 = v10;
          v38 = 0LL;
          RtlCopyVolatileMemory(&v38, (const void *)(v10 + 16), 0x10uLL);
          while ( !(unsigned int)KeIsEmptyGroupMask((unsigned __int64 *)&v38) )
          {
            FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v38);
            _bittestandreset64((signed __int64 *)&v38, FirstSetRightGroupMask);
            v16 = *(_QWORD *)(v37 + 8LL * FirstSetRightGroupMask + 32);
            v29 = 0;
            if ( v4 )
            {
              v17 = 0;
              do
              {
                v36 = 0LL;
                v35 = 0LL;
                memset_0(v66, 0, sizeof(v66));
                memset_0(v64, 0, sizeof(v64));
                memset_0(v65, 0, sizeof(v65));
                memset_0(v67, 0, sizeof(v67));
                v18 = 0;
                KiQueryRestrictionAffinity(v16, v17, v67);
                for ( i = 0; i < 7; ++i )
                {
                  do
                  {
                    KiQueryHeteroSetFromSubNode(v16, i, v3++, v17, (__int64)&v35);
                    v20 = v18++;
                    v66[v20] = v36;
                    v64[v20] = v35;
                    v65[v20] = *((_QWORD *)&v35 + 1);
                  }
                  while ( v3 < 2 );
                  v3 = 0;
                }
                v21 = v33;
                v22 = 0;
                v23 = 0;
                v27 = 0;
                do
                {
                  v28 = 0;
                  for ( j = 0; j < 2; v28 = j )
                  {
                    v25 = (unsigned int)(j + 2 * v22);
                    *(_QWORD *)&UserData.Size = 4LL;
                    v31 = *((unsigned __int8 *)&v68 + v25);
                    v40 = v16 + 136;
                    UserData.Ptr = (ULONGLONG)&v30;
                    v42 = (int *)&v29;
                    v44 = &v27;
                    v46 = &v28;
                    v48 = &v31;
                    v41 = 2LL;
                    v50 = (char *)&v71 + (unsigned int)v25;
                    v43 = 4LL;
                    v52 = (char *)&v74 + (unsigned int)v25;
                    v45 = 1LL;
                    v47 = 1LL;
                    v49 = 1LL;
                    v51 = 1LL;
                    v54 = &v64[v23];
                    v53 = 1LL;
                    v56 = &v65[v23];
                    v55 = 8LL;
                    v58 = &v66[v23];
                    v57 = 8LL;
                    v60 = &v67[v23];
                    v62 = &v32;
                    v59 = 8LL;
                    v61 = 8LL;
                    v32 = v21;
                    v63 = 4LL;
                    EtwWriteEx(PpmEtwHandle, v2, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
                    ++v23;
                    v22 = v27;
                    j = v28 + 1;
                  }
                  v22 = v27 + 1;
                  v27 = v22;
                }
                while ( v22 < 7 );
                v4 = v34;
                v17 = v29 + 1;
                v29 = v17;
              }
              while ( v17 < v34 );
            }
          }
          LOBYTE(v5) = KeNumberNodes;
          v6 = v30 + 1;
          v30 = v6;
        }
        while ( v6 < (unsigned __int16)KeNumberNodes );
      }
    }
  }
  return (char)v5;
}
