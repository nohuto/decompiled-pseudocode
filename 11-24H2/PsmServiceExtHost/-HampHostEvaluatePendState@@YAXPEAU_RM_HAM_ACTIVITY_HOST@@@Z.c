/*
 * XREFs of ?HampHostEvaluatePendState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800283D0
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027770 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x180082934 (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 */

void __fastcall HampHostEvaluatePendState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // r11d
  int v2; // ebp
  unsigned int v3; // esi
  int v4; // r12d
  unsigned __int8 v5; // r14
  struct _RM_HAM_ACTIVITY_HOST *v6; // r15
  struct _RM_HAM_ACTIVITY_HOST *v7; // rdx
  unsigned int v8; // r13d
  char *v9; // rax
  char v10; // r10
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  __int16 v16; // r8
  unsigned __int16 v17; // dx
  unsigned int v18; // edi
  unsigned __int16 v19; // r8
  unsigned int v20; // r9d
  signed int v21; // ecx
  unsigned int v22; // ecx
  unsigned __int8 v23; // r8
  unsigned __int8 v24; // dl
  __int64 v25; // rdx
  unsigned __int8 v26; // r9
  unsigned __int64 v27; // r8
  struct _HAM_DEPENDENCY_GROUP *v28; // rcx
  int v29; // edx

  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 6;
  v6 = a1;
  v7 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  v8 = 0;
  if ( v7 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v9 = (char *)v7 - 96;
    if ( v7 != (struct _RM_HAM_ACTIVITY_HOST *)96 )
    {
      while ( 1 )
      {
        if ( (v9[552] & 0x48) != 0 )
          goto LABEL_32;
        v10 = v9[562];
        if ( v10 == 3 )
          break;
        if ( v10 == 2 )
          goto LABEL_6;
LABEL_31:
        v23 = v9[563];
        if ( v23 != 6 )
          goto LABEL_26;
LABEL_32:
        v25 = *((_QWORD *)v9 + 12);
        if ( v25 != *((_QWORD *)v9 + 10) + 608LL )
        {
          v9 = (char *)(v25 - 96);
          if ( v25 != 96 )
            continue;
        }
        v6 = a1;
        goto LABEL_35;
      }
      v4 = 1;
LABEL_6:
      if ( *((_QWORD *)v9 + 8) )
      {
        v11 = *((_QWORD *)v9 + 10);
        v12 = *((_DWORD *)v9 + 28);
        v13 = 624LL;
        if ( v11 )
          v13 = v11 + 560;
        v14 = v12 >> 13;
        v15 = v12 >> 10;
        if ( *(_DWORD *)v13 != 2 )
          LOBYTE(v15) = v14;
        if ( (v15 & 1) != 0 )
        {
          v16 = *((_WORD *)v9 + 212);
          v8 = 1;
          v17 = v16 & 0x30;
          if ( (v16 & 0xC0) == 0xC0 )
            v18 = 2;
          else
            v18 = (v16 & 0xEu) >= 8 && v17 >= 0x20u;
          v19 = v16 & 0xE;
          v20 = *((_DWORD *)v9 + 120) & 3;
          v21 = v20;
          if ( v20 <= v18 )
            v21 = v18;
          if ( v2 <= v21 )
          {
            if ( (*((_WORD *)v9 + 212) & 0xC0) == 0xC0 )
              v22 = 2;
            else
              v22 = v19 >= 8u && v17 >= 0x20u;
            v2 = *((_DWORD *)v9 + 120) & 3;
            if ( v20 <= v22 )
              v2 = v22;
          }
        }
      }
      if ( v10 != 3 && (unsigned __int8)v9[563] < 3u )
      {
        v23 = v9[563];
LABEL_26:
        v24 = v5;
        if ( v5 <= v23 )
          v24 = v23;
        v5 = v24;
        goto LABEL_32;
      }
      if ( (*((_DWORD *)v9 + 28) & 0x100000) != 0 )
        v3 = 1;
      goto LABEL_31;
    }
  }
LABEL_35:
  v26 = v5;
  v27 = ((unsigned __int64)v3 << 39) ^ (((unsigned __int64)v8 << 36) ^ ((unsigned __int64)v3 << 39)) & 0xFFFFFF7FFFFFFFFFuLL ^ (*((_QWORD *)v6 + 83) ^ ((__int64)v2 << 32)) & 0xFFFFFF6CFFFFFFFFuLL ^ (((unsigned __int64)v8 << 36) ^ ((__int64)v2 << 32)) & 0xFFFFFF6FFFFFFFFFuLL;
  if ( v4 )
    v26 = 6;
  v28 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)v6 + 88);
  *((_QWORD *)v6 + 83) = ((unsigned __int64)v26 << 26) ^ (((unsigned __int64)v26 << 26) ^ v27) & 0xFFFFFFFFE3FFFFFFuLL;
  if ( v28 )
  {
    LOBYTE(v1) = v26 == 0;
    if ( v1 != (((v27 >> 26) & 7) == 0) )
    {
      v29 = 1;
      if ( v26 )
        v29 = -1;
      HampDepGroupAddRemoveResourceWaiter(v28, v29);
    }
  }
}
