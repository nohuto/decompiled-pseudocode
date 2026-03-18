/*
 * XREFs of ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x14019D770
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1400D2508 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vOrderStupid(BLTRECORD *this, struct ERECTL *a2)
{
  int v2; // r8d
  int v3; // eax
  int v4; // r8d
  int v5; // eax

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 2);
  if ( *(_DWORD *)a2 > v3 )
  {
    *(_DWORD *)a2 = v3 + 1;
    *((_DWORD *)a2 + 2) = v2 + 1;
    *((_DWORD *)this + 49) ^= 8u;
  }
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 3);
  if ( v4 > v5 )
  {
    *((_DWORD *)a2 + 1) = v5 + 1;
    *((_DWORD *)a2 + 3) = v4 + 1;
    *((_DWORD *)this + 49) ^= 0x10u;
  }
}
