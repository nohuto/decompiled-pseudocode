/*
 * XREFs of HalpCollectSamplingProfileCorruptionStatusInternal @ 0x1405432EC
 * Callers:
 *     HalpCollectSamplingProfileCorruptionStatus @ 0x14054323C (HalpCollectSamplingProfileCorruptionStatus.c)
 * Callees:
 *     Feature_Test52061194__private_IsEnabledNoReportingNoInline @ 0x140435A90 (Feature_Test52061194__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall HalpCollectSamplingProfileCorruptionStatusInternal(
        __int64 a1,
        int a2,
        int a3,
        unsigned int *a4,
        unsigned int a5)
{
  __int64 v7; // rbx
  int v8; // edx
  int v9; // edx
  __int64 result; // rax
  __int64 v11; // r8
  unsigned int v12; // r10d
  __int64 v13; // rdx
  char v14; // cl
  int v15; // r9d
  __int64 i; // rdx
  __int64 v17; // r9
  unsigned int v18; // r10d
  __int64 v19; // rdx
  char v20; // cl

  v7 = *(_QWORD *)(KiProcessorBlock[a3] + 88);
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      v9 = v8 - 99;
      if ( v9 )
      {
        if ( v9 == 1 )
          v7 += 72LL;
        else
          v7 = 0LL;
      }
      else
      {
        v7 += 48LL;
      }
    }
    else
    {
      v7 += 24LL;
    }
  }
  result = Feature_Test52061194__private_IsEnabledNoReportingNoInline();
  v11 = 0LL;
  if ( (_DWORD)result )
  {
    result = *(unsigned int *)(v7 + 4);
    if ( (_DWORD)result )
    {
      do
      {
        if ( *a4 >= a5 )
          break;
        if ( (unsigned int)v11 < (unsigned int)result )
        {
          v15 = 0;
          for ( i = 0LL; (unsigned int)i <= *(_DWORD *)(v7 + 8); i = (unsigned int)(i + 1) )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v7 + 16) + 48 * i + 28) != 3 && ++v15 > (unsigned int)v11 )
              goto LABEL_28;
          }
        }
        i = 0xFFFFFFFFLL;
LABEL_28:
        v17 = 6 * i;
        if ( !*(_DWORD *)(*(_QWORD *)(v7 + 16) + 48 * i + 24) )
        {
          v18 = *a4;
          v19 = a1 + 16LL * *a4;
          *(_BYTE *)(v19 + 13) = 1;
          *(_DWORD *)(v19 + 8) = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 8 * v17 + 36);
          v20 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 8 * v17 + 40);
          *(_BYTE *)(v19 + 12) = v20;
          if ( v20 )
            *(_QWORD *)v19 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 8 * v17 + 8);
          else
            *(_QWORD *)v19 = 0LL;
          *a4 = v18 + 1;
        }
        result = *(unsigned int *)(v7 + 4);
        LODWORD(v11) = v11 + 1;
      }
      while ( (unsigned int)v11 < (unsigned int)result );
    }
  }
  else if ( *(_DWORD *)(v7 + 4) )
  {
    do
    {
      v12 = *a4;
      if ( *a4 >= a5 )
        break;
      result = *(_QWORD *)(v7 + 16);
      if ( !*(_DWORD *)(result + 48 * v11 + 24) )
      {
        v13 = a1 + 16LL * v12;
        *(_BYTE *)(v13 + 13) = 1;
        *(_DWORD *)(v13 + 8) = *(_DWORD *)(*(_QWORD *)(v7 + 16) + 48 * v11 + 36);
        v14 = *(_BYTE *)(*(_QWORD *)(v7 + 16) + 48 * v11 + 40);
        *(_BYTE *)(v13 + 12) = v14;
        if ( v14 )
          *(_QWORD *)v13 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 48 * v11 + 8);
        else
          *(_QWORD *)v13 = 0LL;
        result = v12 + 1;
        *a4 = result;
      }
      v11 = (unsigned int)(v11 + 1);
    }
    while ( (unsigned int)v11 < *(_DWORD *)(v7 + 4) );
  }
  return result;
}
