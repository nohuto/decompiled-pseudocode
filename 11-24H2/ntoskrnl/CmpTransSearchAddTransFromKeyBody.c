/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x14087D698
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpSecurityMethod @ 0x14084F0D0 (CmpSecurityMethod.c)
 *     NtDeleteKey @ 0x14086DAE0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmQueryValueKey @ 0x140878C30 (CmQueryValueKey.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1408E39F0 (NtEnumerateValueKey.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140A5F148 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransReferenceTransaction @ 0x14087D3B8 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14087D58C (CmpTransDereferenceTransaction.c)
 *     CmpTransSearchAddTrans @ 0x14087E39C (CmpTransSearchAddTrans.c)
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
