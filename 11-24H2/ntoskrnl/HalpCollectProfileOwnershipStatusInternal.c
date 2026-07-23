/*
 * XREFs of HalpCollectProfileOwnershipStatusInternal @ 0x14054300C
 * Callers:
 *     HalpCollectProfileOwnershipStatus @ 0x140542EC4 (HalpCollectProfileOwnershipStatus.c)
 * Callees:
 *     Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x140435A90 (Feature_Test52061194__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall HalpCollectProfileOwnershipStatusInternal(int a1, __int64 a2, char a3, int a4)
{
  __int64 v6; // rax
  _DWORD *v7; // r9
  int v8; // edi
  _DWORD *v9; // rbx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  __int64 k; // r8
  int v16; // r9d
  int v17; // r9d
  unsigned int i; // r11d
  __int64 *v19; // r9
  __int64 v20; // rbp
  int v21; // edx
  __int64 j; // r8
  __int64 v23; // rdx
  __int64 v24; // r10
  int v25; // r8d
  int v26; // r8d

  v6 = KiProcessorBlock[a4];
  v7 = *(_DWORD **)(v6 + 88);
  switch ( a1 )
  {
    case 0:
      v9 = *(_DWORD **)(v6 + 88);
      v8 = 0;
      goto LABEL_23;
    case 1:
      v9 = v7 + 6;
      v8 = 0;
      break;
    case 100:
      v9 = v7 + 12;
      goto LABEL_13;
    case 101:
      v9 = v7 + 18;
LABEL_10:
      if ( v7 != (_DWORD *)-48LL )
      {
        v8 = v7[13];
        goto LABEL_14;
      }
LABEL_13:
      v8 = 0;
      goto LABEL_14;
    default:
      v8 = 0;
      v9 = 0LL;
      v10 = a1 - 1;
      if ( v10 )
      {
        v11 = v10 - 99;
        if ( !v11 )
        {
LABEL_14:
          v12 = (_DWORD)v7 + 24;
          if ( v7 != (_DWORD *)-24LL )
            v12 = v7[7];
          v8 += v12;
          break;
        }
        if ( v11 != 1 )
          goto LABEL_23;
        goto LABEL_10;
      }
      break;
  }
  if ( v7 )
    v13 = v7[1];
  else
    v13 = 0;
  v8 += v13;
LABEL_23:
  result = Feature_Test52061194__private_IsEnabledNoReportingNoInline();
  if ( (_DWORD)result )
  {
    for ( i = 0; i < v9[1]; ++i )
    {
      v19 = (__int64 *)(v9 + 4);
      v20 = *((_QWORD *)v9 + 2);
      v21 = 0;
      for ( j = 0LL; (unsigned int)j <= v9[2]; j = (unsigned int)(j + 1) )
      {
        if ( *(_DWORD *)(v20 + 48 * j + 28) != 3 && ++v21 > i )
          goto LABEL_43;
      }
      j = 0xFFFFFFFFLL;
LABEL_43:
      v23 = 2LL * (unsigned int)(v8 + j);
      if ( a3 )
      {
        result = HalpFullPmuHandle;
        *(_QWORD *)(a2 + 16LL * (unsigned int)(v8 + j) + 16) = HalpFullPmuHandle;
        *(_DWORD *)(a2 + 16LL * (unsigned int)(v8 + j) + 8) = 2;
      }
      else
      {
        v24 = 6 * j;
        v25 = *(_DWORD *)(v20 + 48 * j + 24);
        if ( v25 && (v26 = v25 - 1) != 0 )
        {
          if ( v26 == 1 )
          {
            *(_DWORD *)(a2 + 8 * v23 + 8) = 3;
            result = *v19;
            *(_DWORD *)(a2 + 8 * v23 + 16) = *(_DWORD *)(*v19 + 8 * v24 + 32);
          }
          else
          {
            *(_DWORD *)(a2 + 8 * v23 + 8) = 0;
          }
        }
        else
        {
          *(_DWORD *)(a2 + 8 * v23 + 8) = 1;
          *(_DWORD *)(a2 + 8 * v23 + 16) = *(_DWORD *)(*v19 + 8 * v24 + 36);
          result = *v19;
          *(_DWORD *)(a2 + 8 * v23 + 20) = *(_DWORD *)(*v19 + 8 * v24 + 32);
        }
      }
    }
  }
  else
  {
    for ( k = 0LL; (unsigned int)k < v9[1]; k = (unsigned int)(k + 1) )
    {
      if ( a3 )
      {
        result = HalpFullPmuHandle;
        *(_QWORD *)(a2 + 16LL * (unsigned int)(v8 + k) + 16) = HalpFullPmuHandle;
        *(_DWORD *)(a2 + 16LL * (unsigned int)(v8 + k) + 8) = 2;
      }
      else
      {
        v16 = *(_DWORD *)(*((_QWORD *)v9 + 2) + 48 * k + 24);
        if ( v16 && (v17 = v16 - 1) != 0 )
        {
          if ( v17 == 1 )
          {
            *(_DWORD *)(a2 + 16LL * (unsigned int)(v8 + k) + 8) = 3;
            result = *((_QWORD *)v9 + 2);
            *(_DWORD *)(a2 + 16LL * (unsigned int)(v8 + k) + 16) = *(_DWORD *)(result + 48 * k + 32);
          }
          else
          {
            *(_DWORD *)(a2 + 16LL * (unsigned int)(v8 + k) + 8) = 0;
          }
        }
        else
        {
          *(_DWORD *)(a2 + 16LL * (unsigned int)(v8 + k) + 8) = 1;
          *(_DWORD *)(a2 + 16LL * (unsigned int)(v8 + k) + 16) = *(_DWORD *)(*((_QWORD *)v9 + 2) + 48 * k + 36);
          result = *((_QWORD *)v9 + 2);
          *(_DWORD *)(a2 + 16LL * (unsigned int)(v8 + k) + 20) = *(_DWORD *)(result + 48 * k + 32);
        }
      }
    }
  }
  return result;
}
