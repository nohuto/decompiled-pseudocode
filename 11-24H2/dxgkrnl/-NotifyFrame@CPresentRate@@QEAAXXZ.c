/*
 * XREFs of ?NotifyFrame@CPresentRate@@QEAAXXZ @ 0x14005F628
 * Callers:
 *     ?UpdatePresentRate@CCompositionSurface@@IEAAXXZ @ 0x14001E498 (-UpdatePresentRate@CCompositionSurface@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPresentRate::NotifyFrame(CPresentRate *this)
{
  CPresentRate *v1; // rdx
  unsigned __int64 v2; // r8
  unsigned int v3; // r10d
  unsigned int v4; // r9d

  v1 = 0LL;
  v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)this;
    if ( *(_DWORD *)this )
    {
      if ( (unsigned int)v2 >= v4 && (unsigned int)v2 - v4 <= 0x3E8 )
        break;
    }
    if ( !v1 || v4 < *(_DWORD *)v1 )
      v1 = this;
    ++v3;
    this = (CPresentRate *)((char *)this + 8);
    if ( v3 >= 5 )
    {
      *(_DWORD *)v1 = v2;
      *((_DWORD *)v1 + 1) = 1;
      return;
    }
  }
  ++*((_DWORD *)this + 1);
}
