/*
 * XREFs of SepFilterCheck @ 0x140363580
 * Callers:
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SepAdjustAccessStateForConstraints @ 0x1408F6170 (SepAdjustAccessStateForConstraints.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1409A7210 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1409C2F30 (SeShouldCheckForAccessRightsFromParent.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x140291470 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepFilterCheck(__int64 a1, PVOID *a2, __int64 a3, char a4, __int64 a5)
{
  _DWORD *v5; // rbx
  int v6; // r15d
  char v8; // r10
  __int64 v9; // r9
  char v10; // r13
  unsigned int v11; // ebp
  __int16 v12; // ax
  __int64 v13; // rsi
  PVOID *p_P; // r14
  char v15; // r8
  __int64 v16; // rdi
  unsigned int i; // ecx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned int v23; // esi
  _DWORD **v25; // r14
  _DWORD *v26; // rdi
  __int64 v27; // rcx
  _QWORD *v28; // rax
  void **v29; // rsi
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  void **v32; // rax
  _DWORD *v33; // r15
  _QWORD **v34; // r8
  void **v35; // rdx
  unsigned int v36; // ebp
  int v37; // eax
  _QWORD *v38; // rax
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // r10
  __int64 v42; // r11
  _QWORD *v43; // rax
  int v44; // eax
  __int64 *v45; // r11
  PVOID v46; // r11
  struct _KTHREAD *CurrentThread; // rax
  int v48; // [rsp+60h] [rbp-68h] BYREF
  int v49; // [rsp+64h] [rbp-64h]
  int v50; // [rsp+68h] [rbp-60h]
  PVOID P; // [rsp+70h] [rbp-58h] BYREF
  char v52; // [rsp+D0h] [rbp+8h]
  int v53; // [rsp+D8h] [rbp+10h]
  unsigned __int16 v56; // [rsp+F0h] [rbp+28h]

  v5 = 0LL;
  v6 = -1;
  v8 = a4;
  v9 = a3;
  P = 0LL;
  v10 = 0;
  v48 = 0;
  v11 = 0;
  *(_DWORD *)a5 = -1;
  v12 = *(_WORD *)(a1 + 2);
  v53 = 0;
  if ( (v12 & 0x10) != 0 )
  {
    if ( v12 >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v18 )
        v13 = a1 + v18;
      else
        v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  p_P = &P;
  if ( a2 )
    p_P = a2;
  v15 = 0;
  v52 = 0;
  if ( v13 )
  {
    while ( 2 )
    {
      v16 = v13 + 8;
      for ( i = 0; ; ++i )
      {
        if ( i >= *(unsigned __int16 *)(v13 + 4) )
          goto LABEL_19;
        if ( i >= v11 && *(_BYTE *)v16 == 21 )
          break;
        v16 += *(unsigned __int16 *)(v16 + 2);
      }
      v36 = i;
      if ( (*(_BYTE *)(v16 + 1) & 8) != 0 )
        goto LABEL_18;
      v56 = 4 * (*(unsigned __int8 *)(v16 + 9) + 2);
      v37 = *(unsigned __int16 *)(v16 + 2) - v56;
      v50 = v56;
      if ( v37 - 8 > 0 )
      {
        v49 = *(_DWORD *)(v16 + 4);
        if ( (v49 & 0xFF000000) == 0 )
        {
          if ( v8 && !v10 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 48), 1u);
            v9 = a3;
            v10 = 1;
          }
          if ( !*p_P )
          {
            v53 = AuthzBasepInitializeResourceClaimsFromSacl(v13, p_P);
            if ( v53 < 0 )
              goto LABEL_19;
            v9 = a3;
          }
          v38 = *(_QWORD **)(v9 + 1096);
          v48 = -1;
          if ( v38 )
          {
            v39 = v38[72];
            v40 = v38[74];
            v41 = v38[73];
            v42 = v38[75];
          }
          else
          {
            LODWORD(v39) = 0;
            v40 = 0LL;
            v41 = 0LL;
            v42 = 0LL;
          }
          v53 = AuthzBasepEvaluateAceCondition(
                  a3,
                  *(_QWORD *)(a3 + 776),
                  (unsigned int)*p_P,
                  v39,
                  v40,
                  v41,
                  v42,
                  v16 + v56 + 8LL,
                  (unsigned int)*(unsigned __int16 *)(v16 + 2) - v50 - 8,
                  1,
                  0,
                  (__int64)&v48);
          if ( v53 >= 0 )
          {
            v15 = v52;
            if ( v48 != 1 )
            {
              v15 = v52;
              if ( (*(_BYTE *)(v16 + 1) & 0x40) != 0 )
                v15 = 1;
              v52 = v15;
              v6 &= v49 | 0x1000000;
            }
            v9 = a3;
            if ( (*(_DWORD *)(a3 + 200) & 0x10) == 0 )
            {
              v8 = a4;
              goto LABEL_18;
            }
            v43 = *(_QWORD **)(a3 + 1096);
            v48 = -1;
            if ( v43 )
            {
              v19 = v43[72];
              v20 = v43[74];
              v21 = v43[73];
              v22 = v43[75];
            }
            else
            {
              LODWORD(v19) = 0;
              v20 = 0LL;
              v21 = 0LL;
              v22 = 0LL;
            }
            v53 = AuthzBasepEvaluateAceCondition(
                    a3,
                    *(_QWORD *)(a3 + 776),
                    (unsigned int)*p_P,
                    v19,
                    v20,
                    v21,
                    v22,
                    v16 + v56 + 8LL,
                    *(unsigned __int16 *)(v16 + 2) - (unsigned int)v56 - 8,
                    1,
                    1,
                    (__int64)&v48);
            if ( v53 >= 0 )
            {
              v9 = a3;
              v8 = a4;
              if ( v48 == 1 )
              {
                v15 = v52;
              }
              else
              {
                v15 = v52;
                if ( (*(_BYTE *)(v16 + 1) & 0x40) != 0 )
                  v15 = 1;
                v52 = v15;
                v6 &= v49 | 0x1000000;
              }
LABEL_18:
              v11 = v36 + 1;
              if ( v16 )
                continue;
            }
          }
LABEL_19:
          v5 = P;
          v23 = v53;
          v15 = v52;
          v9 = a3;
          goto LABEL_20;
        }
      }
      break;
    }
    v5 = P;
    v23 = -1073741705;
    v53 = -1073741705;
  }
  else
  {
    v23 = 0;
  }
LABEL_20:
  if ( v6 != -1 )
  {
    *(_DWORD *)a5 = v6;
    *(_BYTE *)(a5 + 4) = v15;
  }
  if ( v10 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 48));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v5 = P;
  }
  if ( v5 )
  {
    v25 = (_DWORD **)(v5 + 2);
    while ( 1 )
    {
      v26 = *v25;
      if ( *v25 == (_DWORD *)v25 )
        break;
      if ( (v26[14] & 1) != 0 )
      {
        v27 = *(_QWORD *)v26;
        if ( *(_DWORD **)(*(_QWORD *)v26 + 8LL) != v26 || (v28 = (_QWORD *)*((_QWORD *)v26 + 1), (_DWORD *)*v28 != v26) )
LABEL_39:
          __fastfail(3u);
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        v26[14] &= ~1u;
        --*v5;
      }
      v29 = (void **)(v26 + 18);
      while ( 1 )
      {
        v30 = *v29;
        if ( *v29 == v29 )
          break;
        if ( (v30[4] & 2) != 0 )
        {
          v34 = (_QWORD **)v30[2];
          if ( v34[1] != v30 + 2 )
            goto LABEL_39;
          v35 = (void **)v30[3];
          if ( *v35 != v30 + 2 )
            goto LABEL_39;
          *v35 = v34;
          v34[1] = v35;
          *((_DWORD *)v30 + 8) &= ~2u;
          --v26[22];
        }
        if ( (v30[4] & 1) != 0 )
        {
          v31 = (_QWORD *)*v30;
          if ( *(_QWORD **)(*v30 + 8LL) != v30 )
            goto LABEL_39;
          v32 = (void **)v30[1];
          if ( *v32 != v30 )
            goto LABEL_39;
          *v32 = v31;
          v31[1] = v32;
          *((_DWORD *)v30 + 8) &= ~1u;
          --v26[15];
          if ( (v30[4] & 4) != 0 )
            --v26[16];
        }
        ExFreePoolWithTag(v30, 0);
      }
      v33 = (_DWORD *)*((_QWORD *)v26 + 12);
      while ( v33 != v26 + 24 )
      {
        v44 = v33[4];
        v45 = (__int64 *)(v33 - 4);
        v33 = *(_DWORD **)v33;
        if ( (v44 & 1) == 0 )
        {
          AuthzBasepRemoveSecurityAttributeValueFromLists(v26, v45, 0);
          ExFreePoolWithTag(v46, 0);
        }
      }
      ExFreePoolWithTag(v26, 0);
    }
    ExFreePoolWithTag(v5, 0);
    return (unsigned int)v53;
  }
  return v23;
}
