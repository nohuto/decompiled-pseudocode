/*
 * XREFs of ExpPrepareToWakeFastResourceExclusive @ 0x140410140
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1402F1C00 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExpPrepareToWakeFastResourceExclusive(
        signed __int64 *a1,
        signed __int64 **a2,
        signed __int64 *a3,
        int *a4,
        int *a5)
{
  signed __int64 v5; // rax
  int *v8; // r9
  signed __int64 v10; // r11
  BOOL v11; // ebx
  signed __int64 *v12; // rax
  signed __int64 v13; // r8
  signed __int64 *v14; // rcx
  int v15; // r8d
  signed __int64 v16; // rcx
  int v17; // eax
  signed __int64 result; // rax
  BOOL v19; // r8d
  signed __int64 v20; // rcx
  signed __int64 v21; // rtt
  BOOL v22; // r9d
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  signed __int64 v25; // rtt
  signed __int64 **v26; // r8

  v5 = a1[2];
  v8 = (int *)(a1 + 7);
  v10 = 0LL;
  v11 = v5 || *v8;
  if ( *v8 )
  {
    *a2 = (signed __int64 *)a1[1];
    a1[1] = 0LL;
    v15 = *v8;
    *v8 = 0;
  }
  else if ( v5 )
  {
    *a2 = 0LL;
    v12 = (signed __int64 *)a1[2];
    if ( v12 )
    {
      if ( (signed __int64 *)*v12 == v12 )
      {
        a1[2] = 0LL;
      }
      else
      {
        a1[2] = *v12;
        v13 = *v12;
        if ( *(signed __int64 **)(*v12 + 8) != v12 || (v14 = (signed __int64 *)v12[1], (signed __int64 *)*v14 != v12) )
LABEL_9:
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
      }
      v16 = (signed __int64)*a2;
      v10 = v12[2];
      if ( *a2 )
      {
        v26 = *(signed __int64 ***)(v16 + 8);
        if ( *v26 != (signed __int64 *)v16 )
          goto LABEL_9;
        *v12 = v16;
        v12[1] = (signed __int64)v26;
        *v26 = v12;
        *(_QWORD *)(v16 + 8) = v12;
      }
      else
      {
        v12[1] = (signed __int64)v12;
        *v12 = (signed __int64)v12;
      }
      *a2 = v12;
    }
    v15 = 1;
  }
  else
  {
    *a2 = 0LL;
    v15 = 0;
  }
  v17 = 0;
  *a4 = v15;
  *a3 = v10;
  *a5 = 0;
  if ( v11 )
  {
    v17 = 2;
    *a5 = 2;
  }
  if ( v10 )
    *a5 = v17 | 1;
  _m_prefetchw(a1);
  result = *a1;
  if ( v10 )
  {
    do
    {
      v19 = a1[2] || *v8;
      v20 = result & 0xFFFFFFFFFFFFFFFDuLL;
      if ( v19 )
        v20 = result | 2;
      if ( v20 == result )
        break;
      v21 = result;
      result = _InterlockedCompareExchange64(a1, v20, result);
    }
    while ( v21 != result );
  }
  else
  {
    do
    {
      v22 = a1[2] || *((_DWORD *)a1 + 14);
      v23 = result & 0xFFFFFFFFFFFFFFFDuLL;
      if ( v22 )
        v23 = result | 2;
      v24 = v23 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v15 )
        v24 += 4LL * v15;
      if ( v24 == result )
        break;
      v25 = result;
      result = _InterlockedCompareExchange64(a1, v24, result);
    }
    while ( v25 != result );
  }
  return result;
}
