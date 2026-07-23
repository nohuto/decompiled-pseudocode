/*
 * XREFs of RtlpHpTagRunOnceInit @ 0x18010D670
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 */

_BOOL8 __fastcall RtlpHpTagRunOnceInit(PRTL_RUN_ONCE a1, _OWORD *a2, PVOID *a3)
{
  int v4; // ebx
  char *v5; // rdi
  unsigned __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  *a2 = 0LL;
  a2[1] = 0LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v8 = RtlpHpEnvHandle;
  v4 = 0;
  v5 = (char *)RtlpHpMetadataAlloc(0x200uLL, 0x200uLL, 0, &v8);
  if ( v5 )
  {
    v8 = RtlpHpEnvHandle;
    v6 = RtlpHpMetadataAlloc(0x2000uLL, 0x2000uLL, 1, &v8);
    if ( v6 )
    {
      *((_QWORD *)a2 + 3) = v6;
      *(_QWORD *)a2 = 0LL;
      *((_DWORD *)a2 + 2) = 0;
      *((_QWORD *)a2 + 2) = v5;
      *((_DWORD *)a2 + 3) = 2048;
      if ( (v5 + 512 >= v5 ? 0x40 : 0) != 0 )
        memset64(v5, ((unsigned __int64)a2 + 8) | 1, v5 + 512 >= v5 ? 0x40 : 0);
    }
    else
    {
      v4 = -1073741801;
      v8 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((unsigned __int64)v5, &v8);
    }
  }
  else
  {
    v4 = -1073741801;
  }
  return v4 >= 0;
}
