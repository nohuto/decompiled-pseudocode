/*
 * XREFs of ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18003A4F0
 * Callers:
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180060420 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x180190C60 (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::UnregisterExpression(CExpressionManager *this, struct CBaseExpression *a2)
{
  CTargetMapEntry *v4; // rax
  void *v5; // rbp
  CTargetMapEntry *v6; // rsi
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // r9d
  struct CBaseExpression **v11; // rdx
  unsigned int v12; // edx
  __int64 v13; // rax
  struct CBaseExpression **v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  void *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r9d
  struct CBaseExpression **v23; // rdx
  __int128 v24; // [rsp+20h] [rbp-48h]
  __int128 Buffer; // [rsp+30h] [rbp-38h] BYREF
  void *v26; // [rsp+40h] [rbp-28h]

  *(_QWORD *)&v24 = *((_QWORD *)a2 + 24);
  DWORD2(v24) = *((_DWORD *)a2 + 47);
  v26 = 0LL;
  Buffer = v24;
  v4 = (CTargetMapEntry *)RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 320), &Buffer);
  v5 = v26;
  v6 = v4;
  while ( v5 )
  {
    v18 = v5;
    v5 = (void *)*((_QWORD *)v5 + 2);
    operator delete(v18, 0x18uLL);
  }
  if ( v6 )
  {
    v15 = *((_QWORD *)v6 + 2);
    v16 = v15;
    while ( v15 )
    {
      v17 = *(_QWORD *)(v15 + 16);
      if ( *(struct CBaseExpression **)(v15 + 8) == a2 )
      {
        if ( v15 == *((_QWORD *)v6 + 2) )
          *((_QWORD *)v6 + 2) = v17;
        else
          *(_QWORD *)(v16 + 16) = v17;
        operator delete((void *)v15, 0x18uLL);
        break;
      }
      v16 = v15;
      v15 = *(_QWORD *)(v15 + 16);
    }
    if ( !*((_QWORD *)v6 + 2) )
    {
      CTargetMapEntry::~CTargetMapEntry(v6);
      if ( !RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 320), v6) )
        RaiseFailFastException(0LL, 0LL, 1u);
    }
  }
  else
  {
    *((_BYTE *)a2 + 224) &= ~2u;
  }
  v7 = *((int *)this + 39);
  v8 = 0;
  v9 = 32 * (v7 + 5);
  v10 = *(_DWORD *)((char *)this + v9 + 24);
  v11 = *(struct CBaseExpression ***)((char *)this + v9);
  if ( v10 )
  {
    do
    {
      if ( a2 == *v11 )
        break;
      ++v8;
      ++v11;
    }
    while ( v8 < v10 );
  }
  if ( v8 >= *((_DWORD *)this + 8 * v7 + 46) )
  {
    v12 = *((_DWORD *)this + 78);
    v13 = 0LL;
    if ( v12 )
    {
      v14 = (struct CBaseExpression **)*((_QWORD *)this + 36);
      do
      {
        if ( a2 == *v14 )
          break;
        v13 = (unsigned int)(v13 + 1);
        ++v14;
      }
      while ( (unsigned int)v13 < v12 );
    }
    if ( (unsigned int)v13 < v12 )
      *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v13) = 0LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)((char *)this + v9) + 8LL * v8) = 0LL;
  }
  if ( (*((_BYTE *)this + 440) & 1) != 0 )
  {
    v19 = 0;
    v20 = 1 - *((_DWORD *)this + 39);
    v21 = 32 * (v20 + 5);
    v22 = *(_DWORD *)((char *)this + v21 + 24);
    v23 = *(struct CBaseExpression ***)((char *)this + v21);
    if ( v22 )
    {
      do
      {
        if ( a2 == *v23 )
          break;
        ++v19;
        ++v23;
      }
      while ( v19 < v22 );
    }
    if ( v19 < *((_DWORD *)this + 8 * v20 + 46) )
      *(_QWORD *)(*(_QWORD *)((char *)this + v21) + 8LL * v19) = 0LL;
  }
}
