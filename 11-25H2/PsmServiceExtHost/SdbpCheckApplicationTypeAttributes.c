/*
 * XREFs of SdbpCheckApplicationTypeAttributes @ 0x180099014
 * Callers:
 *     SdbpCheckBackupApplicationAttributes @ 0x180099320 (SdbpCheckBackupApplicationAttributes.c)
 *     SdbpCheckPackageAttributes @ 0x18009AA90 (SdbpCheckPackageAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     ULongLongMult @ 0x180091D08 (ULongLongMult.c)
 *     SdbGetTagFromTagID @ 0x1800924FC (SdbGetTagFromTagID.c)
 *     Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck @ 0x180096A54 (Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck.c)
 *     SdbpCheckFromStringVersion @ 0x180096FE4 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckFromVersion @ 0x18009710C (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x180097154 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckUptoVersion @ 0x180097288 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1800972D0 (SdbpCheckVersion.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x180098128 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800981C4 (SdbReadQWORDTag.c)
 *     AslStringPatternMatchExW @ 0x18009E3B8 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckApplicationTypeAttributes(int *a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  int v9; // esi
  unsigned __int64 v10; // r14
  unsigned int FirstTag; // r11d
  ULONGLONG v12; // rax
  ULONGLONG v13; // r10
  ULONGLONG v14; // rdi
  ULONGLONG v15; // rcx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  bool v25; // zf
  __int64 StringTagPtr; // rax
  int v27; // eax
  unsigned __int64 QWORDTag; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  int DWORDTag; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned __int16 *v38; // rax
  unsigned __int16 *v39; // rax
  ULONGLONG pullResult; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0;
  v9 = 1;
  Feature_Servicing_MercuryNewSdbTagsForBackup__private_IsEnabledPreCheck();
  v10 = 0LL;
  while ( 1 )
  {
    FirstTag = SdbFindFirstTag(a2, a3, *(_WORD *)((char *)&unk_1800E78B0 + v10));
    if ( FirstTag )
    {
      v12 = a4[2];
      v13 = 0LL;
      if ( v12 )
      {
        while ( 1 )
        {
          v14 = 0LL;
          if ( v13 < v12 )
          {
            v15 = a4[1];
            pullResult = 0LL;
            if ( ULongLongMult(v15, v13, &pullResult) < 0 || (v14 = a4[5] + pullResult, v14 < a4[5]) )
              v14 = 0LL;
          }
          if ( *(_WORD *)v14 == *(_WORD *)((char *)&unk_1800E78B0 + v10 + 2) )
            break;
          v12 = a4[2];
          if ( ++v13 >= v12 )
            goto LABEL_10;
        }
        if ( v14 )
        {
          v17 = *(unsigned __int16 *)((char *)&unk_1800E78B0 + v10);
          if ( v17 <= 0x6011 )
          {
            if ( v17 == 24593 )
              goto LABEL_28;
            v18 = v17 - 16453;
            if ( !v18 )
            {
              DWORDTag = SdbReadDWORDTag(a2, FirstTag, 0xFFFFFFFF);
              if ( DWORDTag == -1 )
                return v4;
              v27 = DWORDTag == *(_DWORD *)(v14 + 8);
              goto LABEL_30;
            }
            v19 = v18 - 4047;
            if ( v19 )
            {
              v20 = v19 - 1;
              if ( !v20 )
                goto LABEL_35;
              v21 = v20 - 1;
              if ( !v21 )
                goto LABEL_33;
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 1;
                if ( v23 )
                {
                  v24 = v23 - 1;
                  if ( v24 )
                  {
                    v25 = v24 == 4072;
LABEL_27:
                    if ( !v25 )
                      return v4;
LABEL_28:
                    StringTagPtr = SdbGetStringTagPtr(a2, FirstTag);
                    if ( !StringTagPtr )
                      return v4;
                    v27 = AslStringPatternMatchExW(StringTagPtr, *(_QWORD *)(v14 + 8));
                    goto LABEL_30;
                  }
LABEL_33:
                  QWORDTag = SdbReadQWORDTag(a2, FirstTag, -1LL);
                  if ( QWORDTag == -1LL )
                    return v4;
                  v27 = SdbpCheckUptoVersion(QWORDTag, *(_QWORD *)(v14 + 8));
                  goto LABEL_30;
                }
LABEL_35:
                v29 = SdbReadQWORDTag(a2, FirstTag, -1LL);
                if ( v29 == -1LL )
                  return v4;
                v27 = SdbpCheckFromVersion(v29, *(_QWORD *)(v14 + 8));
                goto LABEL_30;
              }
            }
            v30 = SdbReadQWORDTag(a2, FirstTag, -1LL);
            if ( v30 == -1LL )
              return v4;
            v27 = SdbpCheckVersion(v30, *(_QWORD *)(v14 + 8));
            goto LABEL_30;
          }
          v32 = v17 - 24617;
          if ( !v32 )
            goto LABEL_28;
          v33 = v32 - 1;
          if ( !v33 )
            goto LABEL_28;
          v34 = v33 - 1;
          if ( !v34 )
            goto LABEL_28;
          v35 = v34 - 23;
          if ( !v35 )
            goto LABEL_28;
          v36 = v35 - 2;
          if ( v36 )
          {
            v37 = v36 - 2;
            if ( v37 )
            {
              v25 = v37 == 2;
              goto LABEL_27;
            }
            v38 = (unsigned __int16 *)SdbGetStringTagPtr(a2, FirstTag);
            if ( !v38 )
              return v4;
            v27 = SdbpCheckFromStringVersion(v38, *(unsigned __int16 **)(v14 + 8));
          }
          else
          {
            v39 = (unsigned __int16 *)SdbGetStringTagPtr(a2, FirstTag);
            if ( !v39 )
              return v4;
            v27 = SdbpCheckUptoStringVersion(v39, *(unsigned __int16 **)(v14 + 8));
          }
LABEL_30:
          if ( v9 && v27 )
          {
            v9 = 1;
            goto LABEL_13;
          }
LABEL_12:
          v9 = 0;
          goto LABEL_13;
        }
      }
LABEL_10:
      if ( *(_WORD *)((char *)&unk_1800E78B0 + v10) != 24577 )
        break;
    }
LABEL_13:
    v10 += 4LL;
    if ( v10 >= 0x40 )
    {
      *a1 = v9;
      return 1;
    }
  }
  if ( (unsigned __int16)SdbGetTagFromTagID(a2, a3) == 28768 )
    goto LABEL_12;
  AslLogCallPrintf(1LL);
  return v4;
}
