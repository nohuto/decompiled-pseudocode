/*
 * XREFs of ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x140049C20
 * Callers:
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400499B4 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x140049A28 (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 *     ?ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x140049BAC (-ProcessUpdateTouchConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBU.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x14004A088 (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x14004A21C (-RemoveAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x140109964 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
        __int64 a1,
        int a2,
        __int64 *a3,
        __int64 *a4,
        _BYTE *a5)
{
  int v5; // r15d
  __int64 v9; // rdi
  unsigned int v10; // ecx
  unsigned int v11; // r10d
  __int64 v12; // xmm0_8
  __int64 v13; // rax
  unsigned int *v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // r8
  int v22; // edx
  int v23; // eax
  bool v24; // cl
  int v26; // ecx
  _DWORD *v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  char *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // r10d
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // r10d
  int v41; // ecx
  _DWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 *v44; // rdx
  __int64 v45; // xmm0_8
  int v46; // ecx
  int v47; // eax
  __int64 v48; // r8
  int v49; // eax
  __int64 v50; // r13
  _DWORD *v51; // rax
  __int64 v52; // [rsp+20h] [rbp-20h] BYREF
  int v53; // [rsp+28h] [rbp-18h]
  __int64 v54; // [rsp+30h] [rbp-10h] BYREF
  int v55; // [rsp+38h] [rbp-8h]

  v5 = 0;
  *a5 = 0;
  if ( a2 != 3 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= *((_DWORD *)a4 + 2) )
      {
LABEL_19:
        v23 = *((_DWORD *)a4 + 2);
        v24 = v23 && *(_DWORD *)(*(_QWORD *)(*a4 + 8LL * (unsigned int)(v23 - 1)) + 4LL) == -1;
        if ( *(_DWORD *)a3 <= *((_DWORD *)a3 + 1) && !v24 && (a2 == 8 || a2 == 1) )
        {
          v26 = *((_DWORD *)a3 + 2);
          v54 = *a3;
          v55 = v26;
          *a5 |= v26 != 0;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v54,
                 *((unsigned int *)a4 + 2));
          if ( v5 >= 0 )
            *a5 = 1;
        }
        return (unsigned int)v5;
      }
      v10 = *(_DWORD *)a3;
      v11 = *((_DWORD *)a3 + 1);
      if ( *(_DWORD *)a3 > v11 )
        goto LABEL_18;
      v12 = *a3;
      v53 = *((_DWORD *)a3 + 2);
      v13 = *a4;
      v52 = v12;
      v14 = *(unsigned int **)(v13 + 8 * v9);
      if ( v10 < *v14 )
      {
        v53 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(0LL, *((unsigned int *)a3 + 2));
        v38 = **(_DWORD **)(*a4 + 8 * v9) - 1;
        if ( v37 < v38 )
          v38 = v37;
        HIDWORD(v52) = v38;
        if ( v38 == -1 )
          v39 = -1;
        else
          v39 = v38 + 1;
        *(_DWORD *)a3 = v39;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a4,
               &v52,
               (unsigned int)v9);
        if ( v5 >= 0 )
          *a5 = 1;
      }
      else
      {
        v15 = v14[1];
        if ( v10 == *v14 )
        {
          v16 = *((unsigned int *)a3 + 2);
          v17 = v14[2];
          if ( v11 < v15 )
          {
            v53 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v17, v16);
            v41 = -1;
            v42 = *(_DWORD **)(*a4 + 8 * v9);
            v43 = v42[1];
            if ( v40 < v43 )
              v43 = v40;
            HIDWORD(v52) = v43;
            if ( v43 != -1 )
              v41 = v43 + 1;
            *(_DWORD *)a3 = v41;
            *v42 = v43 + 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v52,
                   (unsigned int)v9);
            if ( v5 >= 0 )
            {
              *a5 = 1;
              LODWORD(v9) = v9 + 1;
            }
          }
          else if ( v11 == v15 )
          {
            if ( a2 == 8 || a2 == 1 )
              v18 = v17 | v16;
            else
              v18 = v17 & ~(_DWORD)v16;
            *a5 |= v18 != (_DWORD)v17;
            v19 = HIDWORD(v52);
            *(_DWORD *)(*(_QWORD *)(*a4 + 8 * v9) + 8LL) = v18;
            if ( v19 == -1 )
              v20 = -1;
            else
              v20 = v19 + 1;
            *(_DWORD *)a3 = v20;
          }
          else
          {
            v33 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(v17, v16);
            v34 = *(_QWORD *)(*a4 + 8 * v9);
            v35 = *(_DWORD *)(v34 + 4);
            HIDWORD(v52) = v35;
            if ( v35 == -1 )
              v36 = -1;
            else
              v36 = v35 + 1;
            *(_QWORD *)v34 = v52;
            *(_DWORD *)(v34 + 8) = v33;
            *(_DWORD *)a3 = v36;
          }
        }
        else if ( v11 < v15 )
        {
          v53 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                  v14[2],
                  *((unsigned int *)a3 + 2));
          v44 = *(__int64 **)(*a4 + 8 * v9);
          v45 = *v44;
          v55 = *((_DWORD *)v44 + 2);
          HIDWORD(v54) = HIDWORD(v45);
          v46 = HIDWORD(v52) + 1;
          v47 = v52;
          LODWORD(v54) = HIDWORD(v52) + 1;
          if ( HIDWORD(v52) == -1 )
            v46 = -1;
          *(_DWORD *)a3 = v46;
          *((_DWORD *)v44 + 1) = v47 - 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v52,
                 (unsigned int)(v9 + 1));
          if ( v5 >= 0 )
          {
            v48 = (unsigned int)(v9 + 2);
            *a5 = 1;
            LODWORD(v9) = v9 + 1;
            v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                   a4,
                   &v54,
                   v48);
          }
          v49 = v9 + 1;
          if ( v5 < 0 )
            v49 = v9;
          LODWORD(v9) = v49;
        }
        else if ( v10 <= v15 )
        {
          v53 = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                  v14[2],
                  *((unsigned int *)a3 + 2));
          v29 = *(_QWORD *)(*a4 + 8 * v9);
          v30 = *(_DWORD *)(v29 + 4);
          HIDWORD(v52) = v30;
          v31 = v30 == -1 ? -1 : v30 + 1;
          *(_DWORD *)a3 = v31;
          *(_DWORD *)(v29 + 4) = v52 - 1;
          v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                 a4,
                 &v52,
                 (unsigned int)(v9 + 1));
          if ( v5 >= 0 )
          {
            *a5 = 1;
            LODWORD(v9) = v9 + 1;
          }
        }
      }
      v21 = *(_DWORD **)(*a4 + 8LL * (unsigned int)v9);
      v22 = v21[2];
      if ( v22 )
      {
        if ( !(_DWORD)v9 )
          goto LABEL_17;
        v50 = (unsigned int)(v9 - 1);
        v51 = *(_DWORD **)(*a4 + 8 * v50);
        if ( v22 != v51[2] )
          goto LABEL_17;
        *v21 = *v51;
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v50);
        LODWORD(v9) = v9 - 1;
      }
      else
      {
        CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
          a4,
          (unsigned int)v9);
        LODWORD(v9) = v9 - 1;
      }
      *a5 = 1;
LABEL_17:
      v9 = (unsigned int)(v9 + 1);
      if ( v5 < 0 )
      {
LABEL_18:
        if ( v5 < 0 )
          return (unsigned int)v5;
        goto LABEL_19;
      }
    }
  }
  if ( *((_DWORD *)a4 + 2) != 1
    || (v27 = *(_DWORD **)*a4, v27[2] != *((_DWORD *)a3 + 2))
    || *v27 != *(_DWORD *)a3
    || v27[1] != *((_DWORD *)a3 + 1) )
  {
    v28 = 0LL;
    for ( *a5 = 1; (unsigned int)v28 < *((_DWORD *)a4 + 2); v28 = (unsigned int)(v28 + 1) )
    {
      v32 = *(char **)(*a4 + 8 * v28);
      if ( v32 )
        GreDeleteFastMutex(v32);
    }
    *((_DWORD *)a4 + 2) = 0;
    return (unsigned int)CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
                           a4,
                           a3,
                           0LL);
  }
  return (unsigned int)v5;
}
