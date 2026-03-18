/*
 * XREFs of _lambda_e7288af00cdd6f7af065feb83fd33220_::operator() @ 0x140125DF8
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd33220___ @ 0x140125D7C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e7288af00cdd6f7af065feb83fd3322.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e7288af00cdd6f7af065feb83fd33220_::operator()(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx

  v2 = *a1;
  *a2 = 241;
  a2[1] = *(_DWORD *)(v2 + 32);
  result = 0LL;
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 && (v5 = *(_QWORD *)(v4 + 16)) != 0 )
    v6 = *(_DWORD *)(v5 + 32);
  else
    v6 = 0;
  a2[2] = v6;
  v7 = *(_QWORD *)(v2 + 72);
  if ( v7 && (v8 = *(_QWORD *)(v7 + 16)) != 0 )
    v9 = *(_DWORD *)(v8 + 32);
  else
    v9 = 0;
  a2[3] = v9;
  v10 = *(_QWORD *)(v2 + 80);
  if ( v10 && (v11 = *(_QWORD *)(v10 + 16)) != 0 )
    v12 = *(_DWORD *)(v11 + 32);
  else
    v12 = 0;
  a2[4] = v12;
  v13 = *(_QWORD *)(v2 + 88);
  if ( v13 && (v14 = *(_QWORD *)(v13 + 16)) != 0 )
    v15 = *(_DWORD *)(v14 + 32);
  else
    v15 = 0;
  a2[5] = v15;
  v16 = *(_QWORD *)(v2 + 96);
  if ( v16 )
  {
    v17 = *(_QWORD *)(v16 + 16);
    if ( v17 )
      result = *(unsigned int *)(v17 + 32);
  }
  a2[6] = result;
  return result;
}
