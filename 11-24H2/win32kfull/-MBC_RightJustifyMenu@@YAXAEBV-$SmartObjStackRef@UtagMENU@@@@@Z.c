/*
 * XREFs of ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1401CE8C8
 * Callers:
 *     xxxMenuBarCompute @ 0x140069184 (xxxMenuBarCompute.c)
 * Callees:
 *     IsMDIItem @ 0x1401CEBA0 (IsMDIItem.c)
 */

__int64 __fastcall MBC_RightJustifyMenu(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r8
  __int64 result; // rax
  int v4; // r11d
  __int64 v5; // r10
  __int64 j; // rdx
  __int64 v7; // r11
  __int64 v8; // rdx
  _DWORD *v9; // rax
  int v10; // ecx
  unsigned int v11; // r10d
  __int64 v12; // rsi
  unsigned int v13; // r10d
  int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
  int v19; // r11d
  __int64 i; // r10
  __int64 v21; // r14
  unsigned int v22; // r12d
  int v23; // ecx
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // r15d
  int v29; // ebp

  v1 = 0;
  v2 = a1;
  result = *(_QWORD *)(**(_QWORD **)a1 + 40LL);
  if ( *(_DWORD *)(result + 44) )
  {
    v4 = 0;
    v5 = *(_QWORD *)(**(_QWORD **)a1 + 88LL);
    if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 40LL) & 0x20) != 0 && *(_QWORD *)(**(_QWORD **)a1 + 80LL) )
    {
      if ( *(int *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 44LL) > 0 )
      {
        do
        {
          if ( v4 )
            break;
          if ( !(unsigned int)IsMDIItem(v5) )
            break;
          v4 = 1;
          v5 = *(_QWORD *)(**(_QWORD **)v2 + 88LL) + 96LL;
        }
        while ( *(int *)(*(_QWORD *)(**(_QWORD **)v2 + 40LL) + 44LL) > 1 );
      }
      v18 = v4 - 1;
      if ( v4 != *(_DWORD *)(*(_QWORD *)(**(_QWORD **)v2 + 40LL) + 44LL) )
        v18 = v4;
      v19 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)v2 + 40LL) + 44LL) - 1;
      for ( i = *(_QWORD *)(**(_QWORD **)v2 + 88LL) + 96LL * v19;
            v19 > v18 && (unsigned int)IsMDIItem(i);
            i = *(_QWORD *)(**(_QWORD **)v2 + 88LL) + 96LL * v19 )
      {
        --v19;
      }
      v21 = v18;
      v12 = 96LL * v18;
      v29 = *(_DWORD *)(**(_QWORD **)(**(_QWORD **)v2 + 88LL) + 68LL);
      v11 = *(_DWORD *)(**(_QWORD **)v2 + 64LL);
      v22 = v11;
      v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)v2 + 88LL) + v12) + 64LL);
      result = *(_QWORD *)(**(_QWORD **)v2 + 40LL);
      v23 = *(_DWORD *)(result + 44) - 1;
      if ( v23 > (__int64)v19 )
      {
        v24 = 96LL * v23;
        v25 = v23 - (__int64)v19;
        do
        {
          v26 = *(_QWORD *)(**(_QWORD **)v2 + 88LL);
          v27 = *(_QWORD *)(v24 + v26);
          v11 -= *(_DWORD *)(v27 + 72);
          *(_DWORD *)(v27 + 64) = v11;
          result = *(_QWORD *)(v24 + v26);
          v24 -= 96LL;
          *(_DWORD *)(result + 68) = v29;
          --v25;
        }
        while ( v25 );
      }
      if ( v21 <= v19 )
      {
        v7 = v19 - v21 + 1;
        do
        {
          v8 = *(_QWORD *)(**(_QWORD **)v2 + 88LL);
          v9 = *(_DWORD **)(v12 + v8);
          v10 = v9[18];
          v11 -= v10;
          if ( v11 <= v28 )
          {
            v28 = v1;
            v11 = v22 - v10;
            v29 += v9[19];
          }
          v9[16] = v11;
          result = *(_QWORD *)(v12 + v8);
          v12 += 96LL;
          *(_DWORD *)(result + 68) = v29;
          --v7;
        }
        while ( v7 );
      }
    }
    else
    {
      for ( j = 0LL; ; j += 96LL )
      {
        result = *(_QWORD *)(**(_QWORD **)a1 + 40LL);
        if ( v1 >= *(_DWORD *)(result + 44) )
          break;
        if ( (**(_DWORD **)(j + *(_QWORD *)(**(_QWORD **)a1 + 88LL)) & 0x4000) != 0 )
        {
          v13 = *(_DWORD *)(**(_QWORD **)a1 + 64LL) + *(_DWORD *)(**(_QWORD **)(**(_QWORD **)a1 + 88LL) + 64LL);
          v14 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 44LL) - 1;
          result = v1;
          if ( v14 >= (__int64)v1 )
          {
            v15 = 96LL * v14;
            v16 = v14 - result + 1;
            do
            {
              result = *(_QWORD *)(**(_QWORD **)v2 + 88LL);
              v17 = *(_QWORD *)(v15 + result);
              v13 -= *(_DWORD *)(v17 + 72);
              if ( *(_DWORD *)(v17 + 64) < v13 )
                *(_DWORD *)(v17 + 64) = v13;
              v15 -= 96LL;
              --v16;
            }
            while ( v16 );
          }
          return result;
        }
        ++v1;
      }
    }
  }
  return result;
}
