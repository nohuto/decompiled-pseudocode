/*
 * XREFs of IopLiveDumpAddTriageDumpData @ 0x1405980D0
 * Callers:
 *     <none>
 * Callees:
 *     KeValidateBugCheckCallbackRecord @ 0x1405B2970 (KeValidateBugCheckCallbackRecord.c)
 *     KiValidateComponentName @ 0x1405B44A4 (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x1405B454C (KiValidateTriageDumpDataArray.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IopLiveDumpAddTriageDumpData(int *a1, __int64 a2)
{
  PVOID *v2; // rbx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int128 v12; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  PVOID *v16; // [rsp+B8h] [rbp+48h] BYREF

  v2 = (PVOID *)KeBugCheckReasonCallbackListHead;
  v15 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( KeBugCheckReasonCallbackListHead && qword_140F21D98 )
  {
    v16 = &KeBugCheckReasonCallbackListHead;
    while ( v2 != &KeBugCheckReasonCallbackListHead )
    {
      if ( (unsigned __int8)KeValidateBugCheckCallbackRecord(v2, 7LL, &v16) )
      {
        v5 = *a1;
        *(_QWORD *)&v12 = 0LL;
        LODWORD(v13) = v5;
        *((_QWORD *)&v13 + 1) = *((_QWORD *)a1 + 1);
        v14 = *((_OWORD *)a1 + 1);
        v15 = *((_QWORD *)a1 + 4);
        HIDWORD(v12) = 0x2000000;
        guard_dispatch_icall_no_overrides(7LL, v2, &v12, 56LL);
        if ( (_QWORD)v12 )
        {
          if ( (unsigned __int8)KiValidateTriageDumpDataArray(v12, v6, 0x2000000LL) )
          {
            if ( (unsigned __int8)KiValidateComponentName((STRSAFE_PCNZCH)v2[3]) )
            {
              if ( *(_DWORD *)(v12 + 16) )
              {
                MmAddRangeToCrashDump(a2, v2[3], 1LL);
                v7 = v12;
                for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 16); i = (unsigned int)(i + 1) )
                {
                  v9 = *(_QWORD *)(v7 + 16 * (i + 3));
                  if ( v9 )
                  {
                    v10 = *(_QWORD *)(v7 + 16LL * (unsigned int)i + 56);
                    if ( v10 )
                    {
                      MmAddRangeToCrashDump(a2, v9, v10);
                      v7 = v12;
                    }
                  }
                }
              }
            }
          }
        }
      }
      else if ( !v16 )
      {
        return 0LL;
      }
      v2 = (PVOID *)*v2;
    }
  }
  return 0LL;
}
