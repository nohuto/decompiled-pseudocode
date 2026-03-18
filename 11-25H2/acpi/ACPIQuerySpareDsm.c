/*
 * XREFs of ACPIQuerySpareDsm @ 0x14009826C
 * Callers:
 *     ACPIModuleGetSpareProperties @ 0x14009F6A0 (ACPIModuleGetSpareProperties.c)
 *     ACPIInternalSetSpare @ 0x1400AD5B4 (ACPIInternalSetSpare.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     AMLIFreeDataBuffs @ 0x140040074 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     ACPIEvaluateSpareDsm @ 0x14009F4B4 (ACPIEvaluateSpareDsm.c)
 */

__int64 __fastcall ACPIQuerySpareDsm(__int64 a1, void *a2)
{
  __int64 *v2; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdi
  int v6; // ebx
  size_t v7; // r8
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  size_t Size[2]; // [rsp+30h] [rbp-28h]
  void *Src; // [rsp+40h] [rbp-18h]

  v2 = *(__int64 **)(a1 + 760);
  Src = 0LL;
  v9 = 0LL;
  *(_OWORD *)Size = 0LL;
  v4 = AMLIGetNamedChild(v2, 1297302623);
  v5 = (__int64)v4;
  if ( v4 )
  {
    v6 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, __int128 *))ACPIEvaluateSpareDsm)(v4, 0LL, 0LL, &v9);
    AMLIDereferenceHandleEx(v5);
    if ( v6 >= 0 )
    {
      if ( WORD1(v9) == 3 && Src )
      {
        v7 = 4LL;
        if ( LODWORD(Size[1]) < 4 )
          v7 = LODWORD(Size[1]);
        memmove(a2, Src, v7);
        v6 = 0;
      }
      else
      {
        v6 = -1073741701;
      }
    }
  }
  else
  {
    v6 = -1073741275;
  }
  AMLIFreeDataBuffs((__int64)&v9);
  return (unsigned int)v6;
}
