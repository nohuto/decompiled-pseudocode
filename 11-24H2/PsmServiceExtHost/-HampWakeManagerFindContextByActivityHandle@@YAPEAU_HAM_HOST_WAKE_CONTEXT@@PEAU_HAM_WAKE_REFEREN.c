/*
 * XREFs of ?HampWakeManagerFindContextByActivityHandle@@YAPEAU_HAM_HOST_WAKE_CONTEXT@@PEAU_HAM_WAKE_REFERENCE_MANAGER@@_K@Z @ 0x180084D14
 * Callers:
 *     ?HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z @ 0x18006BDF0 (-HampWakeManagerActivityCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@PEAX@Z.c)
 * Callees:
 *     ?HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180084C7C (-HampWakeContextTreeCompareByActivityId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _HAM_HOST_WAKE_CONTEXT *__fastcall HampWakeManagerFindContextByActivityHandle(
        struct _HAM_WAKE_REFERENCE_MANAGER *a1,
        __int64 a2)
{
  char v2; // di
  unsigned __int64 v3; // rcx
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 v7; // rax
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *((_BYTE *)a1 + 88);
  v3 = (unsigned __int64)a1 + 80;
  v4 = v2 & 1;
  v5 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v5 )
    {
      v5 ^= v3;
      goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    while ( v5 )
    {
      v6 = HampWakeContextTreeCompareByActivityId(&v9, (struct _RTL_BALANCED_NODE *)v5);
      if ( v6 >= 0 )
      {
        if ( v6 <= 0 )
          return (struct _HAM_HOST_WAKE_CONTEXT *)((v5 - 64) & -(__int64)(v5 != 0));
        v7 = *(_QWORD *)(v5 + 8);
      }
      else
      {
        v7 = *(_QWORD *)v5;
      }
      if ( v4 && v7 )
        v5 ^= v7;
      else
        v5 = v7;
    }
  }
  return (struct _HAM_HOST_WAKE_CONTEXT *)((v5 - 64) & -(__int64)(v5 != 0));
}
