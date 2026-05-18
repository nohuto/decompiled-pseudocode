/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x18000E238
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000C888 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(__int64 a1, volatile signed __int32 *a2, int a3)
{
  int v6; // r8d
  unsigned __int32 v7; // eax
  BOOL v8; // ecx
  unsigned __int32 v9; // ett
  int v10; // edx
  signed __int32 v11; // eax
  int v12; // ebx
  char v13; // r9
  signed __int32 v14; // r8d
  signed __int32 v15; // ett
  signed __int32 v16; // eax
  BOOL v17; // edi
  unsigned int v18; // ecx
  char v19; // r9
  int v20; // edx
  int v21; // r8d
  unsigned int v22; // r8d
  unsigned int v23; // edx
  signed __int32 v24; // ett
  signed __int32 v25; // eax
  BOOL v26; // r14d
  unsigned int v27; // ecx
  char v28; // di
  int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r8d
  signed __int32 v32; // ett

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  switch ( a3 )
  {
    case 0:
      goto LABEL_47;
    case 1:
      goto LABEL_33;
    case 2:
    case 3:
      goto LABEL_17;
    case 4:
LABEL_47:
      v25 = *a2;
      v26 = a3 == 4;
      do
      {
        *(_DWORD *)(a1 + 4) = 0;
        v27 = v25 | 1;
        v28 = v25;
        if ( (((v25 | 1u) >> 14) & 1) != v26 )
        {
          if ( ((v27 >> 5) & 0x1FF) != 0 )
          {
            *(_DWORD *)(a1 + 4) = (v27 >> 5) & 0x1FF;
            *(_DWORD *)(a1 + 8) = a3 == 0 ? 4 : 0;
            v27 = v25 & 0xFFFFC01E | 1;
          }
          v29 = 0;
          if ( a3 == 4 )
            v29 = 0x4000;
          v27 = v27 & 0xFFFFBFFF | v29;
        }
        v30 = (v27 >> 5) & 0x1FF;
        v31 = v30 + 1;
        if ( v30 + 1 > 0x1FF || v31 < v30 )
        {
          LOWORD(v31) = 1;
          *(_DWORD *)(a1 + 8) = a3;
          *(_DWORD *)(a1 + 4) = v30;
        }
        v32 = v25;
        v25 = _InterlockedCompareExchange(
                a2,
                ((unsigned __int16)v27 ^ (unsigned __int16)(32 * v31)) & 0x3FE0 ^ v27,
                v25);
      }
      while ( v32 != v25 );
      *(_DWORD *)a1 = (v28 & 1) == 0;
      goto LABEL_59;
    case 5:
LABEL_33:
      v16 = *a2;
      v17 = a3 == 5;
      do
      {
        *(_DWORD *)(a1 + 4) = 0;
        v18 = v16 | 1;
        v19 = v16;
        if ( (((v16 | 1u) >> 22) & 1) != v17 )
        {
          if ( ((v18 >> 15) & 0x7F) != 0 )
          {
            *(_DWORD *)(a1 + 4) = (v18 >> 15) & 0x7F;
            v20 = 5;
            if ( a3 != 1 )
              v20 = 1;
            v18 = v16 & 0xFFC07FFE | 1;
            *(_DWORD *)(a1 + 8) = v20;
          }
          v21 = 0;
          if ( a3 == 5 )
            v21 = 0x400000;
          v18 = v18 & 0xFFBFFFFF | v21;
        }
        v22 = (v18 >> 15) & 0x7F;
        v23 = v22 + 1;
        if ( v22 + 1 > 0x7F || v23 < v22 )
        {
          v23 = 1;
          *(_DWORD *)(a1 + 8) = a3;
          *(_DWORD *)(a1 + 4) = v22;
        }
        v24 = v16;
        v16 = _InterlockedCompareExchange(a2, (v18 ^ (v23 << 15)) & 0x3F8000 ^ v18, v16);
      }
      while ( v24 != v16 );
      *(_DWORD *)a1 = (v19 & 1) == 0;
LABEL_59:
      *(_DWORD *)(a1 + 16) = 0;
      return a1;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v6 = a3 - 320;
    if ( v6 >= 64 )
      goto LABEL_16;
    v7 = *((_DWORD *)a2 + 1);
    do
    {
      v8 = (v7 & 0x10) != 0 && ((v7 >> 5) & 0x3F) == v6;
      *(_DWORD *)(a1 + 16) = v8;
      v9 = v7;
      v7 = _InterlockedCompareExchange(
             a2 + 1,
             v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * v6)) & 0x7E0 | 0x10,
             v7);
    }
    while ( v9 != v7 );
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_16:
      *(_DWORD *)(a1 + 12) = 0;
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 4) = 1;
    }
    return a1;
  }
LABEL_17:
  v10 = 0;
  switch ( a3 )
  {
    case 2:
      v10 = 2;
      break;
    case 3:
      v10 = 8;
      break;
    case 6:
      v10 = 4;
      break;
    case 7:
      v10 = 16;
      break;
  }
  v11 = *a2;
  v12 = 1;
  do
  {
    v13 = v11;
    *(_DWORD *)(a1 + 16) = (v11 | v10) == v11;
    v14 = v11 | v10 | 1;
    if ( (v11 | v10) == v11 )
      v14 = v11 | v10;
    v15 = v11;
    v11 = _InterlockedCompareExchange(a2, v14, v11);
  }
  while ( v15 != v11 );
  if ( (v14 & 1) == 0 || (v13 & 1) != 0 )
    v12 = 0;
  *(_DWORD *)a1 = v12;
  return a1;
}
