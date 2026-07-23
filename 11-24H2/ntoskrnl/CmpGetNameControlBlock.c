/*
 * XREFs of CmpGetNameControlBlock @ 0x140875450
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 */

_DWORD *__fastcall CmpGetNameControlBlock(unsigned __int16 *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  int v4; // r8d
  char v5; // bp
  unsigned __int16 v6; // si
  unsigned int v7; // edi
  WCHAR v8; // dx
  unsigned __int16 v9; // ax
  WCHAR v10; // dx
  unsigned int v11; // r13d
  unsigned __int64 *v12; // rdi
  char *v13; // rax
  char *v14; // r15
  unsigned int v15; // r12d
  __int64 i; // rdi
  _DWORD *v17; // r13
  _DWORD *Pool; // rax
  int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // r15
  _BYTE *v22; // rdi
  WCHAR v23; // ax
  int v24; // eax
  char *v25; // rdx
  signed __int64 *v26; // rbx
  signed __int64 v27; // rax
  signed __int64 v28; // rdx
  signed __int64 v29; // rtt
  WCHAR *v31; // r8
  unsigned __int16 *v32; // r9
  unsigned __int16 v33; // dx
  __int16 k; // r15
  __int16 v35; // ax
  WCHAR v36; // cx
  signed __int64 *v37; // rbx
  signed __int64 v38; // rax
  signed __int64 v39; // rdx
  signed __int64 v40; // rtt
  WCHAR v41; // ax
  __int64 v42; // rdi
  __int64 v43; // r15
  WCHAR v44; // ax
  unsigned int j; // r15d
  unsigned int v46; // eax
  unsigned int v47; // ecx
  WCHAR v48; // ax
  __int16 v49; // [rsp+70h] [rbp+8h]
  WCHAR *v50; // [rsp+78h] [rbp+10h]
  WCHAR *v51; // [rsp+78h] [rbp+10h]
  unsigned __int16 v52; // [rsp+80h] [rbp+18h]
  unsigned __int16 *v53; // [rsp+88h] [rbp+20h]
  unsigned __int16 *v54; // [rsp+88h] [rbp+20h]

  if ( a2 )
    v3 = *a2;
  else
    v3 = CmpHashUnicodeComponent(a1);
  v4 = *a1;
  v5 = 1;
  v6 = (unsigned __int16)v4 >> 1;
  v7 = 0;
  if ( (v4 & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v8 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v7);
      if ( v8 >= 0x61u )
      {
        if ( v8 > 0x7Au )
        {
          v10 = RtlUpcaseUnicodeChar(v8);
          v9 = *a1;
        }
        else
        {
          v9 = v4;
          v10 = v8 - 32;
        }
        if ( v10 > 0xFFu )
        {
          v6 = v9;
          v5 = 0;
        }
      }
      else
      {
        v9 = v4;
      }
      LOWORD(v4) = v9;
      ++v7;
    }
    while ( v7 < v9 >> 1 );
  }
  v11 = 101027 * (v3 ^ (v3 >> 9));
  v12 = (unsigned __int64 *)((char *)CmpNameCacheTable
                           + 16
                           * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)v11 >> 9)) & 0x7FF));
  v13 = (char *)KeAbPreAcquire((__int64)v12, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
    ExfAcquirePushLockExclusiveEx(v12, v13, (__int64)v12);
  if ( v14 )
    v14[10] = 1;
  v15 = ((unsigned __int16)v11 ^ (unsigned __int16)(v11 >> 9)) & 0x7FF;
  for ( i = *((_QWORD *)CmpNameCacheTable + 2 * (((unsigned __int16)v11 ^ (unsigned __int16)(v11 >> 9)) & 0x7FF) + 1);
        i;
        i = *(_QWORD *)(i + 8) )
  {
    v17 = (_DWORD *)(i - 8);
    if ( v3 == *(_DWORD *)i && v6 == *((_WORD *)v17 + 12) )
    {
      v31 = (WCHAR *)*((_QWORD *)a1 + 1);
      v32 = (unsigned __int16 *)v17 + 13;
      v53 = (unsigned __int16 *)v17 + 13;
      v50 = v31;
      if ( (*v17 & 1) == 0 )
      {
        for ( j = 0; j < *((unsigned __int16 *)v17 + 12) >> 1; ++j )
        {
          v46 = *v31;
          if ( v46 < 0x61 )
          {
            v47 = *v31;
          }
          else if ( v46 > 0x7A )
          {
            v48 = RtlUpcaseUnicodeChar(v46);
            v31 = v50;
            v32 = v53;
            v47 = v48;
          }
          else
          {
            v47 = v46 - 32;
          }
          if ( v47 != *v32 )
            goto LABEL_18;
          ++v31;
          ++v32;
          v50 = v31;
          v53 = v32;
        }
LABEL_45:
        if ( (*v17 & 0xFFFFFFFE) == 0xFFFFFFFE )
          v17 = 0LL;
        else
          *v17 = (*v17 + 2) ^ ((unsigned __int8)(*v17 + 2) ^ (unsigned __int8)*v17) & 1;
LABEL_26:
        v26 = (signed __int64 *)((char *)CmpNameCacheTable
                               + 16
                               * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF));
        _m_prefetchw(v26);
        v27 = *v26;
        v28 = *v26 - 16;
        if ( (*v26 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v28 = 0LL;
        if ( (v27 & 2) != 0 || (v29 = *v26, v29 != _InterlockedCompareExchange64(v26, v28, v27)) )
          ExfReleasePushLock(v26);
        KeAbPostRelease((ULONG_PTR)v26);
        return v17;
      }
      v33 = v6;
      for ( k = *a1 >> 1; ; --k )
      {
        v52 = v33;
        if ( !k || !v33 )
          break;
        v35 = *(unsigned __int8 *)v32;
        v32 = (unsigned __int16 *)((char *)v32 + 1);
        v36 = *v31++;
        v51 = v31;
        v49 = v35;
        v54 = v32;
        if ( v36 != v35 )
        {
          if ( v36 >= 0x61u )
          {
            if ( v36 > 0x7Au )
            {
              v41 = RtlUpcaseUnicodeChar(v36);
              v33 = v52;
              v31 = v51;
              v36 = v41;
              v35 = v49;
              v32 = v54;
            }
            else
            {
              v36 -= 32;
            }
          }
          if ( v36 != v35 )
            goto LABEL_18;
        }
        --v33;
      }
      if ( k == v33 )
        goto LABEL_45;
    }
LABEL_18:
    ;
  }
  Pool = (_DWORD *)CmpAllocatePool(0x100uLL, (unsigned int)v6 + 26, 0x624E4D43u);
  v17 = Pool;
  if ( Pool )
  {
    v19 = *Pool;
    if ( v5 )
    {
      *v17 = v19 | 1;
      if ( v6 )
      {
        v20 = v6;
        v21 = 0LL;
        v22 = (char *)v17 + 26;
        do
        {
          v23 = *(_WORD *)(v21 + *((_QWORD *)a1 + 1));
          if ( v23 >= 0x61u )
          {
            if ( v23 > 0x7Au )
              LOBYTE(v23) = RtlUpcaseUnicodeChar(v23);
            else
              LOBYTE(v23) = v23 - 32;
          }
          *v22 = v23;
          v21 += 2LL;
          ++v22;
          --v20;
        }
        while ( v20 );
      }
    }
    else
    {
      v42 = v6 >> 1;
      *v17 = v19 & 0xFFFFFFFE;
      if ( (_DWORD)v42 )
      {
        v43 = 0LL;
        do
        {
          v44 = *(_WORD *)(v43 + *((_QWORD *)a1 + 1));
          if ( v44 >= 0x61u )
          {
            if ( v44 > 0x7Au )
              v44 = RtlUpcaseUnicodeChar(v44);
            else
              v44 -= 32;
          }
          *(_WORD *)((char *)v17 + v43 + 26) = v44;
          v43 += 2LL;
          --v42;
        }
        while ( v42 );
      }
    }
    v24 = *v17 & 1;
    v17[2] = v3;
    *((_WORD *)v17 + 12) = v6;
    *v17 = v24 | 2;
    v25 = (char *)CmpNameCacheTable + 16 * v15;
    *((_QWORD *)v17 + 2) = *((_QWORD *)v25 + 1);
    *((_QWORD *)v25 + 1) = v17 + 2;
    goto LABEL_26;
  }
  v37 = (signed __int64 *)((char *)CmpNameCacheTable
                         + 16
                         * (((unsigned __int16)(-30045 * (v3 ^ (v3 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v3 ^ (v3 >> 9))) >> 9)) & 0x7FF));
  _m_prefetchw(v37);
  v38 = *v37;
  v39 = *v37 - 16;
  if ( (*v37 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v39 = 0LL;
  if ( (v38 & 2) != 0 || (v40 = *v37, v40 != _InterlockedCompareExchange64(v37, v39, v38)) )
    ExfReleasePushLock(v37);
  KeAbPostRelease((ULONG_PTR)v37);
  return 0LL;
}
