/*
 * XREFs of ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x140095370
 * Callers:
 *     ?GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@PEAI@Z @ 0x1402794F0 (-GetAnonymizedRawDescriptor@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AV-$unique_ptr@$$BY0A@EU.c)
 * Callees:
 *     ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x140095530 (-IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DisplayID_UpdateForTelemetry(struct DisplayIDObj *a1)
{
  BOOL v1; // r9d
  __int64 v2; // r15
  int v3; // eax
  _BYTE *v4; // rdi
  int v5; // ebp
  int v6; // esi
  bool v7; // r13
  char v8; // r12
  bool v9; // cf
  unsigned __int8 *v10; // rbx
  _BYTE *v11; // r14
  size_t v12; // r8
  int v13; // edx
  char v14; // al
  char v15; // al
  bool v16; // zf
  char v17; // al
  int v19; // [rsp+70h] [rbp+8h]
  unsigned int v20; // [rsp+78h] [rbp+10h]
  unsigned __int8 *v21; // [rsp+80h] [rbp+18h] BYREF
  _BYTE *v22; // [rsp+88h] [rbp+20h]

  v1 = 0;
  if ( !a1 )
    return 3221225485LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 3221225485LL;
  v3 = *((_DWORD *)a1 + 5);
  v4 = *(_BYTE **)a1;
  v19 = v3;
  v5 = 0;
  while ( 2 )
  {
    if ( v5 >= v3 )
      return 0LL;
    v6 = (unsigned __int8)v4[1];
    v7 = 1;
    v8 = v6 + 5;
    v9 = v4[1] != 0;
    v22 = &v4[(unsigned __int8)(v6 + 5)];
    v10 = (unsigned __int8 *)((unsigned __int64)(v4 + 4) & -(__int64)v9);
    v11 = v22 - 1;
    while ( (unsigned int)v6 >= 3 )
    {
      v12 = v10[2];
      v20 = v12 + 3;
      if ( v6 < (int)v12 + 3 )
      {
        v7 = v1;
        break;
      }
      v13 = *v10;
      if ( !(_BYTE)v13 )
      {
        v14 = *v4 >> 4;
        if ( v14 == 2 )
          break;
        if ( v14 == 1 && (unsigned __int8 *)(v2 + 4) != v10 )
        {
          v7 = v8 == 127;
          break;
        }
      }
      v15 = *v4 >> 4;
      if ( v15 == 2 )
      {
        if ( v13 == 32 )
        {
          v21 = v10;
          if ( !DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v21) )
            goto LABEL_33;
LABEL_32:
          *((_DWORD *)v10 + 2) = v1;
          goto LABEL_33;
        }
        if ( v13 != 40 )
        {
          if ( v13 == 41 && (_BYTE)v12 == 16 )
            *(_OWORD *)(v10 + 3) = 0LL;
          goto LABEL_33;
        }
        v16 = 1;
        goto LABEL_25;
      }
      if ( v15 != 1 )
        return 3221225659LL;
      if ( !(_BYTE)v13 )
      {
        if ( v6 < 14 )
          goto LABEL_33;
        goto LABEL_32;
      }
      if ( (_BYTE)v13 != 10 )
      {
        v16 = (_BYTE)v13 == 18;
LABEL_25:
        if ( v16 && (_BYTE)v12 == 22 )
          *(_DWORD *)(v10 + 21) = v1;
        goto LABEL_33;
      }
      if ( v6 >= (int)v12 + 4 && (_BYTE)v12 )
      {
        memset(v10 + 4, 0, v12);
        v1 = 0;
      }
LABEL_33:
      v6 -= v20;
      v10 += v20;
    }
    *v11 = v1;
    v17 = v1;
    while ( v4 < v11 )
    {
      v17 += *v4;
      *v11 = v17;
      ++v4;
    }
    *v11 = -v17;
    if ( v7 )
    {
      v4 = v22;
      ++v5;
      v3 = v19;
      continue;
    }
    return 3221225659LL;
  }
}
