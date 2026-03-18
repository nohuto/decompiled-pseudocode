/*
 * XREFs of KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1405B3EF8
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline @ 0x1405B1608 (Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405B2970 (KeValidateBugCheckCallbackRecord.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x1405B36BC (KiDeduplicateTriageDumpDataArrays.c)
 *     KiValidateComponentName @ 0x1405B44A4 (KiValidateComponentName.c)
 *     KiValidateTriageDumpDataArray @ 0x1405B454C (KiValidateTriageDumpDataArray.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char KiInvokeBugCheckAddTriageDumpDataCallbacks()
{
  __int64 v0; // rax
  PVOID *v1; // rbx
  __int64 v2; // rdx
  _DWORD *v3; // r15
  __int64 *v4; // rdi
  __int64 *v5; // rdx
  __int128 v7; // [rsp+38h] [rbp-60h] BYREF
  __int128 v8; // [rsp+48h] [rbp-50h]
  __int128 v9; // [rsp+58h] [rbp-40h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  PVOID *v11; // [rsp+A8h] [rbp+10h] BYREF
  PVOID *v12; // [rsp+B0h] [rbp+18h]
  PVOID *v13; // [rsp+B8h] [rbp+20h]

  LOBYTE(v0) = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v1 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140F21D98 )
  {
    v11 = &KeBugCheckReasonCallbackListHead;
    while ( 1 )
    {
      v12 = v1;
      if ( v1 == &KeBugCheckReasonCallbackListHead )
        break;
      v13 = v1;
      LOBYTE(v0) = KeValidateBugCheckCallbackRecord((__int64)v1, 7, &v11);
      if ( (_BYTE)v0 )
      {
        *(_QWORD *)&v7 = 0LL;
        *((_QWORD *)&v7 + 1) = 0x200000000000001LL;
        LODWORD(v8) = KiBugCheckData;
        *((_QWORD *)&v8 + 1) = qword_140F22748;
        v9 = xmmword_140F22750;
        v10 = qword_140F22760;
        LOBYTE(v0) = guard_dispatch_icall_no_overrides(7LL, v1, &v7, 56LL);
        if ( (_QWORD)v7
          && (LOBYTE(v0) = KiValidateTriageDumpDataArray(v7, v2, 0x2000000LL), (_BYTE)v0)
          && (LOBYTE(v0) = KiValidateComponentName((STRSAFE_PCNZCH)v1[3]), (_BYTE)v0) )
        {
          if ( (unsigned int)Feature_TriageDumpDataExtension__private_IsEnabledDeviceUsageNoInline() )
          {
            v3 = (_DWORD *)v7;
            v4 = (__int64 *)KeBugCheckTriageDumpDataArrayListHead;
            if ( KeBugCheckTriageDumpDataArrayListHead )
            {
              if ( qword_140F21D88 )
              {
                while ( v4 != &KeBugCheckTriageDumpDataArrayListHead )
                {
                  KiDeduplicateTriageDumpDataArrays(v3, (__int64)v4);
                  v4 = (__int64 *)*v4;
                }
              }
            }
          }
          *(_QWORD *)(v7 + 40) = v1[3];
          *(_DWORD *)(v7 + 32) = 1;
          v0 = v7;
          v5 = (__int64 *)qword_140F21D88;
          if ( *(__int64 **)qword_140F21D88 != &KeBugCheckTriageDumpDataArrayListHead )
            __fastfail(3u);
          *(_QWORD *)v7 = &KeBugCheckTriageDumpDataArrayListHead;
          *(_QWORD *)(v0 + 8) = v5;
          *v5 = v0;
          qword_140F21D88 = v0;
          *((_BYTE *)v1 + 44) = 3;
        }
        else
        {
          *((_WORD *)v1 + 22) = 260;
        }
      }
      else if ( !v11 )
      {
        return v0;
      }
      v1 = (PVOID *)*v1;
    }
  }
  return v0;
}
