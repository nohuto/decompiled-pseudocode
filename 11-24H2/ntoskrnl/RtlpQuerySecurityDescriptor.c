/*
 * XREFs of RtlpQuerySecurityDescriptor @ 0x140A0ACB8
 * Callers:
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x14077F820 (RtlSelfRelativeToAbsoluteSD2.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall RtlpQuerySecurityDescriptor(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        _QWORD *a4,
        unsigned int *a5,
        _QWORD *a6,
        unsigned int *a7,
        _QWORD *a8,
        unsigned int *a9)
{
  unsigned int v9; // r10d
  __int64 v10; // rax
  unsigned int v11; // eax
  __int16 v12; // ax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edx
  __int16 v17; // ax
  __int64 v18; // rax
  unsigned int *result; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v9 = 0;
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    v21 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v21 )
    {
      *a2 = 0LL;
      goto LABEL_4;
    }
    v10 = a1 + v21;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 8);
  }
  *a2 = v10;
  if ( !v10 )
  {
LABEL_4:
    v11 = 0;
    goto LABEL_5;
  }
  v11 = (4 * *(unsigned __int8 *)(v10 + 1) + 11) & 0xFFFFFFFC;
LABEL_5:
  *a3 = v11;
  v12 = *(_WORD *)(a1 + 2);
  if ( (v12 & 4) == 0 )
  {
LABEL_6:
    *a6 = 0LL;
LABEL_7:
    v13 = 0;
    goto LABEL_12;
  }
  if ( v12 < 0 )
  {
    v22 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v22 )
      goto LABEL_6;
    v14 = a1 + v22;
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 32);
  }
  *a6 = v14;
  if ( !v14 )
    goto LABEL_7;
  v13 = (*(unsigned __int16 *)(v14 + 2) + 3) & 0xFFFFFFFC;
LABEL_12:
  *a7 = v13;
  if ( *(__int16 *)(a1 + 2) < 0 )
  {
    v20 = *(unsigned int *)(a1 + 8);
    if ( !(_DWORD)v20 )
    {
      *a4 = 0LL;
      goto LABEL_15;
    }
    v15 = a1 + v20;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 16);
  }
  *a4 = v15;
  if ( !v15 )
  {
LABEL_15:
    v16 = 0;
    goto LABEL_16;
  }
  v16 = (4 * *(unsigned __int8 *)(v15 + 1) + 11) & 0xFFFFFFFC;
LABEL_16:
  *a5 = v16;
  v17 = *(_WORD *)(a1 + 2);
  if ( (v17 & 0x10) == 0 )
  {
LABEL_17:
    *a8 = 0LL;
    goto LABEL_22;
  }
  if ( v17 < 0 )
  {
    v23 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v23 )
      goto LABEL_17;
    v18 = a1 + v23;
  }
  else
  {
    v18 = *(_QWORD *)(a1 + 24);
  }
  *a8 = v18;
  if ( v18 )
    v9 = (*(unsigned __int16 *)(v18 + 2) + 3) & 0xFFFFFFFC;
LABEL_22:
  result = a9;
  *a9 = v9;
  return result;
}
