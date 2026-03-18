/*
 * XREFs of ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F9890
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01F9108 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F92C4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F9A50 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA5B8 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0211E90 (xxxClientFreeDDEHandle.c)
 */

unsigned int __fastcall xxxAdviseDataAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int v3; // edi
  bool v5; // zf
  unsigned int v7; // esi
  __int64 v8; // r9
  int v9; // edx
  unsigned int v10; // eax
  __int64 v11; // rdx
  struct tagINTDDEINFO *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *a1 == 996;
  v12 = 0LL;
  if ( !v5 )
    return xxxUnexpectedClientPost(a1, a2, a3);
  v7 = xxxCopyAckIn(a1, a2, a3, &v12);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    return v3;
  v3 = v7;
  if ( v7 != 2 )
    return v3;
  v8 = *((_QWORD *)a3 + 7);
  v9 = *(_DWORD *)(v8 + 64);
  if ( (*(_DWORD *)v12 & 0x8000LL) != 0 )
  {
    v10 = v9 & 0xFFFFFFFE;
    if ( (v9 & 0x400) != 0 )
    {
      FreeListAdd(*((struct tagDDECONV **)a3 + 4), *(void **)(v8 + 48), v10);
      goto LABEL_12;
    }
    v11 = v10;
  }
  else
  {
    v11 = v9 & 0xFFFFFFFE;
  }
  xxxClientFreeDDEHandle(*(_QWORD *)(v8 + 40), v11);
LABEL_12:
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    return 0;
  PopState(a3);
  return 2;
}
