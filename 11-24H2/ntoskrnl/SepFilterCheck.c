/*
 * XREFs of SepFilterCheck @ 0x1403B9AB0
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x14090B020 (SepAdjustAccessStateForConstraints.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x140994420 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x14099A7A0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403BAD50 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepFilterCheck(__int64 a1, void **a2, __int64 a3, char a4, __int64 a5)
{
  void **v6; // rdi
  int v7; // r15d
  char v8; // r13
  __int64 v9; // r10
  unsigned int v10; // ebp
  __int16 v11; // ax
  unsigned int v12; // esi
  __int64 v13; // rbx
  void **v14; // r14
  char v15; // r8
  __int64 v16; // rsi
  unsigned int i; // ecx
  void *v18; // r9
  void *v19; // r8
  void *v20; // r11
  void **v21; // r14
  void ***v22; // rbx
  void **v23; // rcx
  void **v24; // rax
  void **v25; // rsi
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  void **v28; // rax
  char *v30; // r15
  __int64 v31; // rax
  _QWORD **v32; // r8
  void **v33; // rdx
  unsigned int v34; // ebp
  int v35; // eax
  _QWORD *v36; // rax
  void *v37; // r9
  void *v38; // r8
  void *v39; // r11
  _QWORD *v40; // rax
  int v41; // eax
  char *v42; // r11
  PVOID v43; // r11
  struct _KTHREAD *CurrentThread; // rax
  int v45; // [rsp+60h] [rbp-68h] BYREF
  int v46; // [rsp+64h] [rbp-64h]
  int v47; // [rsp+68h] [rbp-60h]
  void **v48; // [rsp+70h] [rbp-58h] BYREF
  char v49; // [rsp+D0h] [rbp+8h]
  int v50; // [rsp+D8h] [rbp+10h]
  void *v51; // [rsp+D8h] [rbp+10h]
  void *v52; // [rsp+D8h] [rbp+10h]
  char v54; // [rsp+E8h] [rbp+20h]
  unsigned __int16 v55; // [rsp+F0h] [rbp+28h]

  v54 = a4;
  v6 = 0LL;
  v7 = -1;
  v48 = 0LL;
  v8 = 0;
  v45 = 0;
  v9 = a3;
  v50 = 0;
  *(_DWORD *)a5 = -1;
  v10 = 0;
  v11 = *(_WORD *)(a1 + 2);
  v12 = 0;
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v31 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v31 )
        v13 = a1 + v31;
      else
        v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v14 = (void **)&v48;
  if ( a2 )
    v14 = a2;
  v15 = 0;
  v49 = 0;
  if ( !v13 )
    goto LABEL_18;
  while ( 2 )
  {
    v16 = v13 + 8;
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(v13 + 4) )
        goto LABEL_16;
      if ( i >= v10 && *(_BYTE *)v16 == 21 )
        break;
      v16 += *(unsigned __int16 *)(v16 + 2);
    }
    v34 = i;
    if ( (*(_BYTE *)(v16 + 1) & 8) != 0 )
      goto LABEL_15;
    v55 = 4 * (*(unsigned __int8 *)(v16 + 9) + 2);
    v35 = *(unsigned __int16 *)(v16 + 2) - v55;
    v47 = v55;
    if ( v35 - 8 > 0 )
    {
      v46 = *(_DWORD *)(v16 + 4);
      if ( (v46 & 0xFF000000) == 0 )
      {
        if ( a4 && !v8 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 48), 1u);
          v9 = a3;
          v8 = 1;
        }
        if ( !*v14 )
        {
          v50 = AuthzBasepInitializeResourceClaimsFromSacl(v13, v14);
          if ( v50 < 0 )
            goto LABEL_16;
          v9 = a3;
        }
        v36 = *(_QWORD **)(v9 + 1096);
        v45 = -1;
        if ( v36 )
        {
          v37 = (void *)v36[72];
          v38 = (void *)v36[74];
          v39 = (void *)v36[73];
          v52 = (void *)v36[75];
        }
        else
        {
          v37 = 0LL;
          v52 = 0LL;
          v38 = 0LL;
          v39 = 0LL;
        }
        v50 = AuthzBasepEvaluateAceCondition(
                (_DWORD *)v9,
                *(void **)(v9 + 776),
                *v14,
                v37,
                v38,
                v39,
                v52,
                (_DWORD *)(v16 + v55 + 8LL),
                (unsigned int)*(unsigned __int16 *)(v16 + 2) - v47 - 8,
                1u,
                0,
                &v45);
        if ( v50 >= 0 )
        {
          v15 = v49;
          if ( v45 != 1 )
          {
            v15 = v49;
            if ( (*(_BYTE *)(v16 + 1) & 0x40) != 0 )
              v15 = 1;
            v49 = v15;
            v7 &= v46 | 0x1000000;
          }
          v9 = a3;
          if ( (*(_DWORD *)(a3 + 200) & 0x10) == 0 )
          {
            a4 = v54;
            goto LABEL_15;
          }
          v40 = *(_QWORD **)(a3 + 1096);
          v45 = -1;
          if ( v40 )
          {
            v18 = (void *)v40[72];
            v19 = (void *)v40[74];
            v20 = (void *)v40[73];
            v51 = (void *)v40[75];
          }
          else
          {
            v18 = 0LL;
            v51 = 0LL;
            v19 = 0LL;
            v20 = 0LL;
          }
          v50 = AuthzBasepEvaluateAceCondition(
                  (_DWORD *)a3,
                  *(void **)(a3 + 776),
                  *v14,
                  v18,
                  v19,
                  v20,
                  v51,
                  (_DWORD *)(v16 + v55 + 8LL),
                  *(unsigned __int16 *)(v16 + 2) - (unsigned int)v55 - 8,
                  1u,
                  1u,
                  &v45);
          if ( v50 >= 0 )
          {
            v9 = a3;
            a4 = v54;
            if ( v45 == 1 )
            {
              v15 = v49;
            }
            else
            {
              v15 = v49;
              if ( (*(_BYTE *)(v16 + 1) & 0x40) != 0 )
                v15 = 1;
              v49 = v15;
              v7 &= v46 | 0x1000000;
            }
LABEL_15:
            v10 = v34 + 1;
            if ( v16 )
              continue;
          }
        }
LABEL_16:
        v12 = v50;
        v15 = v49;
        v9 = a3;
        goto LABEL_17;
      }
    }
    break;
  }
  v12 = -1073741705;
  v50 = -1073741705;
LABEL_17:
  v6 = v48;
LABEL_18:
  if ( v7 != -1 )
  {
    *(_DWORD *)a5 = v7;
    *(_BYTE *)(a5 + 4) = v15;
  }
  if ( v8 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 48));
    KeLeaveCriticalRegionThread();
    v6 = v48;
  }
  if ( v6 )
  {
    v21 = v6 + 1;
    while ( 1 )
    {
      v22 = (void ***)*v21;
      if ( *v21 == v21 )
        break;
      if ( ((_DWORD)v22[7] & 1) != 0 )
      {
        v23 = *v22;
        if ( (*v22)[1] != v22 || (v24 = v22[1], *v24 != v22) )
LABEL_35:
          __fastfail(3u);
        *v24 = v23;
        v23[1] = v24;
        *((_DWORD *)v22 + 14) &= ~1u;
        --*(_DWORD *)v6;
      }
      v25 = (void **)(v22 + 9);
      while ( 1 )
      {
        v26 = *v25;
        if ( *v25 == v25 )
          break;
        if ( (v26[4] & 2) != 0 )
        {
          v32 = (_QWORD **)v26[2];
          if ( v32[1] != v26 + 2 )
            goto LABEL_35;
          v33 = (void **)v26[3];
          if ( *v33 != v26 + 2 )
            goto LABEL_35;
          *v33 = v32;
          v32[1] = v33;
          *((_DWORD *)v26 + 8) &= ~2u;
          --*((_DWORD *)v22 + 22);
        }
        if ( (v26[4] & 1) != 0 )
        {
          v27 = (_QWORD *)*v26;
          if ( *(_QWORD **)(*v26 + 8LL) != v26 )
            goto LABEL_35;
          v28 = (void **)v26[1];
          if ( *v28 != v26 )
            goto LABEL_35;
          *v28 = v27;
          v27[1] = v28;
          *((_DWORD *)v26 + 8) &= ~1u;
          --*((_DWORD *)v22 + 15);
          if ( (v26[4] & 4) != 0 )
            --*((_DWORD *)v22 + 16);
        }
        ExFreePoolWithTag(v26, 0);
      }
      v30 = (char *)v22[12];
      while ( v30 != (char *)(v22 + 12) )
      {
        v41 = *((_DWORD *)v30 + 4);
        v42 = v30 - 16;
        v30 = *(char **)v30;
        if ( (v41 & 1) == 0 )
        {
          AuthzBasepRemoveSecurityAttributeValueFromLists(v22, v42, 0LL);
          ExFreePoolWithTag(v43, 0);
        }
      }
      ExFreePoolWithTag(v22, 0);
    }
    ExFreePoolWithTag(v6, 0);
    return (unsigned int)v50;
  }
  return v12;
}
