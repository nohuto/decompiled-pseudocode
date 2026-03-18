/*
 * XREFs of ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F95E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C01F9108 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F92C4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F9A50 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA680 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxAdviseAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  unsigned int v3; // edi
  bool v5; // zf
  unsigned int result; // eax
  unsigned int v7; // esi
  char v8; // cl
  __int64 v9; // rdx
  struct tagDDECONV *v10; // rcx
  void *v11; // rax
  struct tagINTDDEINFO *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *a1 == 996;
  v12 = 0LL;
  if ( !v5 )
    return xxxUnexpectedServerPost(a1, a2, a3);
  v7 = xxxCopyAckIn(a1, a2, a3, &v12);
  v8 = *(_BYTE *)(_HMPheFromObject(a3) + 25);
  result = 1;
  if ( (v8 & 1) != 0 )
    return v3;
  v3 = v7;
  if ( v7 != 2 )
    return v3;
  if ( (*((_DWORD *)a3 + 20) & 6) == 0 )
  {
    v9 = *((_QWORD *)a3 + 7);
    if ( (*(_DWORD *)v12 & 0x8000LL) != 0 )
    {
      v10 = (struct tagDDECONV *)*((_QWORD *)a3 + 4);
      v11 = *(void **)(v9 + 40);
    }
    else
    {
      v11 = *(void **)(v9 + 48);
      v10 = a3;
    }
    FreeListAdd(v10, v11, *(_DWORD *)(v9 + 64) & 0xFFFFFFFE);
    PopState(a3);
    return 2;
  }
  return result;
}
