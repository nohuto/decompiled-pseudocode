/*
 * XREFs of MiDereferenceImports @ 0x1407E7990
 * Callers:
 *     MiResolveImageReferences @ 0x140A10E04 (MiResolveImageReferences.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiUnloadApproved @ 0x1407E7E7C (MiUnloadApproved.c)
 *     MiUnloadSystemImage @ 0x140A870C4 (MiUnloadSystemImage.c)
 */

void __fastcall MiDereferenceImports(unsigned __int64 a1)
{
  __int128 *v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rax
  ULONG_PTR v4; // rsi
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != 1 )
  {
    v1 = (__int128 *)a1;
    v5 = 0LL;
    if ( a1 != -2LL )
    {
      if ( (a1 & 1) != 0 )
      {
        *(_QWORD *)&v5 = 1LL;
        *((_QWORD *)&v5 + 1) = a1 & 0xFFFFFFFFFFFFFFFEuLL;
        v1 = &v5;
      }
      v2 = 0;
      if ( *(_QWORD *)v1 )
      {
        v3 = 0LL;
        do
        {
          v4 = *((_QWORD *)v1 + v3 + 1);
          if ( !v4 )
            break;
          if ( (unsigned int)MiUnloadApproved(*((_QWORD *)v1 + v3 + 1)) )
            MiUnloadSystemImage(v4);
          v3 = ++v2;
        }
        while ( (unsigned __int64)v2 < *(_QWORD *)v1 );
      }
    }
  }
}
