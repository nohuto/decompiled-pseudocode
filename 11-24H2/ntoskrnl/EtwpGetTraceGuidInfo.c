/*
 * XREFs of EtwpGetTraceGuidInfo @ 0x1408356A0
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140259600 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpGetMetaProviderContext @ 0x140430F10 (EtwpGetMetaProviderContext.c)
 *     EtwpMapMetaProviderKeywords @ 0x1404679CC (EtwpMapMetaProviderKeywords.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     EtwpFindGuidEntryByGuid @ 0x14083AEE0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpGetTraceGuidInfo(__int64 a1, _QWORD *a2, _DWORD *a3, unsigned int *a4)
{
  size_t v4; // r12
  int v8; // r13d
  unsigned int v9; // ebx
  __int64 v10; // r14
  unsigned int i; // edx
  __int64 v12; // rdi
  __int64 *v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // ebx
  unsigned __int8 *v16; // rcx
  unsigned int v17; // esi
  __int64 *MetaProviderContext; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR GuidEntryByGuid; // rbp
  struct _KTHREAD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rsi
  ULONG_PTR v25; // rsi
  __int64 *v26; // rdx
  char v27; // di
  unsigned int v28; // eax
  _DWORD *v29; // r9
  unsigned int v30; // r12d
  char *v31; // r11
  int v32; // r14d
  __int64 *v33; // r13
  unsigned int k; // r8d
  __int64 v35; // r10
  __int64 v36; // rax
  _OWORD *v37; // r10
  unsigned int v38; // eax
  signed __int64 v39; // rax
  signed __int64 v40; // rdx
  __int64 v41; // rtt
  int v42; // r14d
  unsigned int v43; // r12d
  int v44; // ecx
  signed __int64 v45; // rax
  signed __int64 v46; // rdx
  __int64 v47; // rtt
  unsigned int v48; // edx
  _DWORD *v49; // r8
  unsigned int v50; // r10d
  _OWORD *v51; // r9
  int v52; // r11d
  unsigned int j; // ecx
  __int64 v54; // rax
  unsigned int v56; // eax
  char *v57; // rcx
  char *v58; // rdx
  _DWORD *v59; // r13
  unsigned __int8 *v60; // r14
  int v61; // r12d
  unsigned int v62; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v64; // r15
  __int64 v65; // r8
  int v66; // eax
  unsigned int v67; // eax
  int v68; // eax
  unsigned int v69; // eax
  int v70; // [rsp+20h] [rbp-48h]
  int v71; // [rsp+24h] [rbp-44h]
  _QWORD v72[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v73; // [rsp+70h] [rbp+8h]

  v4 = *a4;
  v73 = *a4;
  v70 = 0;
  v8 = 0;
  v71 = 0;
  v9 = 8;
  if ( a1 == EtwpHostSiloState )
    v10 = 2147353472LL;
  else
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1288LL) + 550LL;
  for ( i = 0; i < 0xA; ++i )
  {
    v12 = 2LL * i;
    v13 = (__int64 *)(&EtwpUmglProviders)[2 * i];
    v14 = *v13 - *a2;
    if ( *v13 == *a2 )
      v14 = v13[1] - a2[1];
    if ( !v14 )
    {
      memset_0(a3, 0, v4);
      v15 = 24;
      v16 = (unsigned __int8 *)(v10 + 2LL * LOBYTE((&EtwpUmglProviders)[v12 + 1]));
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
    v72[0] = v20;
    v59 = a3 + 6;
    v15 = 24;
    v60 = (unsigned __int8 *)(a1 + 4504);
    v61 = v20;
    v62 = v20;
    do
    {
      CurrentThread = KeGetCurrentThread();
      LOBYTE(v19) = 1;
      --CurrentThread->KernelApcDisable;
      v64 = (unsigned int *)EtwpAcquireLoggerContextByLoggerId(a1, *v60, v19);
      if ( v64 )
      {
        EtwpMapMetaProviderKeywords(MetaProviderContext, a1 + 32LL * v62 + 4556, v72);
        v65 = v72[0];
        if ( v72[0] )
        {
          ++v61;
          v15 += 32;
          if ( v15 <= v73 )
          {
            *v59 = 1;
            *((_QWORD *)v59 + 2) = v65;
            *((_WORD *)v59 + 3) = *v60;
            v59 += 8;
          }
        }
        KeReleaseMutex((PRKMUTEX)(v64 + 158), 0);
        ExReleaseRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)v64 + 170) + 704LL) + 8LL * *v64),
          1u);
      }
      KeLeaveCriticalRegionThread();
      ++v62;
      v60 += 2;
    }
    while ( v62 < 8 );
    a3[2] = 0;
    a3[3] = v61;
    if ( v15 > v73 )
      goto LABEL_42;
    *a3 = 1;
    v17 = 0;
LABEL_59:
    *a4 = v15;
    return v17;
  }
  else
  {
    GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, a2, 0LL);
    if ( GuidEntryByGuid )
    {
      memset_0(a3, 0, *a4);
      v22 = KeGetCurrentThread();
      --v22->KernelApcDisable;
      v23 = KeAbPreAcquire(GuidEntryByGuid + 664, 0LL);
      v24 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(GuidEntryByGuid + 664), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(GuidEntryByGuid + 664), (__int64)v23, GuidEntryByGuid + 664);
      if ( v24 )
        *((_BYTE *)v24 + 10) = 1;
      v25 = GuidEntryByGuid + 56;
      v26 = *(__int64 **)(GuidEntryByGuid + 56);
      *(_QWORD *)(GuidEntryByGuid + 672) = KeGetCurrentThread();
      while ( 1 )
      {
        if ( v26 == (__int64 *)v25 )
        {
LABEL_48:
          *(_QWORD *)(GuidEntryByGuid + 672) = 0LL;
          _m_prefetchw((const void *)(GuidEntryByGuid + 664));
          v45 = *(_QWORD *)(GuidEntryByGuid + 664);
          v46 = v45 - 16;
          if ( (v45 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v46 = 0LL;
          if ( (v45 & 2) != 0
            || (v47 = *(_QWORD *)(GuidEntryByGuid + 664),
                v47 != _InterlockedCompareExchange64((volatile signed __int64 *)(GuidEntryByGuid + 664), v46, v45)) )
          {
            ExfReleasePushLock((_QWORD *)(GuidEntryByGuid + 664));
          }
          KeAbPostRelease(GuidEntryByGuid + 664);
          KeLeaveCriticalRegionThread();
          v48 = v9 + 16;
          v42 = v71 + 2;
          v49 = (_DWORD *)((char *)a3 + v9);
          if ( v9 + 16 < v9 )
            goto LABEL_58;
          v50 = v9 + 48;
          v51 = (_OWORD *)((char *)a3 + v48);
          v17 = 0;
          v52 = 0;
          for ( j = 0; j < 0x10; ++j )
          {
            v54 = 32 * (j + 4LL);
            if ( *(_DWORD *)(v54 + GuidEntryByGuid) )
            {
              ++v52;
              if ( v50 < v48 )
                goto LABEL_58;
              v48 += 32;
              v50 += 32;
              if ( v48 <= v73 )
              {
                *v51 = *(_OWORD *)(v54 + GuidEntryByGuid);
                v51[1] = *(_OWORD *)(v54 + GuidEntryByGuid + 16);
                v51 += 2;
              }
            }
          }
          v43 = v73;
          if ( v48 <= v73 )
          {
            v49[2] = 0;
            v49[1] = v52;
            *v49 = v48 - v9;
            v49[3] = 2;
          }
          v56 = v48 + 16;
          v57 = (char *)a3 + v48;
          if ( v48 + 16 < v48 || (v15 = v48 + 48, v58 = (char *)a3 + v56, v56 + 32 < v56) )
          {
LABEL_58:
            v17 = -2147483643;
            v15 = -1;
            EtwpUnreferenceGuidEntry(GuidEntryByGuid);
            goto LABEL_59;
          }
          if ( v15 <= v73 )
          {
            *(_QWORD *)(v57 + 4) = 0LL;
            *(_DWORD *)v57 = 0;
            *((_DWORD *)v57 + 3) = 3;
            *(_DWORD *)v58 = *(_BYTE *)(GuidEntryByGuid + 91) & 1;
            if ( (*(_BYTE *)(GuidEntryByGuid + 91) & 1) != 0 )
            {
              *((_DWORD *)v57 + 1) = 1;
              v58[4] = *(_BYTE *)(GuidEntryByGuid + 90);
              *((_QWORD *)v58 + 2) = *(_QWORD *)(GuidEntryByGuid + 80);
              *((_WORD *)v58 + 3) = *(_WORD *)(GuidEntryByGuid + 88);
              EtwpUnreferenceGuidEntry(GuidEntryByGuid);
LABEL_71:
              *a3 = v42;
              goto LABEL_59;
            }
          }
LABEL_40:
          EtwpUnreferenceGuidEntry(GuidEntryByGuid);
          v17 = v70;
          if ( v70 < 0 )
            goto LABEL_59;
          if ( v15 <= v43 )
            goto LABEL_71;
LABEL_42:
          v17 = -1073741789;
          goto LABEL_59;
        }
        v28 = v9 + 16;
        v29 = (_DWORD *)((char *)a3 + v9);
        v27 = 0;
        v30 = v9;
        if ( v9 + 16 < v9 )
          goto LABEL_35;
        v31 = (char *)a3 + v28;
        v71 = v8 + 1;
        v32 = 0;
        v9 += 16;
        v33 = v26;
        if ( (*((_BYTE *)v26 + 98) & 8) != 0 )
        {
          v27 = 1;
          if ( (*(_BYTE *)(GuidEntryByGuid + 91) & 1) != 0 )
          {
            v38 = v28 + 32;
            v32 = 1;
            if ( v38 < v9 )
            {
LABEL_35:
              v70 = -2147483643;
              *(_QWORD *)(GuidEntryByGuid + 672) = 0LL;
              v15 = -1;
              _m_prefetchw((const void *)(GuidEntryByGuid + 664));
              v39 = *(_QWORD *)(GuidEntryByGuid + 664);
              v40 = v39 - 16;
              if ( (v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v40 = 0LL;
              if ( (v39 & 2) != 0
                || (v41 = *(_QWORD *)(GuidEntryByGuid + 664),
                    v41 != _InterlockedCompareExchange64((volatile signed __int64 *)(GuidEntryByGuid + 664), v40, v39)) )
              {
                ExfReleasePushLock((_QWORD *)(GuidEntryByGuid + 664));
              }
              KeAbPostRelease(GuidEntryByGuid + 664);
              KeLeaveCriticalRegionThread();
              v42 = v71;
              v43 = v73;
              goto LABEL_40;
            }
            v9 = v38;
            if ( v38 <= v73 )
            {
              *(_DWORD *)v31 = 1;
              v31[4] = *(_BYTE *)(GuidEntryByGuid + 90);
              *((_QWORD *)v31 + 2) = *(_QWORD *)(GuidEntryByGuid + 80);
              *((_WORD *)v31 + 3) = *(_WORD *)(GuidEntryByGuid + 88);
              v26 = (__int64 *)*v26;
LABEL_44:
              v29[3] = 1;
              goto LABEL_45;
            }
          }
        }
        else if ( *((_WORD *)v26 + 50) || *((_WORD *)v26 + 51) )
        {
          for ( k = 0; k < 0x10; ++k )
          {
            v35 = 32 * (k + 4LL);
            if ( *(_DWORD *)(v35 + GuidEntryByGuid) )
            {
              v68 = *((unsigned __int16 *)v26 + 50);
              if ( _bittest(&v68, (unsigned __int8)k) )
              {
                ++v32;
                v69 = v9 + 32;
                if ( v9 + 32 < v9 )
                  goto LABEL_35;
                v9 += 32;
                if ( v69 <= v73 )
                {
                  *(_OWORD *)v31 = *(_OWORD *)(v35 + GuidEntryByGuid);
                  *((_OWORD *)v31 + 1) = *(_OWORD *)(v35 + GuidEntryByGuid + 16);
                  v31 += 32;
                }
              }
            }
            v36 = v26[5];
            if ( v36 )
            {
              v37 = (_OWORD *)(v36 + v35);
              if ( *(_DWORD *)v37 )
              {
                v66 = *((unsigned __int16 *)v26 + 51);
                if ( _bittest(&v66, (unsigned __int8)k) )
                {
                  ++v32;
                  v67 = v9 + 32;
                  if ( v9 + 32 < v9 )
                    goto LABEL_35;
                  v9 += 32;
                  if ( v67 <= v73 )
                  {
                    *(_OWORD *)v31 = *v37;
                    *((_OWORD *)v31 + 1) = v37[1];
                    v31 += 32;
                  }
                }
              }
            }
          }
        }
        v26 = (__int64 *)*v26;
        if ( v9 > v73 )
          goto LABEL_22;
        if ( v27 )
          goto LABEL_44;
LABEL_45:
        if ( (*((_BYTE *)v33 + 98) & 2) != 0 )
          v44 = *(_DWORD *)(v33[10] + 464);
        else
          v44 = 0;
        v29[2] = v44;
        v29[1] = v32;
        *v29 = v9 - v30;
        if ( v26 == (__int64 *)v25 )
          goto LABEL_48;
LABEL_22:
        v8 = v71;
      }
    }
    return 3221226133LL;
  }
}
