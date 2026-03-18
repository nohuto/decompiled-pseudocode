/*
 * XREFs of ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x180186C30
 * Callers:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800159A0 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x180186E20 (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::UnregisterExpressionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6)
{
  CTargetMapEntry *v8; // rax
  void *v9; // rbp
  CTargetMapEntry *v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // r8
  unsigned int v14; // r9d
  _QWORD *v15; // rdx
  unsigned int v16; // edx
  __int64 v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  _QWORD *v20; // r8
  __int64 v21; // rax
  void *v22; // rcx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // r9d
  _QWORD *v27; // rdx
  __int128 v28; // [rsp+20h] [rbp-48h]
  __int128 v29; // [rsp+30h] [rbp-38h] BYREF
  void *v30; // [rsp+40h] [rbp-28h]

  *(_QWORD *)&v28 = a3;
  DWORD2(v28) = a4;
  v30 = 0LL;
  v29 = v28;
  v8 = (CTargetMapEntry *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 320), &v29);
  v9 = v30;
  v10 = v8;
  while ( v9 )
  {
    v22 = v9;
    v9 = (void *)*((_QWORD *)v9 + 2);
    operator delete(v22, 0x18uLL);
  }
  if ( v10 )
  {
    v19 = (_QWORD *)*((_QWORD *)v10 + 2);
    v20 = v19;
    while ( v19 )
    {
      v21 = v19[2];
      if ( v19[1] == a2 )
      {
        if ( v19 == *((_QWORD **)v10 + 2) )
          *((_QWORD *)v10 + 2) = v21;
        else
          v20[2] = v21;
        operator delete(v19, 0x18uLL);
        break;
      }
      v20 = v19;
      v19 = (_QWORD *)v19[2];
    }
    if ( !*((_QWORD *)v10 + 2) )
    {
      CTargetMapEntry::~CTargetMapEntry(v10);
      if ( !RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 320), v10) )
        RaiseFailFastException(0LL, 0LL, 1u);
    }
  }
  else
  {
    *(_BYTE *)(a2 + 224) &= ~2u;
  }
  if ( !a6 )
  {
    v11 = *(int *)(a1 + 156);
    v12 = 0;
    v13 = 32 * (v11 + 5);
    v14 = *(_DWORD *)(v13 + a1 + 24);
    v15 = *(_QWORD **)(v13 + a1);
    if ( v14 )
    {
      do
      {
        if ( a2 == *v15 )
          break;
        ++v12;
        ++v15;
      }
      while ( v12 < v14 );
    }
    if ( v12 >= *(_DWORD *)(32 * v11 + a1 + 184) )
    {
      v16 = *(_DWORD *)(a1 + 312);
      v17 = 0LL;
      if ( v16 )
      {
        v18 = *(_QWORD **)(a1 + 288);
        do
        {
          if ( a2 == *v18 )
            break;
          v17 = (unsigned int)(v17 + 1);
          ++v18;
        }
        while ( (unsigned int)v17 < v16 );
      }
      if ( (unsigned int)v17 < v16 )
        *(_QWORD *)(*(_QWORD *)(a1 + 288) + 8 * v17) = 0LL;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v13 + a1) + 8LL * v12) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 440) & 1) != 0 )
    {
      v23 = 0;
      v24 = 1 - *(_DWORD *)(a1 + 156);
      v25 = 32 * (v24 + 5);
      v26 = *(_DWORD *)(v25 + a1 + 24);
      v27 = *(_QWORD **)(v25 + a1);
      if ( v26 )
      {
        do
        {
          if ( a2 == *v27 )
            break;
          ++v23;
          ++v27;
        }
        while ( v23 < v26 );
      }
      if ( v23 < *(_DWORD *)(32 * v24 + a1 + 184) )
        *(_QWORD *)(*(_QWORD *)(v25 + a1) + 8LL * v23) = 0LL;
    }
  }
}
