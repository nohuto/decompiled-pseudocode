/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x1409DD060
 * Callers:
 *     NtTraceControl @ 0x140A82250 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpGetMetaProviderContext @ 0x140423450 (EtwpGetMetaProviderContext.c)
 *     EtwpMapMetaProviderKeywords @ 0x14045F46C (EtwpMapMetaProviderKeywords.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140929090 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4)
{
  size_t v4; // r12
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 v10; // r14
  unsigned int i; // edx
  __int64 v12; // rdi
  GUID *v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned __int8 *v16; // rcx
  unsigned int v17; // esi
  __int64 *MetaProviderContext; // rdi
  __int64 v19; // r9
  _QWORD *GuidEntryByGuid; // rbp
  struct _KTHREAD *v21; // rax
  char *v22; // rax
  char *v23; // rsi
  __int64 *v24; // rsi
  __int64 *v25; // rdx
  char v26; // di
  unsigned int v27; // eax
  _DWORD *v28; // r9
  unsigned int v29; // r12d
  char *v30; // r11
  int v31; // r14d
  __int64 *v32; // r13
  unsigned int k; // r8d
  __int64 v34; // r10
  __int64 v35; // rax
  _OWORD *v36; // r10
  unsigned int v37; // eax
  signed __int64 v38; // rax
  signed __int64 v39; // rdx
  __int64 v40; // rtt
  int v41; // r14d
  unsigned int v42; // r12d
  int v43; // ecx
  signed __int64 v44; // rax
  signed __int64 v45; // rdx
  __int64 v46; // rtt
  unsigned int v47; // edx
  _DWORD *v48; // r8
  unsigned int v49; // r10d
  _OWORD *v50; // r9
  int v51; // r11d
  unsigned int j; // ecx
  __int64 v53; // rax
  unsigned int v55; // eax
  char *v56; // rcx
  char *v57; // rdx
  _DWORD *v58; // r13
  unsigned __int8 *v59; // r14
  int v60; // r12d
  unsigned int v61; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v63; // r15
  __int64 v64; // r8
  int v65; // eax
  unsigned int v66; // eax
  int v67; // eax
  unsigned int v68; // eax
  int v69; // [rsp+20h] [rbp-48h]
  int v70; // [rsp+24h] [rbp-44h]
  _QWORD v71[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v72; // [rsp+70h] [rbp+8h]

  v4 = *a4;
  v72 = *a4;
  v69 = 0;
  v8 = 0;
  v70 = 0;
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
          goto LABEL_42;
        a3[3] = 1;
        a3[6] = 1;
        *((_WORD *)a3 + 15) = *v16;
        *((_QWORD *)a3 + 5) = v16[1];
      }
      else
      {
        if ( (unsigned int)v4 < 0x18 )
          goto LABEL_42;
        a3[3] = 0;
      }
      *a3 = 1;
      v17 = 0;
      a3[5] = 1;
      a3[4] = 0;
      a3[2] = 0;
      goto LABEL_59;
    }
  }
  MetaProviderContext = (__int64 *)EtwpGetMetaProviderContext(a2);
  if ( MetaProviderContext )
  {
    v71[0] = v19;
    v58 = a3 + 6;
    v15 = 24;
    v59 = (unsigned __int8 *)(a1 + 4504);
    v60 = v19;
    v61 = v19;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v63 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(a1, *v59, 1u);
      if ( v63 )
      {
        EtwpMapMetaProviderKeywords(MetaProviderContext, a1 + 32LL * v61 + 4556, v71);
        v64 = v71[0];
        if ( v71[0] )
        {
          ++v60;
          v15 += 32;
          if ( v15 <= v72 )
          {
            *v58 = 1;
            *((_QWORD *)v58 + 2) = v64;
            *((_WORD *)v58 + 3) = *v59;
            v58 += 8;
          }
        }
        KeReleaseMutex((PRKMUTEX)(v63 + 158), 0);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v63 + 170) + 704LL) + 8LL * *v63),
          1u);
      }
      KeLeaveCriticalRegionThread();
      ++v61;
      v59 += 2;
    }
    while ( v61 < 8 );
    a3[2] = 0;
    a3[3] = v60;
    if ( v15 > v72 )
      goto LABEL_42;
    *a3 = 1;
    v17 = 0;
LABEL_59:
    *a4 = v15;
    return v17;
  }
  else
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 0);
    if ( GuidEntryByGuid )
    {
      memset_0(a3, 0, *a4);
      v21 = KeGetCurrentThread();
      --v21->KernelApcDisable;
      v22 = (char *)KeAbPreAcquire((__int64)(GuidEntryByGuid + 83), 0LL);
      v23 = v22;
      if ( _interlockedbittestandset64((volatile signed __int32 *)GuidEntryByGuid + 166, 0LL) )
        ExfAcquirePushLockExclusiveEx(GuidEntryByGuid + 83, v22, (__int64)(GuidEntryByGuid + 83));
      if ( v23 )
        v23[10] = 1;
      v24 = GuidEntryByGuid + 7;
      v25 = (__int64 *)GuidEntryByGuid[7];
      GuidEntryByGuid[84] = KeGetCurrentThread();
      while ( 1 )
      {
        if ( v25 == v24 )
        {
LABEL_48:
          GuidEntryByGuid[84] = 0LL;
          _m_prefetchw(GuidEntryByGuid + 83);
          v44 = GuidEntryByGuid[83];
          v45 = v44 - 16;
          if ( (v44 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v45 = 0LL;
          if ( (v44 & 2) != 0
            || (v46 = GuidEntryByGuid[83], v46 != _InterlockedCompareExchange64(GuidEntryByGuid + 83, v45, v44)) )
          {
            ExfReleasePushLock(GuidEntryByGuid + 83);
          }
          KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 83));
          KeLeaveCriticalRegionThread();
          v47 = v9 + 16;
          v41 = v70 + 2;
          v48 = (_DWORD *)((char *)a3 + v9);
          if ( v9 + 16 < v9 )
            goto LABEL_58;
          v49 = v9 + 48;
          v50 = (_OWORD *)((char *)a3 + v47);
          v17 = 0;
          v51 = 0;
          for ( j = 0; j < 0x10; ++j )
          {
            v53 = 4 * (j + 4LL);
            if ( LODWORD(GuidEntryByGuid[v53]) )
            {
              ++v51;
              if ( v49 < v47 )
                goto LABEL_58;
              v47 += 32;
              v49 += 32;
              if ( v47 <= v72 )
              {
                *v50 = *(_OWORD *)&GuidEntryByGuid[v53];
                v50[1] = *(_OWORD *)&GuidEntryByGuid[v53 + 2];
                v50 += 2;
              }
            }
          }
          v42 = v72;
          if ( v47 <= v72 )
          {
            v48[2] = 0;
            v48[1] = v51;
            *v48 = v47 - v9;
            v48[3] = 2;
          }
          v55 = v47 + 16;
          v56 = (char *)a3 + v47;
          if ( v47 + 16 < v47 || (v15 = v47 + 48, v57 = (char *)a3 + v55, v55 + 32 < v55) )
          {
LABEL_58:
            v17 = -2147483643;
            v15 = -1;
            EtwpUnreferenceGuidEntry(GuidEntryByGuid);
            goto LABEL_59;
          }
          if ( v15 <= v72 )
          {
            *(_QWORD *)(v56 + 4) = 0LL;
            *(_DWORD *)v56 = 0;
            *((_DWORD *)v56 + 3) = 3;
            *(_DWORD *)v57 = *((_BYTE *)GuidEntryByGuid + 91) & 1;
            if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
            {
              *((_DWORD *)v56 + 1) = 1;
              v57[4] = *((_BYTE *)GuidEntryByGuid + 90);
              *((_QWORD *)v57 + 2) = GuidEntryByGuid[10];
              *((_WORD *)v57 + 3) = *((_WORD *)GuidEntryByGuid + 44);
              EtwpUnreferenceGuidEntry(GuidEntryByGuid);
LABEL_71:
              *a3 = v41;
              goto LABEL_59;
            }
          }
LABEL_40:
          EtwpUnreferenceGuidEntry(GuidEntryByGuid);
          v17 = v69;
          if ( v69 < 0 )
            goto LABEL_59;
          if ( v15 <= v42 )
            goto LABEL_71;
LABEL_42:
          v17 = -1073741789;
          goto LABEL_59;
        }
        v27 = v9 + 16;
        v28 = (_DWORD *)((char *)a3 + v9);
        v26 = 0;
        v29 = v9;
        if ( v9 + 16 < v9 )
          goto LABEL_35;
        v30 = (char *)a3 + v27;
        v70 = v8 + 1;
        v31 = 0;
        v9 += 16;
        v32 = v25;
        if ( (*((_BYTE *)v25 + 98) & 8) != 0 )
        {
          v26 = 1;
          if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
          {
            v37 = v27 + 32;
            v31 = 1;
            if ( v37 < v9 )
            {
LABEL_35:
              v69 = -2147483643;
              GuidEntryByGuid[84] = 0LL;
              v15 = -1;
              _m_prefetchw(GuidEntryByGuid + 83);
              v38 = GuidEntryByGuid[83];
              v39 = v38 - 16;
              if ( (v38 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v39 = 0LL;
              if ( (v38 & 2) != 0
                || (v40 = GuidEntryByGuid[83], v40 != _InterlockedCompareExchange64(GuidEntryByGuid + 83, v39, v38)) )
              {
                ExfReleasePushLock(GuidEntryByGuid + 83);
              }
              KeAbPostRelease((ULONG_PTR)(GuidEntryByGuid + 83));
              KeLeaveCriticalRegionThread();
              v41 = v70;
              v42 = v72;
              goto LABEL_40;
            }
            v9 = v37;
            if ( v37 <= v72 )
            {
              *(_DWORD *)v30 = 1;
              v30[4] = *((_BYTE *)GuidEntryByGuid + 90);
              *((_QWORD *)v30 + 2) = GuidEntryByGuid[10];
              *((_WORD *)v30 + 3) = *((_WORD *)GuidEntryByGuid + 44);
              v25 = (__int64 *)*v25;
LABEL_44:
              v28[3] = 1;
              goto LABEL_45;
            }
          }
        }
        else if ( *((_WORD *)v25 + 50) || *((_WORD *)v25 + 51) )
        {
          for ( k = 0; k < 0x10; ++k )
          {
            v34 = 4 * (k + 4LL);
            if ( LODWORD(GuidEntryByGuid[v34]) )
            {
              v67 = *((unsigned __int16 *)v25 + 50);
              if ( _bittest(&v67, (unsigned __int8)k) )
              {
                ++v31;
                v68 = v9 + 32;
                if ( v9 + 32 < v9 )
                  goto LABEL_35;
                v9 += 32;
                if ( v68 <= v72 )
                {
                  *(_OWORD *)v30 = *(_OWORD *)&GuidEntryByGuid[v34];
                  *((_OWORD *)v30 + 1) = *(_OWORD *)&GuidEntryByGuid[v34 + 2];
                  v30 += 32;
                }
              }
            }
            v35 = v25[5];
            if ( v35 )
            {
              v36 = (_OWORD *)(v35 + v34 * 8);
              if ( *(_DWORD *)v36 )
              {
                v65 = *((unsigned __int16 *)v25 + 51);
                if ( _bittest(&v65, (unsigned __int8)k) )
                {
                  ++v31;
                  v66 = v9 + 32;
                  if ( v9 + 32 < v9 )
                    goto LABEL_35;
                  v9 += 32;
                  if ( v66 <= v72 )
                  {
                    *(_OWORD *)v30 = *v36;
                    *((_OWORD *)v30 + 1) = v36[1];
                    v30 += 32;
                  }
                }
              }
            }
          }
        }
        v25 = (__int64 *)*v25;
        if ( v9 > v72 )
          goto LABEL_22;
        if ( v26 )
          goto LABEL_44;
LABEL_45:
        if ( (*((_BYTE *)v32 + 98) & 2) != 0 )
          v43 = *(_DWORD *)(v32[10] + 464);
        else
          v43 = 0;
        v28[2] = v43;
        v28[1] = v31;
        *v28 = v9 - v29;
        if ( v25 == v24 )
          goto LABEL_48;
LABEL_22:
        v8 = v70;
      }
    }
    return 3221226133LL;
  }
}
