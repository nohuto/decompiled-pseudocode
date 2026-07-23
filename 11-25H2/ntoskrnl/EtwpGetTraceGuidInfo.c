/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x140896060
 * Callers:
 *     NtTraceControl @ 0x140895400 (NtTraceControl.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpGetMetaProviderContext @ 0x140434710 (EtwpGetMetaProviderContext.c)
 *     EtwpMapMetaProviderKeywords @ 0x14046927C (EtwpMapMetaProviderKeywords.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1409328B0 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4)
{
  size_t v4; // r13
  unsigned int v8; // ebp
  unsigned int v9; // ebx
  __int64 v10; // r12
  unsigned int i; // edx
  __int64 v12; // rdi
  GUID *v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned __int8 *v16; // rcx
  __int64 *MetaProviderContext; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rax
  __int64 *v21; // rax
  __int64 *v22; // rsi
  unsigned __int64 *v23; // rcx
  unsigned __int64 v24; // r8
  char *v25; // r15
  int v26; // esi
  unsigned int v27; // eax
  _DWORD *v28; // r9
  char v29; // r11
  unsigned int v30; // edi
  unsigned int v31; // edx
  char *v32; // r10
  int v33; // r12d
  unsigned __int64 v34; // r13
  int v35; // ecx
  volatile signed __int64 *v36; // rdi
  signed __int64 v37; // rax
  signed __int64 v38; // rdx
  unsigned int v39; // edx
  _DWORD *v40; // r8
  unsigned __int64 *v41; // r15
  unsigned int v42; // r10d
  int v43; // r11d
  unsigned int v44; // ecx
  _OWORD *v45; // r9
  __int64 v46; // rax
  volatile signed __int64 *v47; // rdi
  unsigned int v48; // ebx
  signed __int64 v49; // rax
  signed __int64 v50; // rdx
  unsigned int v51; // r12d
  __int64 v52; // rsi
  __int64 v53; // rax
  _OWORD *v54; // rsi
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // eax
  unsigned __int64 *v58; // rcx
  unsigned int v60; // eax
  char *v61; // rcx
  char *v62; // rdx
  unsigned __int8 *v63; // r12
  _DWORD *v64; // r14
  unsigned int v65; // ebx
  int v66; // ebp
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v68; // r13
  __int64 v69; // r8
  int v70; // [rsp+20h] [rbp-58h]
  unsigned __int64 *P; // [rsp+28h] [rbp-50h]
  __int64 v72[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v73; // [rsp+80h] [rbp+8h]
  unsigned int v75; // [rsp+90h] [rbp+18h]

  v4 = *a4;
  v73 = *a4;
  v70 = 0;
  v8 = 0;
  v9 = 8;
  if ( a1 == EtwpHostSiloState )
    v10 = 2147353472LL;
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1288LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = 2LL * i;
    v13 = (&EtwpUmglProviders)[2 * i];
    v14 = *(_QWORD *)&v13->Data1 - *a2;
    if ( *(_QWORD *)&v13->Data1 == *a2 )
      v14 = *(_QWORD *)v13->Data4 - a2[1];
    if ( !v14 )
    {
      memset_0(a3, 0, v4);
      v15 = 24;
      v16 = (unsigned __int8 *)(v10 + 2LL * *((unsigned __int8 *)&(&EtwpUmglProviders)[v12] + 8));
      if ( *v16 )
      {
        v15 = 56;
        if ( (unsigned int)v4 < 0x38 )
          goto LABEL_98;
        a3[3] = 1;
        a3[6] = 1;
        *((_WORD *)a3 + 15) = *v16;
        *((_QWORD *)a3 + 5) = v16[1];
LABEL_11:
        *a3 = 1;
        a3[5] = 1;
        a3[4] = 0;
        a3[2] = 0;
      }
      else
      {
        if ( (unsigned int)v4 >= 0x18 )
        {
          a3[3] = 0;
          goto LABEL_11;
        }
LABEL_98:
        v8 = -1073741789;
      }
      *a4 = v15;
      return v8;
    }
  }
  MetaProviderContext = (__int64 *)EtwpGetMetaProviderContext(a2);
  if ( MetaProviderContext )
  {
    v72[0] = v19;
    v63 = (unsigned __int8 *)(a1 + 4232);
    v15 = 24;
    v64 = a3 + 6;
    v65 = v19;
    v66 = v19;
    do
    {
      CurrentThread = KeGetCurrentThread();
      LOBYTE(v18) = 1;
      --CurrentThread->KernelApcDisable;
      v68 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(a1, *v63, v18);
      if ( v68 )
      {
        EtwpMapMetaProviderKeywords(MetaProviderContext, a1 + 32LL * v65 + 4284, v72);
        v69 = v72[0];
        if ( v72[0] )
        {
          ++v66;
          v15 += 32;
          if ( v15 <= v73 )
          {
            *v64 = 1;
            *((_QWORD *)v64 + 2) = v69;
            *((_WORD *)v64 + 3) = *v63;
            v64 += 8;
          }
        }
        KeReleaseMutex((PRKMUTEX)(v68 + 158), 0);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v68 + 170) + 448LL) + 8LL * *v68),
          1u);
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ++v65;
      v63 += 2;
    }
    while ( v65 < 8 );
    a3[3] = v66;
    v8 = 0;
    a3[2] = 0;
    if ( v15 <= v73 )
    {
      *a3 = 1;
      *a4 = v15;
      return v8;
    }
    goto LABEL_98;
  }
  P = (unsigned __int64 *)EtwpFindGuidEntryByGuid(a1, a2, 0LL);
  if ( !P )
    return 3221226133LL;
  memset_0(a3, 0, *a4);
  v20 = KeGetCurrentThread();
  --v20->KernelApcDisable;
  v21 = KeAbPreAcquire((__int64)(P + 51), 0LL);
  v22 = v21;
  if ( _interlockedbittestandset64((volatile signed __int32 *)P + 102, 0LL) )
    ExfAcquirePushLockExclusiveEx(P + 51, v21, (__int64)(P + 51));
  if ( v22 )
    *((_BYTE *)v22 + 10) = 1;
  v23 = P;
  v24 = P[7];
  P[52] = (unsigned __int64)KeGetCurrentThread();
  v25 = (char *)(P + 7);
  while ( 1 )
  {
    v26 = v70;
    if ( (char *)v24 == v25 )
      break;
    v27 = v9 + 16;
    v28 = (_DWORD *)((char *)a3 + v9);
    v75 = v9;
    v29 = 0;
    v30 = 0;
    v31 = v9;
    if ( v9 + 16 < v9 )
      goto LABEL_41;
    v26 = v70 + 1;
    v32 = (char *)a3 + v27;
    v9 += 16;
    v33 = 0;
    ++v70;
    v34 = v24;
    if ( (*(_BYTE *)(v24 + 98) & 8) != 0 )
    {
      v29 = 1;
      if ( (*((_BYTE *)v23 + 91) & 1) != 0 )
      {
        v57 = v27 + 32;
        v33 = 1;
        if ( v57 < v9 )
        {
LABEL_41:
          v23[52] = 0LL;
          v8 = -2147483643;
          v47 = (volatile signed __int64 *)(v23 + 51);
          v48 = -1;
          _m_prefetchw(v23 + 51);
          v49 = v23[51];
          v50 = v49 - 16;
          if ( (v49 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v50 = 0LL;
          if ( (v49 & 2) != 0 || v49 != _InterlockedCompareExchange64(v47, v50, v49) )
            ExfReleasePushLock(v47);
          KeAbPostRelease((ULONG_PTR)v47);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v41 = P;
          v51 = v73;
LABEL_46:
          EtwpUnreferenceGuidEntry(v41);
          if ( (v8 & 0x80000000) == 0 )
          {
            if ( v48 > v51 )
              v8 = -1073741789;
            else
              *a3 = v26;
          }
          goto LABEL_73;
        }
        v9 = v57;
        if ( v57 <= v73 )
        {
          *(_DWORD *)v32 = 1;
          v32[4] = *((_BYTE *)v23 + 90);
          *((_QWORD *)v32 + 2) = v23[10];
          *((_WORD *)v32 + 3) = *((_WORD *)v23 + 44);
          v24 = *(_QWORD *)v24;
LABEL_27:
          v28[3] = 1;
          goto LABEL_28;
        }
      }
    }
    else if ( *(_BYTE *)(v24 + 100) || *(_BYTE *)(v24 + 101) )
    {
      while ( v30 < 8 )
      {
        v52 = 4 * (v30 + 4LL);
        if ( LODWORD(v23[v52]) && ((unsigned __int8)(1 << v30) & *(_BYTE *)(v24 + 100)) != 0 )
        {
          ++v33;
          v56 = v9 + 32;
          if ( v9 + 32 < v9 )
          {
LABEL_40:
            v23 = P;
            v26 = v70;
            goto LABEL_41;
          }
          v9 += 32;
          if ( v56 <= v73 )
          {
            *(_OWORD *)v32 = *(_OWORD *)&P[v52];
            *((_OWORD *)v32 + 1) = *(_OWORD *)&P[v52 + 2];
            v32 += 32;
          }
        }
        v53 = *(_QWORD *)(v24 + 40);
        if ( v53 )
        {
          v54 = (_OWORD *)(v53 + v52 * 8);
          if ( *(_DWORD *)v54 )
          {
            if ( ((unsigned __int8)(1 << v30) & *(_BYTE *)(v24 + 101)) != 0 )
            {
              ++v33;
              v55 = v9 + 32;
              if ( v9 + 32 < v9 )
                goto LABEL_40;
              v9 += 32;
              if ( v55 <= v73 )
              {
                *(_OWORD *)v32 = *v54;
                *((_OWORD *)v32 + 1) = v54[1];
                v32 += 32;
              }
            }
          }
        }
        v23 = P;
        ++v30;
      }
      v31 = v75;
      v26 = v70;
    }
    v24 = *(_QWORD *)v24;
    if ( v9 <= v73 )
    {
      if ( v29 )
        goto LABEL_27;
LABEL_28:
      if ( (*(_BYTE *)(v34 + 98) & 2) != 0 )
        v35 = *(_DWORD *)(*(_QWORD *)(v34 + 80) + 464LL);
      else
        v35 = 0;
      v28[2] = v35;
      v23 = P;
      v28[1] = v33;
      *v28 = v9 - v31;
      if ( (char *)v24 == v25 )
        break;
    }
  }
  v36 = (volatile signed __int64 *)(v23 + 51);
  v23[52] = 0LL;
  _m_prefetchw(v23 + 51);
  v37 = v23[51];
  v38 = v37 - 16;
  if ( (v37 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v38 = 0LL;
  if ( (v37 & 2) != 0 || v37 != _InterlockedCompareExchange64(v36, v38, v37) )
    ExfReleasePushLock(v36);
  KeAbPostRelease((ULONG_PTR)v36);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v39 = v9 + 16;
  v40 = (_DWORD *)((char *)a3 + v9);
  v26 += 2;
  if ( v9 + 16 >= v9 )
  {
    v41 = P;
    v42 = v9 + 48;
    v43 = 0;
    v44 = 0;
    v45 = (_OWORD *)((char *)a3 + v39);
    while ( v44 < 8 )
    {
      v46 = 4 * (v44 + 4LL);
      if ( LODWORD(P[v46]) )
      {
        ++v43;
        if ( v42 < v39 )
          goto LABEL_71;
        v39 += 32;
        v42 += 32;
        if ( v39 <= v73 )
        {
          *v45 = *(_OWORD *)&P[v46];
          v45[1] = *(_OWORD *)&P[v46 + 2];
          v45 += 2;
        }
      }
      ++v44;
    }
    v51 = v73;
    if ( v39 <= v73 )
    {
      v40[2] = 0;
      v40[1] = v43;
      *v40 = v39 - v9;
      v40[3] = 2;
    }
    v60 = v39 + 16;
    v61 = (char *)a3 + v39;
    if ( v39 + 16 < v39 || (v48 = v39 + 48, v62 = (char *)a3 + v60, v60 + 32 < v60) )
    {
LABEL_71:
      v58 = P;
      goto LABEL_72;
    }
    if ( v48 <= v73 )
    {
      *(_QWORD *)(v61 + 4) = 0LL;
      *(_DWORD *)v61 = 0;
      *((_DWORD *)v61 + 3) = 3;
      *(_DWORD *)v62 = *((_BYTE *)P + 91) & 1;
      if ( (*((_BYTE *)P + 91) & 1) != 0 )
      {
        *((_DWORD *)v61 + 1) = 1;
        v62[4] = *((_BYTE *)P + 90);
        *((_QWORD *)v62 + 2) = P[10];
        *((_WORD *)v62 + 3) = *((_WORD *)P + 44);
        EtwpUnreferenceGuidEntry(P);
        *a3 = v26;
        goto LABEL_73;
      }
    }
    goto LABEL_46;
  }
  v58 = P;
LABEL_72:
  v8 = -2147483643;
  v48 = -1;
  EtwpUnreferenceGuidEntry(v58);
LABEL_73:
  *a4 = v48;
  return v8;
}
