/*
 * XREFs of CmpFindDrivers @ 0x140C4D668
 * Callers:
 *     CmGetSystemDriverList @ 0x140C64DD4 (CmGetSystemDriverList.c)
 * Callees:
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpFindSubKeyByNumber @ 0x140888160 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpAddDriverToList @ 0x140C4CE04 (CmpAddDriverToList.c)
 *     CmpFindGroupOrderList @ 0x140C4D95C (CmpFindGroupOrderList.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140C4DB2C (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpIsLoadType @ 0x140C4E2A4 (CmpIsLoadType.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140C4E860 (CmpLoadManufacturingProfileServicesNode.c)
 *     CmpLoadServicesNode @ 0x140C4E920 (CmpLoadServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const UNICODE_STRING *a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  ULONG_PTR v13; // rsi
  __int64 v14; // r15
  int GroupOrderList; // r13d
  __int64 *v16; // r14
  unsigned int v17; // edi
  unsigned int v18; // r12d
  const UNICODE_STRING *v19; // r12
  __int64 v20; // r14
  const UNICODE_STRING *v21; // rdi
  int v22; // r14d
  unsigned int v23; // r12d
  unsigned int v24; // r13d
  ULONG_PTR v25; // rcx
  PCUNICODE_STRING Source; // [rsp+20h] [rbp-60h]
  __int64 v28; // [rsp+38h] [rbp-48h]
  __int64 v29; // [rsp+40h] [rbp-40h]
  __int64 v30; // [rsp+48h] [rbp-38h]
  unsigned int v31[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v32; // [rsp+58h] [rbp-28h]
  __int64 v33; // [rsp+60h] [rbp-20h] BYREF
  __int64 v34; // [rsp+68h] [rbp-18h] BYREF
  _DWORD *v35; // [rsp+70h] [rbp-10h]
  _DWORD *v36; // [rsp+78h] [rbp-8h]

  a6 = 0;
  a7 = 0xFFFFFFFFLL;
  a10 = 0xFFFFFFFFLL;
  a12 = 0xFFFFFFFFLL;
  v31[0] = -1;
  v36 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v31[1] = 0;
  if ( !(unsigned __int8)CmpLoadServicesNode(BugCheckParameter3) )
    return 0;
  v13 = 0LL;
  v32 = 0LL;
  v14 = 0LL;
  if ( a11 && (unsigned __int8)CmpLoadManufacturingProfileServicesNode(BugCheckParameter3, (__int64)&a10) )
  {
    v14 = v32;
    v13 = BugCheckParameter3;
  }
  if ( (unsigned __int8)CmpFindRedirectedDriverServiceStateNode(
                          BugCheckParameter3,
                          (__int64)&v33,
                          (__int64)&v34,
                          (__int64)&a12) )
  {
    v32 = v33;
  }
  else
  {
    v32 = 0LL;
    v34 = 0LL;
  }
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3);
  if ( GroupOrderList == -1 )
    return 0;
  v16 = a9;
  v17 = 0;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v35, v17, (int *)&a6);
    v18 = a6;
    ++v17;
    if ( a6 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, (__int64)Source, v13, v14, v28, v29, v30) )
      CmpAddDriverToList(BugCheckParameter3, v18, BugCheckParameter3, GroupOrderList, &CmpSystemHiveName, v16, 0);
  }
  v19 = a5;
  v20 = v32;
  if ( a5 )
  {
    v21 = *(const UNICODE_STRING **)&a5->Length;
    if ( *(const UNICODE_STRING **)&a5->Length != a5 )
    {
      v22 = GroupOrderList;
      do
      {
        if ( (unsigned __int8)CmpLoadServicesNode(*(_QWORD *)&v21[2].Length) )
        {
          v23 = 0;
          while ( 1 )
          {
            CmpFindSubKeyByNumber(*(_QWORD *)&v21[2].Length, v36, v23, (int *)&a6);
            v24 = a6;
            ++v23;
            v25 = *(_QWORD *)&v21[2].Length;
            if ( a6 == -1 )
              break;
            if ( (unsigned __int8)CmpIsLoadType(v25, (__int64)Source, v13, v14, v28, v29, v30) )
              CmpAddDriverToList(*(_QWORD *)&v21[2].Length, v24, BugCheckParameter3, v22, v21 + 1, a9, 0);
          }
          v19 = a5;
          if ( (*(_BYTE *)(v25 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v25, (__int64)&a7);
          else
            HvpReleaseCellPaged(v25, (unsigned int *)&a7);
        }
        v21 = *(const UNICODE_STRING **)&v21->Length;
      }
      while ( v21 != v19 );
      v20 = v32;
    }
  }
  if ( v20 && v34 )
  {
    if ( (*(_BYTE *)(v20 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v20, (__int64)&a12);
    else
      HvpReleaseCellPaged(v20, (unsigned int *)&a12);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v31);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v31);
  return 1;
}
