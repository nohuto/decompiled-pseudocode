/*
 * XREFs of PpmEventTraceHeteroSets @ 0x140427BB0
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x14047F6CC (PpmParkEvaluateRestriction.c)
 *     PopInitializeHeteroProcessors @ 0x140A2061C (PopInitializeHeteroProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     KeIsEmptyGroupMask @ 0x140304FE8 (KeIsEmptyGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140305380 (KeFindFirstSetRightGroupMask.c)
 *     KiQueryHeteroSetFromSubNode @ 0x140428020 (KiQueryHeteroSetFromSubNode.c)
 *     KiQueryRestrictionAffinity @ 0x140428088 (KiQueryRestrictionAffinity.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PpmEventTraceHeteroSets(int a1)
{
  const EVENT_DESCRIPTOR *v1; // rsi
  int v2; // edi
  unsigned int v3; // r12d
  const EVENT_DESCRIPTOR *v4; // rax
  unsigned int v5; // ecx
  int *v6; // r8
  int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r10
  __int64 v11; // r11
  char v12; // al
  char v13; // al
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v15; // r15
  unsigned int v16; // ebx
  unsigned int v17; // r14d
  int i; // r11d
  __int64 v19; // r9
  int v20; // r12d
  int v21; // eax
  int v22; // ebx
  int j; // ecx
  __int64 v24; // rax
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v28; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v29; // [rsp+54h] [rbp-B4h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  int v31; // [rsp+5Ch] [rbp-ACh] BYREF
  int v32; // [rsp+60h] [rbp-A8h]
  unsigned int v33; // [rsp+64h] [rbp-A4h]
  __int128 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h]
  __int64 v36; // [rsp+80h] [rbp-88h]
  __int128 v37; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-60h]
  __int64 v40; // [rsp+B0h] [rbp-58h]
  int *v41; // [rsp+B8h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-48h]
  int *v43; // [rsp+C8h] [rbp-40h]
  __int64 v44; // [rsp+D0h] [rbp-38h]
  int *v45; // [rsp+D8h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-28h]
  int *v47; // [rsp+E8h] [rbp-20h]
  __int64 v48; // [rsp+F0h] [rbp-18h]
  char *v49; // [rsp+F8h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp-8h]
  char *v51; // [rsp+108h] [rbp+0h]
  __int64 v52; // [rsp+110h] [rbp+8h]
  _QWORD *v53; // [rsp+118h] [rbp+10h]
  __int64 v54; // [rsp+120h] [rbp+18h]
  _QWORD *v55; // [rsp+128h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+28h]
  _QWORD *v57; // [rsp+138h] [rbp+30h]
  __int64 v58; // [rsp+140h] [rbp+38h]
  _QWORD *v59; // [rsp+148h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+48h]
  int *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  _QWORD v63[14]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v64[14]; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v65[14]; // [rsp+248h] [rbp+140h] BYREF
  _QWORD v66[14]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v67; // [rsp+328h] [rbp+220h]
  int v68; // [rsp+330h] [rbp+228h]
  __int16 v69; // [rsp+334h] [rbp+22Ch]
  __int64 v70; // [rsp+338h] [rbp+230h] BYREF
  int v71; // [rsp+340h] [rbp+238h]
  __int16 v72; // [rsp+344h] [rbp+23Ch]
  __int64 v73; // [rsp+348h] [rbp+240h] BYREF
  int v74; // [rsp+350h] [rbp+248h]
  __int16 v75; // [rsp+354h] [rbp+24Ch]

  v1 = (const EVENT_DESCRIPTOR *)PPM_ETW_MULTI_CORE_HETERO_SET_RUNDOWN;
  v2 = 0;
  v32 = a1;
  v30 = 0;
  v27 = 0;
  v3 = *(_DWORD *)(PpmHeteroCapability + 4);
  v4 = &PPM_ETW_MULTI_CORE_HETERO_SET_UPDATE;
  if ( a1 )
    v1 = &PPM_ETW_MULTI_CORE_HETERO_SET_UPDATE;
  v26 = 0;
  v37 = 0LL;
  v31 = 0;
  v28 = 0;
  v33 = v3;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, v1);
    if ( (_BYTE)v4 )
    {
      v29 = 0;
      if ( KeNumberNodes )
      {
        v5 = 0;
        do
        {
          v6 = KiDynamicHeteroCpuPolicy;
          v7 = 0;
          v8 = 0LL;
          v9 = KeNodeBlock[v5];
          v67 = 0LL;
          v68 = 0;
          v69 = 0;
          v70 = 0LL;
          v71 = 0;
          v72 = 0;
          v73 = 0LL;
          v74 = 0;
          v75 = 0;
          do
          {
            v10 = (unsigned int)(2 * v7);
            v11 = 2LL;
            do
            {
              v12 = *(_BYTE *)v6++;
              *((_BYTE *)&v67 + v10) = v12;
              *((_BYTE *)&v70 + v10) = KiMultiCoreHeteroLowerArchThreshold[v8];
              v13 = KiMultiCoreHeteroUpperArchThreshold[v8++];
              *((_BYTE *)&v73 + v10) = v13;
              v10 = (unsigned int)(v10 + 1);
              --v11;
            }
            while ( v11 );
            ++v7;
          }
          while ( v7 < 7 );
          v36 = v9;
          v37 = 0LL;
          RtlCopyVolatileMemory(&v37, (const void *)(v9 + 16), 0x10uLL);
          while ( !KeIsEmptyGroupMask((__int64)&v37) )
          {
            FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v37);
            _bittestandreset64((signed __int64 *)&v37, FirstSetRightGroupMask);
            v15 = *(_QWORD *)(v36 + 8LL * FirstSetRightGroupMask + 32);
            v28 = 0;
            if ( v3 )
            {
              v16 = 0;
              do
              {
                v35 = 0LL;
                v34 = 0LL;
                memset_0(v65, 0, sizeof(v65));
                memset_0(v63, 0, sizeof(v63));
                memset_0(v64, 0, sizeof(v64));
                memset_0(v66, 0, sizeof(v66));
                v17 = 0;
                KiQueryRestrictionAffinity(v15, v16, v66);
                for ( i = 0; i < 7; ++i )
                {
                  do
                  {
                    KiQueryHeteroSetFromSubNode(v15, i, v2++, v16, (__int64)&v34);
                    v19 = v17++;
                    v65[v19] = v35;
                    v63[v19] = v34;
                    v64[v19] = *((_QWORD *)&v34 + 1);
                  }
                  while ( v2 < 2 );
                  v2 = 0;
                }
                v20 = v32;
                v21 = 0;
                v22 = 0;
                v26 = 0;
                do
                {
                  v27 = 0;
                  for ( j = 0; j < 2; v27 = j )
                  {
                    v24 = (unsigned int)(j + 2 * v21);
                    *(_QWORD *)&UserData.Size = 4LL;
                    v30 = *((unsigned __int8 *)&v67 + v24);
                    v39 = v15 + 136;
                    UserData.Ptr = (ULONGLONG)&v29;
                    v41 = (int *)&v28;
                    v43 = &v26;
                    v45 = &v27;
                    v47 = &v30;
                    v40 = 2LL;
                    v49 = (char *)&v70 + (unsigned int)v24;
                    v42 = 4LL;
                    v51 = (char *)&v73 + (unsigned int)v24;
                    v44 = 1LL;
                    v46 = 1LL;
                    v48 = 1LL;
                    v50 = 1LL;
                    v53 = &v63[v22];
                    v52 = 1LL;
                    v55 = &v64[v22];
                    v54 = 8LL;
                    v57 = &v65[v22];
                    v56 = 8LL;
                    v59 = &v66[v22];
                    v61 = &v31;
                    v58 = 8LL;
                    v60 = 8LL;
                    v31 = v20;
                    v62 = 4LL;
                    EtwWriteEx(PpmEtwHandle, v1, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
                    ++v22;
                    v21 = v26;
                    j = v27 + 1;
                  }
                  v21 = v26 + 1;
                  v26 = v21;
                }
                while ( v21 < 7 );
                v3 = v33;
                v16 = v28 + 1;
                v28 = v16;
              }
              while ( v16 < v33 );
            }
          }
          LOBYTE(v4) = KeNumberNodes;
          v5 = v29 + 1;
          v29 = v5;
        }
        while ( v5 < (unsigned __int16)KeNumberNodes );
      }
    }
  }
  return (char)v4;
}
