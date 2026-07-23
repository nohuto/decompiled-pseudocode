/*
 * XREFs of KeHwPolicyLocateResource @ 0x140C177A0
 * Callers:
 *     KiIntersectFeaturesWithPolicy @ 0x140B46F14 (KiIntersectFeaturesWithPolicy.c)
 *     HalpWheaInitDiscard @ 0x140BFEBD4 (HalpWheaInitDiscard.c)
 * Callees:
 *     LdrResSearchResource @ 0x14083CDF0 (LdrResSearchResource.c)
 *     RtlCompareUnicodeString @ 0x140939BB0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall KeHwPolicyLocateResource(__int64 a1, __int64 a2, wchar_t *a3, _QWORD *a4, __int64 *a5)
{
  unsigned __int64 v7; // rcx
  int *v10; // rdi
  int *i; // rbx
  __int64 v12; // rcx
  UNICODE_STRING String2; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h]

  v7 = KiHwPolicyDriverImageBase;
  if ( KiHwPolicyDriverImageBase )
  {
LABEL_10:
    v15 = 0LL;
    *(_QWORD *)&String2.Length = a2;
    String2.Buffer = a3;
    return LdrResSearchResource(v7, &String2, 3u, 48, a4, a5, 0LL, 0LL);
  }
  if ( !KiHwPolicyDriverNotPresent )
  {
    v10 = (int *)(a1 + 48);
    *(_QWORD *)&String2.Length = 1703960LL;
    String2.Buffer = L"hwpolicy.sys";
    for ( i = *(int **)v10; ; i = *(int **)i )
    {
      if ( i == v10 )
      {
        KiHwPolicyDriverImageBase = 0LL;
        goto LABEL_12;
      }
      v12 = *((_QWORD *)i + 6);
      if ( v12 )
      {
        if ( i[14] >= 0 && !RtlCompareUnicodeString((PCUNICODE_STRING)(v12 + 88), &String2, 1u) )
          break;
      }
    }
    v7 = *(_QWORD *)(*((_QWORD *)i + 6) + 48LL);
    KiHwPolicyDriverImageBase = v7;
    if ( !v7 )
      goto LABEL_12;
    goto LABEL_10;
  }
LABEL_12:
  KiHwPolicyDriverNotPresent = 1;
  return 3221226092LL;
}
