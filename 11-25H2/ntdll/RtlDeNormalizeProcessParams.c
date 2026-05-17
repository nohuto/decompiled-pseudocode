/*
 * XREFs of RtlDeNormalizeProcessParams @ 0x180121690
 * Callers:
 *     RtlCreateProcessParametersInternal @ 0x1800E5B00 (RtlCreateProcessParametersInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDeNormalizeProcessParams(__int64 a1)
{
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( !a1 )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 8);
  if ( (v2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 )
      *(_QWORD *)(a1 + 64) = v3 - a1;
    v4 = *(_QWORD *)(a1 + 88);
    if ( v4 )
      *(_QWORD *)(a1 + 88) = v4 - a1;
    v5 = *(_QWORD *)(a1 + 104);
    if ( v5 )
      *(_QWORD *)(a1 + 104) = v5 - a1;
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 )
      *(_QWORD *)(a1 + 120) = v6 - a1;
    v7 = *(_QWORD *)(a1 + 184);
    if ( v7 )
      *(_QWORD *)(a1 + 184) = v7 - a1;
    v8 = *(_QWORD *)(a1 + 200);
    if ( v8 )
      *(_QWORD *)(a1 + 200) = v8 - a1;
    v9 = *(_QWORD *)(a1 + 216);
    if ( v9 )
      *(_QWORD *)(a1 + 216) = v9 - a1;
    v10 = *(_QWORD *)(a1 + 232);
    if ( v10 )
      *(_QWORD *)(a1 + 232) = v10 - a1;
    v11 = *(_QWORD *)(a1 + 1048);
    if ( v11 )
      *(_QWORD *)(a1 + 1048) = v11 - a1;
    *(_DWORD *)(a1 + 8) = v2 & 0xFFFFFFFE;
  }
  return a1;
}
