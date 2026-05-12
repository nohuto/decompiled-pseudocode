/*
 * XREFs of NvmeControllerDetectCommandTimeout @ 0x140136F70
 * Callers:
 *     NvmeControllerCommandTimeoutDetectThread @ 0x140136CA0 (NvmeControllerCommandTimeoutDetectThread.c)
 * Callees:
 *     RaidCaptureLivedumpInternal @ 0x14008B878 (RaidCaptureLivedumpInternal.c)
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     IsNvmeControllerGone @ 0x1400BE914 (IsNvmeControllerGone.c)
 *     IsOutstandingRequestInNvmeControllerQueue @ 0x1400CB764 (IsOutstandingRequestInNvmeControllerQueue.c)
 *     NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400CD54C (NvmeAdapterCompleteAllRequestsForSurpriseRemove.c)
 *     NvmeDbgLogCriticalEvent @ 0x1400F5DA0 (NvmeDbgLogCriticalEvent.c)
 *     NvmeControllerRecordCommandTimeout @ 0x140137698 (NvmeControllerRecordCommandTimeout.c)
 */

__int64 __fastcall NvmeControllerDetectCommandTimeout(__int64 a1)
{
  __int64 v1; // rax
  char v3; // r12
  unsigned int v4; // r14d
  __int64 result; // rax
  signed __int64 UnbiasedInterruptTime; // rdi
  __int64 v7; // r15
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // r13
  bool v11; // zf
  __int64 v12; // r8
  __int64 v13; // rdx
  char v14; // al
  signed __int64 v15; // rbx
  int v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  unsigned int v20; // esi
  unsigned int v21; // r14d
  __int64 v22; // rdx
  char v23; // al
  int v24; // r9d
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // r14
  unsigned int *v29; // rsi
  _DWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // r14
  unsigned int *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rcx
  signed __int32 v37[8]; // [rsp+0h] [rbp-F8h] BYREF
  wchar_t *v38; // [rsp+30h] [rbp-C8h]
  __int64 v39; // [rsp+38h] [rbp-C0h]
  wchar_t *v40; // [rsp+40h] [rbp-B8h]
  __int64 v41; // [rsp+48h] [rbp-B0h]
  wchar_t *v42; // [rsp+50h] [rbp-A8h]
  __int64 v43; // [rsp+58h] [rbp-A0h]
  wchar_t *v44; // [rsp+60h] [rbp-98h]
  __int64 v45; // [rsp+68h] [rbp-90h]
  wchar_t *v46; // [rsp+70h] [rbp-88h]
  __int64 v47; // [rsp+78h] [rbp-80h]
  wchar_t *v48; // [rsp+80h] [rbp-78h]
  __int64 v49; // [rsp+88h] [rbp-70h]
  wchar_t *v50; // [rsp+90h] [rbp-68h]
  __int64 v51; // [rsp+98h] [rbp-60h]
  int v52; // [rsp+A0h] [rbp-58h]
  __int64 v53; // [rsp+A8h] [rbp-50h]
  unsigned int v54; // [rsp+108h] [rbp+10h]
  unsigned int v55; // [rsp+110h] [rbp+18h]
  unsigned int v56; // [rsp+110h] [rbp+18h]
  unsigned int v57; // [rsp+118h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 128);
  v54 = 0;
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 1092);
  v52 = *(_DWORD *)(v1 + 376) & 2;
  v57 = v4;
  if ( FeatureFixTRIMAddSCSIPassthrough )
  {
    if ( IsNvmeControllerGone(a1) )
    {
      NvmeAdapterCompleteAllRequestsForSurpriseRemove(*(_QWORD *)(a1 + 128));
      return 0LL;
    }
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  }
  else
  {
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    if ( *(_BYTE *)(a1 + 1228) )
      return 0LL;
  }
  v7 = *(_QWORD *)(a1 + 712);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 712);
  v9 = *(_DWORD *)(v7 + 124);
  v10 = (*(_DWORD *)(*(_QWORD *)(a1 + 128) + 1092LL) & 1) == 0 ? 0x989680 : 0;
  v11 = (*(_BYTE *)(*(_QWORD *)(v7 + 88) + 136LL) & 2) == 0;
  v53 = v10;
  if ( v11 )
    --v9;
  if ( IsOutstandingRequestInNvmeControllerQueue(a1, v8) )
  {
    v12 = 0LL;
    v55 = 0;
    if ( v9 )
    {
      v13 = 0LL;
      do
      {
        if ( (*(_BYTE *)(v13 + *(_QWORD *)(v7 + 32) + 60) & 1) != 0
          && (*(_BYTE *)(v13 + *(_QWORD *)(v7 + 32) + 60) & 0x10) == 0
          && (*(_BYTE *)(v13 + *(_QWORD *)(v7 + 32) + 60) & 0x40) == 0
          && (*(_BYTE *)(v13 + *(_QWORD *)(v7 + 32) + 61) & 2) == 0 )
        {
          v14 = v3;
          if ( !v3 )
            v14 = 1;
          v3 = v14;
          _InterlockedOr(v37, 0);
          v15 = *(_QWORD *)(v13 + *(_QWORD *)(v7 + 32) + 64);
          if ( v15 < UnbiasedInterruptTime )
          {
            v16 = *(unsigned __int16 *)(v13 + *(_QWORD *)(v7 + 32) + 58);
            v17 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1092LL);
            if ( v16 == v17 )
            {
              v18 = v10;
              v17 = v4;
            }
            else
            {
              v18 = 10000000LL;
              if ( (_WORD)v16 )
                v17 = *(unsigned __int16 *)(v13 + *(_QWORD *)(v7 + 32) + 58);
              if ( (v17 & 1) != 0 )
                v18 = 0LL;
            }
            v19 = 10000000LL * v17;
            if ( v18 + UnbiasedInterruptTime - v15 >= v19 )
            {
              v26 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL);
              ++*v26;
              if ( (*(_BYTE *)(a1 + 1360) & 0x20) != 0 )
              {
                v27 = *(_QWORD *)(v7 + 32);
                v28 = (unsigned __int64)(unsigned int)v12 << 7;
                v29 = *(unsigned int **)(*(_QWORD *)(v7 + 24) + 16LL * *(unsigned __int16 *)(v27 + v28 + 56));
                NvmeDbgLogCriticalEvent(
                  a1,
                  3,
                  v29[1] | ((unsigned __int64)*v29 << 32),
                  v29[11] | ((unsigned __int64)v29[10] << 32),
                  *(_QWORD *)(v27 + v28 + 24),
                  *(unsigned __int8 *)(v27 + v28 + 60));
                NvmeControllerRecordCommandTimeout(a1, v29, 0LL, v28 + *(_QWORD *)(v7 + 32));
                v12 = v55;
              }
LABEL_60:
              if ( (*(_BYTE *)(a1 + 136) & 2) != 0 && (StorLivedumpCodesEnabled & 1) != 0 )
                RaidCaptureLivedumpInternal(1, v7, *(_QWORD *)(v7 + 32) + (v12 << 7));
LABEL_63:
              v34 = *(_QWORD *)(a1 + 1288);
              v51 = 0LL;
              v54 = 3;
              v35 = *(_QWORD *)(v34 + 40);
              v50 = (wchar_t *)&word_140150F48;
              LOBYTE(v49) = v19;
              v48 = L"TimeoutIn100NS";
              LOBYTE(v47) = v18;
              v46 = L"CommandTimeoutBias";
              LOBYTE(v45) = v15;
              v44 = L"CmdTimestamp";
              LOBYTE(v43) = UnbiasedInterruptTime;
              v42 = L"CurrentTimestamp";
              LOBYTE(v41) = 0;
              v40 = L"NamespaceCountToReset";
              LOBYTE(v39) = 0;
              v38 = L"ResetNamespace";
              *(_DWORD *)(v35 + 232) = 0;
              StorEtwNvmeControllerEvent(
                a1,
                1,
                3,
                (__int64)L"Controller command timeout",
                L"ResetController",
                1,
                v38,
                v39,
                v40,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49,
                v50,
                v51);
              return v54;
            }
            v3 = v14;
            v10 = v53;
          }
        }
        v12 = (unsigned int)(v12 + 1);
        v13 += 128LL;
        v55 = v12;
      }
      while ( (unsigned int)v12 < v9 );
    }
  }
  if ( *(_QWORD *)(a1 + 728) )
  {
    v20 = 0;
    if ( *(_WORD *)(a1 + 22) )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(a1 + 728) + 192LL * v20;
        v21 = *(_DWORD *)(v7 + 124);
        if ( (*(_BYTE *)(*(_QWORD *)(v7 + 88) + 136LL) & 2) == 0 )
          --v21;
        if ( IsOutstandingRequestInNvmeControllerQueue(a1, v7) )
        {
          v12 = 0LL;
          v56 = 0;
          if ( v21 )
          {
            v22 = 0LL;
            do
            {
              if ( (*(_BYTE *)(v22 + *(_QWORD *)(v7 + 32) + 60) & 1) != 0
                && (*(_BYTE *)(v22 + *(_QWORD *)(v7 + 32) + 60) & 0x10) == 0
                && (*(_BYTE *)(v22 + *(_QWORD *)(v7 + 32) + 60) & 0x40) == 0
                && (*(_BYTE *)(v22 + *(_QWORD *)(v7 + 32) + 61) & 2) == 0 )
              {
                v23 = v3;
                if ( !v3 )
                  v23 = 1;
                v3 = v23;
                _InterlockedOr(v37, 0);
                v15 = *(_QWORD *)(v22 + *(_QWORD *)(v7 + 32) + 64);
                if ( v15 < UnbiasedInterruptTime )
                {
                  v24 = *(unsigned __int16 *)(v22 + *(_QWORD *)(v7 + 32) + 58);
                  v25 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 1092LL);
                  if ( v24 == v25 )
                  {
                    v25 = v57;
                    v18 = v10;
                  }
                  else
                  {
                    v18 = 10000000LL;
                    if ( (_WORD)v24 )
                      v25 = *(unsigned __int16 *)(v22 + *(_QWORD *)(v7 + 32) + 58);
                    if ( (v25 & 1) != 0 )
                      v18 = 0LL;
                  }
                  v19 = 10000000LL * v25;
                  if ( v18 + UnbiasedInterruptTime - v15 >= v19 )
                  {
                    v30 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 240LL);
                    ++*v30;
                    if ( (*(_BYTE *)(a1 + 1360) & 0x20) != 0 )
                    {
                      v31 = *(_QWORD *)(v7 + 32);
                      v32 = (unsigned __int64)(unsigned int)v12 << 7;
                      v33 = *(unsigned int **)(*(_QWORD *)(v7 + 24) + 16LL * *(unsigned __int16 *)(v31 + v32 + 56));
                      NvmeDbgLogCriticalEvent(
                        a1,
                        4,
                        v33[1] | ((unsigned __int64)*v33 << 32),
                        v33[11] | ((unsigned __int64)v33[10] << 32),
                        *(_QWORD *)(v31 + v32 + 24),
                        ((unsigned __int64)*(unsigned __int8 *)(v31 + v32 + 60) << 16) | *(unsigned __int16 *)(v7 + 136));
                      NvmeControllerRecordCommandTimeout(
                        a1,
                        v33,
                        *(unsigned __int16 *)(v7 + 136),
                        v32 + *(_QWORD *)(v7 + 32));
                      v12 = v56;
                    }
                    if ( v52 || (*(_BYTE *)(a1 + 136) & 2) != 0 )
                      goto LABEL_60;
                    goto LABEL_63;
                  }
                  v3 = v23;
                }
              }
              v10 = v53;
              v12 = (unsigned int)(v12 + 1);
              v22 += 128LL;
              v56 = v12;
            }
            while ( (unsigned int)v12 < v21 );
          }
        }
        if ( ++v20 >= *(unsigned __int16 *)(a1 + 22) )
          break;
        v10 = v53;
      }
    }
  }
  if ( v3 )
    return v54;
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL) + 232LL);
  v36 = *(_QWORD *)(*(_QWORD *)(a1 + 1288) + 40LL);
  if ( *(_DWORD *)(v36 + 232) < *(_DWORD *)(v36 + 196) )
    return v54;
  result = 1LL;
  *(_DWORD *)(v36 + 232) = 0;
  return result;
}
