/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x140879368
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpSecurityMethod @ 0x140852E10 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086C850 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmQueryValueKey @ 0x140874900 (CmQueryValueKey.c)
 *     CmEnumerateKey @ 0x14087C950 (CmEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x14090C2D0 (NtEnumerateValueKey.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A66364 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransReferenceTransaction @ 0x140879088 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14087925C (CmpTransDereferenceTransaction.c)
 *     CmpTransSearchAddTrans @ 0x14087A4F0 (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edi
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1[7];
  v3 = 0LL;
  v13 = 0LL;
  if ( !v2 && !a1[8] )
    return (unsigned int)-1072103422;
  v6 = a1[1];
  v7 = v6 ^ 1;
  if ( (v6 & 1) == 0 )
    v7 = v6;
  if ( (v2 & 1) != 0 )
  {
    v8 = CmpTransReferenceTransaction(v2);
    if ( v8 >= 0 )
    {
      v3 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFFEuLL) + 16);
      if ( v3 )
      {
        v8 = 0;
      }
      else
      {
        v3 = v13;
        v8 = -1072103422;
      }
      if ( v2 )
        CmpTransDereferenceTransaction(v2);
    }
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 32);
    v11 = *(_QWORD *)(v10 + 4152);
    if ( !v11 )
      return (unsigned int)-1072103419;
    v12 = CmpTransSearchAddTrans(v2, a1[8], v11, v10, 0, (__int64)&v13);
    v3 = v13;
    v8 = v12;
  }
  if ( v8 >= 0 )
  {
    *a2 = v3;
    return 0;
  }
  return (unsigned int)v8;
}
