/*
 * XREFs of ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x140143938
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x14018C2D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ndisHistogramDeleteAllEntries @ 0x140143C60 (ndisHistogramDeleteAllEntries.c)
 *     ??1ExecutionContextLibrary@@QEAA@XZ @ 0x1401551A8 (--1ExecutionContextLibrary@@QEAA@XZ.c)
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x1401551CC (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall ndisCollectHistogramsForIoctl(int a1, char a2, wchar_t *a3, unsigned int a4, unsigned int *a5)
{
  size_t v6; // rbx
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  _DWORD *v11; // r15
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned int v14; // r13d
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx
  _DWORD *v17; // rax
  unsigned int v18; // ebx
  _QWORD *i; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rbx
  __int64 v23; // rcx
  _DWORD *v24; // rax
  __int64 v25; // rcx
  signed __int32 v26[8]; // [rsp+8h] [rbp-B1h] BYREF
  KLockThisExclusive v27; // [rsp+28h] [rbp-91h] BYREF
  _BYTE v28[96]; // [rsp+48h] [rbp-71h] BYREF
  __int64 (__fastcall *v29)(wchar_t *, _QWORD, unsigned int *); // [rsp+A8h] [rbp-11h]
  void (*v30)(void); // [rsp+B0h] [rbp-9h]
  __int64 v31; // [rsp+E0h] [rbp+27h]

  v6 = a4;
  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221226224LL;
    v31 = 0LL;
    v9 = ExecutionContextLibrary::Initialize((ExecutionContextLibrary *)v28);
    if ( v9 )
    {
      ExecutionContextLibrary::~ExecutionContextLibrary((ExecutionContextLibrary *)v28);
      return v9;
    }
    else
    {
      v10 = v29(a3, (unsigned int)v6, a5);
      if ( !v10 )
      {
        if ( a2 )
          v30();
      }
      ExecutionContextLibrary::~ExecutionContextLibrary((ExecutionContextLibrary *)v28);
      return v10;
    }
  }
  *a5 = 320;
  KLockThisExclusive::KLockThisExclusive(&v27, &stru_140126928);
  v11 = qword_140126FE8;
  if ( !qword_140126FE8 )
  {
    if ( *a5 <= (unsigned int)v6 )
    {
      memset(a3, 0, *a5);
      wcscpy_s(a3 + 32, 0x80uLL, L"DMA allocation times");
LABEL_13:
      KLockHolder::~KLockHolder(&v27);
      return 0LL;
    }
    goto LABEL_20;
  }
  v12 = 2LL * *((unsigned int *)qword_140126FE8 + 8);
  if ( v12 > 0xFFFFFFFF
    || (v13 = (unsigned int)(v12 + 288), (unsigned int)v13 < (unsigned int)v12)
    || (unsigned int)v13 > ((v13 + 295) & 0xFFFFFFFFFFFFFED8uLL)
    || (v14 = (v12 + 583) & 0xFFFFFED8,
        v15 = *((unsigned int *)qword_140126FE8 + 4) * (unsigned __int64)v14,
        v15 > 0xFFFFFFFF) )
  {
LABEL_35:
    KLockHolder::~KLockHolder(&v27);
    return 3221225621LL;
  }
  v16 = *a5 + v15;
  if ( v16 < *a5 )
  {
    *a5 = -1;
    goto LABEL_35;
  }
  *a5 = v16;
  if ( v16 <= (unsigned int)v6 )
  {
    memset(a3, 0, v16);
    *(_DWORD *)a3 = v11[4];
    *((_DWORD *)a3 + 1) = v14;
    *((_QWORD *)a3 + 3) = (unsigned int)v11[9];
    *((_DWORD *)a3 + 3) = v11[8];
    *((_QWORD *)a3 + 2) = (unsigned int)v11[7];
    wcscpy_s(a3 + 32, 0x80uLL, L"DMA allocation times");
    v17 = qword_140126FE8;
    v18 = 0;
    for ( i = *(_QWORD **)qword_140126FE8; i != (_QWORD *)v17 && v18 < v17[4]; i = (_QWORD *)*i )
    {
      v20 = v14 * v18++;
      *(_QWORD *)((char *)a3 + v20 + 320) = *(i - 2) / 0xAuLL;
      *(_DWORD *)((char *)a3 + v20 + 332) = 1;
      *(_DWORD *)((char *)a3 + v20 + 336) = *((_DWORD *)i - 2);
      *(wchar_t *)((char *)a3 + v20 + 340) = *((_WORD *)i - 2);
      v21 = i[2];
      _InterlockedOr(v26, 0);
      memmove((char *)a3 + v20 + 608, (const void *)(v21 + 20), (unsigned int)v12);
      v17 = qword_140126FE8;
    }
    if ( a2 )
    {
      v22 = *(_QWORD **)v17;
      if ( *(_DWORD **)v17 != v17 )
      {
        if ( (_DWORD *)v22[1] != v17 )
          goto LABEL_33;
        v23 = *v22;
        if ( *(_QWORD **)(*v22 + 8LL) != v22 )
          goto LABEL_33;
        *(_QWORD *)v17 = v23;
        *(_QWORD *)(v23 + 8) = v17;
        ndisHistogramDeleteAllEntries();
        memset((void *)(v22[2] + 20LL), 0, 2LL * *(unsigned int *)(v22[2] + 16LL));
        _InterlockedOr(v26, 0);
        *(v22 - 2) = MEMORY[0xFFFFF78000000008];
        v24 = qword_140126FE8;
        v25 = *(_QWORD *)qword_140126FE8;
        if ( *(void **)(*(_QWORD *)qword_140126FE8 + 8LL) != qword_140126FE8 )
LABEL_33:
          __fastfail(3u);
        *v22 = v25;
        v22[1] = v24;
        *(_QWORD *)(v25 + 8) = v22;
        *(_QWORD *)v24 = v22;
        ++v24[4];
      }
    }
    goto LABEL_13;
  }
LABEL_20:
  if ( (_DWORD)v6 )
    memset(a3, 0, v6);
  KLockHolder::~KLockHolder(&v27);
  return 2147483653LL;
}
