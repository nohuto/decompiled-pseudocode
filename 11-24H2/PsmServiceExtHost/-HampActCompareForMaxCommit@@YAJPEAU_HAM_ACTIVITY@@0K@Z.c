/*
 * XREFs of ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x18005A7A0
 * Callers:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x18001A728 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800293A0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampActCompareForMaxCommit(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY *a2, char a3)
{
  int v3; // eax
  char v4; // r8
  int v5; // r9d
  char v6; // r8
  bool v7; // zf
  int v8; // r8d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  struct _HAM_ACTIVITY *v11; // r8

  v3 = 0;
  if ( (a3 & 1) == 0 )
  {
    v4 = *((_BYTE *)a1 + 562);
    if ( v4 == 3 )
    {
      v5 = 1;
    }
    else
    {
      v5 = 0;
      if ( v4 == 2 )
        LOBYTE(v5) = *((_BYTE *)a1 + 563) >= 5u;
    }
    v6 = *((_BYTE *)a2 + 562);
    if ( v6 == 3 )
    {
      v8 = 1;
    }
    else
    {
      v7 = v6 == 2;
      v8 = 0;
      if ( v7 )
        LOBYTE(v8) = *((_BYTE *)a2 + 563) >= 5u;
    }
    if ( v5 )
    {
      if ( !v8 )
        return 1LL;
    }
    else if ( v8 )
    {
      return 0xFFFFFFFFLL;
    }
  }
  if ( (*((_DWORD *)a1 + 28) & 0x10000) != 0 )
  {
    if ( (*((_DWORD *)a2 + 28) & 0x10000) == 0 )
      return 1LL;
  }
  else if ( (*((_DWORD *)a2 + 28) & 0x10000) != 0 )
  {
    return 0xFFFFFFFFLL;
  }
  v9 = *((_QWORD *)a1 + 57);
  if ( v9 < *((_QWORD *)a2 + 57) )
    return 0xFFFFFFFFLL;
  if ( v9 <= *((_QWORD *)a2 + 57) )
  {
    v10 = *((_QWORD *)a1 + 58);
    if ( v10 <= *((_QWORD *)a2 + 58) )
    {
      if ( v10 >= *((_QWORD *)a2 + 58) )
      {
        v11 = *(struct _HAM_ACTIVITY **)(*((_QWORD *)a1 + 10) + 1016LL);
        if ( a1 != v11 )
        {
          LOBYTE(v3) = a2 != v11;
          return (unsigned int)(v3 - 1);
        }
        return 1LL;
      }
      return 0xFFFFFFFFLL;
    }
  }
  return 1LL;
}
