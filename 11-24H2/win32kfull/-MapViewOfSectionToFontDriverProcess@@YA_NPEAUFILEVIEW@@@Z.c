/*
 * XREFs of ?MapViewOfSectionToFontDriverProcess@@YA_NPEAUFILEVIEW@@@Z @ 0x1401BC10C
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400B39CC (EngMapFontFileFDInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall MapViewOfSectionToFontDriverProcess(struct FILEVIEW *a1)
{
  __int64 v1; // rdx
  char v3; // di
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  __int128 v10; // [rsp+40h] [rbp-20h]
  __int64 v11; // [rsp+50h] [rbp-10h]
  int v12; // [rsp+58h] [rbp-8h]
  __int64 v13; // [rsp+78h] [rbp+18h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v11 = 0LL;
  v13 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v12 = 5;
  v10 = 0LL;
  v3 = Gre::MapViewOfSectionObj::Map(&v8, v1, 4LL, 0LL, &v13);
  if ( v3 )
  {
    v4 = v8;
    v5 = 5;
    v8 = 0LL;
    v9 = 0LL;
    *((_QWORD *)&v10 + 1) = 0LL;
    *((_QWORD *)a1 + 9) = v4;
    v6 = v10;
    *(_QWORD *)&v10 = 0LL;
    v11 = 0LL;
    v12 = 5;
    *((_QWORD *)a1 + 2) = v6;
  }
  else
  {
    v5 = v12;
  }
  if ( v5 != 5 )
    Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)&v8);
  return v3;
}
