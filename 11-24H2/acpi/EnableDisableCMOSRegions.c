/*
 * XREFs of EnableDisableCMOSRegions @ 0x140040CC0
 * Callers:
 *     EnableDisableCMOSRegions @ 0x140040CC0 (EnableDisableCMOSRegions.c)
 *     ACPITableLoad @ 0x14004A4E0 (ACPITableLoad.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     AMLIIsNamedChildPresent @ 0x140029050 (AMLIIsNamedChildPresent.c)
 *     EnableDisableCMOSRegions @ 0x140040CC0 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x140040EE4 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x140040FA0 (AMLIGetFirstChild.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall EnableDisableCMOSRegions(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 i; // rbx
  __int16 v5; // ax
  __int64 v7; // rax
  __int64 *v8; // rbp
  int v9; // r14d
  int v10; // eax
  _QWORD v11[10]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0;
  for ( i = AMLIGetFirstChild(a1); i; i = AMLIIterateSiblingsNext(i) )
  {
    v5 = *(_WORD *)(*(_QWORD *)i + 66LL);
    if ( v5 == 6 )
    {
      LOBYTE(v3) = 1;
      v10 = EnableDisableCMOSRegions(i, v3);
      if ( v10 < 0 )
        v2 = v10;
    }
    else if ( v5 == 10 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)i + 96LL);
      if ( v7 )
      {
        if ( *(_BYTE *)(v7 + 12) == 5 && AMLIIsNamedChildPresent(a1, 1145653343) )
        {
          v8 = AMLIGetNamedChild(a1, 1195725407);
          if ( v8 )
          {
            memset(v11, 0, sizeof(v11));
            WORD1(v11[0]) = 1;
            v11[2] = 5LL;
            WORD1(v11[5]) = 1;
            v11[7] = 1LL;
            v9 = AMLIAsyncEvalObject(v8, 0LL, 2, (__int64)v11, 0LL, 0LL);
            AMLIDereferenceHandleEx((__int64)v8);
            if ( v9 < 0 )
              v2 = v9;
          }
        }
      }
    }
  }
  return v2;
}
