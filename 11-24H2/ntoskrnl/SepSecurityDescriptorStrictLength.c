/*
 * XREFs of SepSecurityDescriptorStrictLength @ 0x140861EB8
 * Callers:
 *     RtlLengthSecurityDescriptorStrict @ 0x14047B1E0 (RtlLengthSecurityDescriptorStrict.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1404A65E4 (SepCheckAndCopySelfRelativeSD.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140861BC0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SeOperationAuditAlarm @ 0x140862250 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSecurityDescriptorStrictLength(__int64 a1)
{
  __int16 v1; // r10
  __int64 v2; // rax
  unsigned int v3; // r9d
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // r8

  v1 = *(_WORD *)(a1 + 2);
  v2 = 20LL;
  if ( v1 >= 0 )
    v2 = 40LL;
  v3 = v2;
  v4 = a1 + v2;
  if ( v1 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v5 )
      goto LABEL_9;
    v6 = a1 + v5;
  }
  if ( v6 )
  {
    v3 += (4 * *(unsigned __int8 *)(v6 + 1) + 11) & 0xFFFFFFFC;
    v4 = v6 + ((4 * *(unsigned __int8 *)(v6 + 1) + 11) & 0xFFFFFFFC);
  }
  if ( v1 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 16);
    goto LABEL_11;
  }
LABEL_9:
  v7 = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)v7 )
    goto LABEL_14;
  v8 = a1 + v7;
LABEL_11:
  if ( v8 )
  {
    v9 = (4 * *(unsigned __int8 *)(v8 + 1) + 11) & 0xFFFFFFFC;
    v10 = v9 + v8;
    v3 += v9;
    if ( v10 > v4 )
      v4 = v10;
  }
LABEL_14:
  if ( (v1 & 4) == 0 )
    goto LABEL_21;
  if ( v1 >= 0 )
  {
    v12 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v11 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v11 )
      goto LABEL_21;
    v12 = a1 + v11;
  }
  if ( v12 )
  {
    v13 = (*(unsigned __int16 *)(v12 + 2) + 3) & 0xFFFFFFFC;
    v14 = v13 + v12;
    v3 += v13;
    if ( v14 > v4 )
      v4 = v14;
  }
LABEL_21:
  if ( (v1 & 0x10) == 0 )
    goto LABEL_28;
  if ( v1 >= 0 )
  {
    v16 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v15 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v15 )
      goto LABEL_28;
    v16 = a1 + v15;
  }
  if ( v16 )
  {
    v17 = (*(unsigned __int16 *)(v16 + 2) + 3) & 0xFFFFFFFC;
    v18 = v17 + v16;
    v3 += v17;
    if ( v18 > v4 )
      LODWORD(v4) = v18;
  }
LABEL_28:
  if ( v1 < 0 )
    return (unsigned int)(v4 - a1);
  else
    return v3;
}
