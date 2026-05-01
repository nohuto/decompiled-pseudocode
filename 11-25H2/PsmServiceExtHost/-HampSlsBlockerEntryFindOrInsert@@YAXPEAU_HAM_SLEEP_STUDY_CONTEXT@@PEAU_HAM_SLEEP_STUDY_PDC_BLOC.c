/*
 * XREFs of ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x1800670AC
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003BA14 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180067184 (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER.c)
 *     ?HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180067220 (-HampSlsBlockerEntryCompare@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall HampSlsBlockerEntryFindOrInsert(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  __int64 v6; // r8
  char v7; // di
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 88LL);
  v7 = 0;
  if ( (int)HampSlsBlockerEntryFind(a1, v12, a3) < 0 )
  {
    v8 = (unsigned __int64)a1 + 16;
    v9 = *(_QWORD *)v8;
    if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
    {
      if ( v9 )
        v9 ^= v8;
    }
    v10 = *(_BYTE *)(v8 + 8) & 1;
    if ( v9 )
    {
      while ( 1 )
      {
        if ( (int)HampSlsBlockerEntryCompare(&v12, (struct _RTL_BALANCED_NODE *)v9) < 0 )
        {
          v11 = *(_QWORD *)v9;
          if ( v10 )
          {
            if ( !v11 )
              break;
            v11 ^= v9;
          }
          if ( !v11 )
            break;
        }
        else
        {
          v11 = *(_QWORD *)(v9 + 8);
          if ( v10 )
          {
            if ( !v11 )
              goto LABEL_11;
            v11 ^= v9;
          }
          if ( !v11 )
          {
LABEL_11:
            v7 = 1;
            break;
          }
        }
        v9 = v11;
      }
    }
    LOBYTE(v6) = v7;
    RtlRbInsertNodeEx(v8, v9, v6, a2);
    *a3 = a2;
  }
}
