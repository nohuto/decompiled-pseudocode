/*
 * XREFs of SdbGetDatabaseMatch @ 0x140A75B28
 * Callers:
 *     PiIsDriverBlocked @ 0x1409ADF08 (PiIsDriverBlocked.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SdbpCreateSearchDBContext @ 0x1407F4460 (SdbpCreateSearchDBContext.c)
 *     SdbTagIDToTagRef @ 0x1407F610C (SdbTagIDToTagRef.c)
 *     AslFileMappingCreateFromImageView @ 0x1407F949C (AslFileMappingCreateFromImageView.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslFileMappingDelete @ 0x14082ADE8 (AslFileMappingDelete.c)
 *     SdbpSearchDB @ 0x140A0B1E4 (SdbpSearchDB.c)
 *     AslFileMappingCreate @ 0x140A75D30 (AslFileMappingCreate.c)
 *     SdbpReleaseSearchDBContext @ 0x140AB0898 (SdbpReleaseSearchDBContext.c)
 */

__int64 __fastcall SdbGetDatabaseMatch(__int64 a1, _WORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v8; // eax
  __int16 v9; // r8
  _RTL_RUN_ONCE *v10; // rdi
  unsigned int v11; // eax
  __int64 i; // rbx
  int v14; // [rsp+28h] [rbp-D8h]
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  const wchar_t **v16; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v17[14]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v18[32]; // [rsp+B0h] [rbp-50h] BYREF

  memset_0((char *)v17 + 4, 0, 0x64uLL);
  memset_0(v18, 0, sizeof(v18));
  v16 = 0LL;
  v8 = 10;
  v15 = 0;
  if ( a4 )
    v8 = 26;
  LODWORD(v17[0]) = v8;
  if ( (int)AslFileMappingCreate((unsigned int)&v16, (_DWORD)a2, -1, a4, a5) < 0
    && (!a4 || (int)AslFileMappingCreateFromImageView((__int64 *)&v16, a2, a4, a5) < 0) )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_21;
  }
  if ( !(unsigned int)SdbpCreateSearchDBContext(v17, v16) )
  {
LABEL_20:
    AslLogCallPrintf(1LL);
    goto LABEL_21;
  }
  v10 = *(_RTL_RUN_ONCE **)(a1 + 16);
  if ( !v10 )
  {
LABEL_12:
    v10 = *(_RTL_RUN_ONCE **)(a1 + 8);
    v11 = SdbpSearchDB(a1, v10, v9, (__int64)v17, v18, v14);
    if ( v11 <= 0x10 )
    {
      if ( !v11 )
        goto LABEL_21;
      goto LABEL_15;
    }
    goto LABEL_13;
  }
  v11 = SdbpSearchDB(a1, *(_RTL_RUN_ONCE **)(a1 + 16), v9, (__int64)v17, v18, v14);
  if ( v11 <= 0x10 )
  {
    if ( v11 )
      goto LABEL_15;
    goto LABEL_12;
  }
LABEL_13:
  AslLogCallPrintf(1LL);
  v11 = 16;
LABEL_15:
  for ( i = (int)(v11 - 1); i >= 0; --i )
  {
    if ( (v18[2 * i + 1] & 2) == 0
      && !(unsigned int)SdbTagIDToTagRef(a1, (__int64)v10, (unsigned int)v18[2 * i], (int *)&v15) )
    {
      goto LABEL_20;
    }
  }
LABEL_21:
  SdbpReleaseSearchDBContext(v17);
  AslFileMappingDelete((__int64)v16);
  return v15;
}
