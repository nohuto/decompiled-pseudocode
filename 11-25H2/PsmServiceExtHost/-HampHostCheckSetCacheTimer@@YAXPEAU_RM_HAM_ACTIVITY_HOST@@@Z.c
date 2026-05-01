/*
 * XREFs of ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001C218
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001B7F0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001D978 (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostCheckSetCacheTimer(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( HampHostIsCached(a1) )
  {
    v2 = *(unsigned int *)(v1 + 848);
    if ( (_DWORD)v2 != -1 )
    {
      v3 = *(_QWORD *)(v1 + 840);
      v4 = -10000 * v2;
      TpSetTimer(v3, &v4, 0LL, 5000LL);
    }
  }
}
