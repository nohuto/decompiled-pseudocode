/*
 * XREFs of CmpLogHiveRundownEvent @ 0x1407D69FC
 * Callers:
 *     CmEtwRunDown @ 0x140A6836C (CmEtwRunDown.c)
 * Callees:
 *     EtwTraceSiloDcEvent @ 0x14047AF60 (EtwTraceSiloDcEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

int __fastcall CmpLogHiveRundownEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r9
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  _WORD v14[8]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v15; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v16[6]; // [rsp+48h] [rbp-21h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  __int64 v19; // [rsp+D0h] [rbp+67h] BYREF

  v19 = a1;
  v14[0] = 0;
  v4 = *(_QWORD *)(a1 + 1848);
  v6 = *(_QWORD *)(a1 + 1864);
  v15 = a1 + 1800;
  v16[1] = &v19;
  v16[3] = a1 + 4764;
  v7 = 3;
  v16[0] = 8LL;
  v16[2] = 8LL;
  v16[4] = 4LL;
  if ( v4 )
  {
    v7 = 4;
    v17 = *(unsigned __int16 *)(a1 + 1840);
    v16[5] = v4;
    v18 = 0;
  }
  v8 = 2LL * v7;
  v9 = v7 + 1;
  v16[v8 - 1] = v14;
  v16[v8] = 2LL;
  if ( v6 )
  {
    v10 = *(unsigned __int16 *)(a1 + 1856);
    v11 = 2LL * v9++;
    v16[v11 - 1] = v6;
    LODWORD(v16[v11]) = v10;
    HIDWORD(v16[v11]) = 0;
  }
  v12 = 2LL * v9;
  v16[v12 - 1] = v14;
  v16[v12] = 2LL;
  return EtwTraceSiloDcEvent((__int64)&v15, v9 + 1, a2, a3, 2343, 0x501802u);
}
