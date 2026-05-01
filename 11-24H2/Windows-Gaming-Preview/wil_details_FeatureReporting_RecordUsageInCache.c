/*
 * XREFs of wil_details_FeatureReporting_RecordUsageInCache @ 0x1800111BC
 * Callers:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x18000EE6C (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_FeatureReporting_RecordUsageInCache(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3,
        int a4)
{
  int v7; // r8d
  unsigned __int32 v8; // eax
  BOOL v9; // ecx
  unsigned __int32 v10; // ett
  int v11; // edx
  signed __int32 v12; // eax
  int v13; // ebx
  char v14; // r9
  signed __int32 v15; // r8d
  signed __int32 v16; // ett
  signed __int32 v17; // eax
  BOOL v18; // edi
  unsigned int v19; // ecx
  char v20; // r9
  int v21; // edx
  int v22; // r8d
  unsigned int v23; // r8d
  unsigned int v24; // edx
  signed __int32 v25; // ett
  signed __int32 v26; // eax
  BOOL v27; // ebp
  unsigned int v28; // ecx
  char v29; // di
  int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // r8d
  signed __int32 v33; // ett

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
      v26 = *a2;
      v27 = a3 == 4;
      do
      {
        *(_DWORD *)(a1 + 4) = 0;
        v28 = v26 | 1;
        v29 = v26;
        if ( (((v26 | 1u) >> 14) & 1) != v27 )
        {
          if ( ((v28 >> 5) & 0x1FF) != 0 )
          {
            *(_DWORD *)(a1 + 4) = (v28 >> 5) & 0x1FF;
            *(_DWORD *)(a1 + 8) = a3 == 0 ? 4 : 0;
            v28 = v26 & 0xFFFFC01E | 1;
          }
          v30 = 0;
          if ( a3 == 4 )
            v30 = 0x4000;
          v28 = v28 & 0xFFFFBFFF | v30;
        }
        v31 = (v28 >> 5) & 0x1FF;
        v32 = v31 + 1;
        if ( v31 + 1 > 0x1FF || v32 < v31 )
        {
          LOWORD(v32) = 1;
          *(_DWORD *)(a1 + 8) = a3;
          *(_DWORD *)(a1 + 4) = v31;
        }
        v33 = v26;
        v26 = _InterlockedCompareExchange(
                a2,
                ((unsigned __int16)v28 ^ (unsigned __int16)(32 * v32)) & 0x3FE0 ^ v28,
                v26);
      }
      while ( v33 != v26 );
      *(_DWORD *)a1 = (v29 & 1) == 0;
      goto LABEL_59;
    case 5:
LABEL_33:
      v17 = *a2;
      v18 = a3 == 5;
      do
      {
        *(_DWORD *)(a1 + 4) = 0;
        v19 = v17 | 1;
        v20 = v17;
        if ( (((v17 | 1u) >> 22) & 1) != v18 )
        {
          if ( ((v19 >> 15) & 0x7F) != 0 )
          {
            *(_DWORD *)(a1 + 4) = (v19 >> 15) & 0x7F;
            v21 = 5;
            if ( a3 != 1 )
              v21 = 1;
            v19 = v17 & 0xFFC07FFE | 1;
            *(_DWORD *)(a1 + 8) = v21;
          }
          v22 = 0;
          if ( a3 == 5 )
            v22 = 0x400000;
          v19 = v19 & 0xFFBFFFFF | v22;
        }
        v23 = (v19 >> 15) & 0x7F;
        v24 = v23 + 1;
        if ( v23 + 1 > 0x7F || v24 < v23 )
        {
          v24 = 1;
          *(_DWORD *)(a1 + 8) = a3;
          *(_DWORD *)(a1 + 4) = v23;
        }
        v25 = v17;
        v17 = _InterlockedCompareExchange(a2, (v19 ^ (v24 << 15)) & 0x3F8000 ^ v19, v17);
      }
      while ( v25 != v17 );
      *(_DWORD *)a1 = (v20 & 1) == 0;
LABEL_59:
      *(_DWORD *)(a1 + 16) = 0;
      return a1;
  }
  if ( (unsigned int)(a3 - 6) >= 2 )
  {
    v7 = a3 - 320;
    if ( v7 >= 64 )
      goto LABEL_16;
    v8 = *((_DWORD *)a2 + 1);
    do
    {
      v9 = (v8 & 0x10) != 0 && ((v8 >> 5) & 0x3F) == v7;
      *(_DWORD *)(a1 + 16) = v9;
      v10 = v8;
      v8 = _InterlockedCompareExchange(
             a2 + 1,
             v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(32 * v7)) & 0x7E0 | 0x10,
             v8);
    }
    while ( v10 != v8 );
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_16:
      *(_DWORD *)(a1 + 8) = a3;
      *(_DWORD *)(a1 + 4) = 1;
      *(_DWORD *)(a1 + 12) = a4;
    }
    return a1;
  }
LABEL_17:
  v11 = 0;
  switch ( a3 )
  {
    case 2:
      v11 = 2;
      break;
    case 3:
      v11 = 8;
      break;
    case 6:
      v11 = 4;
      break;
    case 7:
      v11 = 16;
      break;
  }
  v12 = *a2;
  v13 = 1;
  do
  {
    v14 = v12;
    *(_DWORD *)(a1 + 16) = (v12 | v11) == v12;
    v15 = v12 | v11 | 1;
    if ( (v12 | v11) == v12 )
      v15 = v12 | v11;
    v16 = v12;
    v12 = _InterlockedCompareExchange(a2, v15, v12);
  }
  while ( v16 != v12 );
  if ( (v15 & 1) == 0 || (v14 & 1) != 0 )
    v13 = 0;
  *(_DWORD *)a1 = v13;
  return a1;
}
