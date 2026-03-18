/*
 * XREFs of MiShowBadMapper @ 0x1403BAD60
 * Callers:
 *     MiFillSystemPtes @ 0x14032AD60 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x140338440 (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     MiDecommitFreePagesTail @ 0x1404EDBB0 (MiDecommitFreePagesTail.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14025D3B0 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14025D41C (MmLockLoadedModuleListShared.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     RtlCaptureStackBackTrace @ 0x140347BC0 (RtlCaptureStackBackTrace.c)
 *     MiImageContainsVa @ 0x14036D08C (MiImageContainsVa.c)
 *     MiLogBadMapper @ 0x1403BB168 (MiLogBadMapper.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     wcslen @ 0x1404FD750 (wcslen.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiShowBadMapper(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  unsigned int v3; // r14d
  unsigned __int16 v4; // bp
  ULONG_PTR v5; // rbx
  char v6; // di
  unsigned int v7; // r15d
  BOOL v8; // r13d
  char *v9; // r12
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 *v12; // r8
  __int64 *v13; // r9
  _QWORD *v14; // rax
  __int64 i; // rbx
  int v16; // eax
  size_t v17; // rax
  unsigned int v18; // esi
  char *v19; // r14
  unsigned int v20; // eax
  unsigned int v21; // esi
  char *v22; // r14
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned __int8 v25; // [rsp+30h] [rbp-108h]
  PVOID P[2]; // [rsp+38h] [rbp-100h] BYREF
  unsigned int v27; // [rsp+48h] [rbp-F0h]
  int v28; // [rsp+4Ch] [rbp-ECh]
  ULONG BackTraceHash; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+58h] [rbp-E0h]
  ULONG_PTR v31; // [rsp+60h] [rbp-D8h]
  PVOID BackTrace[16]; // [rsp+70h] [rbp-C8h] BYREF

  v3 = BugCheckParameter3;
  v4 = 128;
  v5 = BugCheckParameter2;
  v6 = a3;
  v28 = a3;
  v27 = BugCheckParameter3;
  v7 = 0;
  v31 = BugCheckParameter2;
  BackTraceHash = 0;
  v30 = 128LL;
  memset_0(BackTrace, 0, sizeof(BackTrace));
  v8 = dword_140FC424C != 0;
  *(_OWORD *)P = 0LL;
  if ( (v6 & 1) == 0 || KdPitchDebugger || (_BYTE)KdDebuggerNotPresent )
  {
    if ( !dword_140FC424C )
    {
      RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, &BackTraceHash);
      WORD1(P[0]) = 128;
      P[1] = (PVOID)MiAllocatePool(0x40uLL, 0x80uLL, 538996045);
      v9 = (char *)P[1];
      if ( !P[1] )
      {
        v4 = 0;
        WORD1(P[0]) = 0;
        v30 = 0LL;
      }
      v10 = 0LL;
      v25 = MmLockLoadedModuleListShared();
      while ( v7 < 0x10 )
      {
        v13 = (__int64 *)BackTrace[v7];
        if ( (unsigned __int64)v13 <= 0x7FFFFFFEFFFFLL )
          break;
        if ( PsLoadedModuleList )
        {
          v14 = (_QWORD *)qword_140E2D640;
          if ( qword_140E2D640 )
          {
            do
            {
              v12 = (__int64 *)*(v14 - 20);
              v11 = (unsigned __int64)v12 + (unsigned int)(*((_DWORD *)v14 - 36) - 1);
              if ( (unsigned __int64)v13 > v11 )
              {
                v14 = (_QWORD *)v14[1];
              }
              else
              {
                if ( v13 >= v12 )
                  break;
                v14 = (_QWORD *)*v14;
              }
            }
            while ( v14 );
            if ( v14 )
            {
              i = (__int64)(v14 - 26);
LABEL_18:
              if ( i )
              {
                if ( (v6 & 2) != 0 && (*(_DWORD *)(i + 104) & 0x2000000) != 0 && (VfRuleClasses & 0x400000) == 0 )
                {
                  v8 = 1;
                  MmUnlockLoadedModuleListShared(v25, v11, (__int64)v12);
                  v5 = v31;
                  v3 = v27;
                  goto LABEL_40;
                }
                if ( v9 && (!v10 || v10 != i) )
                {
                  v11 = LOWORD(P[0]);
                  v16 = *(unsigned __int16 *)(i + 88) + 2;
                  if ( !v10 )
                    v16 = *(unsigned __int16 *)(i + 88);
                  if ( (unsigned int)LOWORD(P[0]) + v16 > v4 )
                  {
                    v6 = v28;
                    v4 = (unsigned __int16)P[0];
                    v30 = LOWORD(P[0]);
                    WORD1(P[0]) = P[0];
                  }
                  else
                  {
                    if ( v10 )
                    {
                      v17 = wcslen(L" ");
                      if ( v17 > 0x7FFE || (v18 = (unsigned __int16)(2 * v17), LOWORD(P[0]) + v18 > v4) )
                      {
                        v11 = LOWORD(P[0]);
                      }
                      else
                      {
                        v19 = &v9[2 * ((unsigned __int64)LOWORD(P[0]) >> 1)];
                        memmove(v19, L" ", (unsigned __int16)(2 * v17));
                        v11 = LOWORD(P[0]);
                        LOWORD(v11) = v18 + LOWORD(P[0]);
                        v20 = (unsigned __int16)(v18 + LOWORD(P[0])) + 1;
                        LOWORD(P[0]) += v18;
                        if ( v20 < v4 )
                          *(_WORD *)&v19[2 * ((unsigned __int64)v18 >> 1)] = 0;
                      }
                    }
                    v21 = *(unsigned __int16 *)(i + 88);
                    if ( (_WORD)v21 && v21 + (unsigned __int16)v11 <= v4 )
                    {
                      v22 = &v9[2 * ((unsigned __int64)(unsigned __int16)v11 >> 1)];
                      memmove(v22, *(const void **)(i + 96), *(unsigned __int16 *)(i + 88));
                      v11 = LOWORD(P[0]);
                      LOWORD(v11) = v21 + LOWORD(P[0]);
                      v23 = (unsigned __int16)(v21 + LOWORD(P[0])) + 1;
                      LOWORD(P[0]) += v21;
                      if ( v23 < v4 )
                        *(_WORD *)&v22[2 * ((unsigned __int64)v21 >> 1)] = 0;
                    }
                    v4 = v30;
                    v10 = i;
                    v6 = v28;
                  }
                }
              }
            }
          }
        }
        else
        {
          v24 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
          v12 = (__int64 *)(v24 + 16);
          for ( i = *v12; (__int64 *)i != v12; i = *(_QWORD *)i )
          {
            if ( MiImageContainsVa(i, (unsigned __int64)v13) )
              goto LABEL_18;
          }
        }
        ++v7;
      }
      MmUnlockLoadedModuleListShared(v25, v11, (__int64)v12);
      v5 = v31;
      v3 = v27;
      if ( *(_QWORD *)&qword_140E372D8 )
      {
        _InterlockedIncrement(&dword_140E2FF7C);
        MiLogBadMapper(v31, v27, P);
      }
      else
      {
        _InterlockedIncrement(&dword_140E2FF78);
      }
    }
  }
  else
  {
    v8 = 1;
  }
  v9 = (char *)P[1];
LABEL_40:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v8 )
    KeBugCheckEx(0x1Au, 0x1233uLL, v5, v3, 0LL);
}
