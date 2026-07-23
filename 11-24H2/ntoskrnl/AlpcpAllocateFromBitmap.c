/*
 * XREFs of AlpcpAllocateFromBitmap @ 0x1409A97F0
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     AlpcpFreeBitmap @ 0x140A7E1BC (AlpcpFreeBitmap.c)
 */

__int64 __fastcall AlpcpAllocateFromBitmap(unsigned int *a1, unsigned int *a2, int a3)
{
  __int64 v5; // r8
  unsigned int v6; // r11d
  unsigned int *v7; // r9
  unsigned int v8; // ecx
  unsigned int i; // eax
  __int64 v10; // rdx
  signed __int32 *v11; // r9
  int v12; // r10d
  signed __int32 v13; // eax
  signed __int32 v14; // r10d
  unsigned int v16; // edi
  int v17; // ebx
  signed __int32 v18; // eax
  signed __int32 v19; // r10d
  signed __int32 v20; // eax
  unsigned int v21; // ebp

  v5 = 0xFFFFFFFFLL;
  v6 = 0;
  v7 = a1;
LABEL_2:
  if ( v7 == a2 )
    return 0xFFFFFFFFLL;
  v8 = *v7;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( i >= 0x20 )
      {
        ++v7;
        goto LABEL_2;
      }
      if ( (v8 & 1) == 0 )
        break;
      v6 = 0;
      v8 >>= 1;
      ++i;
      v5 = 0xFFFFFFFFLL;
    }
    if ( (_DWORD)v5 == -1 )
      v5 = i + 32 * (unsigned int)(v7 - a1);
    if ( ++v6 == a3 )
      break;
    v8 >>= 1;
  }
  v10 = 1LL;
  v11 = (signed __int32 *)&a1[(unsigned __int64)(unsigned int)v5 >> 5];
  v12 = v5 & 0x1F;
  if ( (v5 & 0x1F) != 0 )
  {
    v16 = v6;
    if ( v6 >= 32 - v12 )
      v16 = 32 - v12;
    v17 = ((1 << v16) - 1) << v12;
    _m_prefetchw(v11);
    v18 = *v11;
    while ( 1 )
    {
      v19 = v18;
      if ( (v18 & v17) != 0 )
        break;
      v18 = _InterlockedCompareExchange(v11, v17 | v18, v18);
      if ( v18 == v19 )
      {
        v6 -= v16;
        ++v11;
        goto LABEL_11;
      }
    }
  }
  else
  {
LABEL_11:
    if ( v6 >= 0x20 )
    {
      _m_prefetchw(v11);
      v20 = *v11;
      while ( !v20 )
      {
        v20 = _InterlockedCompareExchange(v11, -1, 0);
        if ( !v20 )
        {
          v6 -= 32;
          ++v11;
          goto LABEL_11;
        }
      }
    }
    else
    {
      if ( !v6 )
        return (unsigned int)v5;
      v10 = (unsigned int)((1 << v6) - 1);
      _m_prefetchw(v11);
      v13 = *v11;
      while ( 1 )
      {
        v14 = v13;
        if ( (v13 & (unsigned int)v10) != 0 )
          break;
        v13 = _InterlockedCompareExchange(v11, v10 | v13, v13);
        if ( v13 == v14 )
          return (unsigned int)v5;
      }
    }
    v21 = a3 - v6;
    if ( v21 )
      AlpcpFreeBitmap(a1, v10, v5, v21);
  }
  return 4294967294LL;
}
