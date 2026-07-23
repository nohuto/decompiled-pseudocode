/*
 * XREFs of RtlpComputeMergedAcl2 @ 0x1800C5214
 * Callers:
 *     RtlpComputeMergedAcl @ 0x1800BE824 (RtlpComputeMergedAcl.c)
 * Callees:
 *     RtlpCopyAces @ 0x1800C4840 (RtlpCopyAces.c)
 *     RtlCreateAcl @ 0x1800C5940 (RtlCreateAcl.c)
 */

__int64 __fastcall RtlpComputeMergedAcl2(
        _BYTE *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        int a8,
        ULONG *a9,
        PACL Acl,
        _DWORD *a11)
{
  ULONG *v13; // r12
  PACL v14; // r15
  bool v16; // bp
  char v17; // si
  unsigned int v18; // edi
  _DWORD *v19; // rax
  int v20; // ebx
  int v21; // eax
  int v22; // ecx
  __int64 result; // rax
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  ULONG v27; // ecx
  unsigned int v28[18]; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+D8h] [rbp+20h] BYREF

  v30 = 0;
  v28[0] = 0;
  v13 = a9;
  v14 = Acl;
  v16 = 0;
  v17 = 1;
  v18 = 2;
  RtlCreateAcl(Acl, *a9, 2u);
  v19 = a11;
  *a11 = 1024;
  if ( (a4 & 0x1000) != 0 )
  {
    *v19 = 5120;
    if ( !a3 )
      goto LABEL_23;
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    v24 = RtlpCopyAces((__int64)a3, a7, 2, 16, 1, a5, a6, a5, a6, 1, 0, a8, &v30, (__int64)v14);
    goto LABEL_19;
  }
  if ( (a2 & 0x1000) == 0 )
  {
    v20 = a8;
    v17 = a8 != 1;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v18 = *a3;
      v21 = RtlpCopyAces((__int64)a3, a7, 1, 0, 1, a5, a6, a5, a6, 1, 0, a8, &v30, (__int64)v14);
      v16 = v21 == -1073741789;
      v22 = 0;
      if ( v21 != -1073741789 )
        v22 = v21;
      if ( v22 < 0 )
        return (unsigned int)v22;
      v17 &= -(*((_WORD *)a3 + 2) != 0);
LABEL_10:
      if ( a1 )
      {
        if ( v18 <= (unsigned __int8)*a1 )
          LOBYTE(v18) = *a1;
        result = RtlpCopyAces((__int64)a1, a7, 0, 0, 0, 0LL, 0LL, 0LL, 0LL, 1, 0, v20, v28, (__int64)v14);
        if ( (_DWORD)result == -1073741789 )
        {
          v16 = 1;
        }
        else if ( (int)result < 0 )
        {
          return result;
        }
      }
      goto LABEL_23;
    }
    if ( a8 != 1 )
      goto LABEL_10;
    return 3221225591LL;
  }
  if ( a3 )
  {
    if ( *a3 >= 2u )
      LOBYTE(v18) = *a3;
    v24 = RtlpCopyAces((__int64)a3, a7, 2, 0, 1, a5, a6, a5, a6, 1, 1, a8, &v30, (__int64)v14);
LABEL_19:
    v25 = v24;
    result = 0LL;
    if ( v25 != -1073741789 )
      result = v25;
    if ( (int)result < 0 )
      return result;
    v17 = 0;
    v16 = v25 == -1073741789;
    goto LABEL_23;
  }
  if ( a8 == 1 )
    return 3221225591LL;
LABEL_23:
  v26 = v28[0] + v30;
  if ( v28[0] + v30 || !v17 )
  {
    if ( (unsigned __int64)v26 + 8 > 0xFFFF )
      return 3221225597LL;
    v27 = v26 + 8;
    *v13 = v27;
    if ( v16 )
      return 3221225507LL;
    v14->AclSize = v27;
    v14->AclRevision = v18;
  }
  else
  {
    *v13 = 0;
  }
  return 0LL;
}
