/*
 * XREFs of KiTraceLogHeteroRundown @ 0x14042BA28
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 *     KiTraceLogControlCallback @ 0x1406F4980 (KiTraceLogControlCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiQueryHeteroSetFromSubNode @ 0x14042C290 (KiQueryHeteroSetFromSubNode.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiTraceLogHeteroRundown(_DWORD *a1)
{
  __int64 v1; // r12
  unsigned __int64 result; // rax
  int v4; // edx
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 v9; // r13
  int i; // esi
  __int64 *v11; // r11
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r11
  char v15; // [rsp+38h] [rbp-D0h] BYREF
  char v16; // [rsp+39h] [rbp-CFh] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  int v20; // [rsp+48h] [rbp-C0h] BYREF
  BOOL v21; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v22; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v24; // [rsp+58h] [rbp-B0h]
  __int64 v25; // [rsp+60h] [rbp-A8h]
  __int64 *v26; // [rsp+68h] [rbp-A0h]
  __int128 v27; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+80h] [rbp-88h] BYREF
  __int128 v29; // [rsp+88h] [rbp-80h] BYREF
  __int64 v30; // [rsp+98h] [rbp-70h]
  _QWORD v31[2]; // [rsp+A0h] [rbp-68h]
  _QWORD v32[5]; // [rsp+B0h] [rbp-58h]
  _QWORD v33[8]; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+118h] [rbp+10h] BYREF
  int *v35; // [rsp+138h] [rbp+30h]
  __int64 v36; // [rsp+140h] [rbp+38h]
  int *v37; // [rsp+148h] [rbp+40h]
  __int64 v38; // [rsp+150h] [rbp+48h]
  int *v39; // [rsp+158h] [rbp+50h]
  __int64 v40; // [rsp+160h] [rbp+58h]
  int *v41; // [rsp+168h] [rbp+60h]
  __int64 v42; // [rsp+170h] [rbp+68h]
  BOOL *v43; // [rsp+178h] [rbp+70h]
  __int64 v44; // [rsp+180h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+188h] [rbp+80h] BYREF
  unsigned int *v46; // [rsp+1A8h] [rbp+A0h]
  __int64 v47; // [rsp+1B0h] [rbp+A8h]
  char v48[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v49[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  char v50[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  unsigned int *v51; // [rsp+1E8h] [rbp+E0h]
  __int64 v52; // [rsp+1F0h] [rbp+E8h]
  char *v53; // [rsp+1F8h] [rbp+F0h]
  __int64 v54; // [rsp+200h] [rbp+F8h]
  char *v55; // [rsp+208h] [rbp+100h]
  __int64 v56; // [rsp+210h] [rbp+108h]
  __int128 *v57; // [rsp+218h] [rbp+110h]
  __int64 v58; // [rsp+220h] [rbp+118h]
  char *v59; // [rsp+228h] [rbp+120h]
  __int64 v60; // [rsp+230h] [rbp+128h]
  __int64 *v61; // [rsp+238h] [rbp+130h]
  __int64 v62; // [rsp+240h] [rbp+138h]

  v1 = 0LL;
  v30 = 0LL;
  result = (unsigned int)KeHeteroSystem;
  v29 = 0LL;
  if ( KeHeteroSystem )
  {
    if ( *a1 > 5u )
    {
      v17 = KeHeteroSystem;
      v35 = &v17;
      v18 = KeHeteroSystemVirtual;
      v37 = &v18;
      v19 = KeHeteroSystemQos;
      v39 = &v19;
      v20 = KiEfficiencyClassSystem;
      v41 = &v20;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v21 = PpmHeteroMultiCoreClassesEnabled != 0;
      v43 = &v21;
      tlgWriteTransfer_EtwWriteTransfer((__int64)a1, (unsigned __int8 *)byte_14004828B, 0LL, 0LL, 7u, &v34);
    }
    v4 = KiHgsPlusConfiguration;
    v5 = 0;
    v32[0] = "KHeteroCpuPolicyAll";
    v32[1] = "KHeteroCpuPolicyLarge";
    v32[2] = "KHeteroCpuPolicyLargeOrIdle";
    v32[3] = "KHeteroCpuPolicySmall";
    v32[4] = "KHeteroCpuPolicySmallOrIdle";
    v31[0] = "KHeteroShortRunning";
    v31[1] = "KHeteroLongRunning";
    v33[0] = "KHeteroCpuQosHigh";
    v33[1] = "KHeteroCpuQosMedium";
    v33[2] = "KHeteroCpuQosLow";
    v33[3] = "KHeteroCpuQosMultimedia";
    v33[4] = "KHeteroCpuQosDeadline";
    v33[5] = "KHeteroCpuQosEco";
    result = (unsigned __int64)"KHeteroCpuQosUtility";
    v33[6] = "KHeteroCpuQosUtility";
    for ( LODWORD(v24) = KiHgsPlusConfiguration; v5 < (unsigned __int16)KiSubNodeCount; ++v5 )
    {
      v6 = *(_QWORD *)(KiSubNodes + 8LL * v5);
      v25 = v6;
      if ( v6 )
      {
        v7 = 0;
        if ( v4 )
        {
          do
          {
            v8 = 0;
            v26 = v33;
            v9 = 0LL;
            do
            {
              for ( i = 0; i < 2; ++i )
              {
                KiQueryHeteroSetFromSubNode(v6, v8, i, v7, (__int64)&v29);
                if ( *a1 > 5u )
                {
                  v12 = *v11;
                  v46 = &v22;
                  v22 = v5;
                  v47 = 4LL;
                  tlgCreate1Sz_char(v48, v12);
                  tlgCreate1Sz_char(v49, v31[v1]);
                  tlgCreate1Sz_char(v50, v32[KiDynamicHeteroCpuPolicy[v1 + v9]]);
                  v23 = v7;
                  v51 = &v23;
                  v15 = *(_BYTE *)(v13 + v14 + 16544048);
                  v52 = 4LL;
                  v53 = &v15;
                  v16 = *(_BYTE *)(v13 + v14 + 16544032);
                  v55 = &v16;
                  v27 = v29;
                  v57 = &v27;
                  v59 = (char *)&v27 + 8;
                  v28 = v30;
                  v61 = &v28;
                  v54 = 1LL;
                  v56 = 1LL;
                  v58 = 8LL;
                  v60 = 8LL;
                  v62 = 8LL;
                  tlgWriteTransfer_EtwWriteTransfer(
                    (__int64)a1,
                    (unsigned __int8 *)byte_1400481A5,
                    0LL,
                    0LL,
                    0xCu,
                    &v45);
                  v11 = v26;
                }
                LODWORD(v6) = v25;
                ++v1;
              }
              ++v8;
              v9 += 2LL;
              v26 = v11 + 1;
              v1 = 0LL;
            }
            while ( v8 < 7 );
            v4 = v24;
            ++v7;
          }
          while ( v7 < (unsigned int)v24 );
        }
      }
      result = (unsigned __int16)KiSubNodeCount;
    }
  }
  return result;
}
