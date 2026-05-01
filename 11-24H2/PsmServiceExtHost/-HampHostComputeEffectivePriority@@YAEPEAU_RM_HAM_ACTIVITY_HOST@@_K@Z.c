/*
 * XREFs of ?HampHostComputeEffectivePriority@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18005F0F0
 * Callers:
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180070B04 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall HampHostComputeEffectivePriority(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r10
  struct _RM_HAM_ACTIVITY_HOST *v3; // r8
  unsigned __int8 v4; // r9
  char *v5; // r8
  char v6; // al
  unsigned __int8 v7; // cl
  __int64 v8; // rax
  unsigned __int8 v10; // al

  v2 = *((_QWORD *)a1 + 109);
  v3 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  v4 = 80;
  if ( v3 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v5 = (char *)v3 - 96;
    if ( v5 )
    {
      do
      {
        v6 = v5[562];
        v7 = v4;
        if ( (v6 == 3 || v6 == 2 && v5[563]) && (v5[552] & 8) == 0 )
        {
          if ( a2 < v2 )
          {
            v10 = v4;
            if ( v4 >= (unsigned __int8)v5[427] )
              v10 = v5[427];
            v4 = v10;
          }
          else
          {
            v4 = v5[428];
            if ( v7 < v4 )
              v4 = v7;
          }
        }
        v8 = *((_QWORD *)v5 + 12);
        if ( v8 == *((_QWORD *)v5 + 10) + 608LL )
          break;
        v5 = (char *)(v8 - 96);
      }
      while ( v8 != 96 );
    }
  }
  return v4;
}
