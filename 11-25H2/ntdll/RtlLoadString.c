/*
 * XREFs of RtlLoadString @ 0x180002D50
 * Callers:
 *     <none>
 * Callees:
 *     LdrResSearchResource @ 0x180003A20 (LdrResSearchResource.c)
 *     LdrpAccessResourceData @ 0x18001D9D0 (LdrpAccessResourceData.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     RtlLocaleNameToLcid @ 0x18005C210 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlLoadString(
        wchar_t *a1,
        unsigned __int16 a2,
        wchar_t *a3,
        int a4,
        _QWORD *a5,
        _WORD *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // r10d
  __int64 v9; // r15
  unsigned __int16 v11; // bx
  char v12; // si
  int v13; // r8d
  unsigned __int64 v14; // r9
  int v15; // edi
  unsigned __int64 v16; // r9
  __int16 v17; // dx
  unsigned __int64 v19; // [rsp+48h] [rbp-80h] BYREF
  __int64 v20; // [rsp+50h] [rbp-78h] BYREF
  __int64 v21; // [rsp+58h] [rbp-70h] BYREF
  _QWORD *v22; // [rsp+60h] [rbp-68h]
  _WORD *v23; // [rsp+68h] [rbp-60h]
  _QWORD v24[4]; // [rsp+70h] [rbp-58h] BYREF

  v8 = (unsigned int)a3;
  v9 = a2;
  v22 = a5;
  v23 = a6;
  v11 = 0;
  v21 = 0LL;
  v20 = 0LL;
  v12 = a4 & 1;
  if ( !a1 || !a5 || (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  if ( !v12 || !a7 && !a8 )
  {
    if ( (unsigned int)a3 <= 0xFFFF )
      goto LABEL_8;
    if ( *a3 )
    {
      if ( (int)RtlLocaleNameToLcid(a3) < 0 )
        return 3221225485LL;
      v8 = 0;
    }
    else
    {
      v8 = 0;
    }
LABEL_8:
    v24[0] = 6LL;
    v24[1] = ((unsigned int)v9 >> 4) + 1;
    v24[2] = v8;
    v24[3] = v9;
    v19 = 0LL;
    if ( v12 )
    {
      v13 = LdrpSearchResourceSection_U((_DWORD)a1, (unsigned int)v24, 4, 1, (__int64)&v21);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v13 = LdrpAccessResourceData(a1, v21, &v20, 0LL);
      v14 = v19;
    }
    else
    {
      v13 = LdrResSearchResource(a1, v24, (__int64)&v20, (__int64)&v19, a7, a8);
      v14 = v19;
      if ( v13 >= 0 && v19 > 0xFFFF )
        return (unsigned int)-1073741701;
    }
    if ( v13 < 0 || !v20 )
      return (unsigned int)v13;
    v15 = v9 & 0xF;
    v16 = v14 >> 1;
    v19 = v16;
    while ( 1 )
    {
      v17 = *(_WORD *)(v20 + 2LL * v11);
      v11 += v17 + 1;
      if ( !v12 && v11 > v16 )
        break;
      if ( --v15 < 0 )
      {
        if ( v11 && v17 )
          v11 -= v17;
        *v22 = v20 + 2LL * v11;
        if ( v23 )
          *v23 = v17;
        return (unsigned int)v13;
      }
    }
    return (unsigned int)-1073741701;
  }
  return 3221225659LL;
}
