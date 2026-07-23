/*
 * XREFs of MicrocodeGetRecord @ 0x140662DD0
 * Callers:
 *     PrExtGetRecord @ 0x140662A58 (PrExtGetRecord.c)
 * Callees:
 *     Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline @ 0x140662788 (Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline.c)
 *     IntelMicrocodeMetaDataCheck @ 0x140663720 (IntelMicrocodeMetaDataCheck.c)
 *     DrpGetRecord @ 0x140663920 (DrpGetRecord.c)
 *     DrpGetRecordCount @ 0x14066395C (DrpGetRecordCount.c)
 *     DrpGetSectionAtIndex @ 0x140663988 (DrpGetSectionAtIndex.c)
 *     AMDMicrocodeMetaDataCheck @ 0x140663AC8 (AMDMicrocodeMetaDataCheck.c)
 *     AMDMicrocodeRecordSizeCheck @ 0x140663BC0 (AMDMicrocodeRecordSizeCheck.c)
 */

__int64 __fastcall MicrocodeGetRecord(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // r14
  char v9; // r15
  __int64 v11; // rdi
  unsigned __int64 v13; // r11
  unsigned int v14; // r13d
  _DWORD *v15; // rbx
  __int64 v16; // rdi
  unsigned __int64 v17; // r8
  int v18; // eax
  char v19; // al
  __int64 v20; // rcx
  _DWORD v21[3]; // [rsp+24h] [rbp-54h] BYREF
  _DWORD *v22; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v23[8]; // [rsp+38h] [rbp-40h] BYREF

  v22 = 0LL;
  v6 = 0;
  v23[0] = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v11 = a2;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    return 3221226021LL;
  }
  v21[0] = 0;
  if ( (int)DrpGetRecordCount(a2, a3, v21) < 0 )
    return 3221225485LL;
  v14 = 0;
  if ( v21[0] )
  {
    while ( 1 )
    {
      if ( (int)DrpGetSectionAtIndex(v11, v13, v14, &v22) < 0 )
        return 3221225485LL;
      v15 = v22;
      v13 = a3;
      if ( *v22 == a1 )
        break;
LABEL_16:
      if ( ++v14 >= v21[0] )
        goto LABEL_17;
    }
    if ( (int)DrpGetRecord(v11, a3, v22, v23) < 0 )
      return 3221225485LL;
    v16 = v23[0];
    if ( !v23[0] )
      return 3221225485LL;
    switch ( a1 )
    {
      case 1:
        v17 = v13;
        break;
      case 2:
        if ( *((_QWORD *)v15 + 3) + *(_QWORD *)(v23[0] + 8LL) + 4 * *(_DWORD *)(v23[0] + 28LL) + 32 > v13 )
          goto LABEL_15;
        v18 = IntelMicrocodeMetaDataCheck(v23[0], (unsigned int)v15[2]);
LABEL_26:
        if ( v18 < 0 )
          goto LABEL_14;
LABEL_27:
        if ( PatchConfigFound )
        {
          v20 = *((_QWORD *)v15 + 2);
          *a4 = v16;
          *a5 = v20;
          HIDWORD(xmmword_140EF7AF0) = v15[2];
          LOBYTE(qword_140EF7B00) = 1;
          *a6 = HIDWORD(xmmword_140EF7AF0);
          return 0LL;
        }
        v19 = *(_BYTE *)(v16 + 4);
        if ( !SelfhostEnabled )
        {
          if ( v6 < v15[2] )
          {
            v13 = a3;
            if ( !v19 )
            {
              v8 = *((_QWORD *)v15 + 2);
              v7 = v16;
              v6 = v15[2];
              v9 = 0;
            }
            goto LABEL_15;
          }
          goto LABEL_14;
        }
        if ( v7 )
        {
          if ( v9 )
          {
            if ( !v19 || v9 != v19 )
              goto LABEL_14;
          }
          else if ( v19 )
          {
            v8 = *((_QWORD *)v15 + 2);
            v7 = v16;
            v6 = v15[2];
            v9 = *(_BYTE *)(v16 + 4);
          }
          v13 = a3;
          if ( v6 < v15[2] )
          {
            v8 = *((_QWORD *)v15 + 2);
            v7 = v16;
            v6 = v15[2];
            v9 = *(_BYTE *)(v16 + 4);
          }
          goto LABEL_15;
        }
        v8 = *((_QWORD *)v15 + 2);
        v7 = v16;
        v6 = v15[2];
        v9 = *(_BYTE *)(v16 + 4);
LABEL_14:
        v13 = a3;
LABEL_15:
        v11 = a2;
        goto LABEL_16;
      case 13:
        if ( !(unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_14;
        v17 = a3;
        break;
      default:
        if ( (unsigned int)Feature_Microcode_Client_CD__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_14;
        goto LABEL_27;
    }
    if ( (int)AMDMicrocodeRecordSizeCheck(v16, *((_QWORD *)v15 + 3), v17) < 0 )
      goto LABEL_14;
    v18 = AMDMicrocodeMetaDataCheck(v16, (unsigned int)v15[2]);
    goto LABEL_26;
  }
LABEL_17:
  *a4 = v7;
  *a5 = v8;
  *a6 = v6;
  if ( !v7 )
    return 3221226021LL;
  HIDWORD(xmmword_140EF7AF0) = v6;
  return 0LL;
}
