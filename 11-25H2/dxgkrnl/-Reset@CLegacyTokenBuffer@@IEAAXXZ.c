/*
 * XREFs of ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x140011024
 * Callers:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1400249B8 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x140025078 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x140056A0C (-Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 */

void __fastcall CLegacyTokenBuffer::Reset(CLegacyTokenBuffer *this)
{
  char *v2; // rdi
  char **v3; // rax
  char **v4; // rcx

  v2 = (char *)this + 16;
  while ( 1 )
  {
    v3 = (char **)*((_QWORD *)v2 + 1);
    if ( *v3 != v2 || (v4 = (char **)v3[1], *v4 != (char *)v3) )
      __fastfail(3u);
    *((_QWORD *)v2 + 1) = v4;
    *v4 = v2;
    if ( v3 == (char **)v2 )
      break;
    if ( v3 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v3);
  }
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 521) = 0;
  *((_QWORD *)this + 262) = (char *)this + 36;
  *((_QWORD *)this + 261) = v2;
  *((_DWORD *)this + 526) = 2048;
  *((_BYTE *)this + 2108) = 0;
}
