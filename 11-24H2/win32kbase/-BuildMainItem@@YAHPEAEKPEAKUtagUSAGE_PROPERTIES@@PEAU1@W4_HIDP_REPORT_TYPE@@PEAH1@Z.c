/*
 * XREFs of ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1401E78C0
 * Callers:
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1401E7C64 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 * Callees:
 *     ?BuildVendorDefinedCL@@YAHPEAEKPEAK@Z @ 0x1401E82E8 (-BuildVendorDefinedCL@@YAHPEAEKPEAK@Z.c)
 *     ?OpenCollection@@YAHPEAEKW4tagHID_IDE_COL_TYPE@@PEAK@Z @ 0x1401E83B8 (-OpenCollection@@YAHPEAEKW4tagHID_IDE_COL_TYPE@@PEAK@Z.c)
 *     ?SetMultiByteValue@@YAHPEAEKPEAKPEAHK1@Z @ 0x1401E844C (-SetMultiByteValue@@YAHPEAEKPEAKPEAHK1@Z.c)
 */

__int64 __fastcall BuildMainItem(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        unsigned int *a8)
{
  int v10; // r8d
  int v12; // edi
  unsigned int v13; // r15d
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _BYTE *v18; // r11
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int16 v23; // r9
  unsigned __int8 v24; // al
  __int64 v25; // rdx
  unsigned __int8 v26; // al
  __int64 v27; // rdx
  unsigned int v28; // edx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int16 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rdx
  __int16 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned int *v39; // r9
  unsigned int v40; // r8d
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int8 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 result; // rax
  unsigned int v48; // edx
  unsigned int v49; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v50; // [rsp+34h] [rbp-1Ch] BYREF
  unsigned int v51; // [rsp+38h] [rbp-18h]
  unsigned int *v52; // [rsp+40h] [rbp-10h]

  v10 = 0;
  v52 = a8;
  v12 = *a7;
  v13 = a2;
  v51 = *a8;
  v50 = v51;
  if ( (unsigned int)a2 < 4 )
    return 0LL;
  if ( !v12 )
    goto LABEL_18;
  *a7 = 0;
  v14 = OpenCollection(a1, a2, 0LL, a3);
  v15 = *a3;
  if ( v13 < (int)v15 + 2 )
    return 0LL;
  a1[v15] = -123;
  v16 = (unsigned int)(v15 + 1);
  a1[v16] = 1;
  v17 = (unsigned int)(v16 + 1);
  *a3 = v17;
  if ( !v14 || (int)v17 + 4 >= v13 )
    return 0LL;
  if ( a1[1] == 13 )
  {
    *a3 = v17 + 2;
    v18 = a1 + 3;
    a1[v17] = 9;
    v19 = (unsigned int)(v17 + 1);
    if ( (unsigned __int8)(a1[3] - 1) <= 1u )
    {
      a1[v19] = 32;
      v20 = 1;
    }
    else
    {
      if ( (unsigned __int8)(a1[3] - 4) <= 1u )
      {
        a1[v19] = 34;
        goto LABEL_14;
      }
      v20 = BuildVendorDefinedCL(a1, v13, a3);
    }
  }
  else
  {
    v20 = BuildVendorDefinedCL(a1, v13, a3);
    v18 = a1 + 3;
  }
  if ( !v20 )
    return 0LL;
LABEL_14:
  if ( a1[1] != 13 || (v21 = 1LL, (unsigned __int8)(*v18 - 1) > 1u) )
    v21 = 2LL;
  v10 = OpenCollection(a1, v13, v21, a3);
LABEL_18:
  v22 = *a3;
  if ( !v10 && v12 || (int)v22 + 4 > v13 )
    return 0LL;
  if ( v12 && (v23 = *(_WORD *)(a4 + 2), v23 != a1[1]) || (v23 = *(_WORD *)(a4 + 2), *(_WORD *)(a5 + 2) != v23) )
  {
    v24 = *(_BYTE *)(a4 + 2);
    a1[v22] = 5;
    v25 = (unsigned int)(v22 + 1);
    a1[v25] = v24;
    v22 = (unsigned int)(v25 + 1);
    *(_WORD *)(a5 + 2) = v23;
  }
  v26 = *(_BYTE *)(a4 + 4);
  a1[v22] = 9;
  v27 = (unsigned int)(v22 + 1);
  a1[v27] = v26;
  v28 = v27 + 1;
  v49 = v28;
  if ( !v10 )
  {
    if ( v12 )
      return 0LL;
  }
  if ( *(_DWORD *)(a5 + 8) != *(_DWORD *)(a4 + 8) || v12 )
  {
    v29 = SetMultiByteValue(a1, v13, &v49, (int *)(a4 + 8), 4u, 0LL);
    v28 = v49;
    v10 = v29;
    *(_DWORD *)(a5 + 8) = *(_DWORD *)(a4 + 8);
  }
  if ( !v10 && v12 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 12) != *(_DWORD *)(a4 + 12) || v12 )
  {
    v30 = SetMultiByteValue(a1, v13, &v49, (int *)(a4 + 12), 5u, &v50);
    v28 = v49;
    v10 = v30;
    *(_DWORD *)(a5 + 12) = *(_DWORD *)(a4 + 12);
    v51 = v50;
  }
  if ( !v10 && v12 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 24) != *(_DWORD *)(a4 + 24) || v12 )
  {
    v31 = SetMultiByteValue(a1, v13, &v49, (int *)(a4 + 24), 0xDu, 0LL);
    v28 = v49;
    v10 = v31;
    *(_DWORD *)(a5 + 24) = *(_DWORD *)(a4 + 24);
  }
  if ( !v10 && v12 )
    return 0LL;
  if ( *(_DWORD *)(a5 + 28) != *(_DWORD *)(a4 + 28) || v12 )
  {
    v32 = SetMultiByteValue(a1, v13, &v49, (int *)(a4 + 28), 0xEu, 0LL);
    v28 = v49;
    v10 = v32;
    *(_DWORD *)(a5 + 28) = *(_DWORD *)(a4 + 28);
  }
  if ( !v10 && v12 || v28 + 12 > v13 )
    return 0LL;
  v33 = *(_WORD *)(a4 + 16);
  if ( *(_WORD *)(a5 + 16) != v33 || v12 )
  {
    v34 = v28;
    v35 = v28 + 1;
    a1[v34] = 101;
    a1[v35] = *(_BYTE *)(a4 + 16);
    v28 = v35 + 1;
    *(_WORD *)(a5 + 16) = v33;
  }
  v36 = *(_WORD *)(a4 + 18);
  if ( *(_WORD *)(a5 + 18) != v36 || v12 )
  {
    v37 = v28;
    v38 = v28 + 1;
    a1[v37] = 85;
    a1[v38] = *(_BYTE *)(a4 + 18);
    v28 = v38 + 1;
    *(_WORD *)(a5 + 18) = v36;
  }
  v39 = v52;
  v40 = v51;
  if ( *v52 != v51 )
  {
    v41 = v28;
    v42 = v28 + 1;
    v28 += 2;
    a1[v41] = 117;
    a1[v42] = v40;
    *v39 = v40;
  }
  v43 = *(_BYTE *)(a4 + 20);
  if ( *(_BYTE *)(a5 + 20) != v43 || v12 )
  {
    v44 = v28;
    v45 = v28 + 1;
    a1[v44] = -107;
    a1[v45] = v43;
    v28 = v45 + 1;
    *(_BYTE *)(a5 + 20) = v43;
  }
  v46 = v28;
  result = 1LL;
  v48 = v28 + 1;
  a1[v46] = -127;
  a1[v48] = 2;
  *a3 = v48 + 1;
  return result;
}
