/*
 * XREFs of RtlApplyImportRelocationToPage @ 0x14043AAF0
 * Callers:
 *     MiUpdateRetpolineImportFixups @ 0x14043A800 (MiUpdateRetpolineImportFixups.c)
 *     MiApplyDynamicRelocationFixups @ 0x14043A8FC (MiApplyDynamicRelocationFixups.c)
 * Callees:
 *     RtlpConstructImportRelocationFixup @ 0x14043ABCC (RtlpConstructImportRelocationFixup.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall RtlApplyImportRelocationToPage(
        unsigned __int64 a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8)
{
  unsigned int v10; // esi
  int v11; // ebx
  int v12; // eax
  _BYTE *v13; // rdx
  _BYTE *v14; // rcx
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+48h] [rbp-40h]
  __int16 v18; // [rsp+4Ch] [rbp-3Ch]

  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  v10 = 0;
  v11 = a2 + (*a5 & 0xFFF) - 4096;
  if ( !a7 )
    v11 = a2 + (*a5 & 0xFFF);
  LOBYTE(v12) = RtlpConstructImportRelocationFixup(v11, a3, a4, (_DWORD)a5, a6, a8, (__int64)&v16);
  v13 = (char *)&v16 + 2;
  v14 = (_BYTE *)(a1 + v11 - a2);
  do
  {
    if ( (unsigned __int64)v14 >= a1 )
    {
      if ( (unsigned __int64)v14 >= a1 + 4096 )
        return v12;
      v12 = (unsigned __int16)v16;
      if ( _bittest(&v12, v10) )
      {
        LOBYTE(v12) = *v13;
        *v14 = *v13;
      }
    }
    ++v10;
    ++v14;
    ++v13;
  }
  while ( v10 < 0xC );
  return v12;
}
