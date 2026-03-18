/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x140870454
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     NtEnumerateValueKey @ 0x140840320 (NtEnumerateValueKey.c)
 *     CmpSecurityMethod @ 0x140856B80 (CmpSecurityMethod.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086B654 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A639DC (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransReferenceTransaction @ 0x140870E50 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x140870EB0 (CmpTransDereferenceTransaction.c)
 *     CmpTransSearchAddTrans @ 0x140885A48 (CmpTransSearchAddTrans.c)
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
    v8 = CmpTransReferenceTransaction(v2, a2, v7);
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
