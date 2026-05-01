/*
 * XREFs of RmpActivityImportanceMergeVectors @ 0x180028280
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180029420 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpActivityImportanceMergeVectors(unsigned int a1, unsigned int a2)
{
  __int16 v2; // bp
  __int16 v3; // di
  __int16 v4; // si
  __int16 v5; // r11
  __int16 v6; // bp
  __int16 v7; // bp
  __int16 v8; // r8
  __int16 v9; // bp
  __int16 v10; // ax
  __int16 v11; // bp
  __int16 v12; // ax
  __int16 v13; // bp
  __int16 v14; // ax
  __int16 v15; // bp
  __int16 v16; // bp
  __int16 v17; // ax
  char v19; // al
  unsigned int v20; // [rsp+10h] [rbp+8h]

  if ( (a1 & 1) == 0 )
    return a2;
  if ( (a2 & 1) == 0 )
    return a1;
  v2 = (unsigned __int16)a1 >> 11;
  v3 = (unsigned __int16)a1 >> 1;
  v4 = a1 | a2;
  v5 = (unsigned __int16)a1 >> 4;
  if ( (unsigned __int8)((a1 & 0x800) != 0) >= (unsigned __int8)((a2 & 0x800) != 0) )
    v2 = (unsigned __int16)a2 >> 11;
  v6 = (v2 & 1) << 7;
  if ( (unsigned __int8)(((unsigned __int16)a1 >> 4) & 3) <= (unsigned __int8)(((unsigned __int16)a2 >> 4) & 3) )
    v5 = (unsigned __int16)a2 >> 4;
  v7 = 8 * (v5 & 3 | v6);
  v8 = 0;
  if ( (unsigned __int8)(v3 & 7) <= (unsigned __int8)(((unsigned __int16)a2 >> 1) & 7) )
    v3 = (unsigned __int16)a2 >> 1;
  v9 = 2 * (v3 & 7 | v7);
  v10 = 0;
  if ( (v4 & 0x400) != 0 )
    v10 = 1024;
  v11 = v10 | v9;
  v12 = 0;
  if ( (v4 & 0x200) != 0 )
    v12 = 512;
  v13 = v12 | v11;
  v14 = 0;
  if ( (v4 & 0x100) != 0 )
    v14 = 256;
  v15 = v14 | v13;
  if ( (v4 & 0x80) != 0 )
    v8 = 128;
  v16 = v8 | v15;
  v17 = 1;
  if ( (v4 & 0x40) != 0 )
    v17 = 65;
  LOWORD(v20) = v17 | v16;
  if ( HIBYTE(a1) > HIBYTE(a2) )
  {
    BYTE2(v20) = BYTE2(a1);
    HIBYTE(v20) = HIBYTE(a1);
    return v20;
  }
  if ( HIBYTE(a1) >= HIBYTE(a2) )
  {
    HIBYTE(v20) = HIBYTE(a1);
    v19 = BYTE2(a2);
    if ( BYTE2(a1) > BYTE2(a2) )
      v19 = BYTE2(a1);
    BYTE2(v20) = v19;
    return v20;
  }
  BYTE2(v20) = BYTE2(a2);
  HIBYTE(v20) = HIBYTE(a2);
  return v20;
}
